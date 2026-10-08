struct PropertyMapEntry
{
DWORD regType;
LPCSTR nameA __offset(OFF64|AUTO);
LPCWSTR nameW __offset(OFF64|AUTO);
};
