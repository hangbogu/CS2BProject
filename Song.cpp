class Song: public SoundFile{

    private:
        vector<string> lyrics_;
        ImageFile artwork_;

    public:
        Song();
        Song(string name, int size_KB, string file_path, bool read_only, FileFormat file_format,
              int duration, int bit_depth, string num_of_channels, int sampling_freq, ImageFile artwork);
        virtual ~Song();

        //Setter Functions
        void set_song_artwork( ImageFile artwork );

        //Getter Functions
        ImageFile get_song_artwork() const;

        virtual void open() const;
        void ImportLyrics(const TextFile* lyrics);
        void ImportArtwork(string file_name);
        void ImportArtwork(ImageFile artwork);
        void operator<<(string text);

        Song& operator<< (const string &text);

        virtual char get_type() const;

};

Song:: Song(): SoundFile(), artwork_(NULL){}

Song:: Song(string name, int size_KB, string file_path, bool read_only, FileFormat file_format,
              int duration, int bit_depth, string num_of_channels, int sampling_freq, ImageFile artwork):
                  SoundFile( name,  size_KB,  file_path,  read_only,  file_format, duration,  bit_depth,  num_of_channels,  sampling_freq), artwork_(NULL){}
Song:: ~Song(){}

void Song:: set_song_artwork( ImageFile artwork ) { artwork_ = artwork; }

ImageFile Song:: get_song_artwork() const { return artwork_ }

void Song:: open() const{ }

void Song:: ImportLyrics(const TextFile* lyrics){ }

void song:: ImportArtwork(string file_name){ }

void Song:: ImportArtwork(ImageFile artwork){ }

Song& Song::operator<< (const string &text) {

    return *this;

}

char Song:: get_type() const {

    return 'S';

}
