char sub_501440()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B3BDA1 == 0;
  v1 = IsConsoleMode == 0;
  byte_B3BDA1 = v0;
  if ( !v1 )
  {
    v1 = !v0;
    v2 = (const char *)&aOn_0;
    if ( v1 )
      v2 = (const char *)&aOff;
    Interface_ConsolePrint("AI Processing for actors in Low is  %s", v2);
  }
  return 1;
}
