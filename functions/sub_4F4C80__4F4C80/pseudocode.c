char __cdecl sub_4F4C80(int a1, int a2, int a3, double *a4)
{
  if ( a1 ) /*0x4f4c8c*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f4c98*/
      *a4 = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x390))(a1); /*0x4f4cb5*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4cb7*/
    Interface_ConsolePrint("GetAttacked >> %0.2f", *a4); /*0x4f4ccd*/
  return 1; /*0x4f4cd5*/
}
