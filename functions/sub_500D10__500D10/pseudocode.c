// Console command handler: toggles g_godModeEnabled through SetGodMode and prints the resulting God Mode enabled/disabled state.
bool __cdecl Cmd_ToggleGodMode_Execute()
{
  bool GodMode; // al
  bool v1; // zf
  const char *v2; // eax

  GodMode = GetGodMode(); /*0x500d10*/
  SetGodMode(!GodMode); /*0x500d1b*/
  v1 = !GetGodMode(); /*0x500d28*/
  v2 = "enabled."; /*0x500d2a*/
  if ( v1 ) /*0x500d2f*/
    v2 = "disabled."; /*0x500d31*/
  Interface_ConsolePrint("God Mode %s", v2); /*0x500d3c*/
  return 1; /*0x500d46*/
}
