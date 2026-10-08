int __usercall _wsopen_helper@<eax>(int a1@<ebx>, LPCSTR lpFileName, int a3, int a4, int a5, int *a6, int a7)
{
  int result; // eax
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // [esp+14h] [ebp-20h]
  int v11; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v11 = 0; /*0x99de65*/
  if ( !a6 || (*a6 = 0xFFFFFFFF, !lpFileName) || a7 && (a5 & 0xFFFFFE7F) != 0 ) /*0x99deb2*/
  {
    *_errno() = 0x16; /*0x99de7e*/
    _invalid_parameter(a1, 0x16, 0); /*0x99de85*/
    return 0x16; /*0x99de8d*/
  }
  else
  {
    ms_exc.registration.TryLevel = 0; /*0x99deb4*/
    _tsopen_nolock(a6, &v11, lpFileName, a3, a4, a5); /*0x99dec9*/
    v10 = v8; /*0x99ded1*/
    ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x99ded4*/
    if ( v11 ) /*0x99def8*/
    {
      if ( v8 ) /*0x99defd*/
      {
        v9 = (_BYTE *)(unk_BAAAC0[*a6 >> 5] + 0x28 * (*a6 & 0x1F) + 4); /*0x99df13*/
        *v9 &= ~1u; /*0x99df17*/
      }
      _unlock_fhandle(*a6); /*0x99df1c*/
    }
    result = v10; /*0x99dee0*/
    if ( v10 ) /*0x99dee5*/
      *a6 = 0xFFFFFFFF; /*0x99dee7*/
  }
  return result; /*0x99deea*/
}
