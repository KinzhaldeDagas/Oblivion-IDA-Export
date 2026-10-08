char __usercall sub_4F5730@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  void *v6; // eax

  *a6 = 0.0; /*0x4f573e*/
  if ( a3 ) /*0x4f5740*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x4f574c*/
    {
      if ( a4 ) /*0x4f5758*/
      {
        v6 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x124))( /*0x4f5765*/
                       a3,
                       a2,
                       a1);
        if ( (unsigned __int8)MagicTarget_HasMagicItem(v6, a4) ) /*0x4f5769*/
          *a6 = 1.0; /*0x4f5774*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f5776*/
    Interface_ConsolePrint("Is Spell Target >> %0.2f", *a6); /*0x4f578c*/
  return 1; /*0x4f5794*/
}
