bool __thiscall sub_494730(void *this, LPCSTR lpFileName, const char *lpBuffer, char a4)
{
  int v5; // eax
  bool v6; // zf
  const char *v7; // ecx
  bool v8; // bl
  HANDLE FileA; // esi
  DWORD v10; // edi
  BOOL v11; // eax
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-108h] BYREF
  char v14[256]; // [esp+14h] [ebp-104h] BYREF

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33E90][0xF70], (int)&unk_A2F830); /*0x494762*/
  v5 = *(_DWORD *)&MEMORY[0xB33E90][0xEFC]; /*0x494767*/
  if ( *(_DWORD *)&MEMORY[0xB33E90][0xEFC] ) /*0x494767*/
  {
    if ( !MEMORY[0xB33E90][0xFF0] ) /*0x494770*/
    {
      v6 = *(_BYTE *)(v5 + 8) == 0; /*0x494779*/
      v7 = (const char *)(v5 + 8); /*0x49477d*/
      MEMORY[0xB33E90][0xFF0] = 1; /*0x494780*/
      if ( v6 ) /*0x494787*/
        v7 = "UNKNOWN"; /*0x494789*/
      _sprintf(v14, "(%s by %s) -> ", (const char *)(v5 + 0xE0), v7); /*0x49479f*/
      (*(void (__thiscall **)(void *, LPCSTR, char *, _DWORD))(*(_DWORD *)this + 0x28))(this, lpFileName, v14, 0); /*0x4947b6*/
      MEMORY[0xB33E90][0xFF0] = 0; /*0x4947b8*/
    }
  }
  NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&MEMORY[0xB33E90][0xF70]); /*0x4947c4*/
  v8 = 0; /*0x4947dc*/
  FileA = CreateFileA(lpFileName, 0xC0000000, 0, 0, 4, 0x80, 0); /*0x4947e4*/
  if ( FileA != (HANDLE)0xFFFFFFFF ) /*0x4947e9*/
  {
    v10 = strlen(lpBuffer); /*0x4947f1*/
    SetFilePointer(FileA, 0, 0, 2); /*0x494808*/
    v11 = WriteFile(FileA, lpBuffer, v10, &NumberOfBytesWritten, 0); /*0x494818*/
    v8 = v11; /*0x494820*/
    if ( !MEMORY[0xB33E90][0xFF0] ) /*0x494823*/
    {
      if ( v11 ) /*0x49482e*/
      {
        if ( lpBuffer[v10 - 2] != 0xD || lpBuffer[v10 - 1] != 0xA ) /*0x49483c*/
          v8 = WriteFile(FileA, word_A3D9B0, 2, &NumberOfBytesWritten, 0); /*0x494855*/
      }
    }
    if ( a4 ) /*0x494860*/
      FlushFileBuffers(FileA); /*0x494863*/
    CloseHandle(FileA); /*0x49486a*/
  }
  return v8; /*0x494870*/
}
