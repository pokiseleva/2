#include "f.h"
//Индивидуальное задание:Проверить у всех ли четных элементов дерева ненулевой вес
int _statemenu;
void menu ()
{
    cout<< "Выберите действие:"<< endl
    << "(0) Выход из программы "<<endl
    << "(1) Добавить вершину"<<endl
    << "(2) Удалить вершину"<<endl
    << "(3) Вывести дерево"<<endl
    << "(4) Проверить у всех ли четных элементов дерева ненулевой вес"<<endl
        << "Выбор:";
    cin >>_statemenu;
}

int main()
{SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    Derevo *koren = NULL;
int e,x,n,g;
    bool t = true;
    n=5;
    cout<<"Cтроим дерево из 5 элементов"<<endl;
    for(int i=0;i<n;i++)
    {   x=rand()%20+1;
        Add(&koren, x);
       }
show(koren,7);
cout<<endl;

        menu();
    while (_statemenu!=0)
    {
        switch(_statemenu)
        {
            case 1:
            cout<<"Введите новый элемент:";
            cin>>x;
        Add(&koren, x);
       show(koren,2);
            cout<<endl;
            menu();
            break;
            case 2:
cout<<"Какой элемент удалить?";
           cin>>e;
koren=Delete(koren, e);
show(koren,7);
    cout<<endl;

            menu();
            break;
            case 3:
               show(koren,2);
                cout<<endl;
            menu();
            break;
            case 4:
show(koren,2);
                cout<<endl;
                int d;
d=3;
ves2(koren,d);
 if (d==0) cout<<"не у всех";
        if (d==1)cout<<"У всех";
        if (d==2) cout <<"Нет четных элементов";
 cout<<endl;
            menu();

            break;

    }}
    return 0;
}
