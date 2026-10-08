int sub_91F6B0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x1C, 0x15); /*0x91f6bc*/
  *(_WORD *)(result + 4) = 0x1C; /*0x91f6c1*/
  *(_WORD *)(result + 6) = 1; /*0x91f6c7*/
  *(_DWORD *)result = &off_A9DD5C; /*0x91f6cd*/
  *(_DWORD *)(result + 0x10) = 0; /*0x91f6d3*/
  *(_DWORD *)(result + 0x14) = 0; /*0x91f6d6*/
  *(_DWORD *)(result + 0x18) = 0x80000000; /*0x91f6d9*/
  *(_DWORD *)(result + 8) = 0; /*0x91f6e0*/
  *(_DWORD *)(result + 0xC) = 0; /*0x91f6e3*/
  return result; /*0x91f6e6*/
}
