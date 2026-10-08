int __cdecl sub_71E110(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  int v12; // esi
  char v13; // bl
  int v14; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71e110*/
  if ( a2 ) /*0x71e11b*/
  {
    v14 = a2; /*0x71e128*/
    result = a8; /*0x71e12c*/
    do /*0x71e18f*/
    {
      if ( a1 ) /*0x71e132*/
      {
        v11 = a1; /*0x71e134*/
        do /*0x71e188*/
        {
          v12 = a4 + 3; /*0x71e14c*/
          *(_BYTE *)(v12 - 3) = (unsigned __int8)((unsigned int)(*(_DWORD *)a8 & *a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71e14f*/
          v13 = (unsigned __int8)((unsigned int)(*a7 & *(_DWORD *)(a8 + 4)) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71e161*/
          a4 = v12 + 1; /*0x71e163*/
          ++a7; /*0x71e166*/
          *(_BYTE *)(a4 - 3) = v13; /*0x71e169*/
          --v11; /*0x71e17e*/
          *(_BYTE *)(a4 - 2) = (unsigned __int8)((unsigned int)(a7[0xFFFFFFFF] & *(_DWORD *)(a8 + 8)) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71e181*/
          *(_BYTE *)(a4 - 1) = 0xFF; /*0x71e184*/
        }
        while ( v11 ); /*0x71e188*/
      }
      --v14; /*0x71e18a*/
    }
    while ( v14 ); /*0x71e18f*/
  }
  return result; /*0x71e194*/
}
