int __cdecl sub_8FAA00(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x8faa0c*/
  *(_WORD *)(result + 4) = 0x10; /*0x8faa13*/
  *(_WORD *)(result + 6) = 1; /*0x8faa19*/
  *(_DWORD *)(result + 8) = a4; /*0x8faa1f*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8faa22*/
  *(_DWORD *)result = &off_A9B7F8; /*0x8faa28*/
  return result; /*0x8faa2e*/
}
