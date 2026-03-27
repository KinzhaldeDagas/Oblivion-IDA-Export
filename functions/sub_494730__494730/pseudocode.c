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

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B34E00, (int)&unk_A2F830);
  v5 = dword_B34D8C;
  if ( dword_B34D8C )
  {
    if ( !byte_B34E80 )
    {
      v6 = *(_BYTE *)(v5 + 8) == 0;
      v7 = (const char *)(v5 + 8);
      byte_B34E80 = 1;
      if ( v6 )
        v7 = "UNKNOWN";
      _sprintf(v14, "(%s by %s) -> ", (const char *)(v5 + 0xE0), v7);
      (*(void (__thiscall **)(void *, LPCSTR, char *, _DWORD))(*(_DWORD *)this + 0x28))(this, lpFileName, v14, 0);
      byte_B34E80 = 0;
    }
  }
  NiLeaveCriticalSection_0(&stru_B34E00);
  v8 = 0;
  FileA = CreateFileA(lpFileName, 0xC0000000, 0, 0, 4, 0x80, 0);
  if ( FileA != (HANDLE)0xFFFFFFFF )
  {
    v10 = strlen(lpBuffer);
    SetFilePointer(FileA, 0, 0, 2);
    v11 = WriteFile(FileA, lpBuffer, v10, &NumberOfBytesWritten, 0);
    v8 = v11;
    if ( !byte_B34E80 )
    {
      if ( v11 )
      {
        if ( lpBuffer[v10 - 2] != 0xD || lpBuffer[v10 - 1] != 0xA )
          v8 = WriteFile(FileA, word_A3D9B0, 2, &NumberOfBytesWritten, 0);
      }
    }
    if ( a4 )
      FlushFileBuffers(FileA);
    CloseHandle(FileA);
  }
  return v8;
}
