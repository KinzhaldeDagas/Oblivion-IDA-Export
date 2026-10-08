union WPRINTF_DATA
{
WCHAR_0 wchar_view;
CHAR char_view;
LPCSTR lpcstr_view __offset(OFF64|AUTO);
LPCWSTR lpcwstr_view __offset(OFF64|AUTO);
LONGLONG int_view;
};
