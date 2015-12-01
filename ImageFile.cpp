#include "ImageFile.h"

ImageFile::ImageFile() : File(), bit_depth_(8), resolution_(0), dimensions_(0), color_space_(Gray) {}

ImageFile::ImageFile(string name, int size_KB, FileFormat file_format, string file_path, bool read_only, int bit_depth, int resolution[2], int dimensions[2], string color_space) : 
   File(name, size_KB, file_format, file_path, read_only), bit_depth_(bit_depth), color_space_(StringToColorEnum(color_space))
{
   resolution_[0] = *resolution;
   resolution_[1] = *++resolution;
   dimensions_[0] = *dimensions;
   dimensions_[1] = *++dimensions;
}

ImageFile::~ImageFile(){
    File::~File();
}

void ImageFile::set_bit_depth(int bit_depth){
    bit_depth_ = bit_depth;
}

void ImageFile::set_color_space(color_space_enum color_space){
    color_space_ = color_space;
}

void ImageFile::set_dimension(int dimensions[2]) {
    dimensions_ = dimensions;
}

void ImageFile::set_resolution(int resolution[2]) {
    resolution_ = resolution;
}

int ImageFile::get_bit_depth() const {
    return bit_depth_;
}

int* ImageFile::get_resolution() const {
    return resolution_;
}

int* ImageFile::get_dimensions() const {
    return dimensions_;
}

color_space_enum ImageFile::get_color_space() const {
    return color_space_;
}

color_space_enum ImageFile::StringToColorEnum(string colorString) const {
    if (colorString == "RGB")
        return RGB;
    else if (colorString == "CMYK")
        return CMYK;
    else
        return Gray;
}

void ImageFile::Display() const{
    File::Display();
    ostringstream os;
    os << "BitDepth <" << bit_depth_ 
       << "> Resolution < " << resolution_[0] << "x" << resolution_[1] 
       << "> Size <" << dimensions_[0] << "x" << dimensions_[1] 
       << "> ColorSpace: <" << color_space_ << ">";

    cout << setw(50) << right << os.str();
}

char ImageFile::get_type() const
{
   return 'I';
}
