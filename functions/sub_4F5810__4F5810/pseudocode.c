char __cdecl sub_4F5810(int a1, int a2, int a3, double *a4)
{
  void (__thiscall *v4)(int, _DWORD); // edx

  *a4 = 0.0; /*0x4f581e*/
  if ( a1 ) /*0x4f5820*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x4f582c*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x260))(a1) ) /*0x4f583c*/
      {
        v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x264); /*0x4f5846*/
        *a4 = 1.0; /*0x4f584c*/
        v4(a1, 0); /*0x4f5852*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5854*/
    Interface_ConsolePrint("Has Vampire Fed >> %0.2f", *a4); /*0x4f586a*/
  return 1; /*0x4f5872*/
}
