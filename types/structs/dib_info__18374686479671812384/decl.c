struct dib_info
{
int bit_count;
int width;
int height;
int compression;
RECT rect;
int stride;
gdi_image_bits bits;
DWORD red_mask;
DWORD green_mask;
DWORD blue_mask;
int red_shift;
int green_shift;
int blue_shift;
int red_len;
int green_len;
int blue_len;
const RGBQUAD *color_table __offset(OFF64|AUTO);
DWORD color_table_size;
const primitive_funcs *funcs __offset(OFF64|AUTO);
};
