char __thiscall BSA_CheckFileIsOverridden(_QWORD *this, int a2, const char *a3)
{
  unsigned int v4; // eax
  char *v5; // edi
  __int64 v7; // rdi
  int v9[8]; // [esp+10h] [ebp-138h] BYREF
  __int64 v10; // [esp+30h] [ebp-118h]
  char v11; // [esp+3Fh] [ebp-109h] BYREF
  CHAR FileName[260]; // [esp+40h] [ebp-108h] BYREF

  if ( bInvalidateOlderFiles_Archive && *(int *)(a2 + 8) >= 0 )
  {
    if ( a3 )
    {
      strcpy(FileName, "Data\\");
      v4 = strlen(a3) + 1;
      v5 = &v11;
      while ( *++v5 )
        ;
      qmemcpy(v5, a3, v4);
      v7 = *(this + 0x30);
      if ( _stat64i32(FileName, (int)v9) != 0xFFFFFFFF && v10 > v7 )
      {
        *(_DWORD *)(a2 + 0xC) &= 0x80000000;
        return 1;
      }
    }
    *(_DWORD *)(a2 + 8) |= 0x80000000;
  }
  return 0;
}
