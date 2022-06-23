#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{

    srand(time(0));
    string adjectives_list, animals_list;
    int adjectives_lines = 0;
    int animals_lines = 0;
    ifstream File("adjectives.txt");
    ifstream File2("animals.txt");

    while(getline(File, adjectives_list)){

            adjectives_lines++;
    }

     while(getline(File2, animals_list)){

            animals_lines++;
    }

    cout << "Press enter to generate a new fursona" << endl << endl;

    do{
        int random_adjective = rand() %adjectives_lines;
        int random_animal = rand() % animals_lines;
        int lines = 0;
        int lines2 = 0;
        ifstream File("adjectives.txt");
        ifstream File2("animals.txt");

        while(getline(File, adjectives_list)){

            if(lines == random_adjective){

                cout << adjectives_list;
            }

            lines++;
        }

        while(getline(File2, animals_list)){

            if(lines2 == random_animal){

                cout << " " << animals_list << endl << endl;
            }

            lines2++;
        }

        int c = getch();
        if (c == 0 || c == 224) getch();
    }while(1==1);
}
