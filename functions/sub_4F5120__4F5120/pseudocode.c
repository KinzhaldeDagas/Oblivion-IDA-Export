char __cdecl sub_4F5120(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f512e*/
  if ( a1 ) /*0x4f5130*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f513c*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x350))(a1) ) /*0x4f514c*/
        *a4 = 1.0; /*0x4f5154*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5156*/
    Interface_ConsolePrint("Is Yielding >> %0.2f", *a4); /*0x4f516c*/
  return 1; /*0x4f5174*/
}
