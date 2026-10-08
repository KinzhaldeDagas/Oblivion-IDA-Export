int __cdecl sub_71DFE0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  char v12; // bl
  int v13; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71dfe0*/
  if ( a2 ) /*0x71dfeb*/
  {
    v13 = a2; /*0x71dff8*/
    result = a8; /*0x71dffc*/
    do /*0x71e058*/
    {
      if ( a1 ) /*0x71e002*/
      {
        v11 = a1; /*0x71e004*/
        do /*0x71e051*/
        {
          a4 += 3; /*0x71e01c*/
          *(_BYTE *)(a4 - 3) = (unsigned __int8)((unsigned int)(*(_DWORD *)a8 & *a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71e01f*/
          v12 = (unsigned __int8)((unsigned int)(*a7++ & *(_DWORD *)(a8 + 4)) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71e031*/
          *(_BYTE *)(a4 - 2) = v12; /*0x71e036*/
          --v11; /*0x71e04b*/
          *(_BYTE *)(a4 - 1) = (unsigned __int8)((unsigned int)(a7[0xFFFFFFFF] & *(_DWORD *)(a8 + 8)) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71e04e*/
        }
        while ( v11 ); /*0x71e051*/
      }
      --v13; /*0x71e053*/
    }
    while ( v13 ); /*0x71e058*/
  }
  return result; /*0x71e05d*/
}
