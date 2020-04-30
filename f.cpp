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
      cout<<"Ââåäèòå âåñ ýëåìåíòà "<<p->x<<" ";
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
   cout<<"Ââåäèòå âåñ ýëåìåíòà "<<pnew->x<<" ";
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
Derevo* Delete(Derevo* u, int a)
{
    if(u== NULL)
        return u;
    if(a==u->x)
    {
      Derevo* q;

        if(u->right == NULL)
            q = u->left;
        else
        {
        Derevo* r = u->right;

            if(r->left == NULL)

            {

                r->left = u->left;

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
                m->left  = u->left;
                m->right = u->right;
                q = m;
            }
        }
        delete u;
        return q;
    } else if(a< u->x)
        u->left  = Delete(u->left, a);
    else
    u->right = Delete(u->right, a);
    return u;
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
