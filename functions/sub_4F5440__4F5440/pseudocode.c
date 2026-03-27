char __cdecl sub_4F5440(_DWORD **a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
  {
    if ( ((unsigned __int8 (__thiscall *)(_DWORD **))(*a1)[0x64])(a1) )
      *a4 = (double)(unsigned __int8)sub_5E0E80(a1);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("is continuing package near PC value %0.2f", *a4);
  return 1;
}
