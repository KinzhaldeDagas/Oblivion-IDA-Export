int __cdecl sub_8CC4E0(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  int v7; // edx

  result = *(_DWORD *)(a1 + 0x18);
  v3 = 0;
  if ( result > 0 )
  {
    result = 0;
    do
    {
      v4 = *(_DWORD *)(a1 + 0x14);
      if ( *(_DWORD *)(result + v4 + 4) == a2 || *(_DWORD *)(result + v4 + 8) == a2 )
      {
        v5 = *(_DWORD *)(a1 + 0x18) - 1;
        *(_DWORD *)(a1 + 0x18) = v5;
        v5 <<= 6;
        v6 = *(_DWORD *)(v5 + v4);
        v7 = v4 + v5;
        *(_DWORD *)(result + v4) = v6;
        *(_DWORD *)(result + v4 + 4) = *(_DWORD *)(v7 + 4);
        *(_DWORD *)(result + v4 + 8) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(result + v4 + 0xC) = *(_DWORD *)(v7 + 0xC);
        *(_DWORD *)(result + v4 + 0x10) = *(_DWORD *)(v7 + 0x10);
        *(_DWORD *)(result + v4 + 0x14) = *(_DWORD *)(v7 + 0x14);
        *(_DWORD *)(result + v4 + 0x18) = *(_DWORD *)(v7 + 0x18);
        *(_OWORD *)(result + v4 + 0x20) = *(_OWORD *)(v7 + 0x20);
        *(_OWORD *)(result + v4 + 0x30) = *(_OWORD *)(v7 + 0x30);
        --v3;
        result -= 0x40;
      }
      ++v3;
      result += 0x40;
    }
    while ( v3 < *(_DWORD *)(a1 + 0x18) );
  }
  return result;
}
