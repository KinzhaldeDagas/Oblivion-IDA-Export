_WORD *__cdecl sub_746FB0(int a1)
{
  *(_DWORD *)(a1 + 0xB10) = a1 + 0x8C; /*0x746fba*/
  *(_DWORD *)(a1 + 0xB28) = a1 + 0xA74; /*0x746fc6*/
  *(_DWORD *)(a1 + 0xB18) = &off_B27DFC; /*0x746fd4*/
  *(_DWORD *)(a1 + 0xB1C) = a1 + 0x980; /*0x746fde*/
  *(_DWORD *)(a1 + 0xB24) = &off_B27E10; /*0x746fe4*/
  *(_DWORD *)(a1 + 0xB30) = &byte_B27E24; /*0x746fee*/
  *(_WORD *)(a1 + 0x16B0) = 0; /*0x746ff8*/
  *(_DWORD *)(a1 + 0x16B4) = 0; /*0x746fff*/
  *(_DWORD *)(a1 + 0x16AC) = 8; /*0x747005*/
  return sub_745DB0(a1 + 0x980, a1);
}
