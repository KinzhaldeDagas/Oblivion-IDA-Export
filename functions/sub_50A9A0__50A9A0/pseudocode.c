char sub_50A9A0()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = byte_B125E8 && *(_BYTE *)(sub_55F7E0(1) + 0x20);
  *(_BYTE *)(sub_55F7E0(1) + 0x20) = !v0;
  if ( !byte_B125E8 || (v1 = *(_BYTE *)(sub_55F7E0(1) + 0x20) == 0, v2 = "NOT CULLED", v1) )
    v2 = "CULLED";
  Interface_ConsolePrint("All trees are now %s.", v2);
  return 1;
}
