int __cdecl sub_8FA110(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x1C); /*0x8fa11c*/
  *(_DWORD *)(result + 8) = a4; /*0x8fa123*/
  *(_WORD *)(result + 4) = 0x14; /*0x8fa12b*/
  *(_WORD *)(result + 6) = 1; /*0x8fa131*/
  *(_DWORD *)result = &off_A9B77C; /*0x8fa137*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8fa13d*/
  *(_WORD *)(result + 0xE) = 0xFFFF; /*0x8fa141*/
  *(_WORD *)(result + 0x10) = 0xFFFF; /*0x8fa145*/
  return result; /*0x8fa149*/
}
