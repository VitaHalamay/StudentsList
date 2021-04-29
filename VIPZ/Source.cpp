using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Header.h"
struct SList *pFirstItem = nullptr;

// Зчитує дані про студента з файла
void ReadStudentsFromFile() {
	FILE *pFilePointer = fopen("List.txt", "r");
	int nYear, nMonth, nDay;
	struct SList *pCurrentItem = (struct SList *) malloc(sizeof(struct SList));
	pFirstItem = pCurrentItem;
	while (1) {
		fscanf(pFilePointer, "%s %s", pCurrentItem->sStudent.cLastName, pCurrentItem->sStudent.cFirstName);

		fscanf(pFilePointer, "%d.%d.%d", &nDay, &nMonth, &nYear);
		pCurrentItem->sStudent.sBirthday.tm_mday = nDay;
		pCurrentItem->sStudent.sBirthday.tm_mon = nMonth;
		pCurrentItem->sStudent.sBirthday.tm_year = nYear;

		fscanf(pFilePointer, "%d %d %d", &pCurrentItem->sStudent.nMarks[0], &pCurrentItem->sStudent.nMarks[1],
			&pCurrentItem->sStudent.nMarks[2]);
		pCurrentItem->sStudent.fMarksAvg = (pCurrentItem->sStudent.nMarks[0] + pCurrentItem->sStudent.nMarks[1] +
			pCurrentItem->sStudent.nMarks[2]) / 3.0;
		pCurrentItem->pNext = nullptr;

		if (getc(pFilePointer) == EOF) {
			break;
		}
		else {

			struct SList *pNextItem = (struct SList *) malloc(sizeof(struct SList));
			pNextItem->pNext = nullptr;
			pCurrentItem->pNext = pNextItem;
			pCurrentItem = pNextItem;

			int i = 8;
		}
	}
	fclose(pFilePointer);
}

//-------------------------------------------------------------------

// Визначає кількість студентів у списку
// Повертає кількість студентів у списку
int GetStudentsCount() {
	struct SList *pCurrentItem = pFirstItem;
	int nCount = 0;
	while (pCurrentItem != nullptr) {//->pNext
		pCurrentItem = pCurrentItem->pNext;
		nCount++;
	}
	return nCount;
}

//-------------------------------------------------------------------

// Визначає суму середніх балів усіх студентів
// Повертає суму середніх балів студентів
float GetSumAvg() {
	struct SList *pCurrentItem = pFirstItem;
	float fSumAvg = 0;
	while (pCurrentItem->pNext != NULL) {
		fSumAvg += pCurrentItem->sStudent.fMarksAvg;
		pCurrentItem = pCurrentItem->pNext;
	}
	return fSumAvg;
}

//-------------------------------------------------------------------

//-------------------------------------------------------------------

//using namespace System::Windows::Forms;
void PrintTableForms(DataGridView^ dgv) {
	struct SList *pCurrentItem = pFirstItem;
	dgv->RowCount = GetStudentsCount();
	int i = 0;
	while (pCurrentItem != nullptr) {//->pNext
		dgv->Rows[i]->Cells[0]->Value = i + 1;
		String^ sCertificate;
		//sCertificate = 
		
		dgv->Rows[i]->Cells[1]->Value = gcnew String(pCurrentItem->sStudent.cFirstName);
		dgv->Rows[i]->Cells[2]->Value = gcnew String(pCurrentItem->sStudent.cLastName);
		dgv->Rows[i]->Cells[3]->Value = (pCurrentItem->sStudent.sBirthday.tm_mday) + "."
			+ (pCurrentItem->sStudent.sBirthday.tm_mon) + "."
			+ (pCurrentItem->sStudent.sBirthday.tm_mday);
		dgv->Rows[i]->Cells[4]->Value = pCurrentItem->sStudent.nMarks[0];
		dgv->Rows[i]->Cells[5]->Value = pCurrentItem->sStudent.nMarks[1];
		dgv->Rows[i]->Cells[6]->Value = pCurrentItem->sStudent.nMarks[2];
		pCurrentItem = pCurrentItem->pNext;
		i++;
	}
}
//temp = pFirstItem;
//for (int i = 0; i < nListVolume; i++) {
//	string strtemp = " ";
	//strtemp+=
