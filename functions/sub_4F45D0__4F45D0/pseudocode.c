char __cdecl sub_4F45D0(int *a1, int a2, int a3, double *a4)
{
  double BaseCalcAVi; // st5

  if ( !a1 )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) )
    return 1;
  BaseCalcAVi = (double)(int)Actor_GetBaseCalcAVi(a2);
  *a4 = BaseCalcAVi;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("GetBaseActorValue: %s >> %0.2f", *(const char **)(4 * a2 + 0xB0A1A8), BaseCalcAVi);
  return 1;
}
