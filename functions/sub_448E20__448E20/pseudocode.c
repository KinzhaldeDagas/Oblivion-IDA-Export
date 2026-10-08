HANDLE __stdcall sub_448E20(LPCSTR lpFileName)
{
  HANDLE result; // eax
  HANDLE v2; // ebp
  DWORD FileSize; // eax
  DWORD v4; // edi
  void *v5; // esi
  int v6; // eax
  DWORD NumberOfBytesRead; // [esp+4h] [ebp-4h] BYREF

  result = CreateFileA(lpFileName, 0x80000000, 1, 0, 3, 0x8000001, 0); /*0x448e39*/
  v2 = result; /*0x448e3f*/
  if ( result != (HANDLE)0xFFFFFFFF ) /*0x448e44*/
  {
    FileSize = GetFileSize(result, 0); /*0x448e4e*/
    v4 = FileSize; /*0x448e54*/
    if ( FileSize ) /*0x448e58*/
    {
      v5 = (void *)FormHeapAlloc(FileSize); /*0x448e70*/
      ReadFile(v2, v5, v4, &NumberOfBytesRead, 0); /*0x448e74*/
      if ( NumberOfBytesRead == v4 && v4 > 0xF ) /*0x448e87*/
      {
        v6 = 0; /*0x448e90*/
        while ( *((_BYTE *)v5 + v6) != 0x4E /*0x448efb*/
             || *((_BYTE *)v5 + v6 + 1) != 0x69
             || *((_BYTE *)v5 + v6 + 2) != 0x52
             || *((_BYTE *)v5 + v6 + 3) != 0x61
             || *((_BYTE *)v5 + v6 + 4) != 0x77
             || *((_BYTE *)v5 + v6 + 5) != 0x49
             || *((_BYTE *)v5 + v6 + 6) != 0x6D
             || *((_BYTE *)v5 + v6 + 7) != 0x61
             || *((_BYTE *)v5 + v6 + 8) != 0x67
             || *((_BYTE *)v5 + v6 + 9) != 0x65
             || *((_BYTE *)v5 + v6 + 0xA) != 0x44
             || *((_BYTE *)v5 + v6 + 0xB) != 0x61
             || *((_BYTE *)v5 + v6 + 0xC) != 0x74
             || *((_BYTE *)v5 + v6 + 0xD) != 0x61 )
        {
          if ( ++v6 >= v4 - 0xF ) /*0x448f02*/
            return (HANDLE)CloseHandle(v2); /*0x448f02*/
        }
        PrintError("Export \"%s\" again without textures embedded.\r\n", lpFileName); /*0x448f1c*/
      }
    }
    return (HANDLE)CloseHandle(v2); /*0x448f25*/
  }
  return result; /*0x448f0d*/
}
