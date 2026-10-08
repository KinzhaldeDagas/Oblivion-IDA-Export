struct __declspec(align(8)) _CREATE_PROCESS_DEBUG_INFO
{
HANDLE hFile;
HANDLE hProcess;
HANDLE hThread;
LPVOID lpBaseOfImage;
DWORD dwDebugInfoFileOffset;
DWORD nDebugInfoSize;
LPVOID lpThreadLocalBase;
LPTHREAD_START_ROUTINE lpStartAddress;
LPVOID lpImageName;
WORD fUnicode;
};
