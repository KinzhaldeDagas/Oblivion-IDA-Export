int __cdecl sub_71E390(int a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  int result; // eax
  int i; // ebp
  __int16 v11; // dx
  unsigned __int8 v12; // bl
  int v13; // [esp+14h] [ebp+10h]

  result = a2;
  if ( a2 )
  {
    v13 = a2;
    result = a6;
    do
    {
      for ( i = a1;
            i;
            *(_WORD *)(a4 - 2) = *(_WORD *)(a6 + 0xC) & (0xFFFFFFFF >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13))
                               | *(_WORD *)(a6 + 4) & (v12 << *(_BYTE *)(a6 + 0x11))
                               | v11 )
      {
        v11 = *(_WORD *)a6 & ((unsigned __int8)(*a7 >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10));
        v12 = a7[1] >> *(_BYTE *)(a6 + 0x15);
        a7 += 2;
        a4 += 2;
        --i;
      }
      --v13;
    }
    while ( v13 );
  }
  return result;
}
