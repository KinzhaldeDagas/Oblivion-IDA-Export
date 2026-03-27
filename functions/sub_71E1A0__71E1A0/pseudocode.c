int __cdecl sub_71E1A0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 *a7)
{
  int result; // eax
  int v10; // edi
  unsigned __int8 v11; // bl
  int v12; // ebp
  unsigned __int8 *v13; // edx
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // [esp+14h] [ebp+10h]

  result = a2;
  if ( a2 )
  {
    v10 = a1;
    result = a6;
    do
    {
      if ( v10 )
      {
        do
        {
          v11 = a7[1];
          v12 = *a7 >> *(_BYTE *)(a6 + 0x14);
          v13 = a7 + 1;
          v15 = v11;
          v14 = v13[1];
          a7 = v13 + 3;
          a4 += 4;
          --v10;
          *(_DWORD *)(a4 - 4) = *(_DWORD *)(a6 + 4) & (v15 >> *(_BYTE *)(a6 + 0x15) << *(_BYTE *)(a6 + 0x11))
                              | *(_DWORD *)(a6 + 0xC) & (v14 >> *(_BYTE *)(a6 + 0x17) << *(_BYTE *)(a6 + 0x13))
                              | *(_DWORD *)a6 & (v12 << *(_BYTE *)(a6 + 0x10));
        }
        while ( v10 );
        v10 = a1;
      }
      --a2;
    }
    while ( a2 );
  }
  return result;
}
