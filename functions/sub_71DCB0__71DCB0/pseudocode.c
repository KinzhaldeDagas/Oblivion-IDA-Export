int __cdecl sub_71DCB0(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int16 *a7, int a8)
{
  int result; // eax
  int v11; // ebp
  char v12; // bl
  int v13; // [esp+20h] [ebp+1Ch]

  result = a2;
  if ( a2 )
  {
    v13 = a2;
    result = a8;
    do
    {
      if ( a1 )
      {
        v11 = a1;
        do
        {
          a4 += 3;
          *(_BYTE *)(a4 - 3) = (unsigned __int8)((*(_DWORD *)a8 & (unsigned int)*a7) >> *(_BYTE *)(a8 + 0x10)) << *(_BYTE *)(a8 + 0x14);
          v12 = (unsigned __int8)((*(_DWORD *)(a8 + 4) & (unsigned int)*a7++) >> *(_BYTE *)(a8 + 0x11)) << *(_BYTE *)(a8 + 0x15);
          *(_BYTE *)(a4 - 2) = v12;
          --v11;
          *(_BYTE *)(a4 - 1) = (unsigned __int8)((*(_DWORD *)(a8 + 8) & (unsigned int)a7[0xFFFFFFFF]) >> *(_BYTE *)(a8 + 0x12)) << *(_BYTE *)(a8 + 0x16);
        }
        while ( v11 );
      }
      --v13;
    }
    while ( v13 );
  }
  return result;
}
