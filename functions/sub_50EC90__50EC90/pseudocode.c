char sub_50EC90()
{
  int v0; // ecx
  bool v1; // al
  int *v3; // ecx

  v0 = unk_B36094; /*0x50ec90*/
  if ( !unk_B36094 ) /*0x50ec98*/
    return 1; /*0x50ec98*/
  v1 = (*(_BYTE *)(v0 + 0x18) & 1) == 0; /*0x50ec9f*/
  if ( (*(_BYTE *)(v0 + 0x18) & 1) != 0 ) /*0x50eca1*/
    *(_WORD *)(v0 + 0x18) &= ~1u; /*0x50ecaa*/
  else
    *(_WORD *)(v0 + 0x18) |= 1u; /*0x50eca3*/
  byte_B09AE4 = !v1; /*0x50ecb7*/
  if ( v1 ) /*0x50ecbd*/
  {
    sub_7C4D90(); /*0x50ecbf*/
    Interface_ConsolePrint("Grass Display %s", "Disabled."); /*0x50eccf*/
    return 1; /*0x50ecd9*/
  }
  v3 = *((int **)g_WorldSceneReceiverRoot + 0x37); /*0x50ece0*/
  if ( v3 ) /*0x50ece8*/
    DrawGrassPass_( /*0x50ed2e*/
      v3[0x22],
      v3[0x23],
      v3[0x24],
      g_zeroNiPoint3.x,
      LODWORD(g_zeroNiPoint3.y),
      LODWORD(g_zeroNiPoint3.z),
      0.0);
  Interface_ConsolePrint("Grass Display %s", "Enabled."); /*0x50ed41*/
  return 1; /*0x50ecd9*/
}
