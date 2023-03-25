//
//  main.cpp
//  Praktikum 1 Aufgabe 2
//
//  Created by Hayyan Jaffer on 26.10.22.
//


#include <iostream>
using namespace std;

int rows = 13;
int columns = 26;

char characterarray[13][26]={};

void fill_with_char(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            characterarray[i][j] = ' ';}
    }
}
void show(string name, string matriculationnumber){
    cout<< "MAZE OF " << name << "("<< matriculationnumber << ")" << endl;
    
    cout<<"  abcdefghijklmnopqrstuvwxyz"<<endl;
    
    for(int i=1;i<=rows;i++){
        cout << endl;
        cout<<i;
        for(int j=0;j<columns;j++)
        {
            cout << " "<<characterarray[i][j];
        }
    }
    
}
int main(int argc, const char * argv[]) {
    string name= "Hayyan";
    string Matriculationnumber;
    cout<<"Please enter your matriculation number";
    cin>>Matriculationnumber;
    //fill_with_char(' ');
    show(name,Matriculationnumber);
    int row, column;
    char charachter;
    
    char choice;
    do{
        cout<< endl;
        cout<< "f fill with blank";
        cout<< "s show"<<endl;
        cout<< "e end "<<endl;
        cout<<"- minus sign"<<endl;
        cout<<"| vertical line"<<endl;
        cout<<"+ plus sign"<<endl;
        cout<<". blank"<<endl;
        cin>> choice;
        switch (choice){
            case'f':
                fill_with_char();
                break;
            case's':
                show("Hayyan Jaffer", Matriculationnumber);
                break;
            default:
                char alphabets[] = {'a','b','c','d','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o' , 'p','q', 'r', 's','t','u', 'v','w', 'x', 'y', 'z'};
                int row;
                char column;
                cin >> row;
                cin >> column;
                int numColumn;
                cout << row << column;
                for(int l=0;l<=26;l++) {
                   if(column == alphabets[l]) {
                        numColumn = l;
                        cout << "The value of column" <<numColumn;
                        //break;
                   }
                }
                characterarray[row][numColumn] =choice;
                
                
        }
        }while(choice!='e');
    
    
    return 0;
}
