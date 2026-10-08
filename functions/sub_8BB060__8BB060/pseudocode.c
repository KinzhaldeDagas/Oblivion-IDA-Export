int __stdcall sub_8BB060(int a1)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x17); /*0x8bb06c*/
  *(_WORD *)(result + 4) = 8; /*0x8bb06f*/
  *(_WORD *)(result + 6) = 1; /*0x8bb075*/
  *(_DWORD *)result = &off_A98254; /*0x8bb07b*/
  return result; /*0x8bb081*/
}
