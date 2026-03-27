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
  int v11; // eax
  int v12; // eax

  if ( a5 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x154))(a5) )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x154))(a5);
      if ( v11 )
      {
        v12 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v11 + 8))(v11, a2, a1);
        *a9 = (double)(unsigned __int8)sub_4DE1C0((int)a9, v12);
      }
      if ( IsConsoleMode )
        Interface_ConsolePrint("RemoveFlames >> %0.2f", *a9);
    }
  }
  return 1;
}
