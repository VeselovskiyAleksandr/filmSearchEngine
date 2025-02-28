#pragma once

#include <fstream>
#include <vector>
#include <exception>
#include "Configuration.h"
#include "Entry.h"

using namespace std;

 class ConverterJSON
{
public: ConverterJSON() = default;
	  Configuration configuration;
	  vector<string> getRequests;

	  //������� ������ ������ ������
	   void start();

	  //������� �������� ������� �����
	   bool FileIsExist(string filePath);

	  //������� �������� �������� �����
	  void openFile(string path);

	  //������� ����� �������
	   void requerysInputFunction(vector<string>& getRequests);

	  //������� ��������� ����
	   void wordSplitFunction(string &sentence, vector<string>& setWords);

	  //������� ������ ������ � �����
	    void multiMapFillFunction(vector<Entry> &vectEntr, vector<Entry>& getWC, multimap<string, vector< Entry>>& countWM);

	  //������� ���������� ������� Entry
	  void vectorEntryFillFunction(vector<string>& vectWord, vector<Entry>& getWC, int fileCount);

	  //������� �������� ���� � ���������
	   multimap<string, vector< Entry>> countWordsMap;
       void wordCountFunction(multimap<string, vector< Entry>> &countWordMap);

	  //������� ������ �������. ����� ������ ����� � ����������.
	   void searchAnswerFunction(multimap<string, vector< Entry>> &countWMap);///////////
};