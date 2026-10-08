int __cdecl _cftog_l(int *a1, char *a2, int a3, int a4, int a5, struct localeinfo_struct *a6)
{
  int result; // eax
  unsigned int v7; // ecx
  BOOL v8; // eax
  const char *v9; // edi
  rsize_t v10; // [esp-4h] [ebp-40h]
  int v11; // [esp+Ch] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-2Ch]
  int v13; // [esp+1Ch] [ebp-20h]
  int v14[6]; // [esp+20h] [ebp-1Ch] BYREF

  LODWORD(v10) = 0x16; /*0x9905ec*/
  _fltout2(*a1, a1[1], &v11, (char *)v14, v10); /*0x9905fa*/
  if ( a2 && (v7 = a3) != 0 ) /*0x990628*/
  {
    v13 = v12 - 1; /*0x99062e*/
    v8 = v11 == 0x2D; /*0x990637*/
    v9 = &a2[v8]; /*0x99063d*/
    if ( a3 != 0xFFFFFFFF ) /*0x990640*/
      v7 = a3 - v8; /*0x990646*/
    result = _fptostr((unsigned int)v9, v7, a4, (int)&v11); /*0x990651*/
    if ( result ) /*0x99065b*/
    {
      *a2 = 0; /*0x99065d*/
    }
    else if ( v12 - 1 < (int)0xFFFFFFFC || v12 - 1 >= a4 ) /*0x990673*/
    {
      return _cftoe2_l(a2, a3, a4, a5, (int)&v11, 1, a6); /*0x9906b1*/
    }
    else
    {
      if ( v13 < v12 - 1 ) /*0x990677*/
        v9[strlen(v9) - 1] = 0; /*0x990680*/
      return _cftof2_l(&v11, a2, a3, a4, 1, a6); /*0x990693*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x990612*/
    _invalid_parameter(0, 0x16, (int)a2); /*0x990614*/
    return 0x16; /*0x99061c*/
  }
  return result; /*0x9906b9*/
}