//}


// Порівнює дату народження двох студентів
// Повертає 1, якщо перша дата менша за другу
int CompareBirthday(struct tm sFirstBirthday, struct tm sSecondBirthday) {
	if (sFirstBirthday.tm_year < sSecondBirthday.tm_year) {
		return 1;
	}
	if (sFirstBirthday.tm_year == sSecondBirthday.tm_year) {
		if (sFirstBirthday.tm_mon < sSecondBirthday.tm_mon) {
			return 1;
		}
		if (sFirstBirthday.tm_mon == sSecondBirthday.tm_mon) {
			if (sFirstBirthday.tm_mday < sSecondBirthday.tm_mday) {
				return 1;
			}
		}
	}
}

//-------------------------------------------------------------------

// Міняє місцями студентів
void Swap(struct SList *pCurrentItem) {
	struct SList *pItem2 = pCurrentItem->pNext;
	struct SList *pItem3 = pCurrentItem->pNext->pNext;
	struct SList *pItem4 = pCurrentItem->pNext->pNext->pNext;

	pCurrentItem->pNext->pNext->pNext = pItem2;
	pCurrentItem->pNext->pNext = pItem4;
	pCurrentItem->pNext = pItem3;
}

//-------------------------------------------------------------------

// Міняє місцями першого студента
void SwapFirstItem() {
	struct SList *pItem1 = pFirstItem;
	struct SList *pItem2 = pFirstItem->pNext;

	pFirstItem = pItem2;
	pItem1->pNext = pItem2->pNext;
	pItem2->pNext = pItem1;
}

//-------------------------------------------------------------------

// Сортує студентів за віком по зростанню
void OrderByBirthdayAscending() {
	struct SList *pCurrentItem = pFirstItem;
	while (1) {
		int nIsSorted = 1;
		while (1) {
			if (pCurrentItem->pNext->pNext == NULL) {
				break;
			}
			// order first item
			if (pFirstItem == pCurrentItem
				&& CompareBirthday(pCurrentItem->sStudent.sBirthday, pCurrentItem->pNext->sStudent.sBirthday) == 1) {
				//SwapFirstItem(pCurrentItem);
				SwapFirstItem();
				nIsSorted = 0;
			}
			// order last items
			if (CompareBirthday(pCurrentItem->pNext->sStudent.sBirthday,
				pCurrentItem->pNext->pNext->sStudent.sBirthday) == 1) {
				Swap(pCurrentItem);
				nIsSorted = 0;
			}
			pCurrentItem = pCurrentItem->pNext;
		}
		if (nIsSorted) {
			break;
		}
		pCurrentItem = pFirstItem;
	}
}


//-------------------------------------------------------------------

// Вставляє студента у список
void InsertStudent(struct SStudent sStudentToInsert) {
	// InsertStudent to the top
	if (CompareBirthday(pFirstItem->sStudent.sBirthday, sStudentToInsert.sBirthday) == 1) {
		struct SList *pItemToInsert = (struct SList *) malloc(sizeof(struct SList));
		pItemToInsert->sStudent = sStudentToInsert;
		pItemToInsert->pNext = pFirstItem;
		pFirstItem = pItemToInsert;
		return;
	}
	// InsertStudent to the middle of linked list
	struct SList *pCurrentItem = pFirstItem;
	while (pCurrentItem->pNext != NULL) {
		if (CompareBirthday(pCurrentItem->pNext->sStudent.sBirthday, sStudentToInsert.sBirthday) == 1) {
			struct SList *pItemToInsert = (struct SList *) malloc(sizeof(struct SList));
			pItemToInsert->sStudent = sStudentToInsert;
			pItemToInsert->pNext = pCurrentItem->pNext;
			pCurrentItem->pNext = pItemToInsert;
			break;
		}
		pCurrentItem = pCurrentItem->pNext;
	}
	// InsertStudent to the end
	if (pCurrentItem->pNext == NULL
		&& CompareBirthday(sStudentToInsert.sBirthday, pCurrentItem->sStudent.sBirthday) == 1) {
		struct SList *pItemToInsert = (struct SList *) malloc(sizeof(struct SList));
		pItemToInsert->sStudent = sStudentToInsert;
		pCurrentItem->pNext = pItemToInsert;
		return;
	}
}

