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

  *a2 = 0; /*0x7823f3*/
  *a3 = 0; /*0x782401*/
  *a4 = 0; /*0x782407*/
  *a5 = 0; /*0x782415*/
  if ( ArgList && *ArgList ) /*0x782421*/
  {
    LODWORD(v11) = 0x104; /*0x78242a*/
    if ( !sub_77EC60(ArgList, FileName, v11) ) /*0x782435*/
    {
      sub_738460(1, 0, "Failed to find shader program file %s\n", ArgList); /*0x78244b*/
      return 0; /*0x782455*/
    }
    FileA = CreateFileA(FileName, 0x80000000, 1, 0, 3, 0, 0); /*0x78246f*/
    v7 = FileA; /*0x782475*/
    if ( FileA == (HANDLE)0xFFFFFFFF ) /*0x78247a*/
    {
      sub_738460(1, 0, "Invalid shader file %s\n", FileName); /*0x78248a*/
      return 0; /*0x782494*/
    }
    FileSize = GetFileSize(FileA, 0); /*0x7824a0*/
    v9 = FormHeapAlloc(FileSize + 4); /*0x7824a6*/
    v10 = (void *)v9; /*0x7824ab*/
    if ( v9 ) /*0x7824b2*/
    {
      _memset(v9, 0, FileSize + 4); /*0x7824b8*/
      ReadFile(v7, v10, FileSize, &NumberOfBytesRead, 0); /*0x7824ca*/
      CloseHandle(v7); /*0x7824d1*/
      if ( NumberOfBytesRead == FileSize ) /*0x7824db*/
      {
        *a3 = FileSize; /*0x78250b*/
        *a2 = v10; /*0x78250d*/
        return 1; /*0x782511*/
      }
      FormHeapFree((unsigned int)v10); /*0x7824de*/
    }
    return 0; /*0x7824e6*/
  }
  else
  {
    sub_738460(1, 0, "Invalid shader file name\n"); /*0x78251c*/
    return 0; /*0x782524*/
  }
}
