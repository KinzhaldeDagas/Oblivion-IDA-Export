int __cdecl _Toupper(int C, const _Ctypevec *a2)
{
  const _Ctypevec *v2; // esi
  unsigned int Page; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // ax
  UINT v9; // [esp+4h] [ebp-10h]
  unsigned int Locale; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x980c18*/
  if ( a2 ) /*0x980c1d*/
  {
    Locale = a2->_Hand; /*0x980c33*/
    Page = a2->_Page; /*0x980c36*/
  }
  else
  {
    Locale = *((_DWORD *)___lc_handle_func() + 2); /*0x980c27*/
    Page = ___lc_codepage_func(); /*0x980c2a*/
  }
  v9 = Page; /*0x980c3d*/
  if ( !Locale ) /*0x980c40*/
  {
    result = C; /*0x980c42*/
    if ( (unsigned int)(C - 0x61) <= 0x19 ) /*0x980c4b*/
      return C - 0x20; /*0x980c51*/
    return result; /*0x980c54*/
  }
  if ( (unsigned int)C < 0x100 ) /*0x980c63*/
  {
    if ( !v2 ) /*0x980c67*/
    {
      if ( !islower(C) ) /*0x980c6a*/
        return C; /*0x980c72*/
      goto LABEL_13; /*0x980c72*/
    }
    if ( (v2->_Table[C] & 2) == 0 ) /*0x980c80*/
      return C; /*0x980d09*/
  }
  if ( !v2 ) /*0x980c88*/
  {
LABEL_13:
    v11 = C >> 8; /*0x980c8a*/
    v5 = __pctype_func()[BYTE1(C)] & 0x8000; /*0x980c9e*/
    goto LABEL_15; /*0x980ca3*/
  }
  v11 = C >> 8; /*0x980cab*/
  v5 = ((unsigned __int16)v2->_Table[BYTE1(C)] >> 0xF) & 1; /*0x980cbe*/
LABEL_15:
  if ( v5 ) /*0x980cc3*/
  {
    LOBYTE(a2) = v11; /*0x980cca*/
    *(_WORD *)((char *)&a2 + 1) = (unsigned __int8)C; /*0x980ccd*/
    v6 = 2; /*0x980cd4*/
  }
  else
  {
    LOWORD(a2) = (unsigned __int8)C; /*0x980cd9*/
    v6 = 1; /*0x980ce0*/
  }
  v7 = __crtLCMapStringA(0, Locale, 0x200u, &a2, v6, (int)&v12, 3, v9); /*0x980cfb*/
  if ( !v7 ) /*0x980d05*/
    return C; /*0x980d05*/
  if ( v7 == 1 ) /*0x980d0e*/
    return (unsigned __int8)v12; /*0x980d10*/
  LOBYTE(v8) = 0; /*0x980d1a*/
  HIBYTE(v8) = v12; /*0x980d1c*/
  return BYTE1(v12) | v8; /*0x980d22*/
}
