int sub_91CF20()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x15);
  *(_WORD *)(result + 4) = 0x14;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_A9D6C0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 0xC) = 0;
  *(_DWORD *)(result + 0x10) = 0x80000000;
  return result;
}
