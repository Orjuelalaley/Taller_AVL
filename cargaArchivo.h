#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "ArbolAVL.h"
#include <cstring>
using namespace std;

string CargarArchivo(string nomarchivo)
{
    char linea[20];
    vector<string> vec;
    int conta = 0;
    ArbolAVL arbol;
    int num = 0;
    const char *delim = " ";
    ifstream archivo(nomarchivo);
    string error = "error en la lectura del archivo";
    if (!archivo)
    {
        return error;
    }else{
        while (archivo)
        {
            archivo.getline(linea, 20, '\n');

            if (linea[0] == 'A')
            {
                string s(1, linea[2]);
                num = stoi(s);
                arbol.insertar(num);
            }else if (linea[0] == 'E')
            {
                cout <<"eliminaito\n";
            }
        }
    }
    archivo.close();
    return "pollito";
}