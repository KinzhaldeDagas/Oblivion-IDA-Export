char __usercall sub_4F5730@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  void *v8; // eax
  int v10; // [esp+Ch] [ebp-8h]

  *a6 = 0.0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) )
    {
      if ( a4 )
      {
        v8 = (void *)(*(int (__usercall **)@<eax>(int@<ecx>, int, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x124))(
                       a3,
                       a4,
                       a2,
                       a1);
        if ( (unsigned __int8)MagicTarget_HasMagicItem(v8, v10) )
          *a6 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Spell Target >> %0.2f", *a6);
  return 1;
}
