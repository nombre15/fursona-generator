#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <conio.h>
using namespace std;

int main()
{

    srand(time(0));
    string adjectives_list, animals_list, personalities_list;
    int adjectives_lines = 0;
    int animals_lines = 0;
    int personalities_lines = 0;
    ifstream File("adjectives.txt");
    ifstream File2("animals.txt");
    ifstream File3("personalities.txt");

    while(getline(File, adjectives_list)){

            adjectives_lines++;
    }

    while(getline(File2, animals_list)){

            animals_lines++;
    }

    while(getline(File3, personalities_list)){

            personalities_lines++;
    }

    cout << "Press enter to generate a new fursona" << endl;
    cout << "Press space to give a personality to your fursona" << endl << endl;

    do{
        int random_adjective = rand() %adjectives_lines;
        int random_animal = rand() % animals_lines;
        int random_personality = rand() % personalities_lines;
        int lines = 0, lines2 = 0, lines3 = 0;
        ifstream File("adjectives.txt");
        ifstream File2("animals.txt");
        ifstream File3("personalities.txt");

        while(getline(File, adjectives_list)){

            if(lines == random_adjective){

                cout << adjectives_list;
            }

            lines++;
        }

        while(getline(File2, animals_list)){

            if(lines2 == random_animal){

                cout << " " << animals_list;
            }

            lines2++;
        }

       //this makes it work funny and now you have to press enter twice to generate a new regular fursona, idk why still have to fix it
        int g = getch();
        if(g == 32){

            while(getline(File3, personalities_list)){

                if(lines3 == random_personality){

                    cout << " who " << personalities_list << endl << endl;
                }

                lines3++;
            }
        }

        else{
            cout << endl << endl;
        }


        int c = getch();
        if (c == 0 || c == 224) getch();
    }while(1==1);
}

