char sub_507DC0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B125E8 && *(_BYTE *)(sub_55F7E0(1) + 0x20) && *(_BYTE *)(sub_55F7E0(1) + 0x21);
  *(_BYTE *)(sub_55F7E0(1) + 0x21) = !v0;
  if ( IsConsoleMode )
  {
    if ( !byte_B125E8
      || !*(_BYTE *)(sub_55F7E0(1) + 0x20)
      || (v1 = *(_BYTE *)(sub_55F7E0(1) + 0x21) == 0, v2 = (const char *)&aOn_0, v1) )
    {
      v2 = (const char *)&aOff;
    }
    Interface_ConsolePrint("Leaves -> %s", v2);
  }
  return 1;
}
