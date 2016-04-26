#include <iostream>
#include <cstring>
#include <stdfix.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

char s[20], s2[20], l[1], x, lit[50];
int i, j, mx, n, aux, aux2, aux3, nr=0, k=0;

void hangman()
{
      if(k==0)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"| "<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"----"<<endl;
      }
      if(k==1)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"----"<<endl;
      }
      if(k==2)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|         |"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"----"<<endl;
      }
      if(k==3)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|         |"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|       o o"<<endl;
         cout<<"|      o  o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|"<<endl;
         cout<<"|"<<endl;
         cout<<"----"<<endl;
      }
      if(k==4)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|         |"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|       o o o"<<endl;
         cout<<"|      o  o  o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|          "<<endl;
         cout<<"|          "<<endl;
         cout<<"----"<<endl;
      }
      if(k==5)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|         |"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|       o o o"<<endl;
         cout<<"|      o  o  o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|        o "<<endl;
         cout<<"|       o  "<<endl;
         cout<<"----"<<endl;
      }
      if(k==6)
      {
         cout<<"._________."<<endl;
         cout<<"|         |"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"|        ooo"<<endl;
         cout<<"|         |"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|       o o o"<<endl;
         cout<<"|      o  o  o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|         o"<<endl;
         cout<<"|        o o"<<endl;
         cout<<"|       o   o"<<endl;
         cout<<"----"<<endl;
      }
}

void game()
{
    if (system("CLS")) system("clear");
    cout<<"Cuvantul:";
    cin.getline(s,20);
    cout<<"Numarul de incercari:";
    mx=6;
    if (system("CLS")) system("clear");
    n=strlen(s);
    s2[0]=s[0];
    s2[n-1]=s[n-1];
    for(i=1;i<n-1;i++)
    if(s[i]==s[0])
        s2[i]=s[0];
    else if(s[i]==s[n-1])
        s2[i]=s[n-1];
    else s2[i]='_';
    cout<<"Cuvantul este: ";
    for(i=0;i<n;i++)
        cout<<s2[i]<<" ";
    cout<<endl;
    cout<<"Ai "<<mx<<" incercari ramase\n";
    hangman();
    while(mx)
    {
        cout<<"Literele folosite sunt: "; for(j=0;j<=nr;j++) cout<< lit[j]<< " ";
        cout<<endl;
        cout<<"Introduceti o litera: "; cin>>l; if (system("CLS")) system("clear");
        aux3=0;
        for(j=0;j<=nr;j++) if(l[0]==lit[j]) aux3=1;
        if(aux3==0)
            {
                lit[nr]=l[0];
                nr++;
            }
        aux=0;
        for(i=0;i<=n-1;i++)
            if(l[0]==s[i])
        {
            aux=1;
            s2[i]=l[0];
        }
        if(aux==0)
            {
                mx--;
                k++;
            }
        cout<<"Cuvantul este: ";
        for(i=0;i<n;i++)
            cout<<s2[i]<<" ";
        cout<<endl;
        cout<<"Ai "<<mx<<" incercari ramase"<<endl;
        hangman();
        aux2=0;
        for(i=0;i<n;i++)
            if(s2[i]=='_')
                aux2=1;
        if(aux2==0)
        {
            if (system("CLS")) system("clear");
            cout<<"AI CASTIGAT !"<<endl<<endl;
            hangman();
            cout<<"Cuvantul este "; for(i=0;i<n;i++) cout<<s2[i]; cout<<endl;
            break;
        }

    }
    if(mx==0)
    {
        if (system("CLS")) system("clear");
        cout<<"AI PIERDUT !"<<endl<<endl;
        hangman();
        cout<<"Cuvantul era "; cout<<s; cout<<endl;
    }
}

int main()
{
        system("Color 3B");

    cout<<">SPANZURATOAREA<\n";
    cout<<" Press enter to continue or type exit and press enter to exit "; cin.get(x);
    if(x=='\n') game();
    else cout<<"Have a nice day!";
    cout<<endl<<endl;
    return 0;
}

