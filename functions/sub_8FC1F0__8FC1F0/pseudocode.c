int __cdecl sub_8FC1F0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x1C); /*0x8fc1fc*/
  *(_WORD *)(result + 4) = 0x10; /*0x8fc203*/
  *(_WORD *)(result + 6) = 1; /*0x8fc209*/
  *(_DWORD *)(result + 8) = a4; /*0x8fc20f*/
  *(_WORD *)(result + 0xC) = 0xFFFF; /*0x8fc212*/
  *(_DWORD *)result = &off_A9B8F0; /*0x8fc218*/
  return result; /*0x8fc21e*/
}
