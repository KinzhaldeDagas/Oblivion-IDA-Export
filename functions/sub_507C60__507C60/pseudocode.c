char sub_507C60()
{
  TES *v0; // ecx
  const char *v1; // eax

  v0 = TES;
  byte_B361FC ^= 1u;
  if ( !v0->currentInteriorCell )
    sub_440530((int)v0, (unsigned __int8)byte_B361FC);
  if ( IsConsoleMode )
  {
    v1 = (const char *)&aOn_0;
    if ( !byte_B361FC )
      v1 = (const char *)&aOff;
    Interface_ConsolePrint("Borders -> %s", v1);
  }
  return 1;
}
