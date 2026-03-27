int __cdecl _Toupper(int C, const _Ctypevec *a2)
{
  const _Ctypevec *v2; // esi
  unsigned int Page; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // ax
  int v9; // [esp+4h] [ebp-10h]
  unsigned int Locale; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 )
  {
    Locale = a2->_Hand;
    Page = a2->_Page;
  }
  else
  {
    Locale = *(_DWORD *)(___lc_handle_func() + 8);
    Page = ___lc_codepage_func();
  }
  v9 = Page;
  if ( !Locale )
  {
    result = C;
    if ( (unsigned int)(C - 0x61) <= 0x19 )
      return C - 0x20;
    return result;
  }
  if ( (unsigned int)C < 0x100 )
  {
    if ( !v2 )
    {
      if ( !islower(C) )
        return C;
      goto LABEL_13;
    }
    if ( (v2->_Table[C] & 2) == 0 )
      return C;
  }
  if ( !v2 )
  {
LABEL_13:
    v11 = C >> 8;
    v5 = __pctype_func()[BYTE1(C)] & 0x8000;
    goto LABEL_15;
  }
  v11 = C >> 8;
  v5 = ((unsigned __int16)v2->_Table[BYTE1(C)] >> 0xF) & 1;
LABEL_15:
  if ( v5 )
  {
    LOBYTE(a2) = v11;
    *(_WORD *)((char *)&a2 + 1) = (unsigned __int8)C;
    v6 = 2;
  }
  else
  {
    LOWORD(a2) = (unsigned __int8)C;
    v6 = 1;
  }
  v7 = __crtLCMapStringA(0, Locale, 0x200u, (int)&a2, v6, (int)&v12, 3, v9, 1);
  if ( !v7 )
    return C;
  if ( v7 == 1 )
    return (unsigned __int8)v12;
  LOBYTE(v8) = 0;
  HIBYTE(v8) = v12;
  return BYTE1(v12) | v8;
}
