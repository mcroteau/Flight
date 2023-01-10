#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main(){

    /*
        read file
        if annotation
            create annotation object
        if method
            create method object
     */

    cout << "hi";

    ifstream sources("source");

    const std::filesystem::path sandbox{"output"};
    std::filesystem::create_directories(sandbox);

    std::cout << "directory_iterator:\n";
    // directory_iterator can be iterated using a range-for loop
    for (auto dir_entry : std::filesystem::directory_iterator{sandbox})
    {
        std::cout << dir_entry.path() << '\n';
    }


    // create files of different kinds
    fs::create_directory("output");


    // cleanup
    fs::remove_all("source");
}