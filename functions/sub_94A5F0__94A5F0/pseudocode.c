int sub_94A5F0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x15); /*0x94a5fc*/
  *(_WORD *)(result + 4) = 0x14; /*0x94a5ff*/
  *(_WORD *)(result + 6) = 1; /*0x94a605*/
  *(_DWORD *)result = &off_AA2BD0; /*0x94a60b*/
  *(_DWORD *)(result + 8) = 0; /*0x94a613*/
  *(_DWORD *)(result + 0xC) = 0; /*0x94a616*/
  *(_DWORD *)(result + 0x10) = 0x80000000; /*0x94a619*/
  return result; /*0x94a620*/
}
