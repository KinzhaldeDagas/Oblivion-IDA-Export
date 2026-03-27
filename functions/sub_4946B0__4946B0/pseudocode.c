HANDLE __thiscall sub_4946B0(_DWORD *this)
{
  char *v2; // eax
  HANDLE result; // eax
  HANDLE v4; // esi
  DWORD FileSize; // edi
  char *v6; // eax

  *this = &MessageHandler::`vftable';
  v2 = sub_494480();
  result = CreateFileA(v2, 0x80000000, 1, 0, 3, 0x80, 0);
  v4 = result;
  if ( result )
  {
    if ( result != (HANDLE)0xFFFFFFFF )
    {
      result = (HANDLE)GetLastError();
      if ( !result )
      {
        FileSize = GetFileSize(v4, 0);
        result = (HANDLE)CloseHandle(v4);
        if ( FileSize == 0x46 )
        {
          v6 = sub_494480();
          result = (HANDLE)DeleteFileA(v6);
        }
      }
    }
  }
  if ( (_DWORD *)dword_B34D90 == this )
    dword_B34D90 = 0;
  return result;
}
