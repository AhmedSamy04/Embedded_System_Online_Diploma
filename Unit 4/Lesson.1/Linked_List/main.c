/*
 * main.c
 *
 *  Created on: Nov 5, 2023
 *      Author: Ahmed Sami
 */


#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"

#define DPRINTF(...)            {fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}
//effective data
struct Sdata
{
	int ID;
	char name [40];
	float height;
};

struct SStudent
{
	struct Sdata student;
	struct SStudent* PNextStudent;
};


struct SStudent* gpFirstStudent = NULL;

void AddStudent ()
{
	struct SStudent* pNewStudent;
	struct SStudent* pLastStudent;
	char temp_text [40];
	//check list is empty == yes
	if (gpFirstStudent == NULL)
	{
		//create new record
		pNewStudent = (struct SStudent* ) malloc(sizeof (struct SStudent));
		//assign it to gpfirst
		gpFirstStudent = pNewStudent;
	}
	else //list contains records
	{
		//navigate until reach to the last record
		pLastStudent = gpFirstStudent;
		while (pLastStudent->PNextStudent)
			pLastStudent = pLastStudent->PNextStudent;
		//create new record
		pNewStudent = (struct SStudent* ) malloc(sizeof (struct SStudent));
		pLastStudent->PNextStudent = pNewStudent;
	}
	//fill new record
	DPRINTF("\n Enter the ID: ");
	gets (temp_text);
	pNewStudent->student.ID = atoi(temp_text);
	DPRINTF("\n Enter student full name: ");
	gets (pNewStudent->student.name);
	DPRINTF("\n Enter the height: ");
	gets (temp_text);
	pNewStudent->student.height = atof(temp_text);
	//set the next pointer (new_student) null
	pNewStudent->PNextStudent = NULL;
}

int delete_student ()
{
	char temp_text [40];
	unsigned int selected_id;

	//get the selected ID
	DPRINTF("\n Enter the student ID to be deleted: ");
	gets(temp_text);
	selected_id = atoi(temp_text);

	//list is not empty
	if (gpFirstStudent)
	{
		struct SStudent* pSelectedStudent = gpFirstStudent;
		struct SStudent* pPreviousStudent = NULL;

		//loop on all records
		while (pSelectedStudent)
		{
			//compare each Node with the selectes ID
			if (pSelectedStudent->student.ID == selected_id)
			{
				if (pPreviousStudent) //the first is not the selected id
				{
					pPreviousStudent->PNextStudent = pSelectedStudent;
				}
				else //1st student == ID
				{
					gpFirstStudent = pSelectedStudent->PNextStudent;
				}
				free (pSelectedStudent);
				return 1;
			}
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;
		}
	}
	DPRINTF("\n cannot find student ID.");
	return 0;
}

void view_students ()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	int count = 0;
	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		while (pCurrentStudent)
		{
			DPRINTF("\n record number %d ", count+1);
			DPRINTF("\n \t ID: %d", pCurrentStudent->student.ID);
			DPRINTF("\n \t Name: %s", pCurrentStudent->student.name);
			DPRINTF("\n \t height: %f", pCurrentStudent->student.height);
			pCurrentStudent = pCurrentStudent->PNextStudent;
			count++;
		}

	}
}

void DeleteAll ()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if (gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		while (pCurrentStudent)
		{
			struct SStudent* pTempStudent = pCurrentStudent;
			pCurrentStudent = pCurrentStudent->PNextStudent;
			free(pTempStudent);
		}
		gpFirstStudent = NULL;

	}
}

void iterative_length()
{
	struct SStudent* pPosition = gpFirstStudent;
	int count = 0;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\nEmpty list");
	}

	else
	{
		while(pPosition)
		{
			count++;
			pPosition = pPosition->PNextStudent;
		}
		DPRINTF("\n length = %d",count);
	}
}

int recursive_length(struct SStudent* student)
{
	if(student)
	{
		return 1 + recursive_length(student->PNextStudent);
	}
	else
	{
		return 0;
	}
}

void GetNth_data()
{
	struct SStudent* pStudent = gpFirstStudent;
	char index[20];
	int count=0;


	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n empty list");
	}

	else
	{
		DPRINTF("\n Enter the index : ");
		gets(index);

		while(pStudent)
		{
			if(atoi(index) == count)
			{
				DPRINTF("student id : %d\n",pStudent->student.ID);
				DPRINTF("student name : %s\n",pStudent->student.name);
				DPRINTF("student height : %.2f\n\n",pStudent->student.height);
				break;
			}
			pStudent = pStudent->PNextStudent;
			count++;
		}
		DPRINTF("\n Wrong index not in the list\n");
	}
}

void Nth_End()
{
	struct SStudent* pEnd = gpFirstStudent;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n EMpty list\n");
	}

	else
	{
		int index;
		DPRINTF("\nEnter the index");
		scanf("%d",&index);

		index = recursive_length(gpFirstStudent) - index;

		while(index)
		{
			index--;
			pEnd = pEnd->PNextStudent;
		}

		DPRINTF("\nID :%d", pEnd->student.ID);
		DPRINTF("\nName :%s", pEnd->student.name);
		DPRINTF("\nHeight :%f", pEnd->student.height);
	}
}


void main ()
{
	char temp_text[40];

	while (1)
	{
		DPRINTF("\n ===============");
		DPRINTF("\n\t Choose one of the following Options \n");
		DPRINTF("\n 1: AddStudent ");
		DPRINTF("\n 2: Delete_Student ");
		DPRINTF("\n 3: view_students ");
		DPRINTF("\n 4: DeleteAll ");
		DPRINTF("\n 5:GetNth_data ");
		DPRINTF("\n 6:Length_Iterative ");
		DPRINTF("\n 7:Length_Recursive ");
		DPRINTF("\n 8: Nth_End ");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n ===============");
		switch (atoi(temp_text))
		{
		case 1:
			AddStudent();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			view_students();
			break;
		case 4:
			DeleteAll();
			break;
		case 5:
			GetNth_data();
			break;
		case 6:
			iterative_length();
			break;
		case 7:
			DPRINTF("length = %d ", recursive_length(gpFirstStudent));
			break;
		case 8:
			Nth_End();
			break;
		default:
			DPRINTF("\n wrong option");
			break;
		}

	}
}

