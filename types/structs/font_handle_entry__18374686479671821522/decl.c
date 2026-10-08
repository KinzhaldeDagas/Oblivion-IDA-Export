struct __declspec(align(8)) font_handle_entry
{
gdi_font *font __offset(OFF64|AUTO);
WORD generation;
};
