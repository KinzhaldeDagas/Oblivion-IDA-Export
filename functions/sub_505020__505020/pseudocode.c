char __usercall sub_505020@<al>(
        double a1@<st1>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        double *a9)
{
  int v9; // eax
  int v10; // eax

  if ( a5 ) /*0x505027*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x154))(a5) ) /*0x505033*/
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x154))(a5); /*0x505043*/
      if ( v9 ) /*0x50504b*/
      {
        v10 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v9 + 8))(v9, a2, a1); /*0x505054*/
        *a9 = (double)(unsigned __int8)sub_4DE1C0((int)a9, v10); /*0x50506a*/
      }
      if ( MEMORY[0xB361AC] ) /*0x50506c*/
        Interface_ConsolePrint("RemoveFlames >> %0.2f", *a9); /*0x505082*/
    }
  }
  return 1; /*0x50508c*/
}
