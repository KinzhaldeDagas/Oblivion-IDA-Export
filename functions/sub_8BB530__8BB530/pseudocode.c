int sub_8BB530()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x15); /*0x8bb53c*/
  *(_WORD *)(result + 4) = 8; /*0x8bb53f*/
  *(_WORD *)(result + 6) = 1; /*0x8bb545*/
  *(_DWORD *)result = &off_A98234; /*0x8bb54b*/
  return result; /*0x8bb551*/
}
