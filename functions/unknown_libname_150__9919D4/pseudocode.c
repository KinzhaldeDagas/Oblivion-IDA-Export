int __usercall __spoils<ecx,st0> unknown_libname_150@<eax>(double a1@<st1>, double a2@<st0>)
{
  int result; // eax
  char v3; // dl
  _BYTE v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1; /*0x9919d8*/
  *(double *)v4 = a2; /*0x9919dc*/
  if ( (*(_DWORD *)&v4[6] & 0x7FFF0000) != 0 ) /*0x9919ed*/
    return unknown_libname_149(0, *(__int128 *)v4, *(int *)&v4[0x10], v5, v6); /*0x9919ef*/
  result = *(_DWORD *)&v4[4] | *(_DWORD *)v4; /*0x991a03*/
  if ( a2 != 0.0 ) /*0x991a07*/
  {
    *(double *)&v4[0xC] = a2; /*0x991a0b*/
    v3 = 2; /*0x991a14*/
    if ( (WORD4(v6) & 0x7FFFu) <= 0x7FBE ) /*0x991a3a*/
    {
      v3 = 3; /*0x991a3c*/
      *(double *)&v6 = a1 * dbl_B31A14; /*0x991a45*/
    }
    *(double *)v4 = a2 * dbl_B31A14; /*0x991a4f*/
    return unknown_libname_149(v3, *(__int128 *)v4, HIDWORD(*(unsigned __int64 *)&a2), v5, v6); /*0x991a78*/
  }
  return result; /*0x9919f8*/
}
