int __cdecl sub_6BD610(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC);
  *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a2 + 0x10);
  *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a2 + 0x14);
  *(_DWORD *)(a1 + 0x18) = *(_DWORD *)(a2 + 0x18);
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x1C);
  result = *(_DWORD *)(a2 + 0x20);
  *(_DWORD *)(a1 + 0x20) = result;
  return result;
}
