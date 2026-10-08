// [Controller decode 2026-07-09] Updates Controls menu invert-Y button label from bInvertYValues.
void __stdcall ControlsMenu::SetInvertYButtonLabel(_DWORD *a1, char a2)
{
  char *value; // eax

  if ( a1 ) /*0x59b646*/
  {
    value = (char *)MEMORY[0xB38DA0].value; /*0x59b64d*/
    if ( !a2 ) /*0x59b652*/
      value = (char *)MEMORY[0xB38DA8].value; /*0x59b654*/
    Tile_SetString(a1, (_DWORD *)0xFDE, value); /*0x59b665*/
  }
}
