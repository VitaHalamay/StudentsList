#pragma once
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string

#include <stdio.h>
#include <time.h>

#include <stdlib.h>
#ifndef LAB8_REALISATION_H
#define LAB8_REALISATION_H

//????????? ????? ??? ????? ??????? ????????
struct SStudent {

	char cLastName[20];
	char cFirstName[20];
	int nMarks[3];
	float fMarksAvg;
	struct tm sBirthday;
};

//????????? ????? ??????'????? ??????
struct SList {
	struct SStudent sStudent;
	struct SList *pNext;
};
//String^ toString(struct tm date);
void PrintTableForms(System::Windows::Forms::DataGridView^ dgv, int nIgnoreGroupAvgCondition);

void ReadStudentsFromFile();

int CompareBirthday(struct tm sFirstBirthday, struct tm sSecondBirthday);

void Swap(struct SList *pCurrentItem);

void SwapFirstItem();

void OrderByBirthdayAscending();

void InsertStudent(struct SStudent sStudentToInsert);

void DeleteStudentWithout5();

int GetStudentsCount();

float GetSumAvg();

void PrintRowInFile(struct SStudent sCurrentStudent, FILE *pFile);

void PrintTableInFile(char *cTitle, int nIgnoreGroupAvgCondition, FILE *pFile);
void toCharArray(char charArray[20], System::String^ systemString);
void toTmStruct(struct tm &date, System::DateTime^ dateTime);
#endif