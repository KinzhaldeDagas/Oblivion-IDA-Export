// HasMagicEffect evaluator: validates thisObj as a magic target, gets MagicTarget through vfunc +0x124, then queries MagicTarget_HasEffect(effectCode).
char __usercall Cmd_HasMagicEffect_EvalOrConsole@<al>(
        double a1@<st1>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        double *a6)
{
  void *v6; // eax
  int v8; // [esp+4h] [ebp-Ch]

  *a6 = 0.0; /*0x4f830e*/
  if ( a3 ) /*0x4f8310*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x4f831c*/
    {
      if ( a4 ) /*0x4f8328*/
      {
        v8 = *(_DWORD *)(a4 + 0x98); /*0x4f8330*/
        v6 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x124))( /*0x4f833b*/
                       a3,
                       a2,
                       a1);
        if ( MagicTarget_HasEffect(v6, v8) ) /*0x4f833f*/
          *a6 = 1.0; /*0x4f834a*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f834c*/
    Interface_ConsolePrint("Has Magic Effect >> %0.2f", *a6); /*0x4f8362*/
  return 1; /*0x4f836a*/
}
