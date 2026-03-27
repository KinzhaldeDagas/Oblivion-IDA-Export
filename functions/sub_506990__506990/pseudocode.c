char sub_506990()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B1437C == 0;
  v1 = IsConsoleMode == 0;
  byte_B1437C = v0;
  if ( !v1 )
  {
    v1 = !v0;
    v2 = "DISABLED";
    if ( !v1 )
      v2 = "ENABLED";
    Interface_ConsolePrint("Fog of war - %s.", v2);
  }
  return 1;
}
