char sub_50FCA0()
{
  _DWORD *v0; // eax
  NiNode *v1; // ecx
  NiProperty *NiPropertyByID; // eax
  char v3; // cl
  const char *v4; // eax

  v0 = g_WorldSceneReceiverRoot; /*0x50fca0*/
  BYTE2(dword_B361CC[0xC]) ^= 1u; /*0x50fca5*/
  if ( *((_WORD *)v0 + 0x5B) > 1u ) /*0x50fcb4*/
    v1 = *(NiNode **)(v0[0x2C] + 4); /*0x50fcc0*/
  else
    v1 = 0; /*0x50fcb6*/
  NiPropertyByID = NiNode_GetNiPropertyByID(v1, 8); /*0x50fcc5*/
  v3 = BYTE2(dword_B361CC[0xC]); /*0x50fccc*/
  if ( NiPropertyByID ) /*0x50fcd2*/
  {
    if ( v3 ) /*0x50fcd6*/
      LOWORD(NiPropertyByID[1].vtbl) |= 1u; /*0x50fcd8*/
    else
      LOWORD(NiPropertyByID[1].vtbl) &= ~1u; /*0x50fcdf*/
  }
  if ( MEMORY[0xB361AC] ) /*0x50fce5*/
  {
    v4 = "On"; /*0x50fcf0*/
    if ( !v3 ) /*0x50fcf5*/
      v4 = (const char *)&aOff; /*0x50fcf7*/
    Interface_ConsolePrint("Wireframe -> %s", v4); /*0x50fd02*/
  }
  return 1; /*0x50fd0c*/
}
