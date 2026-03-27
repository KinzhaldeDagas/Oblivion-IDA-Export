char sub_508300()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B14B74 == 0;
  v1 = IsConsoleMode == 0;
  byte_B14B74 = v0;
  if ( !v1 )
  {
    v1 = !v0;
    v2 = (const char *)&aOn_0;
    if ( v1 )
      v2 = (const char *)&aOff;
    Interface_ConsolePrint("All Combat AI processing is %s", v2);
  }
  return 1;
}
