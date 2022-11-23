#include <iostream>
using namespace std;
class chico {
private:
    int coordenadax=0;
    int coordenaday=0;
public:
    chico()=default;
    string lista[132];
    void  generate_tablero(){
        for (int i=0;i<12;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=24;i<36;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=48;i<60;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=72;i<84;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=96;i<108;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=120;i<132;i+=2){
            lista[i]="+";
            lista[i+1]="   ";
        }
        for (int i=12;i<24;i+=2){
            lista[i]=" ";
            lista[i+1]="   ";
        }
        for (int i=36;i<48;i+=2){
            lista[i]=" ";
            lista[i+1]="   ";
        }
        for (int i=60;i<72;i+=2){
            lista[i]=" ";
            lista[i+1]="   ";
        }
        for (int i=84;i<96;i+=2){
            lista[i]=" ";
            lista[i+1]="   ";
        }
        for (int i=108;i<120;i+=2){
            lista[i]=" ";
            lista[i+1]="   ";
        }
        int k=1;
        int j=1;
        int w=0;
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int a1=0;
        int b1=0;
        int c1=0;
        int d1=0;
        int a2=0;
        int b2=0;
        int c2=0;
        int d2=0;
        int a3=0;
        int b3=0;
        int c3=0;
        int d3=0;
        int a4=0;
        int b4=0;
        int c4=0;
        int d4=0;
        int a5=0;
        int b5=0;
        int c5=0;
        int d5=0;
        int a6=0;
        int b6=0;
        int c6=0;
        int d6=0;
        int e=0;
        while(true){
            for(int i =0;i<132;i++) {
                cout << lista[i];
                if(i==10*k+j){
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
                w++;
            }
            if(x==2 && x==x1 && y<y1){
                lista[y1*2+21]="---";
                w++;
            }
            if(x==3 && x==x1 && y<y1){
                lista[y1*2+45]="---";
                w++;
            }
            if(x==4 && x==x1 && y<y1){
                lista[y1*2+69]="---";
                w++;
            }
            if(x==5 && x==x1 && y<y1){
                lista[y1*2+93]="---";
                w++;
            }
            if(x==6 && x==x1 && y<y1){
                lista[y1*2+117]="---";
                w++;
            }
            if(x==1 && x==x1 && y>y1){
                lista[y*2-3]="---";
                w++;
            }
            if(x==2 && x==x1 && y>y1){
                lista[y*2+21]="---";
                w++;
            }
            if(x==3 && x==x1 && y>y1){
                lista[y*2+45]="---";
                w++;
            }
            if(x==4 && x==x1 && y>y1){
                lista[y*2+69]="---";
                w++;
            }
            if(x==5 && x==x1 && y>y1){
                lista[y*2+93]="---";
                w++;
            }
            if(x==6 && x==x1 && y>y1){
                lista[y*2+117]="---";
                w++;
            }
            if(y==1 && y==y1 && x>x1){
                lista[24*x-36]="|";
                w++;
            }
            if(y==2 && y==y1 && x>x1){
                lista[24*x-34]="|";
                w++;
            }
            if(y==3 && y==y1 && x>x1){
                lista[24*x-32]="|";
                w++;
            }
            if(y==4 && y==y1 && x>x1){
                lista[24*x-30]="|";
                w++;
            }
            if(y==5 && y==y1 && x>x1){
                lista[24*x-28]="|";
                w++;
            }
            if(y==6 && y==y1 && x>x1){
                lista[24*x-26]="|";
                w++;
            }
            if(y==1 && y==y1 && x<x1){
                lista[24*x1-36]="|";
                w++;
            }
            if(y==2 && y==y1 && x<x1){
                lista[24*x1-34]="|";
                w++;
            }
            if(y==3 && y==y1 && x<x1){
                lista[24*x1-32]="|";
                w++;
            }
            if(y==4 && y==y1 && x<x1){
                lista[24*x1-30]="|";
                w++;
            }
            if(y==5 && y==y1 && x<x1){
                lista[24*x1-28]="|";
                w++;
            }
            if(y==6 && y==y1 && x<x1){
                lista[24*x1-26]="|";
                w++;
            }
            if(lista[1]!="   " && lista[12]!=" " && lista[14]!=" "  && lista[25]!="   "){
                a++;
                if(w%2==0 && a==1){
                    lista[13]=" A ";

                }
                if(w%2!=0 && a==1){
                    lista[13]=" B ";

                }
                if(a==1){
                    w++;
                }
            }
            if(lista[3]!="   " && lista[14]!=" " && lista[16]!=" "  && lista[27]!="   "){
                b++;
                if(w%2==0 && b==1){
                    lista[15]=" A ";

                }
                if(w%2!=0 && b==1){
                    lista[15]=" B ";

                }
                if(b==1){
                    w++;
                }
            }
            if(lista[5]!="   " && lista[16]!=" " && lista[18]!=" "  && lista[29]!="   "){
                c++;
                if(w%2==0 && c==1){
                    lista[17]=" A ";

                }
                if(w%2!=0 && c==1){
                    lista[17]=" B ";

                }
                if(c==1){
                    w++;
                }
            }
            if(lista[7]!="   " && lista[18]!=" " && lista[20]!=" "  && lista[31]!="   "){
                d++;
                if(w%2==0 && d==1){
                    lista[19]=" A ";

                }
                if(w%2!=0 && d==1){
                    lista[19]=" B ";

                }
                if(d==1){
                    w++;
                }
            }
            if(lista[9]!="   " && lista[20]!=" " && lista[22]!=" "  && lista[33]!="   "){
                e++;
                if(w%2==0 && e==1){
                    lista[21]=" A ";

                }
                if(w%2!=0 && e==1){
                    lista[21]=" B ";

                }
                if(e==1){
                    w++;
                }
            }
            if(lista[25]!="   " && lista[36]!=" " && lista[38]!=" "  && lista[49]!="   "){
                a1++;
                if(w%2==0 && a1==1){
                    lista[37]=" A ";

                }
                if(w%2!=0 && a1==1){
                    lista[37]=" B ";

                }
                if(a1==1){
                    w++;
                }
            }
            if(lista[27]!="   " && lista[38]!=" " && lista[40]!=" "  && lista[51]!="   "){
                b1++;
                if(w%2==0 && b1==1){
                    lista[39]=" A ";

                }
                if(w%2!=0 && b1==1){
                    lista[39]=" B ";

                }
                if(b1==1){
                    w++;
                }
            }
            if(lista[29]!="   " && lista[40]!=" " && lista[42]!=" "  && lista[53]!="   "){
                c1++;
                if(w%2==0 && c1==1){
                    lista[41]=" A ";

                }
                if(w%2!=0 && c1==1){
                    lista[41]=" B ";

                }
                if(c1==1){
                    w++;
                }
            }
            if(lista[31]!="   " && lista[42]!=" " && lista[44]!=" "  && lista[55]!="   "){
                d1++;
                if(w%2==0 && d1==1){
                    lista[43]=" A ";

                }
                if(w%2!=0 && d1==1){
                    lista[43]=" B ";

                }
                if(d1==1){
                    w++;
                }
            }
            if(lista[33]!="   " && lista[44]!=" " && lista[46]!=" "  && lista[57]!="   "){
                a2++;
                if(w%2==0 && a2==1){
                    lista[45]=" A ";

                }
                if(w%2!=0 && a2==1){
                    lista[45]=" B ";

                }
                if(a2==1){
                    w++;
                }
            }
            if(lista[49]!="   " && lista[60]!=" " && lista[62]!=" "  && lista[73]!="   "){
                b2++;
                if(w%2==0 && b2==1){
                    lista[61]=" A ";

                }
                if(w%2!=0 && b2==1){
                    lista[61]=" B ";

                }
                if(b2==1){
                    w++;
                }
            }
            if(lista[51]!="   " && lista[62]!=" " && lista[64]!=" "  && lista[75]!="   "){
                c2++;
                if(w%2==0 && c2==1){
                    lista[63]=" A ";

                }
                if(w%2!=0 && c2==1){
                    lista[63]=" B ";

                }
                if(c2==1){
                    w++;
                }
            }
            if(lista[53]!="   " && lista[64]!=" " && lista[66]!=" "  && lista[77]!="   "){
                d2++;
                if(w%2==0 && d2==1){
                    lista[65]=" A ";

                }
                if(w%2!=0 && d2==1){
                    lista[65]=" B ";

                }
                if(d2==1){
                    w++;
                }
            }
            if(lista[55]!="   " && lista[66]!=" " && lista[68]!=" "  && lista[79]!="   "){
                a3++;
                if(w%2==0 && a3==1){
                    lista[67]=" A ";

                }
                if(w%2!=0 && a3==1){
                    lista[67]=" B ";

                }
                if(a3==1){
                    w++;
                }
            }
            if(lista[57]!="   " && lista[68]!=" " && lista[70]!=" "  && lista[81]!="   "){
                b3++;
                if(w%2==0 && b3==1){
                    lista[69]=" A ";

                }
                if(w%2!=0 && b3==1){
                    lista[69]=" B ";

                }
                if(b3==1){
                    w++;
                }
            }
            if(lista[73]!="   " && lista[84]!=" " && lista[86]!=" "  && lista[97]!="   "){
                c3++;
                if(w%2==0 && c3==1){
                    lista[85]=" A ";

                }
                if(w%2!=0 && c3==1){
                    lista[85]=" B ";

                }
                if(c3==1){
                    w++;
                }
            }
            if(lista[75]!="   " && lista[86]!=" " && lista[88]!=" "  && lista[99]!="   "){
                d4++;
                if(w%2==0 && d4==1){
                    lista[87]=" A ";

                }
                if(w%2!=0 && d4==1){
                    lista[87]=" B ";

                }
                if(d4==1){
                    w++;
                }
            }
            if(lista[77]!="   " && lista[88]!=" " && lista[90]!=" "  && lista[101]!="   "){
                a5++;
                if(w%2==0 && a5==1){
                    lista[89]=" A ";

                }
                if(w%2!=0 && a5==1){
                    lista[89]=" B ";

                }
                if(a5==1){
                    w++;
                }
            }
            if(lista[79]!="   " && lista[90]!=" " && lista[92]!=" "  && lista[103]!="   "){
                b5++;
                if(w%2==0 && b5==1){
                    lista[91]=" A ";

                }
                if(w%2!=0 && b5==1){
                    lista[91]=" B ";

                }
                if(b5==1){
                    w++;
                }
            }
            if(lista[81]!="   " && lista[92]!=" " && lista[94]!=" "  && lista[105]!="   "){
                c5++;
                if(w%2==0 && c5==1){
                    lista[93]=" A ";

                }
                if(w%2!=0 && c5==1){
                    lista[93]=" B ";

                }
                if(c5==1){
                    w++;
                }
            }
            if(lista[97]!="   " && lista[108]!=" " && lista[110]!=" "  && lista[121]!="   "){
                d5++;
                if(w%2==0 && d5==1){
                    lista[109]=" A ";

                }
                if(w%2!=0 && d5==1){
                    lista[109]=" B ";

                }
                if(d5==1){
                    w++;
                }
            }
            if(lista[99]!="   " && lista[110]!=" " && lista[112]!=" "  && lista[123]!="   "){
                a6++;
                if(w%2==0 && a6==1){
                    lista[111]=" A ";

                }
                if(w%2!=0 && a6==1){
                    lista[111]=" B ";

                }
                if(a6==1){
                    w++;
                }
            }
            if(lista[101]!="   " && lista[112]!=" " && lista[114]!=" "  && lista[125]!="   "){
                b6++;
                if(w%2==0 && b6==1){
                    lista[113]=" A ";

                }
                if(w%2!=0 && b6==1){
                    lista[113]=" B ";

                }
                if(b6==1){
                    w++;
                }
            }
            if(lista[103]!="   " && lista[114]!=" " && lista[116]!=" "  && lista[127]!="   "){
                c6++;
                if(w%2==0 && c6==1){
                    lista[115]=" A ";

                }
                if(w%2!=0 && c6==1){
                    lista[115]=" B ";

                }
                if(c6==1){
                    w++;
                }
            }
            if(lista[105]!="   " && lista[116]!=" " && lista[118]!=" "  && lista[129]!="   "){
                d6++;
                if(w%2==0 && d6==1){
                    lista[117]=" A ";

                }
                if(w%2!=0 && d6==1){
                    lista[117]=" B ";

                }
                if(d6==1){
                    w++;
                }
            }


        }

    };
};