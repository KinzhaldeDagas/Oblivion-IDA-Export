char __thiscall sub_563DE0(void *this, int a2, char a3)
{
  int v3; // eax
  NiProperty *NiPropertyByID; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0xB0))(this, a2);
  if ( !v3 )
    return 0;
  if ( a3 == (char)0xFF )
  {
    *(_WORD *)(v3 + 0x18) |= 1u;
    return 1;
  }
  else
  {
    *(_WORD *)(v3 + 0x18) &= ~1u;
    NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v3, 0);
    if ( NiPropertyByID )
      BYTE2(NiPropertyByID[1].vtbl) = a3;
    return 1;
  }
}
