//
//  FileController.cpp
//  StructureProject
//
//  Created by Perkins, Ryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

LinkedList<Music> FileController :: musicDataToList(string filename)
{
    LinkedList<Music> musicList;
    string currentCSVLine;
    int rowCount = 0;
    ifstream dataFile(filename);
    if (dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, "\r");
            if (rowCount != 0)
            {
                if (currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicList;
}

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimeList;
    string currentCSVLine;
    int rowCount = 0;
    ifstream dataFile(filename);
    if (dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, "\r");
            if (rowCount != 0)
            {
                if (currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeList;
}
