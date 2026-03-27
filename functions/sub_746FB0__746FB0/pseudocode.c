_WORD *__cdecl sub_746FB0(int a1)
{
  *(_DWORD *)(a1 + 0xB10) = a1 + 0x8C;
  *(_DWORD *)(a1 + 0xB28) = a1 + 0xA74;
  *(_DWORD *)(a1 + 0xB18) = &off_B27DFC;
  *(_DWORD *)(a1 + 0xB1C) = a1 + 0x980;
  *(_DWORD *)(a1 + 0xB24) = &off_B27E10;
  *(_DWORD *)(a1 + 0xB30) = &byte_B27E24;
  *(_WORD *)(a1 + 0x16B0) = 0;
  *(_DWORD *)(a1 + 0x16B4) = 0;
  *(_DWORD *)(a1 + 0x16AC) = 8;
  return sub_745DB0(a1 + 0x980, a1);
}
