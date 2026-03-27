int __cdecl sub_8FC1C0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x1C);
  *(_WORD *)(result + 4) = 0x10;
  *(_WORD *)(result + 6) = 1;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)result = &off_A9B8BC;
  *(_WORD *)(result + 0xC) = 0xFFFF;
  return result;
}
