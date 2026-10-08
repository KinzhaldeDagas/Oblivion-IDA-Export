int __cdecl _cftoe_l(int *a1, _BYTE *a2, unsigned int a3, int a4, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  unsigned int v7; // eax
  rsize_t v8; // [esp-4h] [ebp-3Ch]
  int v9[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v10[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  LODWORD(v8) = 0x16; /*0x98ffc6*/
  _fltout2(*a1, a1[1], v9, (char *)v10, v8); /*0x98ffd4*/
  if ( a2 && a3 ) /*0x98ffff*/
  {
    if ( a3 == 0xFFFFFFFF ) /*0x990007*/
      v7 = 0xFFFFFFFF; /*0x990009*/
    else
      v7 = a3 - (v9[0] == 0x2D) - (a4 > 0); /*0x990020*/
    result = _fptostr((unsigned int)&a2[(v9[0] == 0x2D) + (a4 > 0)], v7, a4 + 1, (int)v9); /*0x990040*/
    if ( result ) /*0x99004a*/
      *a2 = 0; /*0x99004c*/
    else
      return _cftoe2_l(a2, a3, a4, a5, (int)v9, 0, a6); /*0x990061*/
  }
  else
  {
    *_errno() = 0x16; /*0x98ffec*/
    _invalid_parameter(0, (int)a2, 0x16); /*0x98ffee*/
    return 0x16; /*0x98fff6*/
  }
  return result; /*0x990069*/
}
