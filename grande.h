#include <iostream>
using namespace std;
class grande {
private:
    int nrow=0;
    int ncol=0;
public:
    grande()=default;
    void  generate_tablero(){
       string lista[380];
       for (int i=0;i<20;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=40;i<60;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=80;i<100;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=120;i<140;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=160;i<180;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=200;i<220;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=240;i<260;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=280;i<300;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=320;i<340;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=360;i<380;i+=2){
         lista[i]="+";
         lista[i+1]="   ";
       }
       for (int i=20;i<40;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=60;i<80;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=100;i<120;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=140;i<160;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=180;i<200;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=220;i<240;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=260;i<280;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=300;i<320;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       for (int i=340;i<360;i+=2){
         lista[i]=" ";
         lista[i+1]="   ";
       }
       int k=1;
       int j=1;
       while(true){
         for(int i =0;i<380;i++) {
           cout << lista[i];
           if(i==18*k+j){
               cout<<endl;
               k++;
               j+=2;
           }
        }
        k=1;
        j=1; 
        cout<<endl; 
        int x;
        int y;
        int x1;
        int y1;
        cout<<"Ingrese fila de inicio: ";
        cin>>x;
        cout<<endl;
        cout<<"Ingrese columna de inicio: ";
        cin>>y;
        cout<<endl;
        cout<<"Ingrese fila de llegada: ";
        cin>>x1;
        cout<<endl;
        cout<<"Ingrese columna de llegada: ";
        cin>>y1;
        cout<<endl; 
        if(x==1 && x==x1 && y<y1){
          lista[y1*2-3]="---";
        } 
        if(x==2 && x==x1 && y<y1){
          lista[y1*2+37]="---";
        } 
        if(x==3 && x==x1 && y<y1){
          lista[y1*2+77]="---";
        } 
        if(x==4 && x==x1 && y<y1){
          lista[y1*2+117]="---";
        } 
        if(x==5 && x==x1 && y<y1){
          lista[y1*2+157]="---";
        } 
        if(x==6 && x==x1 && y<y1){
          lista[y1*2+197]="---";
        }  
        if(x==7 && x==x1 && y<y1){
          lista[y1*2+237]="---";
        } 
        if(x==8 && x==x1 && y<y1){
          lista[y1*2+277]="---";
        } 
        if(x==9 && x==x1 && y<y1){
          lista[y1*2+317]="---";
        } 
        if(x==10 && x==x1 && y<y1){
          lista[y1*2+357]="---";
        }  
        if(x==1 && x==x1 && y>y1){
          lista[y*2-3]="---";
        } 
        if(x==2 && x==x1 && y>y1){
          lista[y*2+37]="---";
        } 
        if(x==3 && x==x1 && y>y1){
          lista[y*2+77]="---";
        } 
        if(x==4 && x==x1 && y>y1){
          lista[y*2+117]="---";
        } 
        if(x==5 && x==x1 && y>y1){
          lista[y*2+157]="---";
        } 
        if(x==6 && x==x1 && y>y1){
          lista[y*2+197]="---";
        }  
        if(x==7 && x==x1 && y>y1){
          lista[y*2+237]="---";
        } 
        if(x==8 && x==x1 && y>y1){
          lista[y*2+277]="---";
        } 
        if(x==9 && x==x1 && y>y1){
          lista[y*2+317]="---";
        } 
        if(x==10 && x==x1 && y>y1){
          lista[y*2+357]="---";
        } 
        if(y==1 && y==y1 && x>x1){
          lista[40*x-60]="|";
        } 
        if(y==2 && y==y1 && x>x1){
          lista[40*x-58]="|";
        } 
        if(y==3 && y==y1 && x>x1){
          lista[40*x-56]="|";
        } 
        if(y==4 && y==y1 && x>x1){
          lista[40*x-54]="|";
        } 
        if(y==5 && y==y1 && x>x1){
          lista[40*x-52]="|";
        } 
        if(y==6 && y==y1 && x>x1){
          lista[40*x-50]="|";
        } 
        if(y==7 && y==y1 && x>x1){
          lista[40*x-48]="|";
        } 
        if(y==8 && y==y1 && x>x1){
          lista[40*x-46]="|";
        } 
        if(y==9 && y==y1 && x>x1){
          lista[40*x-44]="|";
        } 
        if(y==10 && y==y1 && x>x1){
          lista[40*x-42]="|";
        }  
        if(y==1 && y==y1 && x<x1){
          lista[40*x1-60]="|";
        } 
        if(y==2 && y==y1 && x<x1){
          lista[40*x1-58]="|";
        } 
        if(y==3 && y==y1 && x<x1){
          lista[40*x1-56]="|";
        } 
        if(y==4 && y==y1 && x<x1){
          lista[40*x1-54]="|";
        } 
        if(y==5 && y==y1 && x<x1){
          lista[40*x1-52]="|";
        } 
        if(y==6 && y==y1 && x<x1){
          lista[40*x1-50]="|";
        } 
        if(y==7 && y==y1 && x<x1){
          lista[40*x1-48]="|";
        } 
        if(y==8 && y==y1 && x<x1){
          lista[40*x1-46]="|";
        } 
        if(y==9 && y==y1 && x<x1){
          lista[40*x1-44]="|";
        } 
        if(y==10 && y==y1 && x<x1){
          lista[40*x1-42]="|";
        }   
       }      
    };
};