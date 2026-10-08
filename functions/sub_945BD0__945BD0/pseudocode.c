int sub_945BD0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x15); /*0x945bdc*/
  *(_WORD *)(result + 4) = 8; /*0x945bdf*/
  *(_WORD *)(result + 6) = 1; /*0x945be5*/
  *(_DWORD *)result = &off_AA28A4; /*0x945beb*/
  return result; /*0x945bf1*/
}
