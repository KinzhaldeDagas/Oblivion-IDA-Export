struct MTRACKER
{
UINT trackFlags;
HMENU hCurrentMenu __offset(OFF64|AUTO);
HMENU hTopMenu __offset(OFF64|AUTO);
HWND hOwnerWnd __offset(OFF64|AUTO);
POINT pt;
};
