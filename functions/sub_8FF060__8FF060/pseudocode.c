char __cdecl sub_8FF060(int a1, int a2, __int16 a3)
{
  int v3; // eax
  _WORD *i; // edx

  v3 = 0;
  if ( *(_BYTE *)(a2 + 0xE) )
  {
    for ( i = (_WORD *)(a2 + 0x12); *i != a3; i += 4 )
    {
      if ( ++v3 >= *(unsigned __int8 *)(a2 + 0xE) )
        return v3;
    }
    LOBYTE(v3) = sub_939B00((unsigned __int8 *)(a2 + 0xC), v3);
  }
  return v3;
}
