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

  result = a2;
  if ( a2 )
  {
    v9 = a1;
    v17 = a2;
    result = a6;
    do
    {
      if ( v9 )
      {
        v16 = v9;
        do
        {
          v11 = *a7;
          v12 = a7[1];
          v13 = a7 + 2;
          v18 = v12;
          v14 = *v13++;
          v19 = v14;
          v15 = *v13;
          a7 = v13 + 1;
          a4 += 4;
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 0xC) & (v15 >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13))
                              | *(_DWORD *)(a6 + 4) & (v18 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11))
                              | *(_DWORD *)(a6 + 8) & (v19 >> *(_BYTE *)(a6 + 0x16) << *(_BYTE *)(a6 + 0x12))
                              | *(_DWORD *)a6 & (v11 >> *(_BYTE *)(a6 + 0x14) << *(_BYTE *)(a6 + 0x10));
          --v16;
        }
        while ( v16 );
        v9 = a1;
      }
      --v17;
    }
    while ( v17 );
  }
  return result;
}
