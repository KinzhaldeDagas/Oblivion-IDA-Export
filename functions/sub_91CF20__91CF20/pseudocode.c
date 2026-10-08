int sub_91CF20()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x15); /*0x91cf2c*/
  *(_WORD *)(result + 4) = 0x14; /*0x91cf2f*/
  *(_WORD *)(result + 6) = 1; /*0x91cf35*/
  *(_DWORD *)result = &off_A9D6C0; /*0x91cf3b*/
  *(_DWORD *)(result + 8) = 0; /*0x91cf43*/
  *(_DWORD *)(result + 0xC) = 0; /*0x91cf46*/
  *(_DWORD *)(result + 0x10) = 0x80000000; /*0x91cf49*/
  return result; /*0x91cf50*/
}
