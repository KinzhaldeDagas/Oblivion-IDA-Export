struct _THEME_CLASS
{
DWORD signature;
HMODULE hTheme;
_THEME_FILE *tf;
WCHAR_0 szAppName[60];
WCHAR_0 szClassName[60];
PTHEME_PARTSTATE partstate;
_THEME_CLASS *overrides;
_THEME_CLASS *next;
};
