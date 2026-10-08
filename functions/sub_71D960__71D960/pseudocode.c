int __cdecl sub_71D960(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v9; // ecx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // edx
  unsigned __int8 v14; // bl
  int v15; // [esp+4h] [ebp-4h]
  int v16; // [esp+10h] [ebp+8h]
  unsigned __int8 v17; // [esp+18h] [ebp+10h]

  result = a2; /*0x71d961*/
  if ( a2 ) /*0x71d96c*/
  {
    v9 = a1; /*0x71d972*/
    v15 = a2; /*0x71d97d*/
    result = a6; /*0x71d981*/
    do /*0x71da14*/
    {
      if ( v9 ) /*0x71d992*/
      {
        v16 = v9; /*0x71d994*/
        do /*0x71da0a*/
        {
          v11 = *a7; /*0x71d998*/
          v12 = a7[1]; /*0x71d99a*/
          v13 = a7 + 2; /*0x71d9a0*/
          v17 = v12; /*0x71d9a2*/
          v14 = *v13; /*0x71d9a6*/
          a7 = v13 + 1; /*0x71d9ad*/
          a4 += 4; /*0x71d9f6*/
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 0xC) & (0xFFu >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13)) /*0x71d9fe*/
                              | *(_DWORD *)(a6 + 8) & (v14 >> *(_BYTE *)(a6 + 0x16) << *(_BYTE *)(a6 + 0x12))
                              | *(_DWORD *)(a6 + 4) & (v17 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11))
                              | *(_DWORD *)a6 & (v11 >> *(_BYTE *)(a6 + 0x14) << *(_BYTE *)(a6 + 0x10));
          --v16; /*0x71da06*/
        }
        while ( v16 ); /*0x71da0a*/
        v9 = a1; /*0x71da0c*/
      }
      --v15; /*0x71da10*/
    }
    while ( v15 ); /*0x71da14*/
  }
  return result; /*0x71da1d*/
}
