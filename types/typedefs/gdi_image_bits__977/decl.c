struct gdi_image_bits
{
void *ptr __offset(OFF64|AUTO);
BOOL is_copy;
void (*free)(gdi_image_bits *) __offset(OFF64|AUTO);
void *param __offset(OFF64|AUTO);
};
