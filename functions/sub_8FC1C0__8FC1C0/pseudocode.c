int __cdecl sub_8FC1C0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x8fc1cc*/
  *(_WORD *)(result + 4) = 0x10; /*0x8fc1d3*/
  *(_WORD *)(result + 6) = 1; /*0x8fc1d9*/
  *(_DWORD *)(result + 8) = a4; /*0x8fc1df*/
  *(_DWORD *)result = &off_A9B8BC; /*0x8fc1e2*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8fc1e8*/
  return result; /*0x8fc1ee*/
}
