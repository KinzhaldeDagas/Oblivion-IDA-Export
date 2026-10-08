char __cdecl sub_4F4570(int a1, int a2, int a3, double *a4)
{
  double IsMenuMode; // st7

  *a4 = 0.0; /*0x4f4577*/
  if ( a2 ) /*0x4f4580*/
  {
    if ( !InterfaceManager_MenuModeHasFocus(a2) ) /*0x4f459f*/
      goto LABEL_6; /*0x4f459f*/
    IsMenuMode = 1.0; /*0x4f45a1*/
  }
  else
  {
    IsMenuMode = (double)(unsigned __int8)InterfaceManager_IsMenuMode(); /*0x4f458e*/
  }
  *a4 = IsMenuMode; /*0x4f45a3*/
LABEL_6:
  if ( MEMORY[0xB361AC] ) /*0x4f45a5*/
    Interface_ConsolePrint("MenuMode %d >> %0.2f", a2, *a4); /*0x4f45bc*/
  return 1; /*0x4f45c4*/
}
