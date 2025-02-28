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

	  //функция начала работы движка
	   void start();

	  //функция проверки наличия файла
	   bool FileIsExist(string filePath);

	  //функция проверки открытия файла
	  void openFile(string path);

	  //функция ввода запроса
	   void requerysInputFunction(vector<string>& getRequests);

	  //функция выделения слов
	   void wordSplitFunction(string &sentence, vector<string>& setWords);

	  //функция записи данных в карту
	    void multiMapFillFunction(vector<Entry> &vectEntr, vector<Entry>& getWC, multimap<string, vector< Entry>>& countWM);

	  //функция заполнения вектора Entry
	  void vectorEntryFillFunction(vector<string>& vectWord, vector<Entry>& getWC, int fileCount);

	  //функция подсчёта слов в документе
	   multimap<string, vector< Entry>> countWordsMap;
       void wordCountFunction(multimap<string, vector< Entry>> &countWordMap);

	  //функция поиска ответов. Здесь ведётся поиск в контейнере.
	   void searchAnswerFunction(multimap<string, vector< Entry>> &countWMap);///////////
};