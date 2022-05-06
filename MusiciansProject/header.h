#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <crtdbg.h>
#define MAX_LINE_LEN 150
#define END_OF_LINE '\n'
#define NONE 0
#define MULTY_BY_TWO(X) ((X)*=(2))
typedef struct treeNode {
	char* instrument;
	unsigned short insId;
	struct treeNode* left;
	struct treeNode* right;
} TreeNode;
typedef struct tree {
	TreeNode* root;
} InstrumentTree;
typedef struct MusicianPriceInstrument
{
	unsigned short insID;			 // ���� ���� �� ��� ����� 
	float price;					 //	���� ����� ���� ���� ����� ���� ��
	struct MusicianPriceInstrument* next;	 //	next item in linked list.
} MusicianPriceInstrument;
typedef struct MPIList
{
	MusicianPriceInstrument* head;	 //	head item in linked list.
	MusicianPriceInstrument* tail;	 //	tail item in linked list.
} MPIList;
typedef struct Musician
{
	char** name; // ���� �� ����� �������� �� ��� ����
	int number_of_names;
	bool is_playing;
	float* prices;
	MPIList instruments; // MusicianPriceInstrument ��� ������ ������ ������ �� 
} Musician;
typedef struct Date
{
	int day, month, year;
	float hour;
} Date;
typedef struct ConcertInstrument
{
	int num; // ��� ����� ����
	int inst; // ���� ���� �� ��� ������
	char importance; // (1 / 0 )��� ���� ����� �� �� ����� ���� ����� �����
	char instrument_name[MAX_LINE_LEN];
	struct ConcertInstrument* next;
} ConcertInstrument;
typedef struct CIList
{
	ConcertInstrument* head;
	ConcertInstrument* tail;
}CIList;
typedef struct Concert
{
	Date date_of_concert; // ������ ���� �����
	char* name;//�� ������
	CIList instruments;// ��� ������ ������ ������ �� ConcertInstruments
} Concert;
