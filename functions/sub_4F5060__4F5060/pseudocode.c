char __cdecl sub_4F5060(_DWORD **a1, int a2, int a3, double *a4)
{
  double IsAlerted; // st5

  *a4 = 0.0;
  if ( !a1 )
    return 1;
  if ( !((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) )
    return 1;
  IsAlerted = (double)(unsigned __int8)Actor_IsAlerted(a1);
  *a4 = IsAlerted;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("GetIsAlerted: %0.2f", IsAlerted);
  return 1;
}
