struct __unaligned __declspec(align(4)) MCI_OPEN_DRIVER_PARMSW
{
UINT wDeviceID;
LPWSTR lpstrParams __offset(OFF64|AUTO);
UINT wCustomCommandTable;
UINT wType;
};
