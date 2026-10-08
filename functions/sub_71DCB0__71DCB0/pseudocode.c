int __cdecl sub_71DCB0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  char v12; // bl
  int v13; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71dcb0*/
  if ( a2 ) /*0x71dcbb*/
  {
    v13 = a2; /*0x71dcc8*/
    result = a8; /*0x71dccc*/
    do /*0x71dd2b*/
    {
      if ( a1 ) /*0x71dcd2*/
      {
        v11 = a1; /*0x71dcd4*/
        do /*0x71dd24*/
        {
          a4 += 3; /*0x71dced*/
          *(_BYTE *)(a4 - 3) = (unsigned __int8)((*(_DWORD *)a8 & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71dcf0*/
          v12 = (unsigned __int8)((*(_DWORD *)(a8 + 4) & (unsigned int)*a7++) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71dd03*/
          *(_BYTE *)(a4 - 2) = v12; /*0x71dd08*/
          --v11; /*0x71dd1e*/
          *(_BYTE *)(a4 - 1) = (unsigned __int8)((*(_DWORD *)(a8 + 8) & (unsigned int)a7[0xFFFFFFFF]) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71dd21*/
        }
        while ( v11 ); /*0x71dd24*/
      }
      --v13; /*0x71dd26*/
    }
    while ( v13 ); /*0x71dd2b*/
  }
  return result; /*0x71dd30*/
}
