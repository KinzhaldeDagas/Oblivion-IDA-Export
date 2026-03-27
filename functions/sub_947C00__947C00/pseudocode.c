int sub_947C00()
{
  int v0; // esi
  _RTL_CRITICAL_SECTION_0 *v1; // eax
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x32);
  *(_WORD *)(v4 + 4) = 0x1C;
  v0 = v4;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_AA2A0C;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 0xC) = 0;
  *(_DWORD *)(v4 + 0x10) = 0;
  *(_DWORD *)(v4 + 0x14) = 0x80000000;
  v1 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(
                                    dword_BA7D98,
                                    0x18,
                                    0x12);
  v2 = v1;
  if ( v1 )
  {
    InitializeCriticalSectionAndSpinCount(v1, 0x7D0);
    *(_DWORD *)(v0 + 0x18) = v2;
  }
  else
  {
    *(_DWORD *)(v0 + 0x18) = 0;
  }
  return v0;
}
