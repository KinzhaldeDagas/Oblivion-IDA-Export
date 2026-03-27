int __cdecl _getdrive()
{
  CHAR *v0; // ebx
  signed int CurrentDirectoryA; // esi
  CHAR *v2; // eax
  int v3; // edi
  int v5; // [esp+10h] [ebp-7Ch]
  CHAR Buffer[264]; // [esp+14h] [ebp-78h] BYREF

  v5 = 0;
  v0 = Buffer;
  CurrentDirectoryA = GetCurrentDirectoryA(0x105u, Buffer);
  if ( CurrentDirectoryA > 0x104 )
  {
    v2 = (CHAR *)unknown_libname_74();
    v0 = v2;
    if ( v2 )
    {
      v5 = 1;
      CurrentDirectoryA = GetCurrentDirectoryA(CurrentDirectoryA + 1, v2);
    }
    else
    {
      *_errno() = 0xC;
      CurrentDirectoryA = 0;
    }
  }
  v3 = 0;
  if ( CurrentDirectoryA )
  {
    if ( v0[1] == 0x3A )
      v3 = toupper((unsigned __int8)*v0) - 0x40;
  }
  else
  {
    *_errno() = 0xC;
  }
  if ( v5 )
    free(v0);
  return v3;
}
