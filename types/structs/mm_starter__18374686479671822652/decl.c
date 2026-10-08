struct mm_starter
{
LPTASKCALLBACK cb __offset(OFF64|AUTO);
DWORD client;
HANDLE event __offset(OFF64|AUTO);
};
