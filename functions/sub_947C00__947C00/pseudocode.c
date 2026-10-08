int sub_947C00()
{
  int v0; // esi
  _RTL_CRITICAL_SECTION_0 *v1; // eax
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x32); /*0x947c0c*/
  *(_WORD *)(v4 + 4) = 0x1C; /*0x947c0f*/
  v0 = v4; /*0x947b01*/
  *(_WORD *)(v4 + 6) = 1; /*0x947b03*/
  *(_DWORD *)v4 = &off_AA2A0C; /*0x947b09*/
  *(_DWORD *)(v4 + 8) = 0; /*0x947b0f*/
  *(_DWORD *)(v4 + 0xC) = 0; /*0x947b17*/
  *(_DWORD *)(v4 + 0x10) = 0; /*0x947b1e*/
  *(_DWORD *)(v4 + 0x14) = 0x80000000; /*0x947b25*/
  v1 = (_RTL_CRITICAL_SECTION_0 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))( /*0x947b38*/
                                    unk_BA7D98,
                                    0x18,
                                    0x12);
  v2 = v1; /*0x947b3b*/
  if ( v1 ) /*0x947b3f*/
  {
    InitializeCriticalSectionAndSpinCount(v1, 0x7D0); /*0x947b47*/
    *(_DWORD *)(v0 + 0x18) = v2; /*0x947b4d*/
  }
  else
  {
    *(_DWORD *)(v0 + 0x18) = 0; /*0x947b57*/
  }
  return v0; /*0x947b54*/
}
