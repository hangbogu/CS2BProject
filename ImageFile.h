#ifndef __FileSystem_v1__ImageFile__
#define __FileSystem_v1__ImageFile__
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
#include "File.h"

using namespace std;

enum color_space_enum
{
    RGB,
    CMYK,
    Gray
};

class ImageFile : public File
{
private:
    int bit_depth_;
    int*  resolution_;
    int* dimensions_;
    color_space_enum color_space_;
public:
    ImageFile();
    ImageFile(string name, int size_KB, FileFormat file_format, string file_path, bool read_only, int bit_depth, int resolution[2], int dimensions[2], string color_space);
    virtual ~ImageFile();
    
    void set_bit_depth(int bit_depth);
    void set_resolution(int resolution [2]);
    void set_dimension(int dimensions [2]);
    void set_color_space(color_space_enum color_space);
    int get_bit_depth() const;
    int*  get_resolution() const;
    int*  get_dimensions() const;
    color_space_enum get_color_space() const;
    virtual void Display() const;
    virtual char get_type() const;
    color_space_enum StringToColorEnum(string) const;
};
#endif
