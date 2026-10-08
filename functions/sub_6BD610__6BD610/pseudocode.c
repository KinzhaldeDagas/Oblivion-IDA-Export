int __cdecl sub_6BD610(int a1, int a2)
{
  int result; // eax

  *(float *)a1 = *(float *)a2; /*0x6bd61a*/
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4); /*0x6bd61f*/
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8); /*0x6bd625*/
  *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a2 + 0xC); /*0x6bd62b*/
  *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(a2 + 0x10); /*0x6bd631*/
  *(_DWORD *)(a1 + 0x14) = *(_DWORD *)(a2 + 0x14); /*0x6bd63d*/
  *(_DWORD *)(a1 + 0x18) = *(_DWORD *)(a2 + 0x18); /*0x6bd642*/
  *(_DWORD *)(a1 + 0x1C) = *(_DWORD *)(a2 + 0x1C); /*0x6bd648*/
  result = *(_DWORD *)(a2 + 0x20); /*0x6bd64b*/
  *(_DWORD *)(a1 + 0x20) = result; /*0x6bd64e*/
  return result; /*0x6bd651*/
}
