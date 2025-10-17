/*This is tone file*/

const char* tone_uri[] = {
   "flash://tone/0_16bit_mono_44_1_khz.wav",
};

int get_tone_uri_num()
{
    return sizeof(tone_uri) / sizeof(char *) - 1;
}
