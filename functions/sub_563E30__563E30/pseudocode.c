char __thiscall sub_563E30(_DWORD *this, char a2)
{
  int v2; // eax
  NiProperty *NiPropertyByID; // eax

  v2 = *(this + 0x3A);
  if ( !v2 )
    return 0;
  if ( a2 == (char)0xFF )
  {
    *(_WORD *)(v2 + 0x18) |= 1u;
    return 1;
  }
  else
  {
    *(_WORD *)(v2 + 0x18) &= ~1u;
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)*(this + 0x3A), 0);
    if ( NiPropertyByID )
      BYTE2(NiPropertyByID[1].vtbl) = a2;
    return 1;
  }
}
