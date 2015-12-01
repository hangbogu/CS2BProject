#include "SoundFile.h"

SoundFile::SoundFile() : File(), duration_(0), bit_depth_(0), num_of_channels_(""), sampling_freq_HZ_(0) {}

SoundFile::SoundFile(string name, int size_KB, string file_path, bool read_only, FileFormat file_format,
                     int duration, int bit_depth, string num_of_channels, int sampling_freq): 
   File(name, size_KB, file_format, file_path, read_only), duration_(duration), bit_depth_(bit_depth), num_of_channels_(num_of_channels), sampling_freq_HZ_(sampling_freq){}

SoundFile::~SoundFile() {}

//Setter Functions
void SoundFile:: set_duration( int duration ) { duration_ = duration; }
void SoundFile:: set_bit_depth( int bit_depth ) { bit_depth_ = bit_depth; }
void SoundFile:: set_num_of_channels( string num_of_channels ) { num_of_channels_ = num_of_channels; }
void SoundFile:: set_sampling_freq( int sampling_freq ) { sampling_freq_HZ_ = sampling_freq; }

//Getter Functions
int SoundFile:: get_duration() const { return duration_; }
int SoundFile:: get_bit_depth() const { return bit_depth_; }
string SoundFile:: get_num_of_channels() const { return num_of_channels_; }
int SoundFile:: get_sampling_freq() const { return sampling_freq_HZ_; }

void SoundFile:: Open() const {
    
}

SoundFile* SoundFile::Trim(string end_time) const {
  
  //Placeholder for future implementation
    return NULL;
    
}

SoundFile* SoundFile::Trim(string begin_time, string end_time) const{

  //Placeholder for future implementation
    return NULL;
    
}

void SoundFile::Display() const{
    File::Display();
    ostringstream os;
    os  << "Duration <" + duration_ 
         << "> BD <" + bit_depth_
         << "> C <" + num_of_channels_
         << "> SF: <" + sampling_freq_HZ_ << ">";
    cout << setw(50) << os.str();
}

char SoundFile::get_type() const
{
   return 'S';
}
