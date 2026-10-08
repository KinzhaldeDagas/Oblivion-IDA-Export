struct __declspec(align(8)) font_enum
{
LPLOGFONTW lpLogFontParam __offset(OFF64|AUTO);
FONTENUMPROCW lpEnumFunc __offset(OFF64|AUTO);
LPARAM_0 lpData;
BOOL unicode;
HDC hdc __offset(OFF64|AUTO);
INT retval;
};
