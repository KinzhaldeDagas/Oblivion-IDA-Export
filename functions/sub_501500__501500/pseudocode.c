char sub_501500()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B3BDA4 == 0;
  v1 = IsConsoleMode == 0;
  byte_B3BDA4 = v0;
  if ( !v1 )
  {
    v1 = !v0;
    v2 = (const char *)&aOn_0;
    if ( v1 )
      v2 = (const char *)&aOff;
    Interface_ConsolePrint("AI Processing of Actor's Editor Schedules is  %s", v2);
  }
  return 1;
}
