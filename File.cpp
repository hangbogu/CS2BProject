#include "File.h"

File::File() {
   name_ = "";
   size_KB_ = 0;
   file_path_ = "";
   read_only_ = false;
   file_format_ = unknown;
}

File::File(string new_name, int new_size, FileFormat FileFormatEnum, string new_path, bool is_read_only){
   name_ = new_name;
   size_KB_ = new_size;
   file_path_ = new_path;
   file_format_ = FileFormatEnum;
   read_only_ = is_read_only;
}

File::~File(){
   cout << "File " << name_ << "has been destroyed...\n";
}

void File::Open() const
{
   string path = file_path_ + name_ + ".txt";

   // convert file path from string to LPCWSTR
   wstring stemp = wstring(path.begin(), path.end());
   LPCWSTR sw = stemp.c_str();

   // open the file with default program
   ShellExecute(0, 0, sw, 0, 0 , SW_SHOW );
}

bool File::operator== (const File& other_file) const{
   return (name_ == other_file.name_);
}

void File::Display() const {
   cout << "Name <" << name_ << "> "
        << "Size <" << size_KB_ << "KB> "
        << "Path <" << file_path_ << "> "
        << "Format <" << file_format_ << "> "
        << "ReadOnly <" << (read_only_ ? "Yes":"No")  << ">";
}

void File::set_name(string new_name){ //removed RenameFile in favor for mutator
   name_ = new_name;
}

string File::get_name()const{
   return name_;
}

void File::set_size_KB(int new_size){
   size_KB_ = new_size;
}

int File::get_size_KB()const{
   return size_KB_;
}

void File::set_file_path(string new_path){
   file_path_ = new_path;
}

string File::get_file_path()const{
   return file_path_;
}

void File::set_read_only(bool is_read_only){
   read_only_ = is_read_only;
}

bool File::get_read_only()const{
   return read_only_;
}

void File::set_format(FileFormat new_format){
   file_format_ = new_format;
}

FileFormat File::get_format() const{
   return file_format_;
}

char File::get_type() const {
   return 'U'; // Unknown file type
}
