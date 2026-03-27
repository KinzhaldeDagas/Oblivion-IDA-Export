int sub_945BD0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x15);
  *(_WORD *)(result + 4) = 8;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_AA28A4;
  return result;
}
