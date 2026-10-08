//
// [2026-10-06 directional billboard] Verified: 255 hides node+0xE8; otherwise clears AppCulled and writes NiAlphaProperty+0x1A. Fallout 0x8246E428 corroborates byte threshold semantics.
char __thiscall sub_563E30(_DWORD *this, char a2)
{
  int v2; // eax
  NiProperty *NiPropertyByID; // eax

  v2 = *(this + 0x3A); /*0x563e30*/
  if ( !v2 ) /*0x563e38*/
    return 0; /*0x563e3a*/
  if ( a2 == (char)0xFF ) /*0x563e47*/
  {
    *(_WORD *)(v2 + 0x18) |= 1u; /*0x563e49*/
    return 1; /*0x563e4e*/
  }
  else
  {
    *(_WORD *)(v2 + 0x18) &= ~1u; /*0x563e54*/
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)*(this + 0x3A), 0); /*0x563e62*/
    if ( NiPropertyByID ) /*0x563e69*/
      BYTE2(NiPropertyByID[1].vtbl) = a2; /*0x563e6b*/
    return 1; /*0x563e6e*/
  }
}
