#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
using namespace std;
#define CYAN    "\033[36m"      /* Cyan */
#define GREEN   "\033[32m"      /* Green */
#define RESET   "\033[0m"
#define MAGENTA "\033[35m"      /* Magenta */
#define IOS ios::sync_with_stdio(0)

const int N = 10e5 ;
char TEXT[N];
int  nTEXT[N],BIN[N][8];
int flag;


//---------------------------------------------------------------------------------------

void getTEXT();
void toBINARY();
void resetALL(){
    for(int i = 0 ; i< flag ; i++){
        TEXT[i] = '\0';
        nTEXT[i]= '\0';

    }
}

//----------------------------------------------------------------------------------------
int main() {


    TEXT[0] = '0';
    nTEXT[0] = 1 ;

    cout<<"\n\n\nENTER STRING TO CONVERT INTO BINARY :"<<CYAN;
        getTEXT();
    cout<<RESET<<"\n\n\nCONVERTED BINARY (ASCII/UTF-8) IS =>\n\n\n "<<GREEN;
        toBINARY();


    return 0;
}

//------------------------------------------------------------------------------------------

void getTEXT(){
        IOS;

    for(int i=1 ; i<N ; i++){

        TEXT[i] = getchar();
        if (TEXT[i] == '\n')
            break;
        nTEXT[i] = TEXT[i];
        flag = i;


    }


}

//-------------------------------------------------------------------------------------------

void toBINARY( ){

    int result , reminder[7] ;

for ( int j = 1 ; j <=  flag ; j++){
    result = nTEXT[j];
    for (int i=7 ; i>= 0 ; i--){
        reminder[i] =  result % 2;
        result /= 2;
      }

    for (int i = 0 ; i<8 ; i++){
        BIN[j][i] = reminder[i];
    }
  }

  for(int i=1 ; i<= flag ; i++){
      for (int j = 0 ; j<8 ; j++){
          cout<<BIN[i][j];
      }

      if (i % 6 == 0)
            cout<<endl;
      cout<<' ';
  }

  cout << "\n\n\n\n\n\n\n\n\n\n"<<RESET;


/*
  resetALL();

  cout << "Do you want to exit (Y/N) : ";

  char opt;
  cin>>opt;

  if (opt == 'Y')
        exit(0);
  else if (opt =='N')
        main();
  else
    cout<<"invalid option ! abort ";
*/

  exit(0);


}
