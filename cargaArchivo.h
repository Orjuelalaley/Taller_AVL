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
    int num;
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
            vec.push_back(linea);
        }
       for (int i = 0; i < vec.size(); i++)
       {
           char *palabra = strtok(vec[i],delim);
       }
       
        
    }
    archivo.close();
    return "pollito";
}