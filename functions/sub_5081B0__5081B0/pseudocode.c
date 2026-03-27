char sub_5081B0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B42E86 == 0;
  v1 = IsConsoleMode == 0;
  byte_B42E86 = v0;
  if ( !v1 )
  {
    v1 = !v0;
    v2 = (const char *)&aOn_0;
    if ( v1 )
      v2 = (const char *)&aOff;
    Interface_ConsolePrint("Lite Brite -> %s", v2);
  }
  return 1;
}
