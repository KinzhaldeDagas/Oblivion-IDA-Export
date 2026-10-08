int __cdecl sub_71DD40(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  int v12; // esi
  char v13; // bl
  int v14; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71dd40*/
  if ( a2 ) /*0x71dd4b*/
  {
    v14 = a2; /*0x71dd5c*/
    result = a8; /*0x71dd60*/
    do /*0x71ddde*/
    {
      if ( a1 ) /*0x71dd66*/
      {
        v11 = a1; /*0x71dd68*/
        do /*0x71ddd7*/
        {
          v12 = a4 + 3; /*0x71dd87*/
          *(_BYTE *)(v12 - 3) = (unsigned __int8)((*(_DWORD *)a8 & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71dd8a*/
          v13 = (unsigned __int8)((*(_DWORD *)(a8 + 4) & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71dd9d*/
          a4 = v12 + 1; /*0x71dd9f*/
          ++a7; /*0x71dda2*/
          *(_BYTE *)(a4 - 3) = v13; /*0x71dda5*/
          *(_BYTE *)(a4 - 2) = (unsigned __int8)((*(_DWORD *)(a8 + 8) & (unsigned int)a7[0xFFFFFFFF]) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71ddbb*/
          --v11; /*0x71ddd1*/
          *(_BYTE *)(a4 - 1) = (unsigned __int8)((*(_DWORD *)(a8 + 0xC) & (unsigned int)a7[0xFFFFFFFF]) >> *(_BYTE *)(a8 + 0x13)) << *(_BYTE *)(a8 + 0x17); /*0x71ddd4*/
        }
        while ( v11 ); /*0x71ddd7*/
      }
      --v14; /*0x71ddd9*/
    }
    while ( v14 ); /*0x71ddde*/
  }
  return result; /*0x71dde3*/
}
