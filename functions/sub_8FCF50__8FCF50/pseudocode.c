int __cdecl sub_8FCF50(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x8fcf5c*/
  *(_WORD *)(result + 4) = 0x10; /*0x8fcf63*/
  *(_WORD *)(result + 6) = 1; /*0x8fcf69*/
  *(_DWORD *)(result + 8) = a4; /*0x8fcf6f*/
  *(_DWORD *)result = &off_A9B934; /*0x8fcf72*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8fcf78*/
  return result; /*0x8fcf7e*/
}
