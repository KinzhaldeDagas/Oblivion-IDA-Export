int __cdecl sub_71D7F0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v9; // ecx
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // esi
  int v14; // [esp+4h] [ebp-4h]
  int v15; // [esp+10h] [ebp+8h]
  unsigned __int8 v16; // [esp+18h] [ebp+10h]

  result = a2; /*0x71d7f1*/
  if ( a2 ) /*0x71d7fc*/
  {
    v9 = a1; /*0x71d802*/
    v14 = a2; /*0x71d80d*/
    result = a6; /*0x71d811*/
    do /*0x71d8c1*/
    {
      if ( v9 ) /*0x71d822*/
      {
        v15 = v9; /*0x71d828*/
        do /*0x71d8b3*/
        {
          v11 = *a7; /*0x71d830*/
          v12 = a7[1]; /*0x71d832*/
          v13 = a7 + 1; /*0x71d835*/
          v16 = v13[1]; /*0x71d83d*/
          a7 = v13 + 2; /*0x71d845*/
          a4 += 2; /*0x71d870*/
          *(_WORD *)(a4 - 2) = *(_WORD *)(a6 + 4) /*0x71d8a6*/
                             & ((unsigned __int8)(v12 >> *(_BYTE *)(a6 + 0x15)) << *(_BYTE *)(a6 + 0x11))
                             | *(_WORD *)(a6 + 8)
                             & ((unsigned __int8)(v16 >> *(_BYTE *)(a6 + 0x16)) << *(_BYTE *)(a6 + 0x12))
                             | *(_WORD *)a6 & ((unsigned __int8)(v11 >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10))
                             | *(_WORD *)(a6 + 0xC) & (0xFFu >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13));
          --v15; /*0x71d8af*/
        }
        while ( v15 ); /*0x71d8b3*/
        v9 = a1; /*0x71d8b9*/
      }
      --v14; /*0x71d8bd*/
    }
    while ( v14 ); /*0x71d8c1*/
  }
  return result; /*0x71d8ca*/
}
