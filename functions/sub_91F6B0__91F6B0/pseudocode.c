int sub_91F6B0()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x1C, 0x15);
  *(_WORD *)(result + 4) = 0x1C;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_A9DD5C;
  *(_DWORD *)(result + 0x10) = 0;
  *(_DWORD *)(result + 0x14) = 0;
  *(_DWORD *)(result + 0x18) = 0x80000000;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 0xC) = 0;
  return result;
}
