#include <iostream>
#include <string.h>
#include <climits>
#include <vector>
#include <windows.h>
#include <cctype>

using namespace std;

int main()
{
    vector <int> smigger {2,4,6,8,10};
    char user_imput;
    int adaug,aux_smallest,aux_biggest;
    double avg;
    cout<<"P - afiseaza nr\nA - adauga nr\nM - arata media\nS - arata cel mai mic nr\nL - arata cel mai mare nr\nQ - Iesi din test\n";
    cout<<"spune ce vrei fiule:\n";
    while(true)
    {
        user_imput='\0';
        cin>>user_imput;
        switch (user_imput)
        {
        case 'p':
        case 'P':
            if (smigger.empty()==true)
            {
                cout<<"[]-the list is empty\n";
            }
            else
            {
                cout<<"[ ";
                for (int i=0;i<smigger.size();i++)
                {
                    cout<<smigger.at(i)<<" ";
                }
                cout<<"]\n";
            }
            break;
        case 'a':
        case 'A':
            adaug=0;
            cout<<"what to add:\n";
            cin>>adaug;
            cout<<"adding "<<adaug<<'\n';
            smigger.push_back(adaug);
            break;
        case 'm':
        case 'M':
            if (smigger.empty()==true)
            {
                cout<<"Unable to calculate the mean - no data\n";
            }
            else
            {
                for (int i=0;i<smigger.size();i++)
                {
                    avg+=smigger.at(i);
                }
                cout<<"media artimetica este:\n"<<(avg/smigger.size())<<'\n';
            }
            break;
        case 's':
        case 'S':
            if (smigger.empty()==true)
            {
                cout<<"unable to determine smallest number\n";
            }
            else
            {
                aux_smallest=INT_MAX;
                for (int i=0;i<smigger.size();i++)
                {
                    if (aux_smallest>smigger.at(i))
                    {
                        aux_smallest=smigger.at(i);
                    }
                }
                cout<<aux_smallest<<'\n';
            }
            break;
        case 'l':
        case 'L':
            if (smigger.empty()==true)
            {
                cout<<"unable to determine biggest number\n";
            }
            else
            {
                aux_biggest=INT_MIN;
                for (int i=0;i<smigger.size();i++)
                {
                    if (aux_biggest<smigger.at(i))
                    {
                        aux_biggest=smigger.at(i);
                    }
                }
                cout<<aux_biggest<<'\n';
            }
            break;
        case 'q':
        case 'Q':
            return 0;
        default:
            cout<<"unknown selection, please try again\n";
            break;
        }
    }
    return 0;
}
