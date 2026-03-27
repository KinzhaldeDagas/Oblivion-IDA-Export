_DWORD *__cdecl sub_5AA210(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(unsigned __int8 *)(a2 + 4);
  if ( result == (_DWORD *)0x19 )
  {
    *a1 = 6;
    return a1;
  }
  else if ( result == (_DWORD *)0x28 )
  {
    *a1 = 5;
  }
  else if ( result == (_DWORD *)0x13 )
  {
    *a1 = 4;
  }
  else if ( result == (_DWORD *)0x15 )
  {
    *a1 = 8;
    return a1;
  }
  else if ( result == (_DWORD *)0x27 )
  {
    *a1 = 9;
  }
  else if ( result == (_DWORD *)0x26
         || result == (_DWORD *)0x2A
         || a2 == TESDataHandler_g_WelkyndStone
         || a2 == TESDataHandler_g_VarlaStone )
  {
    *a1 = 0xA;
  }
  else
  {
    result = a1;
    if ( *a1 == 8 )
      *a1 = 0xB;
  }
  return result;
}