//-------------------------------------------------------------------

// Видаляє студентів, у яких немає жодної оцінки 5
void DeleteStudentWithout5() {
	struct SList *pCurrentItem = pFirstItem;
	while (1) {
		int nMoveNext = 1;
		if (pCurrentItem == pFirstItem
			&& pCurrentItem->sStudent.nMarks[0] != 5
			&& pCurrentItem->sStudent.nMarks[1] != 5
			&& pCurrentItem->sStudent.nMarks[2] != 5) {
			pCurrentItem = pCurrentItem->pNext;
			free(pFirstItem);
			pFirstItem = pCurrentItem;
			nMoveNext = 0;
		}
		if (pCurrentItem->pNext != NULL
			&& pCurrentItem->pNext->sStudent.nMarks[0] != 5
			&& pCurrentItem->pNext->sStudent.nMarks[1] != 5
			&& pCurrentItem->pNext->sStudent.nMarks[2] != 5) {
			free(pCurrentItem->pNext);
			pCurrentItem->pNext = pCurrentItem->pNext->pNext;
			nMoveNext = 0;
		}
		if (pCurrentItem->pNext == NULL) {
			break;
		}
		if (nMoveNext == 1) {
			pCurrentItem = pCurrentItem->pNext;
		}
	}
}

//-------------------------------------------------------------------

//Виводить таблицю з даними про студентів у файл
//Приймає опис для таблиці,0 для виводу без урахування середнього балу або 1 - у зворотньому випадку,вказівник на файл
void PrintTableInFile(char *cTitle, int nIgnoreGroupAvgCondition, FILE *pFile) {
	fprintf(pFile, "\n%s\n", cTitle);
	fprintf(pFile, "_______________________________________________________________\n");
	fprintf(pFile, "  Last Name       | First Name| Marks        | Date of birth    \n");
	fprintf(pFile, "__________________|___________|______________|_________________\n");

	float nGroupAvg = GetSumAvg() / GetStudentsCount();
	struct SList *pCurrentItem = pFirstItem;
	while (1) {
		if (nIgnoreGroupAvgCondition == 1 || nGroupAvg > pCurrentItem->sStudent.fMarksAvg) {
			PrintRowInFile(pCurrentItem->sStudent, pFile);
		}
		if (pCurrentItem->pNext == NULL) {
			break;
		}
		pCurrentItem = pCurrentItem->pNext;
	}

}

//-------------------------------------------------------------------

//Виводить рядок з даними студента у файл
// Приймає студента і вказівник на файл
void PrintRowInFile(struct SStudent sCurrentStudent, FILE *pFile) {
	fprintf(pFile, "%18s| %10s| ", sCurrentStudent.cLastName, sCurrentStudent.cFirstName);
	fprintf(pFile, "%7d %2d %2d|", sCurrentStudent.nMarks[0], sCurrentStudent.nMarks[1], sCurrentStudent.nMarks[2]);
	char cDate[12];
	strftime(cDate, 11, "%d.%m.%Y", &sCurrentStudent.sBirthday);
	fprintf(pFile, " %s \n", cDate);
	fprintf(pFile, "__________________|___________|______________|_________________\n");
}
using namespace std;
/*
String^ toString(struct tm date) {
	//return"hello";
	return "d";
	//return to_string(date.tm_mday) + "."+ to_string(date.tm_mon)+"."+ to_string(date.tm_mday);
}
*/
