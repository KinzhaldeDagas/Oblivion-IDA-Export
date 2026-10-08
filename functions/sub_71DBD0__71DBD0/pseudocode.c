int __cdecl sub_71DBD0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v9; // ecx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // edx
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // bl
  int v16; // [esp+4h] [ebp-8h]
  int v17; // [esp+8h] [ebp-4h]
  unsigned __int8 v18; // [esp+14h] [ebp+8h]
  unsigned __int8 v19; // [esp+1Ch] [ebp+10h]

  result = a2; /*0x71dbd0*/
  if ( a2 ) /*0x71dbde*/
  {
    v9 = a1; /*0x71dbe4*/
    v17 = a2; /*0x71dbef*/
    result = a6; /*0x71dbf3*/
    do /*0x71dc95*/
    {
      if ( v9 ) /*0x71dc02*/
      {
        v16 = v9; /*0x71dc08*/
        do /*0x71dc8b*/
        {
          v11 = *a7; /*0x71dc10*/
          v12 = a7[1]; /*0x71dc12*/
          v13 = a7 + 2; /*0x71dc18*/
          v18 = v12; /*0x71dc1a*/
          v14 = *v13++; /*0x71dc1e*/
          v19 = v14; /*0x71dc23*/
          v15 = *v13; /*0x71dc27*/
          a7 = v13 + 1; /*0x71dc2e*/
          a4 += 4; /*0x71dc77*/
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 0xC) & (v15 >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13)) /*0x71dc7f*/
                              | *(_DWORD *)(a6 + 4) & (v18 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11))
                              | *(_DWORD *)(a6 + 8) & (v19 >> *(_BYTE *)(a6 + 0x16) << *(_BYTE *)(a6 + 0x12))
                              | *(_DWORD *)a6 & (v11 >> *(_BYTE *)(a6 + 0x14) << *(_BYTE *)(a6 + 0x10));
          --v16; /*0x71dc87*/
        }
        while ( v16 ); /*0x71dc8b*/
        v9 = a1; /*0x71dc8d*/
      }
      --v17; /*0x71dc91*/
    }
    while ( v17 ); /*0x71dc95*/
  }
  return result; /*0x71dc9e*/
}
