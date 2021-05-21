#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int casos, cont = 0, casa = 0, escritorio = 0, cont_escritorio = 0, cont_casa = 0;
    string caminho;
    cin >> casos;
    while (cont < casos){
        cin >> caminho;
        if (caminho[0] == 'c'){
            if (cont_casa == 0){
                cont_escritorio++;
                casa++;
            }else{
                cont_casa--;
                cont_escritorio++;
            }
        }
        cin >> caminho;
        if (caminho[0] == 'c'){
            if (cont_escritorio == 0){
                cont_casa++;
                escritorio++;
            }else{
                cont_escritorio--;
                cont_casa++;
            }
        }
        cont++;
    }
    cout << casa << " " << escritorio << endl;
    return 0;
}
