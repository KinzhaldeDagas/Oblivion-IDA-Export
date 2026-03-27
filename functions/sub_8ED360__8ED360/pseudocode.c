int __cdecl sub_8ED360(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)(a1 + 0x28) = 0;
    *(_DWORD *)(a1 + 0x38) = 0;
    *(_DWORD *)(a1 + 0x3C) = 0;
    *(_DWORD *)(a1 + 0x40) = 0x80000000;
    *(_DWORD *)(a1 + 0x50) = 0;
    *(_DWORD *)(a1 + 0x54) = 0;
    *(_DWORD *)(a1 + 0x58) = 0x80000000;
    *(_DWORD *)(a1 + 0x5C) = 0;
    *(_DWORD *)(a1 + 0x60) = 0;
    *(_DWORD *)(a1 + 0x64) = 0x80000000;
    *(_DWORD *)a1 = &off_A9AFFC;
    *(_DWORD *)(a1 + 0x120) = 0;
    *(_DWORD *)(a1 + 0x124) = 0;
    *(_DWORD *)(a1 + 0x128) = 0x80000000;
  }
  return result;
}
