char __usercall sub_4F4570@<al>(char a1@<bpl>, double a2@<st1>, double a3@<st0>, int a4, int a5, int a6, double *a7)
{
  double IsMenuMode; // st7

  *a7 = 0.0;
  if ( a5 )
  {
    if ( !InterfaceManager_MenuModeHasFocus(a1, 0.0, a2, a3, a5) )
      goto LABEL_6;
    IsMenuMode = 1.0;
  }
  else
  {
    IsMenuMode = (double)(unsigned __int8)InterfaceManager_IsMenuMode();
  }
  *a7 = IsMenuMode;
LABEL_6:
  if ( IsConsoleMode )
    Interface_ConsolePrint("MenuMode %d >> %0.2f", a5, *a7);
  return 1;
}
