#include"f.h"
void Add(Derevo **u, int &a)
{
   Derevo *p = *u;
   if(p == 0)
   {
      p = new Derevo;
      p->x = a;
      p->left = 0;
      p->right = 0;
      *u = p;
      cout<<"Введите вес элемента "<<p->x<<" ";
      cin>>p->ves;
      cout<<endl;

      return;
   }
   Derevo *p1;
   bool priznak = false;
   while(p && !priznak)
   {
      p1 = p;
      if(a==p->x)
         priznak = true;
      else
         if(a< p->x)
            p = p->left;
         else
            if (a>p->x)
            p = p->right;
   }
   if(priznak) return;
   Derevo *pnew = new Derevo;
   pnew->x = a;
   pnew->left = 0;
   pnew->right = 0;
   if(a< p1->x)
      p1->left = pnew;
   else
    if (a>p1->x)
   p1->right = pnew;
   cout<<"Введите вес элемента "<<pnew->x<<" ";
      cin>> pnew->ves;
      cout<<endl;
}


Derevo* ves2(Derevo *root,int&d) {
 if(root!=NULL){
if ((root->x % 2==0)) {
        if((root->ves!=0)&&d!=0) d=1;
if(root->ves==0) {d=0; }
    }
         if (!root->left && !root->right && (root->x % 2==1)&&d!=0&&d!=1)
             {
                 d=2;

             }
    ves2(root->left,d);
    ves2(root->right,d);
 }


    }
Derevo* Delete(Derevo* node, int a)
{
    if(node== NULL)
        return node;
    if(a==node->x)
    {
      Derevo* q;

        if(node->right == NULL)
            q = node->left;
        else
        {
        Derevo* r = node->right;

            if(r->left == NULL)

            {

                r->left = node->left;

                q = r;

            }

            else

            {

                Derevo* m = r->left;

                while(m->left != NULL)
                {
                    r  = m;
                    m = r->left;
                }
                r->left   = m->right;
                m->left  = node->left;
                m->right = node->right;
                q = m;
            }
        }
        delete node;
        return q;
    } else if(a< node->x)
        node->left  = Delete(node->left, a);
    else
        node->right = Delete(node->right, a);
    return node;
}
void show(Derevo *t, int n)
{
    if (t == NULL)
        return;
    else
    {
        show(t->left, ++n);
        for (int i=0; i<n; ++i)
            cout << "       ";
        cout << t->x <<"("<< t->ves << ")" << endl;
        n--;
    }
    show(t->right, ++n);
}
