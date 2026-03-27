int __cdecl sub_8FA110(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x1C);
  *(_DWORD *)(result + 8) = a4;
  *(_WORD *)(result + 4) = 0x14;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)result = &off_A9B77C;
  *(_WORD *)(result + 0xC) = 0xFFFF;
  *(_WORD *)(result + 0xE) = 0xFFFF;
  *(_WORD *)(result + 0x10) = 0xFFFF;
  return result;
}
