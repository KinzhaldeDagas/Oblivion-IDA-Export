struct ThreadWindows
{
UINT numHandles;
UINT numAllocs;
HWND *handles __offset(OFF64|AUTO);
};
