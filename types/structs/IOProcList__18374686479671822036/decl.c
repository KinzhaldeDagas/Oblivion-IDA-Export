struct IOProcList
{
IOProcList *pNext __offset(OFF64|AUTO);
FOURCC fourCC;
LPMMIOPROC_0 pIOProc __offset(OFF64|AUTO);
BOOL is_unicode;
int count;
};
