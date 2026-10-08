int __cdecl sub_71E300(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v10; // edi
  unsigned __int8 v11; // bl
  int v12; // ebp
  int v13; // [esp+14h] [ebp+10h]

  result = a2; /*0x71e300*/
  if ( a2 ) /*0x71e30b*/
  {
    v10 = a1; /*0x71e314*/
    v13 = a2; /*0x71e318*/
    result = a6; /*0x71e31c*/
    do /*0x71e37c*/
    {
      if ( v10 ) /*0x71e322*/
      {
        do /*0x71e371*/
        {
          v11 = a7[1]; /*0x71e326*/
          v12 = *(_DWORD *)a6 & (*a7 >> *(_BYTE *)(a6 + 0x14) << *(_BYTE *)(a6 + 0x10)); /*0x71e33c*/
          a7 += 2; /*0x71e353*/
          a4 += 4; /*0x71e363*/
          --v10; /*0x71e36b*/
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 0xC) & (0xFFFFFFFF >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13)) /*0x71e36e*/
                              | *(_DWORD *)(a6 + 4) & (v11 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11))
                              | v12;
        }
        while ( v10 ); /*0x71e371*/
        v10 = a1; /*0x71e373*/
      }
      --v13; /*0x71e377*/
    }
    while ( v13 ); /*0x71e37c*/
  }
  return result; /*0x71e381*/
}
