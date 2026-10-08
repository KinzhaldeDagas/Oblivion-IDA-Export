int __cdecl _Tolower(int C, const _Ctypevec *a2)
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

  v2 = a2; /*0x9805f5*/
  if ( a2 ) /*0x9805fa*/
  {
    Locale = a2->_Hand; /*0x980610*/
    Page = a2->_Page; /*0x980613*/
  }
  else
  {
    Locale = *((_DWORD *)___lc_handle_func() + 2); /*0x980604*/
    Page = ___lc_codepage_func(); /*0x980607*/
  }
  v9 = Page; /*0x98061a*/
  if ( !Locale ) /*0x98061d*/
  {
    result = C; /*0x98061f*/
    if ( (unsigned int)(C - 0x41) <= 0x19 ) /*0x980628*/
      return C + 0x20; /*0x98062e*/
    return result; /*0x980631*/
  }
  if ( (unsigned int)C < 0x100 ) /*0x980642*/
  {
    if ( !v2 ) /*0x980646*/
    {
      if ( !isupper(C) ) /*0x980649*/
        return C; /*0x980651*/
      goto LABEL_13; /*0x980651*/
    }
    if ( (v2->_Table[C] & 1) == 0 ) /*0x98065f*/
      return C; /*0x9806e0*/
  }
  if ( !v2 ) /*0x980663*/
  {
LABEL_13:
    v11 = C >> 8; /*0x980665*/
    v5 = __pctype_func()[BYTE1(C)] & 0x8000; /*0x980679*/
    goto LABEL_15; /*0x98067e*/
  }
  v11 = C >> 8; /*0x980686*/
  v5 = ((unsigned __int16)v2->_Table[BYTE1(C)] >> 0xF) & 1; /*0x980699*/
LABEL_15:
  if ( v5 ) /*0x98069e*/
  {
    LOBYTE(a2) = v11; /*0x9806a5*/
    *(_WORD *)((char *)&a2 + 1) = (unsigned __int8)C; /*0x9806a8*/
    v6 = 2; /*0x9806af*/
  }
  else
  {
    LOWORD(a2) = (unsigned __int8)C; /*0x9806b4*/
    v6 = 1; /*0x9806bb*/
  }
  v7 = __crtLCMapStringA(0, Locale, 0x100u, &a2, v6, (int)&v12, 3, v9); /*0x9806d2*/
  if ( !v7 ) /*0x9806dc*/
    return C; /*0x9806dc*/
  if ( v7 == 1 ) /*0x9806e5*/
    return (unsigned __int8)v12; /*0x9806e7*/
  LOBYTE(v8) = 0; /*0x9806f1*/
  HIBYTE(v8) = v12; /*0x9806f3*/
  return BYTE1(v12) | v8; /*0x9806fa*/
}
