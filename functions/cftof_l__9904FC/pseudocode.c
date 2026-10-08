int __cdecl _cftof_l(int *a1, char *a2, int a3, int a4, struct localeinfo_struct *a5)
{
  int result; // eax
  unsigned int v6; // eax
  rsize_t v7; // [esp-4h] [ebp-3Ch]
  int v8[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v9[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  LODWORD(v7) = 0x16; /*0x990518*/
  _fltout2(*a1, a1[1], v8, (char *)v9, v7); /*0x990526*/
  if ( a2 && (v6 = a3) != 0 ) /*0x990551*/
  {
    if ( a3 != 0xFFFFFFFF ) /*0x990556*/
      v6 = a3 - (v8[0] == 0x2D); /*0x990565*/
    result = _fptostr((unsigned int)&a2[v8[0] == 0x2D], v6, a4 + v8[1], (int)v8); /*0x990581*/
    if ( result ) /*0x99058b*/
      *a2 = 0; /*0x99058d*/
    else
      return _cftof2_l(v8, a2, a3, a4, 0, a5); /*0x99059e*/
  }
  else
  {
    *_errno() = 0x16; /*0x99053e*/
    _invalid_parameter(0, (int)a2, 0x16); /*0x990540*/
    return 0x16; /*0x990548*/
  }
  return result; /*0x9905a6*/
}
