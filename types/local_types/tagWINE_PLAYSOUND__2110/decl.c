struct tagWINE_PLAYSOUND
{
unsigned __int32 bLoop : 1;
unsigned __int32 bAlloc : 1;
LPCWSTR pszSound;
HMODULE hMod;
DWORD fdwSound;
HWAVEOUT hWave;
};
