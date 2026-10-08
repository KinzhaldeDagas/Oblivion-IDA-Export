int __cdecl sub_71E1A0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v10; // edi
  unsigned __int8 v11; // bl
  int v12; // ebp
  unsigned __int8 *v13; // edx
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // [esp+14h] [ebp+10h]

  result = a2; /*0x71e1a0*/
  if ( a2 ) /*0x71e1ab*/
  {
    v10 = a1; /*0x71e1b8*/
    result = a6; /*0x71e1c0*/
    do /*0x71e235*/
    {
      if ( v10 ) /*0x71e1c6*/
      {
        do /*0x71e22a*/
        {
          v11 = a7[1]; /*0x71e1d2*/
          v12 = *a7 >> *(_BYTE *)(a6 + 0x14); /*0x71e1dd*/
          v13 = a7 + 1; /*0x71e1e3*/
          v15 = v11; /*0x71e1e6*/
          v14 = v13[1]; /*0x71e1ea*/
          a7 = v13 + 3; /*0x71e20a*/
          a4 += 4; /*0x71e21c*/
          --v10; /*0x71e224*/
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 4) & (v15 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11)) /*0x71e227*/
                              | *(_DWORD *)(a6 + 0xC) & (v14 >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13))
                              | *(_DWORD *)a6 & (v12 << *(_BYTE *)(a6 + 0x10));
        }
        while ( v10 ); /*0x71e22a*/
        v10 = a1; /*0x71e22c*/
      }
      --a2; /*0x71e230*/
    }
    while ( a2 ); /*0x71e235*/
  }
  return result; /*0x71e23a*/
}
