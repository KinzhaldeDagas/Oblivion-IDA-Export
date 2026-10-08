int __cdecl _getdrive()
{
  CHAR *v0; // ebx
  signed int CurrentDirectoryA; // esi
  CHAR *v2; // eax
  int v3; // edi
  int v5; // [esp+10h] [ebp-7Ch]
  CHAR Buffer[264]; // [esp+14h] [ebp-78h] BYREF

  v5 = 0; /*0x99235c*/
  v0 = Buffer; /*0x992369*/
  CurrentDirectoryA = GetCurrentDirectoryA(0x105u, Buffer); /*0x992376*/
  if ( CurrentDirectoryA > 0x104 ) /*0x99237e*/
  {
    v2 = (CHAR *)unknown_libname_74(CurrentDirectoryA + 1, 1); /*0x992389*/
    v0 = v2; /*0x99238e*/
    if ( v2 ) /*0x992394*/
    {
      v5 = 1; /*0x9923a7*/
      CurrentDirectoryA = GetCurrentDirectoryA(CurrentDirectoryA + 1, v2); /*0x9923b6*/
    }
    else
    {
      *_errno() = 0xC; /*0x99239b*/
      CurrentDirectoryA = 0; /*0x9923a1*/
    }
  }
  v3 = 0; /*0x9923b8*/
  if ( CurrentDirectoryA ) /*0x9923bc*/
  {
    if ( v0[1] == 0x3A ) /*0x9923c2*/
      v3 = toupper((unsigned __int8)*v0) - 0x40; /*0x9923d0*/
  }
  else
  {
    *_errno() = 0xC; /*0x9923da*/
  }
  if ( v5 ) /*0x9923e4*/
    free(v0); /*0x9923e7*/
  return v3; /*0x9923ed*/
}
