_DWORD *__cdecl sub_8F9410(__m128 **a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x1C); /*0x8f9424*/
  *(_WORD *)(v4 + 0xC) = 0xFFFF; /*0x8f942b*/
  *(_WORD *)(v4 + 0xE) = 0xFFFF; /*0x8f942f*/
  *(_WORD *)(v4 + 0x10) = 0xFFFF; /*0x8f9433*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8f943b*/
  *(_WORD *)(v4 + 4) = 0x28; /*0x8f943e*/
  *(_WORD *)(v4 + 6) = 1; /*0x8f9444*/
  *(_DWORD *)v4 = &off_A9B6F0; /*0x8f944a*/
  sub_8D1EF0(*a1 + 1, (float *)(v4 + 0x14)); /*0x8f945a*/
  *(_DWORD *)v4 = &off_A9B724; /*0x8f9462*/
  return (_DWORD *)v4; /*0x8f946a*/
}
