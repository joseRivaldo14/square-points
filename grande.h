#include <iostream>
using namespace std;
class grande{
private:
    int coordenada_x=0;
    int coordenada_y=0;
public:
    grande()=default;
    void generate_tablero(){
        string lista[380];
        for (int i = 0; i < 20; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 40; i < 60; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 80; i < 100; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 120; i < 140; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 160; i < 180; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 200; i < 220; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 240; i < 260; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 280; i < 300; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 320; i < 340; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 360; i < 380; i += 2) {
            lista[i] = "+";
            lista[i + 1] = "   ";
        }
        for (int i = 20; i < 40; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 60; i < 80; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 100; i < 120; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 140; i < 160; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 180; i < 200; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 220; i < 240; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 260; i < 280; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 300; i < 320; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        for (int i = 340; i < 360; i += 2) {
            lista[i] = " ";
            lista[i + 1] = "   ";
        }
        int k = 1;
        int j = 1;
        int p = 0;
        int a = 0;
        int a1=0;
        int a2=0;
        int a3=0;
        int a4=0;
        int a5=0;
        int a6=0;
        int a7=0;
        int a8=0;
        int b=0;
        int b1=0;
        int b2=0;
        int b3=0;
        int b4=0;
        int b5=0;
        int b6=0;
        int b7=0;
        int b8=0;
        int c = 0;
        int c1=0;
        int c2=0;
        int c3=0;
        int c4=0;
        int c5=0;
        int c6=0;
        int c7=0;
        int c8=0;
        int d = 0;
        int d1=0;
        int d2=0;
        int d3=0;
        int d4=0;
        int d5=0;
        int d6=0;
        int d7=0;
        int d8=0;
        int e = 0;
        int e1=0;
        int e2=0;
        int e3=0;
        int e4=0;
        int e5=0;
        int e6=0;
        int e7=0;
        int e8=0;
        int f = 0;
        int f1=0;
        int f2=0;
        int f3=0;
        int f4=0;
        int f5=0;
        int f6=0;
        int f7=0;
        int f8=0;
        int g = 0;
        int g1=0;
        int g2=0;
        int g3=0;
        int g4=0;
        int g5=0;
        int g6=0;
        int g7=0;
        int g8=0;
        int h = 0;
        int h1=0;
        int h2=0;
        int h3=0;
        int h4=0;
        int h5=0;
        int h6=0;
        int h7=0;
        int h8=0;
        int i = 0;
        int i1=0;
        int i2=0;
        int i3=0;
        int i4=0;
        int i5=0;
        int i6=0;
        int i7=0;
        int i8=0;
        while (true) {
            for (int i = 0; i < 380; i++) {
                cout << lista[i];
                if (i == 18 * k + j) {
                    cout << endl;
                    k++;
                    j += 2;
                }
            }
            k = 1;
            j = 1;
            cout << endl;
            int x;
            int y;
            int x1;
            int y1;
            cout << "Ingrese fila de inicio: ";
            cin >> x;
            cout << endl;
            cout << "Ingrese columna de inicio: ";
            cin >> y;
            cout << endl;
            cout << "Ingrese fila de llegada: ";
            cin >> x1;
            cout << endl;
            cout << "Ingrese columna de llegada: ";
            cin >> y1;
            cout << endl;
            if (x == 1 && x == x1 && y < y1) {
                lista[y1 * 2 - 3] = "---";
                p++;
            }
            if (x == 2 && x == x1 && y < y1) {
                lista[y1 * 2 + 37] = "---";
                p++;
            }
            if (x == 3 && x == x1 && y < y1) {
                lista[y1 * 2 + 77] = "---";
                p++;
            }
            if (x == 4 && x == x1 && y < y1) {
                lista[y1 * 2 + 117] = "---";
                p++;
            }
            if (x == 5 && x == x1 && y < y1) {
                lista[y1 * 2 + 157] = "---";
                p++;
            }
            if (x == 6 && x == x1 && y < y1) {
                lista[y1 * 2 + 197] = "---";
                p++;
            }
            if (x == 7 && x == x1 && y < y1) {
                lista[y1 * 2 + 237] = "---";
                p++;
            }
            if (x == 8 && x == x1 && y < y1) {
                lista[y1 * 2 + 277] = "---";
                p++;
            }
            if (x == 9 && x == x1 && y < y1) {
                lista[y1 * 2 + 317] = "---";
                p++;
            }
            if (x == 10 && x == x1 && y < y1) {
                lista[y1 * 2 + 357] = "---";
                p++;
            }
            if (x == 1 && x == x1 && y > y1) {
                lista[y * 2 - 3] = "---";
                p++;
            }
            if (x == 2 && x == x1 && y > y1) {
                lista[y * 2 + 37] = "---";
                p++;
            }
            if (x == 3 && x == x1 && y > y1) {
                lista[y * 2 + 77] = "---";
                p++;
            }
            if (x == 4 && x == x1 && y > y1) {
                lista[y * 2 + 117] = "---";
                p++;
            }
            if (x == 5 && x == x1 && y > y1) {
                lista[y * 2 + 157] = "---";
                p++;
            }
            if (x == 6 && x == x1 && y > y1) {
                lista[y * 2 + 197] = "---";
                p++;
            }
            if (x == 7 && x == x1 && y > y1) {
                lista[y * 2 + 237] = "---";
                p++;
            }
            if (x == 8 && x == x1 && y > y1) {
                lista[y * 2 + 277] = "---";
                p++;
            }
            if (x == 9 && x == x1 && y > y1) {
                lista[y * 2 + 317] = "---";
                p++;
            }
            if (x == 10 && x == x1 && y > y1) {
                lista[y * 2 + 357] = "---";
                p++;
            }
            if (y == 1 && y == y1 && x > x1) {
                lista[40 * x - 60] = "|";
                p++;
            }
            if (y == 2 && y == y1 && x > x1) {
                lista[40 * x - 58] = "|";
                p++;
            }
            if (y == 3 && y == y1 && x > x1) {
                lista[40 * x - 56] = "|";
                p++;
            }
            if (y == 4 && y == y1 && x > x1) {
                lista[40 * x - 54] = "|";
                p++;
            }
            if (y == 5 && y == y1 && x > x1) {
                lista[40 * x - 52] = "|";
                p++;
            }
            if (y == 6 && y == y1 && x > x1) {
                lista[40 * x - 50] = "|";
                p++;
            }
            if (y == 7 && y == y1 && x > x1) {
                lista[40 * x - 48] = "|";
                p++;
            }
            if (y == 8 && y == y1 && x > x1) {
                lista[40 * x - 46] = "|";
                p++;
            }
            if (y == 9 && y == y1 && x > x1) {
                lista[40 * x - 44] = "|";
                p++;
            }
            if (y == 10 && y == y1 && x > x1) {
                lista[40 * x - 42] = "|";
                p++;
            }
            if (y == 1 && y == y1 && x < x1) {
                lista[40 * x1 - 60] = "|";
                p++;
            }
            if (y == 2 && y == y1 && x < x1) {
                lista[40 * x1 - 58] = "|";
                p++;
            }
            if (y == 3 && y == y1 && x < x1) {
                lista[40 * x1 - 56] = "|";
                p++;
            }
            if (y == 4 && y == y1 && x < x1) {
                lista[40 * x1 - 54] = "|";
                p++;
            }
            if (y == 5 && y == y1 && x < x1) {
                lista[40 * x1 - 52] = "|";
                p++;
            }
            if (y == 6 && y == y1 && x < x1) {
                lista[40 * x1 - 50] = "|";
                p++;
            }
            if (y == 7 && y == y1 && x < x1) {
                lista[40 * x1 - 48] = "|";
                p++;
            }
            if (y == 8 && y == y1 && x < x1) {
                lista[40 * x1 - 46] = "|";
                p++;
            }
            if (y == 9 && y == y1 && x < x1) {
                lista[40 * x1 - 44] = "|";
                p++;
            }
            if (y == 10 && y == y1 && x < x1) {
                lista[40 * x1 - 42] = "|";
                p++;
            }
            if (lista[1] != "   " && lista[20] != " " && lista[22] != " " && lista[41] != "   ") {
                a++;
                if (p % 2 == 0 && a == 1) {
                    lista[21] = " B ";
                }
                if (p % 2 != 0 && a == 1) {
                    lista[21] = " A ";
                }
                if (a == 1) {
                    p++;
                }
            }
            if (lista[3] != "   " && lista[22] != " " && lista[24] != " " && lista[43] != "   ") {
                a1++;
                if (p % 2 == 0 && a1 == 1) {
                    lista[23] = " B ";
                }
                if (p % 2 != 0 && a1 == 1) {
                    lista[23] = " A ";
                }
                if (a1 == 1) {
                    p++;
                }
            }
            if (lista[5] != "   " && lista[24] != " " && lista[26] != " " && lista[45] != "   ") {
                a2++;
                if (p % 2 == 0 && a2 == 1) {
                    lista[25] = " B ";
                }
                if (p % 2 != 0 && a2 == 1) {
                    lista[25] = " A ";
                }
                if (a2 == 1) {
                    p++;
                }
            }
            if (lista[7] != "   " && lista[26] != " " && lista[28] != " " && lista[47] != "   ") {
                a3++;
                if (p % 2 == 0 && a3 == 1) {
                    lista[27] = " B ";
                }
                if (p % 2 != 0 && a3 == 1) {
                    lista[27] = " A ";
                }
                if (a3 == 1) {
                    p++;
                }
            }
            if (lista[9] != "   " && lista[28] != " " && lista[30] != " " && lista[49] != "   ") {
                a4++;
                if (p % 2 == 0 && a4 == 1) {
                    lista[29] = " B ";
                }
                if (p % 2 != 0 && a4 == 1) {
                    lista[29] = " A ";
                }
                if (a4 == 1) {
                    p++;
                }
            }
            if (lista[11] != "   " && lista[30] != " " && lista[32] != " " && lista[51] != "   ") {
                a5++;
                if (p % 2 == 0 && a5 == 1) {
                    lista[31] = " B ";
                }
                if (p % 2 != 0 && a5 == 1) {
                    lista[31] = " A ";
                }
                if (a5 == 1) {
                    p++;
                }
            }
            if (lista[13] != "   " && lista[32] != " " && lista[34] != " " && lista[53] != "   ") {
                a6++;
                if (p % 2 == 0 && a6 == 1) {
                    lista[33] = " B ";
                }
                if (p % 2 != 0 && a6 == 1) {
                    lista[33] = " A ";
                }
                if (a6 == 1) {
                    p++;
                }
            }
            if (lista[15] != "   " && lista[34] != " " && lista[36] != " " && lista[55] != "   ") {
                a7++;
                if (p % 2 == 0 && a7 == 1) {
                    lista[35] = " B ";
                }
                if (p % 2 != 0 && a7 == 1) {
                    lista[35] = " A ";
                }
                if (a7 == 1) {
                    p++;
                }
            }
            if (lista[17] != "   " && lista[36] != " " && lista[38] != " " && lista[57] != "   ") {
                a8++;
                if (p % 2 == 0 && a8 == 1) {
                    lista[37] = " B ";
                }
                if (p % 2 != 0 && a8 == 1) {
                    lista[37] = " A ";
                }
                if(a8==1){
                    p++;
                }
            }
            if (lista[41] != "   " && lista[60] != " " && lista[62] != " " && lista[81] != "   ") {
                b++;
                if (p % 2 == 0 && b == 1) {
                    lista[61] = " B ";
                }
                if (p % 2 != 0 && b == 1) {
                    lista[61] = " A ";
                }
                if (b == 1) {
                    p++;
                }
            }
            if (lista[43] != "   " && lista[62] != " " && lista[64] != " " && lista[83] != "   ") {
                b1++;
                if (p % 2 == 0 && b1 == 1) {
                    lista[63] = " B ";
                }
                if (p % 2 != 0 && b1 == 1) {
                    lista[63] = " A ";
                }
                if (b1 == 1) {
                    p++;
                }
            }
            if (lista[45] != "   " && lista[64] != " " && lista[66] != " " && lista[85] != "   ") {
                b2++;
                if (p % 2 == 0 && b2 == 1) {
                    lista[65] = " B ";
                }
                if (p % 2 != 0 && b2 == 1) {
                    lista[65] = " A ";
                }
                if (b2 == 1) {
                    p++;
                }
            }
            if (lista[47] != "   " && lista[66] != " " && lista[68] != " " && lista[87] != "   ") {
                b3++;
                if (p % 2 == 0 && b3 == 1) {
                    lista[67] = " B ";
                }
                if (p % 2 != 0 && b3 == 1) {
                    lista[67] = " A ";
                }
                if (b3 == 1) {
                    p++;
                }
            }
            if (lista[49] != "   " && lista[68] != " " && lista[70] != " " && lista[89] != "   ") {
                b4++;
                if (p % 2 == 0 && b4 == 1) {
                    lista[69] = " B ";
                }
                if (p % 2 != 0 && b4 == 1) {
                    lista[69] = " A ";
                }
                if (b4 == 1) {
                    p++;
                }
            }
            if (lista[51] != "   " && lista[70] != " " && lista[72] != " " && lista[91] != "   ") {
                b5++;
                if (p % 2 == 0 && b5 == 1) {
                    lista[71] = " B ";
                }
                if (p % 2 != 0 && b5 == 1) {
                    lista[71] = " A ";
                }
                if (b5 == 1) {
                    p++;
                }
            }
            if (lista[53] != "   " && lista[72] != " " && lista[74] != " " && lista[93] != "   ") {
                b6++;
                if (p % 2 == 0 && b6 == 1) {
                    lista[73] = " B ";
                }
                if (p % 2 != 0 && b6 == 1) {
                    lista[73] = " A ";
                }
                if (b6 == 1) {
                    p++;
                }
            }
            if (lista[55] != "   " && lista[74] != " " && lista[76] != " " && lista[95] != "   ") {
                b7++;
                if (p % 2 == 0 && b7 == 1) {
                    lista[75] = " B ";
                }
                if (p % 2 != 0 && b7 == 1) {
                    lista[75] = " A ";
                }
                if (b7 == 1) {
                    p++;
                }
            }
            if (lista[57] != "   " && lista[76] != " " && lista[78] != " " && lista[97] != "   ") {
                b8++;
                if (p % 2 == 0 && b8 == 1) {
                    lista[77] = " B ";
                }
                if (p % 2 != 0 && b8 == 1) {
                    lista[77] = " A ";
                }
                if(b8==1){
                    p++;
                }
            }
            if (lista[81] != "   " && lista[100] != " " && lista[102] != " " && lista[121] != "   ") {
                c++;
                if (p % 2 == 0 && c == 1) {
                    lista[101] = " B ";
                }
                if (p % 2 != 0 && c == 1) {
                    lista[101] = " A ";
                }
                if (c == 1) {
                    p++;
                }
            }
            if (lista[83] != "   " && lista[102] != " " && lista[104] != " " && lista[123] != "   ") {
                c1++;
                if (p % 2 == 0 && c1 == 1) {
                    lista[103] = " B ";
                }
                if (p % 2 != 0 && c1 == 1) {
                    lista[103] = " A ";
                }
                if (c1 == 1) {
                    p++;
                }
            }
            if (lista[85] != "   " && lista[104] != " " && lista[106] != " " && lista[125] != "   ") {
                c2++;
                if (p % 2 == 0 && c2 == 1) {
                    lista[105] = " B ";
                }
                if (p % 2 != 0 && c2 == 1) {
                    lista[105] = " A ";
                }
                if (c2 == 1) {
                    p++;
                }
            }
            if (lista[87] != "   " && lista[106] != " " && lista[108] != " " && lista[127] != "   ") {
                c3++;
                if (p % 2 == 0 && c3 == 1) {
                    lista[107] = " B ";
                }
                if (p % 2 != 0 && c3 == 1) {
                    lista[107] = " A ";
                }
                if (c3 == 1) {
                    p++;
                }
            }
            if (lista[89] != "   " && lista[108] != " " && lista[110] != " " && lista[129] != "   ") {
                c4++;
                if (p % 2 == 0 && c4 == 1) {
                    lista[109] = " B ";
                }
                if (p % 2 != 0 && c4 == 1) {
                    lista[109] = " A ";
                }
                if (c4 == 1) {
                    p++;
                }
            }
            if (lista[91] != "   " && lista[110] != " " && lista[112] != " " && lista[131] != "   ") {
                c5++;
                if (p % 2 == 0 && c5 == 1) {
                    lista[111] = " B ";
                }
                if (p % 2 != 0 && c5 == 1) {
                    lista[111] = " A ";
                }
                if (c5 == 1) {
                    p++;
                }
            }
            if (lista[93] != "   " && lista[112] != " " && lista[114] != " " && lista[133] != "   ") {
                c6++;
                if (p % 2 == 0 && c6 == 1) {
                    lista[113] = " B ";
                }
                if (p % 2 != 0 && c6 == 1) {
                    lista[113] = " A ";
                }
                if (c6 == 1) {
                    p++;
                }
            }
            if (lista[95] != "   " && lista[114] != " " && lista[116] != " " && lista[135] != "   ") {
                c7++;
                if (p % 2 == 0 && c7 == 1) {
                    lista[115] = " B ";
                }
                if (p % 2 != 0 && c7 == 1) {
                    lista[115] = " A ";
                }
                if (c7 == 1) {
                    p++;
                }
            }
            if (lista[97] != "   " && lista[116] != " " && lista[118] != " " && lista[137] != "   ") {
                c8++;
                if (p % 2 == 0 && c8 == 1) {
                    lista[117] = " B ";
                }
                if (p % 2 != 0 && c8 == 1) {
                    lista[117] = " A ";
                }
                if(c8==1){
                    p++;
                }
            }
            if (lista[121] != "   " && lista[140] != " " && lista[142] != " " && lista[161] != "   ") {
                d++;
                if (p % 2 == 0 && d == 1) {
                    lista[141] = " B ";
                }
                if (p % 2 != 0 && d == 1) {
                    lista[141] = " A ";
                }
                if (d == 1) {
                    p++;
                }
            }
            if (lista[123] != "   " && lista[142] != " " && lista[144] != " " && lista[163] != "   ") {
                d1++;
                if (p % 2 == 0 && d1 == 1) {
                    lista[143] = " B ";
                }
                if (p % 2 != 0 && d1 == 1) {
                    lista[143] = " A ";
                }
                if (d1 == 1) {
                    p++;
                }
            }
            if (lista[125] != "   " && lista[144] != " " && lista[146] != " " && lista[165] != "   ") {
                d2++;
                if (p % 2 == 0 && d2 == 1) {
                    lista[145] = " B ";
                }
                if (p % 2 != 0 && d2 == 1) {
                    lista[145] = " A ";
                }
                if (d2 == 1) {
                    p++;
                }
            }
            if (lista[127] != "   " && lista[146] != " " && lista[148] != " " && lista[167] != "   ") {
                d3++;
                if (p % 2 == 0 && d3 == 1) {
                    lista[147] = " B ";
                }
                if (p % 2 != 0 && d3 == 1) {
                    lista[147] = " A ";
                }
                if (d3 == 1) {
                    p++;
                }
            }
            if (lista[129] != "   " && lista[148] != " " && lista[150] != " " && lista[169] != "   ") {
                d4++;
                if (p % 2 == 0 && d4 == 1) {
                    lista[149] = " B ";
                }
                if (p % 2 != 0 && d4 == 1) {
                    lista[149] = " A ";
                }
                if (d4 == 1) {
                    p++;
                }
            }
            if (lista[131] != "   " && lista[150] != " " && lista[152] != " " && lista[171] != "   ") {
                d5++;
                if (p % 2 == 0 && d5 == 1) {
                    lista[151] = " B ";
                }
                if (p % 2 != 0 && d5 == 1) {
                    lista[151] = " A ";
                }
                if (d5 == 1) {
                    p++;
                }
            }
            if (lista[133] != "   " && lista[152] != " " && lista[154] != " " && lista[173] != "   ") {
                d6++;
                if (p % 2 == 0 && d6 == 1) {
                    lista[153] = " B ";
                }
                if (p % 2 != 0 && d6 == 1) {
                    lista[153] = " A ";
                }
                if (d6 == 1) {
                    p++;
                }
            }
            if (lista[135] != "   " && lista[154] != " " && lista[156] != " " && lista[175] != "   ") {
                d7++;
                if (p % 2 == 0 && d7 == 1) {
                    lista[155] = " B ";
                }
                if (p % 2 != 0 && d7 == 1) {
                    lista[155] = " A ";
                }
                if (d7 == 1) {
                    p++;
                }
            }
            if (lista[137] != "   " && lista[156] != " " && lista[158] != " " && lista[177] != "   ") {
                d8++;
                if (p % 2 == 0 && d8 == 1) {
                    lista[157] = " B ";
                }
                if (p % 2 != 0 && d8 == 1) {
                    lista[157] = " A ";
                }
                if(d8==1){
                    p++;
                }
            }
            if (lista[161] != "   " && lista[180] != " " && lista[182] != " " && lista[201] != "   ") {
                e++;
                if (p % 2 == 0 && e == 1) {
                    lista[181] = " B ";
                }
                if (p % 2 != 0 && e == 1) {
                    lista[181] = " A ";
                }
                if (e == 1) {
                    p++;
                }
            }
            if (lista[163] != "   " && lista[182] != " " && lista[184] != " " && lista[203] != "   ") {
                e1++;
                if (p % 2 == 0 && e1 == 1) {
                    lista[183] = " B ";
                }
                if (p % 2 != 0 && e1 == 1) {
                    lista[183] = " A ";
                }
                if (e1 == 1) {
                    p++;
                }
            }
            if (lista[165] != "   " && lista[184] != " " && lista[186] != " " && lista[205] != "   ") {
                e2++;
                if (p % 2 == 0 && e2 == 1) {
                    lista[25] = " B ";
                }
                if (p % 2 != 0 && e2 == 1) {
                    lista[25] = " A ";
                }
                if (e2 == 1) {
                    p++;
                }
            }
            if (lista[167] != "   " && lista[186] != " " && lista[188] != " " && lista[207] != "   ") {
                e3++;
                if (p % 2 == 0 && e3 == 1) {
                    lista[187] = " B ";
                }
                if (p % 2 != 0 && e3 == 1) {
                    lista[187] = " A ";
                }
                if (e3 == 1) {
                    p++;
                }
            }
            if (lista[169] != "   " && lista[188] != " " && lista[190] != " " && lista[209] != "   ") {
                e4++;
                if (p % 2 == 0 && e4 == 1) {
                    lista[189] = " B ";
                }
                if (p % 2 != 0 && e4 == 1) {
                    lista[189] = " A ";
                }
                if (e4 == 1) {
                    p++;
                }
            }
            if (lista[171] != "   " && lista[190] != " " && lista[192] != " " && lista[211] != "   ") {
                e5++;
                if (p % 2 == 0 && e5 == 1) {
                    lista[191] = " B ";
                }
                if (p % 2 != 0 && e5 == 1) {
                    lista[191] = " A ";
                }
                if (e5 == 1) {
                    p++;
                }
            }
            if (lista[173] != "   " && lista[192] != " " && lista[194] != " " && lista[213] != "   ") {
                e6++;
                if (p % 2 == 0 && e6 == 1) {
                    lista[193] = " B ";
                }
                if (p % 2 != 0 && e6 == 1) {
                    lista[193] = " A ";
                }
                if (e6 == 1) {
                    p++;
                }
            }
            if (lista[175] != "   " && lista[194] != " " && lista[196] != " " && lista[215] != "   ") {
                e7++;
                if (p % 2 == 0 && e7 == 1) {
                    lista[195] = " B ";
                }
                if (p % 2 != 0 && e7 == 1) {
                    lista[195] = " A ";
                }
                if (e7 == 1) {
                    p++;
                }
            }
            if (lista[177] != "   " && lista[196] != " " && lista[198] != " " && lista[217] != "   ") {
                e8++;
                if (p % 2 == 0 && e8 == 1) {
                    lista[197] = " B ";
                }
                if (p % 2 != 0 && e8 == 1) {
                    lista[197] = " A ";
                }
                if(e8==1){
                    p++;
                }
            }
            if (lista[201] != "   " && lista[220] != " " && lista[222] != " " && lista[241] != "   ") {
                f++;
                if (p % 2 == 0 && f == 1) {
                    lista[221] = " B ";
                }
                if (p % 2 != 0 && f == 1) {
                    lista[221] = " A ";
                }
                if (f == 1) {
                    p++;
                }
            }
            if (lista[203] != "   " && lista[222] != " " && lista[224] != " " && lista[243] != "   ") {
                f1++;
                if (p % 2 == 0 && f1 == 1) {
                    lista[223] = " B ";
                }
                if (p % 2 != 0 && f1 == 1) {
                    lista[223] = " A ";
                }
                if (f1 == 1) {
                    p++;
                }
            }
            if (lista[205] != "   " && lista[224] != " " && lista[226] != " " && lista[245] != "   ") {
                f2++;
                if (p % 2 == 0 && f2 == 1) {
                    lista[225] = " B ";
                }
                if (p % 2 != 0 && f2 == 1) {
                    lista[225] = " A ";
                }
                if (f2 == 1) {
                    p++;
                }
            }
            if (lista[207] != "   " && lista[226] != " " && lista[228] != " " && lista[247] != "   ") {
                f3++;
                if (p % 2 == 0 && f3 == 1) {
                    lista[227] = " B ";
                }
                if (p % 2 != 0 && f3 == 1) {
                    lista[227] = " A ";
                }
                if (f3 == 1) {
                    p++;
                }
            }
            if (lista[209] != "   " && lista[228] != " " && lista[230] != " " && lista[249] != "   ") {
                f4++;
                if (p % 2 == 0 && f4 == 1) {
                    lista[229] = " B ";
                }
                if (p % 2 != 0 && f4 == 1) {
                    lista[229] = " A ";
                }
                if (f4 == 1) {
                    p++;
                }
            }
            if (lista[211] != "   " && lista[230] != " " && lista[232] != " " && lista[251] != "   ") {
                f5++;
                if (p % 2 == 0 && f5 == 1) {
                    lista[231] = " B ";
                }
                if (p % 2 != 0 && f5 == 1) {
                    lista[231] = " A ";
                }
                if (f5 == 1) {
                    p++;
                }
            }
            if (lista[213] != "   " && lista[232] != " " && lista[234] != " " && lista[253] != "   ") {
                f6++;
                if (p % 2 == 0 && f6 == 1) {
                    lista[233] = " B ";
                }
                if (p % 2 != 0 && f6 == 1) {
                    lista[233] = " A ";
                }
                if (f6 == 1) {
                    p++;
                }
            }
            if (lista[215] != "   " && lista[234] != " " && lista[236] != " " && lista[255] != "   ") {
                f7++;
                if (p % 2 == 0 && f7 == 1) {
                    lista[235] = " B ";
                }
                if (p % 2 != 0 && f7 == 1) {
                    lista[235] = " A ";
                }
                if (f7 == 1) {
                    p++;
                }
            }
            if (lista[217] != "   " && lista[236] != " " && lista[238] != " " && lista[257] != "   ") {
                f8++;
                if (p % 2 == 0 && f8 == 1) {
                    lista[237] = " B ";
                }
                if (p % 2 != 0 && f8 == 1) {
                    lista[237] = " A ";
                }
                if(f8==1){
                    p++;
                }
            }
            if (lista[241] != "   " && lista[260] != " " && lista[262] != " " && lista[281] != "   ") {
                g++;
                if (p % 2 == 0 && g == 1) {
                    lista[261] = " B ";
                }
                if (p % 2 != 0 && g == 1) {
                    lista[261] = " A ";
                }
                if (g == 1) {
                    p++;
                }
            }
            if (lista[243] != "   " && lista[262] != " " && lista[264] != " " && lista[283] != "   ") {
                g1++;
                if (p % 2 == 0 && g1 == 1) {
                    lista[263] = " B ";
                }
                if (p % 2 != 0 && g1 == 1) {
                    lista[263] = " A ";
                }
                if (g1 == 1) {
                    p++;
                }
            }
            if (lista[245] != "   " && lista[264] != " " && lista[266] != " " && lista[285] != "   ") {
                g2++;
                if (p % 2 == 0 && g2 == 1) {
                    lista[265] = " B ";
                }
                if (p % 2 != 0 && g2 == 1) {
                    lista[265] = " A ";
                }
                if (g2 == 1) {
                    p++;
                }
            }
            if (lista[247] != "   " && lista[266] != " " && lista[268] != " " && lista[287] != "   ") {
                g3++;
                if (p % 2 == 0 && g3 == 1) {
                    lista[267] = " B ";
                }
                if (p % 2 != 0 && g3 == 1) {
                    lista[267] = " A ";
                }
                if (g3 == 1) {
                    p++;
                }
            }
            if (lista[249] != "   " && lista[268] != " " && lista[270] != " " && lista[289] != "   ") {
                g4++;
                if (p % 2 == 0 && g4 == 1) {
                    lista[269] = " B ";
                }
                if (p % 2 != 0 && g4 == 1) {
                    lista[269] = " A ";
                }
                if (g4 == 1) {
                    p++;
                }
            }
            if (lista[251] != "   " && lista[270] != " " && lista[272] != " " && lista[291] != "   ") {
                g5++;
                if (p % 2 == 0 && g5 == 1) {
                    lista[271] = " B ";
                }
                if (p % 2 != 0 && g5 == 1) {
                    lista[271] = " A ";
                }
                if (g5 == 1) {
                    p++;
                }
            }
            if (lista[253] != "   " && lista[272] != " " && lista[274] != " " && lista[293] != "   ") {
                g6++;
                if (p % 2 == 0 && g6 == 1) {
                    lista[273] = " B ";
                }
                if (p % 2 != 0 && g6 == 1) {
                    lista[273] = " A ";
                }
                if (g6 == 1) {
                    p++;
                }
            }
            if (lista[255] != "   " && lista[274] != " " && lista[276] != " " && lista[295] != "   ") {
                g7++;
                if (p % 2 == 0 && g7 == 1) {
                    lista[275] = " B ";
                }
                if (p % 2 != 0 && g7 == 1) {
                    lista[275] = " A ";
                }
                if (g7 == 1) {
                    p++;
                }
            }
            if (lista[257] != "   " && lista[276] != " " && lista[278] != " " && lista[297] != "   ") {
                g8++;
                if (p % 2 == 0 && g8 == 1) {
                    lista[277] = " B ";
                }
                if (p % 2 != 0 && g8 == 1) {
                    lista[277] = " A ";
                }
                if(g8==1){
                    p++;
                }
            }
            if (lista[281] != "   " && lista[300] != " " && lista[302] != " " && lista[321] != "   ") {
                h++;
                if (p % 2 == 0 && h == 1) {
                    lista[301] = " B ";
                }
                if (p % 2 != 0 && h == 1) {
                    lista[301] = " A ";
                }
                if (h == 1) {
                    p++;
                }
            }
            if (lista[283] != "   " && lista[302] != " " && lista[304] != " " && lista[323] != "   ") {
                h1++;
                if (p % 2 == 0 && h1 == 1) {
                    lista[303] = " B ";
                }
                if (p % 2 != 0 && h1 == 1) {
                    lista[303] = " A ";
                }
                if (h1 == 1) {
                    p++;
                }
            }
            if (lista[285] != "   " && lista[304] != " " && lista[306] != " " && lista[325] != "   ") {
                h2++;
                if (p % 2 == 0 && h2 == 1) {
                    lista[305] = " B ";
                }
                if (p % 2 != 0 && h2 == 1) {
                    lista[305] = " A ";
                }
                if (h2 == 1) {
                    p++;
                }
            }
            if (lista[287] != "   " && lista[306] != " " && lista[308] != " " && lista[327] != "   ") {
                h3++;
                if (p % 2 == 0 && h3 == 1) {
                    lista[307] = " B ";
                }
                if (p % 2 != 0 && h3 == 1) {
                    lista[307] = " A ";
                }
                if (h3 == 1) {
                    p++;
                }
            }
            if (lista[289] != "   " && lista[308] != " " && lista[310] != " " && lista[329] != "   ") {
                h4++;
                if (p % 2 == 0 && h4 == 1) {
                    lista[309] = " B ";
                }
                if (p % 2 != 0 && h4 == 1) {
                    lista[309] = " A ";
                }
                if (h4 == 1) {
                    p++;
                }
            }
            if (lista[291] != "   " && lista[310] != " " && lista[312] != " " && lista[331] != "   ") {
                h5++;
                if (p % 2 == 0 && h5 == 1) {
                    lista[311] = " B ";
                }
                if (p % 2 != 0 && h5 == 1) {
                    lista[311] = " A ";
                }
                if (h5 == 1) {
                    p++;
                }
            }
            if (lista[293] != "   " && lista[312] != " " && lista[314] != " " && lista[333] != "   ") {
                h6++;
                if (p % 2 == 0 && h6 == 1) {
                    lista[313] = " B ";
                }
                if (p % 2 != 0 && h6 == 1) {
                    lista[313] = " A ";
                }
                if (h6 == 1) {
                    p++;
                }
            }
            if (lista[295] != "   " && lista[314] != " " && lista[316] != " " && lista[335] != "   ") {
                h7++;
                if (p % 2 == 0 && h7 == 1) {
                    lista[315] = " B ";
                }
                if (p % 2 != 0 && h7 == 1) {
                    lista[315] = " A ";
                }
                if (h7 == 1) {
                    p++;
                }
            }
            if (lista[297] != "   " && lista[316] != " " && lista[318] != " " && lista[337] != "   ") {
                h8++;
                if (p % 2 == 0 && h8 == 1) {
                    lista[317] = " B ";
                }
                if (p % 2 != 0 && h8 == 1) {
                    lista[317] = " A ";
                }
                if(h8==1){
                    p++;
                }
            }
            if (lista[321] != "   " && lista[340] != " " && lista[342] != " " && lista[361] != "   ") {
                i++;
                if (p % 2 == 0 && i == 1) {
                    lista[341] = " B ";
                }
                if (p % 2 != 0 && i == 1) {
                    lista[341] = " A ";
                }
                if (i == 1) {
                    p++;
                }
            }
            if (lista[323] != "   " && lista[342] != " " && lista[344] != " " && lista[63] != "   ") {
                i1++;
                if (p % 2 == 0 && i1 == 1) {
                    lista[343] = " B ";
                }
                if (p % 2 != 0 && i1 == 1) {
                    lista[343] = " A ";
                }
                if (i1 == 1) {
                    p++;
                }
            }
            if (lista[325] != "   " && lista[344] != " " && lista[346] != " " && lista[365] != "   ") {
                i2++;
                if (p % 2 == 0 && i2 == 1) {
                    lista[345] = " B ";
                }
                if (p % 2 != 0 && i2 == 1) {
                    lista[345] = " A ";
                }
                if (i2 == 1) {
                    p++;
                }
            }
            if (lista[327] != "   " && lista[346] != " " && lista[348] != " " && lista[367] != "   ") {
                i3++;
                if (p % 2 == 0 && i3 == 1) {
                    lista[347] = " B ";
                }
                if (p % 2 != 0 && i3 == 1) {
                    lista[347] = " A ";
                }
                if (i3 == 1) {
                    p++;
                }
            }
            if (lista[329] != "   " && lista[348] != " " && lista[350] != " " && lista[369] != "   ") {
                i4++;
                if (p % 2 == 0 && i4 == 1) {
                    lista[349] = " B ";
                }
                if (p % 2 != 0 && i4 == 1) {
                    lista[349] = " A ";
                }
                if (i4 == 1) {
                    p++;
                }
            }
            if (lista[331] != "   " && lista[350] != " " && lista[352] != " " && lista[371] != "   ") {
                i5++;
                if (p % 2 == 0 && i5 == 1) {
                    lista[351] = " B ";
                }
                if (p % 2 != 0 && i5 == 1) {
                    lista[351] = " A ";
                }
                if (i5 == 1) {
                    p++;
                }
            }
            if (lista[333] != "   " && lista[352] != " " && lista[354] != " " && lista[373] != "   ") {
                i6++;
                if (p % 2 == 0 && i6 == 1) {
                    lista[353] = " B ";
                }
                if (p % 2 != 0 && i6 == 1) {
                    lista[353] = " A ";
                }
                if (i6 == 1) {
                    p++;
                }
            }
            if (lista[335] != "   " && lista[354] != " " && lista[356] != " " && lista[375] != "   ") {
                i7++;
                if (p % 2 == 0 && i7 == 1) {
                    lista[355] = " B ";
                }
                if (p % 2 != 0 && i7 == 1) {
                    lista[355] = " A ";
                }
                if (i7 == 1) {
                    p++;
                }
            }
            if (lista[337] != "   " && lista[356] != " " && lista[358] != " " && lista[377] != "   ") {
                i8++;
                if (p % 2 == 0 && i8 == 1) {
                    lista[357] = " B ";
                }
                if (p % 2 != 0 && i8 == 1) {
                    lista[357] = " A ";
                }
                if(i8==1){
                    p++;
                }
            }
        }
    }
};
