struct opendll
{
LONG refs;
LPWSTR library_name;
HANDLE library;
DllGetClassObjectFunc DllGetClassObject;
DllCanUnloadNowFunc DllCanUnloadNow;
list entry;
};
