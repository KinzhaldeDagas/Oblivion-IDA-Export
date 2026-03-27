char sub_500D10()
{
  char GodMode; // al
  bool v1; // zf
  const char *v2; // eax

  GodMode = GetGodMode();
  sub_65D810(GodMode == 0);
  v1 = GetGodMode() == 0;
  v2 = "enabled.";
  if ( v1 )
    v2 = "disabled.";
  Interface_ConsolePrint("God Mode %s", v2);
  return 1;
}
