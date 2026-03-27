int sub_8BB530()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x15);
  *(_WORD *)(result + 4) = 8;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_A98234;
  return result;
}
