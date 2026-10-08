char __cdecl sub_4F6150(int a1, int a2, int a3, double *a4)
{
  if ( a1 ) /*0x4f615c*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f616e*/
      *a4 = sub_611FA0(a1); /*0x4f6177*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6179*/
    Interface_ConsolePrint("GetClothingValue >> %0.2f", *a4); /*0x4f618f*/
  return 1; /*0x4f6197*/
}
