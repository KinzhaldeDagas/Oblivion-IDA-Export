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

  result = a2; /*0x71e241*/
  if ( a2 ) /*0x71e24c*/
  {
    v9 = a1; /*0x71e252*/
    v15 = a2; /*0x71e25d*/
    result = a6; /*0x71e261*/
    do /*0x71e2ee*/
    {
      if ( v9 ) /*0x71e272*/
      {
        v16 = v9; /*0x71e274*/
        do /*0x71e2e4*/
        {
          v11 = *a7; /*0x71e278*/
          v12 = a7[1]; /*0x71e27a*/
          v13 = a7 + 1; /*0x71e27e*/
          v14 = v13[1]; /*0x71e280*/
          a7 = v13 + 3; /*0x71e2cb*/
          a4 += 2; /*0x71e2ce*/
          *(_WORD *)(a4 - 2) = *(_WORD *)a6 & ((unsigned __int8)(v11 >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10)) /*0x71e2d7*/
                             | *(_WORD *)(a6 + 4)
                             & ((unsigned __int8)(v12 >> *(_BYTE *)(a6 + 0x15)) << *(_BYTE *)(a6 + 0x11))
                             | *(_WORD *)(a6 + 0xC)
                             & ((unsigned __int8)(v14 >> *(_BYTE *)(a6 + 0x17)) << *(_BYTE *)(a6 + 0x13));
          --v16; /*0x71e2e0*/
        }
        while ( v16 ); /*0x71e2e4*/
        v9 = a1; /*0x71e2e6*/
      }
      --v15; /*0x71e2ea*/
    }
    while ( v15 ); /*0x71e2ee*/
  }
  return result; /*0x71e2f3*/
}
