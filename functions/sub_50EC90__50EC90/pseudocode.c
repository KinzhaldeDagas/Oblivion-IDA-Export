char sub_50EC90()
{
  int v0; // ecx
  bool v1; // al
  int *camera; // ecx

  v0 = dword_B36094;
  if ( !dword_B36094 )
    return 1;
  v1 = (*(_BYTE *)(v0 + 0x18) & 1) == 0;
  if ( (*(_BYTE *)(v0 + 0x18) & 1) != 0 )
    *(_WORD *)(v0 + 0x18) &= ~1u;
  else
    *(_WORD *)(v0 + 0x18) |= 1u;
  byte_B09AE4 = !v1;
  if ( v1 )
  {
    sub_7C4D90();
    Interface_ConsolePrint("Grass Display %s", "Disabled.");
    return 1;
  }
  camera = (int *)g_worldScenegraph->camera;
  if ( camera )
    DrawGrassPass_(
      camera[0x22],
      camera[0x23],
      camera[0x24],
      Vector3_InitValue_,
      *((_DWORD *)&Vector3_InitValue_ + 1),
      LODWORD(dword_B3F9B0),
      0.0);
  Interface_ConsolePrint("Grass Display %s", "Enabled.");
  return 1;
}
