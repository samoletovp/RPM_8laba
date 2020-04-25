/**
 * @file main.cpp
 * @author Petr Samoletov <samoletovp@gmail.com>
 * @brief Содержит меню программы
 */
#include <string>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

struct Zapis
{
    string name;
    string surname;
    int id;
    string num;
    string data;
};

int main()
{
    list <Zapis> mylist;
    list<Zapis>::iterator i;
    Zapis zap;
    int state = 1;
    while(state!=0)
    {
        cout<<"Choose:"<<endl;
        cout<<"1.Add note"<<endl;
        cout<<"2.Get list of all notes"<<endl;
        cout<<"3.Search notes"<<endl;
        cout<<"4.Delete note"<<endl;
        cout<<"5.Exit"<<endl;
        cin>>state;
        if (state==1)
        {
            cout<<"Enter Id"<<endl;
            cin>>zap.id;
            cout<<"Enter Name"<<endl;
            cin>>zap.name;
            cout<<"Enter Surname"<<endl;
            cin>>zap.surname;
            cout<<"Enter Phone Number (x-xxx-xxx-xx-xx)"<<endl;
            cin>>zap.num;
            cout<<"Enter Birth Date (xxxx-xx-xx)"<<endl;
            cin>>zap.data;
            mylist.push_back(zap);
        }
        else if (state==2)
        {
            for( i = mylist.begin(); i != mylist.end(); ++i)
            {
                cout<<"id:" <<i -> id <<" Name, Surname: " <<i -> name << " " << i -> surname<<" Phone Number: "<<i ->num<<" Birth Date: "<<i ->data<< " ";
                cout<< endl;}}
        else if (state==3)
        {
            cout<<"Choose criteria"<<endl;
            cout<<"1.Surname"<<endl;
            cout<<"2.Name"<<endl;
            cout<<"3.Phone Number"<<endl;
            cout<<"4.Birth Date"<<endl;
            cout<<"5.ID"<<endl;
            cout<<"6.Back"<<endl;
            int a;
            cin>>a;
            if(a==1)
            {
                string fam;
                cout<<"1.Enter Surname"<<endl;
                cin>>fam;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (fam==i->surname)
                    {
                        cout<<"Found Matches " <<endl;
                        cout<<"id:" <<i -> id <<" Name, Surname " <<i -> name << " " << i -> surname<<" Phone Number: +"<<i ->num<<" Birth Date: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"No Matches"<<endl;}
                }
            }
            else if(a==2)
            {
                string im;
                cout<<"1.Enter Name"<<endl;
                cin>>im;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (im==i->name)
                    {
                        cout<<"Found Matches " <<endl;
                        cout<<"id:" <<i -> id <<" Name, Surname " <<i -> name << " " << i -> surname<<" Phone Number: +"<<i ->num<<" Birth Date: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"No Matches"<<endl;}}}
            else if(a==3)
            {
                string no;
                cout<<"1.Enter Phone Number"<<endl;
                cin>>no;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (no==i->num)
                    {
                        cout<<"Found Matches " <<endl;
                        cout<<"id:" <<i -> id <<" Name, Surname " <<i -> name << " " << i -> surname<<" Phone Number: +"<<i ->num<<" Birth Date: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"No Matches"<<endl;}
                }
            }
            else if(a==4)
            {
                string da;
                cout<<"1.Enter Birth Date"<<endl;
                cin>>da;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (da==i->data)
                    {
                        cout<<"Found Matches " <<endl;
                        cout<<"id:" <<i -> id <<" Name, Surname " <<i -> name << " " << i -> surname<<" Phone Number: +"<<i ->num<<" Birth Date: "<<i ->data<< " ";
                        cout<< endl;
                    }
                    else {cout<<"No Matches"<<endl;}
                }
            }
            else if(a==5)
            {
                int iid;
                cout<<"1.Enter ID"<<endl;
                cin>>iid;
                for( i = mylist.begin(); i != mylist.end(); ++i)
                {
                    if (iid==i->id)
                    {
                        cout<<"Found Matches " <<endl;
                        cout<<"id:" <<i -> id <<" Name, Surname " <<i -> name << " " << i -> surname<<" Phone Number: +"<<i ->num<<" Birth Date: "<<i ->data<< " ";
                        cout<< endl;}
                    else {cout<<"No Matches"<<endl;}
                }}}
        else if(state==4)
        {
            cout<<"Enter ID to delete note"<<endl;
            int iid;
            cin>>iid;
            for( i = mylist.begin(); i != mylist.end(); ++i)
            {
                if(iid==i->id)
                {
                    mylist.erase(i);
                    i = mylist.begin();
                    cout<<"Deleted."<<endl;
                }}}
        else if(state==5)
        {
            state=0;
        }
        else {cout<<"Incorrect input"<<endl;}
    }
    return(0);
}
