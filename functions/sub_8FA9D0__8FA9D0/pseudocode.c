int __cdecl sub_8FA9D0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x8fa9dc*/
  *(_WORD *)(result + 4) = 0x10; /*0x8fa9e3*/
  *(_WORD *)(result + 6) = 1; /*0x8fa9e9*/
  *(_DWORD *)(result + 8) = a4; /*0x8fa9ef*/
  *(_DWORD *)result = &off_A9B7C4; /*0x8fa9f2*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8fa9f8*/
  return result; /*0x8fa9fe*/
}
