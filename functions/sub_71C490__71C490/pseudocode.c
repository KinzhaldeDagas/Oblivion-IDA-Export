int __cdecl sub_71C490(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8)
{
  int result; // eax
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // [esp+14h] [ebp+10h]

  result = a2;
  if ( a2 )
  {
    v10 = a1;
    result = a8;
    do
    {
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v11 = *a7++;
          a4 += 2;
          *(_WORD *)(a4 - 2) = *(_WORD *)(a6 + 4)
                             & ((unsigned __int8)((unsigned __int8)((unsigned __int8)((v11 & *(_DWORD *)(a8 + 4)) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15)) >> *(_BYTE *)(a6 + 0x15)) << *(_BYTE *)(a6 + 0x11))
                             | *(_WORD *)a6
                             & ((unsigned __int8)((unsigned __int8)((unsigned __int8)((*(_DWORD *)a8 & v11) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14)) >> *(_BYTE *)(a6 + 0x14)) << *(_BYTE *)(a6 + 0x10))
                             | *(_WORD *)(a6 + 8)
                             & ((unsigned __int8)((unsigned __int8)((unsigned __int8)((*(_DWORD *)(a8 + 8)
                                                                                     & (unsigned int)(unsigned __int16)v11) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16)) >> *(_BYTE *)(a6 + 0x16)) << *(_BYTE *)(a6 + 0x12))
                             | *(_WORD *)(a6 + 0xC)
                             & ((unsigned __int8)((unsigned __int8)((unsigned __int8)((v11 & *(_DWORD *)(a8 + 0xC)) >> *(_BYTE *)(a8 + 0x13)) << *(_BYTE *)(a8 + 0x17)) >> *(_BYTE *)(a6 + 0x17)) << *(_BYTE *)(a6 + 0x13));
          --v12;
        }
        while ( v12 );
        v10 = a1;
      }
      --a2;
    }
    while ( a2 );
  }
  return result;
}
