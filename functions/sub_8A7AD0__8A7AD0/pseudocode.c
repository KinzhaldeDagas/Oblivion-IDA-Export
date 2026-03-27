int sub_8A7AD0()
{
  int v0; // esi
  _RTL_CRITICAL_SECTION_0 *v1; // eax
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x32);
  *(_WORD *)(v4 + 4) = 0x18;
  v0 = v4;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_A975F0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 0xC) = 0;
  *(_DWORD *)(v4 + 0x10) = 0x80000000;
  v1 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                    dword_BA7D98,
                                    0x18,
                                    0x12);
  v2 = v1;
  if ( v1 )
  {
    InitializeCriticalSectionAndSpinCount(v1, 0x3E8);
    *(_DWORD *)(v0 + 0x14) = v2;
  }
  else
  {
    *(_DWORD *)(v0 + 0x14) = 0;
  }
  return v0;
}
