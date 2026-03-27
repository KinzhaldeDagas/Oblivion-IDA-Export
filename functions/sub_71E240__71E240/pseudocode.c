int __cdecl sub_71E240(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v9; // ecx
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // bl
  int v15; // [esp+4h] [ebp-4h]
  int v16; // [esp+10h] [ebp+8h]

  result = a2;
  if ( a2 )
  {
    v9 = a1;
    v15 = a2;
    result = a6;
    do
    {
      if ( v9 )
      {
        v16 = v9;
        do
        {
          v11 = *a7;
          v12 = a7[1];
          v13 = a7 + 1;
          v14 = v13[1];
          a7 = v13 + 3;
          a4 += 2;
          *(_WORD *)(a4 - 2) = *(_WORD *)a6 & ((unsigned __int8)(v11 >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10))
                             | *(_WORD *)(a6 + 4)
                             & ((unsigned __int8)(v12 >> *(_BYTE *)(a6 + 0x15)) << *(_BYTE *)(a6 + 0x11))
                             | *(_WORD *)(a6 + 0xC)
                             & ((unsigned __int8)(v14 >> *(_BYTE *)(a6 + 0x17)) << *(_BYTE *)(a6 + 0x13));
          --v16;
        }
        while ( v16 );
        v9 = a1;
      }
      --v15;
    }
    while ( v15 );
  }
  return result;
}
