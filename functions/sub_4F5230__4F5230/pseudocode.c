char __cdecl sub_4F5230(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f523e*/
  if ( a1 ) /*0x4f5240*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f524c*/
      *a4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x250))(a1); /*0x4f525e*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5260*/
    Interface_ConsolePrint("Actor Crime Gold is %.02f ", *a4); /*0x4f5276*/
  return 1; /*0x4f527e*/
}
