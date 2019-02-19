//
//  LinearTester.cpp
//  StructureProject
//
//  Created by Perkins, Ryan on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/rper7060/Documents/C++Workspace/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/rper7060/Documents/C++Workspace/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "a Difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/rper7060/Documents/C++Workspace/StructureProject/StructureProject/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/rper7060/Documents/C++Workspace/StructureProject/StructureProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "a Difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
};
