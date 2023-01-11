#include <iostream>
#include <fstream>
#include <filesystem>
#include <map>
#include <algorithm>

using namespace std;
namespace fs = std::filesystem;


class action_respository {
    map<string, string> actions;
};

template <typename T>
map<T, T> vars;

void iterate_directory(string dir, string app_path){
    for (auto entry : fs::directory_iterator{dir}){
        if(entry.is_directory()){
            iterate_directory(entry.path(), app_path);
        }else{
            string path = entry.path();
            std::cout << app_path << '\n';
            size_t app_path_size = app_path.size();
            std::cout << app_path_size << '\n';

            path.erase(0, app_path_size + 1);
            std::cout << path << '\n';

            ifstream source_file;
            source_file.open(path,ios::out);cout << '.';
            if (source_file.is_open()){   //checking whether the file is open
                string source_line_element;
                while(getline(source_file, source_line_element)){

                    if(source_line_element.){

                    }

                    cout << '.';//read data from file object and put it into string.
                    std::string::iterator end_pos = std::remove(source_line_element.begin(), source_line_element.end(), ' ');
                    source_line_element.erase(end_pos, source_line_element.end());
                    cout << source_line_element << "\n"; //print the data of the string
                }
                source_file.close(); //close the file object.
            }
        }
    }
}

int main(){

    /*
        read file
        if annotation
            create annotation object
        if method
            create method object

     */

    cout << "hi\n";
    string app_path = fs::current_path().parent_path().generic_string();
    string path = app_path + "/basic";
    iterate_directory(path, app_path );


}


