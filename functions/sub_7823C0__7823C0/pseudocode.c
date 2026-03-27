char __stdcall sub_7823C0(char *ArgList, _DWORD *a2, DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  HANDLE FileA; // eax
  void *v7; // ebx
  DWORD FileSize; // edi
  int v9; // eax
  void *v10; // esi
  rsize_t v11; // [esp-4h] [ebp-120h]
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-10Ch] BYREF
  CHAR FileName[260]; // [esp+14h] [ebp-108h] BYREF

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( ArgList && *ArgList )
  {
    LODWORD(v11) = 0x104;
    if ( !sub_77EC60(ArgList, FileName, v11) )
    {
      sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList);
      return 0;
    }
    FileA = CreateFileA(FileName, 0x80000000, 1, 0, 3, 0, 0);
    v7 = FileA;
    if ( FileA == (HANDLE)0xFFFFFFFF )
    {
      sub_738460(1, 0, "Invalid shader file %s\n", FileName);
      return 0;
    }
    FileSize = GetFileSize(FileA, 0);
    v9 = FormHeapAlloc(FileSize + 4);
    v10 = (void *)v9;
    if ( v9 )
    {
      _memset(v9, 0, FileSize + 4);
      ReadFile(v7, v10, FileSize, &NumberOfBytesRead, 0);
      CloseHandle(v7);
      if ( NumberOfBytesRead == FileSize )
      {
        *a3 = FileSize;
        *a2 = v10;
        return 1;
      }
      FormHeapFree((unsigned int)v10);
    }
    return 0;
  }
  else
  {
    sub_738460(1, 0, "Invalid shader file name\n");
    return 0;
  }
}
