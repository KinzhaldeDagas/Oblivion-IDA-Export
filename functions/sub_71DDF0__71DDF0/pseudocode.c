int __cdecl sub_71DDF0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  int v12; // esi
  char v13; // bl
  int v14; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71ddf0*/
  if ( a2 ) /*0x71ddfb*/
  {
    v14 = a2; /*0x71de08*/
    result = a8; /*0x71de0c*/
    do /*0x71de72*/
    {
      if ( a1 ) /*0x71de12*/
      {
        v11 = a1; /*0x71de14*/
        do /*0x71de6b*/
        {
          v12 = a4 + 3; /*0x71de2d*/
          *(_BYTE *)(v12 - 3) = (unsigned __int8)((*(_DWORD *)a8 & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71de30*/
          v13 = (unsigned __int8)((*(_DWORD *)(a8 + 4) & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71de43*/
          a4 = v12 + 1; /*0x71de45*/
          ++a7; /*0x71de48*/
          *(_BYTE *)(a4 - 3) = v13; /*0x71de4b*/
          --v11; /*0x71de61*/
          *(_BYTE *)(a4 - 2) = (unsigned __int8)((*(_DWORD *)(a8 + 8) & (unsigned int)a7[0xFFFFFFFF]) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71de64*/
          *(_BYTE *)(a4 - 1) = 0xFF; /*0x71de67*/
        }
        while ( v11 ); /*0x71de6b*/
      }
      --v14; /*0x71de6d*/
    }
    while ( v14 ); /*0x71de72*/
  }
  return result; /*0x71de77*/
}
