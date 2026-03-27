char sub_507BD0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = bGameSetting_MagicTargetDebugMsg__ == 0;
  bGameSetting_MagicTargetDebugMsg__ = v0;
  v1 = !v0;
  v2 = "shown.";
  if ( v1 )
    v2 = "hidden.";
  Interface_ConsolePrint("Magic stats %s", v2);
  return 1;
}
