struct __declspec(align(8)) DOCINFOW
{
INT cbSize;
LPCWSTR lpszDocName __offset(OFF64|AUTO);
LPCWSTR lpszOutput __offset(OFF64|AUTO);
LPCWSTR lpszDatatype __offset(OFF64|AUTO);
DWORD fwType;
};
