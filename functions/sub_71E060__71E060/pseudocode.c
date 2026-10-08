int __cdecl sub_71E060(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  int v12; // esi
  char v13; // bl
  int v14; // [esp+20h] [ebp+1Ch]

  result = a2; /*0x71e060*/
  if ( a2 ) /*0x71e06b*/
  {
    v14 = a2; /*0x71e07c*/
    result = a8; /*0x71e080*/
    do /*0x71e0fa*/
    {
      if ( a1 ) /*0x71e086*/
      {
        v11 = a1; /*0x71e088*/
        do /*0x71e0f3*/
        {
          v12 = a4 + 3; /*0x71e0a6*/
          *(_BYTE *)(v12 - 3) = (unsigned __int8)((unsigned int)(*(_DWORD *)a8 & *a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14); /*0x71e0a9*/
          v13 = (unsigned __int8)((unsigned int)(*a7 & *(_DWORD *)(a8 + 4)) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15); /*0x71e0bb*/
          a4 = v12 + 1; /*0x71e0bd*/
          ++a7; /*0x71e0c0*/
          *(_BYTE *)(a4 - 3) = v13; /*0x71e0c3*/
          *(_BYTE *)(a4 - 2) = (unsigned __int8)((unsigned int)(a7[0xFFFFFFFF] & *(_DWORD *)(a8 + 8)) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16); /*0x71e0d8*/
          --v11; /*0x71e0ed*/
          *(_BYTE *)(a4 - 1) = (unsigned __int8)((unsigned int)(a7[0xFFFFFFFF] & *(_DWORD *)(a8 + 0xC)) >> *(_BYTE *)(a8 + 0x13)) << *(_BYTE *)(a8 + 0x17); /*0x71e0f0*/
        }
        while ( v11 ); /*0x71e0f3*/
      }
      --v14; /*0x71e0f5*/
    }
    while ( v14 ); /*0x71e0fa*/
  }
  return result; /*0x71e0ff*/
}
