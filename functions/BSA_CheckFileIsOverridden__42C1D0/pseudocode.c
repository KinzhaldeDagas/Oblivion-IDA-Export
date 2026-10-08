char __thiscall BSA_CheckFileIsOverridden(_QWORD *this, int a2, const char *a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  __int64 v7; // rdi
  int v9[8]; // [esp+10h] [ebp-138h] BYREF
  __int64 v10; // [esp+30h] [ebp-118h]
  char v11; // [esp+3Fh] [ebp-109h] BYREF
  CHAR FileName[260]; // [esp+40h] [ebp-108h] BYREF

  if ( bInvalidateOlderFiles_Archive && *(int *)(a2 + 8) >= 0 ) /*0x42c20e*/
  {
    if ( a3 ) /*0x42c216*/
    {
      strcpy(FileName, "Data\\"); /*0x42c229*/
      v4 = strlen(a3) + 1; /*0x42c241*/
      v5 = &v11; /*0x42c243*/
      while ( *++v5 ) /*0x42c24e*/
        ; /*0x42c246*/
      qmemcpy(v5, a3, v4); /*0x42c257*/
      v7 = *(this + 0x30); /*0x42c269*/
      if ( _stat64i32((const unsigned __int8 *)FileName, (int)v9) != 0xFFFFFFFF && v10 > v7 ) /*0x42c293*/
      {
        *(_DWORD *)(a2 + 0xC) &= 0x80000000; /*0x42c295*/
        return 1; /*0x42c29e*/
      }
    }
    *(_DWORD *)(a2 + 8) |= 0x80000000; /*0x42c2a0*/
  }
  return 0; /*0x42c2a9*/
}
