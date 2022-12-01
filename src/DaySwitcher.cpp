#include "DaySwitcher.h"
#include "iostream"
#include "Day1.h"
#include "Day2.h"
#include "Day3.h"
#include "Day4.h"
#include "Day5.h"
#include "Day6.h"
#include "Day7.h"
#include "Day8.h"
#include "Day9.h"
#include "Day10.h"
#include "Day11.h"
#include "Day12.h"
#include "Day13.h"
#include "Day14.h"
#include "Day15.h"
#include "Day16.h"
#include "Day17.h"
#include "Day18.h"
#include "Day19.h"
#include "Day20.h"
#include "Day21.h"
#include "Day22.h"
#include "Day23.h"
#include "Day24.h"
#include "Day25.h"

//initialize a lot of Day classes as variables

Day1 day1;
Day2 day2;
Day3 day3;
Day4 day4;
Day5 day5;
Day6 day6;
Day7 day7;
Day8 day8;
Day9 day9;
Day10 day10;
Day11 day11;
Day12 day12;
Day13 day13;
Day14 day14;
Day15 day15;
Day16 day16;
Day17 day17;
Day18 day18;
Day19 day19;
Day20 day20;
Day21 day21;
Day22 day22;
Day23 day23;
Day24 day24;
Day25 day25;

void DaySwitcher::Start(int userDayInput, int userQuestionInput)
{
    switch (userDayInput)
    {
        case 1:
            day1.Start(userQuestionInput);
            break;
        case 2:
            day2.Start(userQuestionInput);
            break;
        case 3:
            day3.Start(userQuestionInput);
            break;
        case 4:
            day4.Start(userQuestionInput);
            break;
        case 5:
            day5.Start(userQuestionInput);
            break;
        case 6:
            day6.Start(userQuestionInput);
            break;
        case 7:
            day7.Start(userQuestionInput);
            break;
        case 8:
            day8.Start(userQuestionInput);
            break;
        case 9:
            day9.Start(userQuestionInput);
            break;
        case 10:
            day10.Start(userQuestionInput);
            break;
        case 11:
            day11.Start(userQuestionInput);
            break;
        case 12:
            day12.Start(userQuestionInput);
            break;
        case 13:
            day13.Start(userQuestionInput);
            break;
        case 14:
            day14.Start(userQuestionInput);
            break;
        case 15:
            day15.Start(userQuestionInput);
            break;
        case 16:
            day16.Start(userQuestionInput);
            break;
        case 17:
            day17.Start(userQuestionInput);
            break;
        case 18:
            day18.Start(userQuestionInput);
            break;
        case 19:
            day19.Start(userQuestionInput);
            break;
        case 20:
            day21.Start(userQuestionInput);
            break;
        case 22:
            day22.Start(userQuestionInput);
            break;
        case 23:
            day23.Start(userQuestionInput);
            break;
        case 24:
            day24.Start(userQuestionInput);
            break;
        case 25:
            day25.Start(userQuestionInput);
            break;
    }
}
