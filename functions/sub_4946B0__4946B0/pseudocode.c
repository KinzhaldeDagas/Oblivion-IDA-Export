HANDLE __thiscall sub_4946B0(_DWORD *this)
{
  char *v2; // eax
  HANDLE result; // eax
  HANDLE v4; // esi
  DWORD FileSize; // edi
  char *v6; // eax

  *this = &MessageHandler::`vftable'; /*0x4946c6*/
  v2 = sub_494480(); /*0x4946cc*/
  result = CreateFileA(v2, 0x80000000, 1, 0, 3, 0x80, 0); /*0x4946d2*/
  v4 = result; /*0x4946d8*/
  if ( result ) /*0x4946dc*/
  {
    if ( result != (HANDLE)0xFFFFFFFF ) /*0x4946e1*/
    {
      result = (HANDLE)GetLastError(); /*0x4946e3*/
      if ( !result ) /*0x4946eb*/
      {
        FileSize = GetFileSize(v4, 0); /*0x4946f7*/
        result = (HANDLE)CloseHandle(v4); /*0x4946f9*/
        if ( FileSize == 0x46 ) /*0x494703*/
        {
          v6 = sub_494480(); /*0x494705*/
          result = (HANDLE)DeleteFileA(v6); /*0x49470b*/
        }
      }
    }
  }
  if ( *(_DWORD **)&MEMORY[0xB33E90][0xF00] == this ) /*0x494719*/
    *(_DWORD *)&MEMORY[0xB33E90][0xF00] = 0; /*0x49471b*/
  return result; /*0x494717*/
}
