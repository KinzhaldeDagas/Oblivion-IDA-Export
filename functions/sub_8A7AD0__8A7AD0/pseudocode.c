int sub_8A7AD0()
{
  int v0; // esi
  _RTL_CRITICAL_SECTION_0 *v1; // eax
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x32); /*0x8a7adc*/
  *(_WORD *)(v4 + 4) = 0x18; /*0x8a7adf*/
  v0 = v4; /*0x8a79b1*/
  *(_WORD *)(v4 + 6) = 1; /*0x8a79b3*/
  *(_DWORD *)v4 = &off_A975F0; /*0x8a79b9*/
  *(_DWORD *)(v4 + 8) = 0; /*0x8a79c0*/
  *(_DWORD *)(v4 + 0xC) = 0; /*0x8a79c7*/
  *(_DWORD *)(v4 + 0x10) = 0x80000000; /*0x8a79ce*/
  v1 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x8a79e1*/
                                    unk_BA7D98,
                                    0x18,
                                    0x12);
  v2 = v1; /*0x8a79e4*/
  if ( v1 ) /*0x8a79e8*/
  {
    InitializeCriticalSectionAndSpinCount(v1, 0x3E8); /*0x8a79f0*/
    *(_DWORD *)(v0 + 0x14) = v2; /*0x8a79f6*/
  }
  else
  {
    *(_DWORD *)(v0 + 0x14) = 0; /*0x8a7a00*/
  }
  return v0; /*0x8a79fd*/
}
