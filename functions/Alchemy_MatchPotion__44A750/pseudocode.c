NiNode *__thiscall Alchemy_MatchPotion(Sky **this, int a2)
{
  NiNode *Health; // esi
  int v3; // eax
  const unsigned __int8 *v4; // ecx
  const unsigned __int8 *z_low; // eax

  Health = TESHealthForm_GetHealth(*this);
  if ( !Health )
    return 0;
  while ( 1 )
  {
    if ( LOBYTE(Health->members.super.super.super.m_uiRefCount) == 0x28
      && ((int)Health->members.super.super.m_pcName & 0x20) == 0 )
    {
      v3 = a2 ? a2 + 0x30 : 0;
      if ( !(unsigned __int8)EffectItemList_CompareTo(v3) )
      {
        v4 = *(const unsigned __int8 **)(a2 + 0x28);
        if ( !v4 )
          v4 = (const unsigned __int8 *)EmptyString;
        z_low = (const unsigned __int8 *)LODWORD(Health->members.super.m_kWorldBound.Center.z);
        if ( !z_low )
          z_low = (const unsigned __int8 *)EmptyString;
        if ( !_mbscmp(z_low, v4) )
          break;
      }
    }
    Health = (NiNode *)TESObject_GetNextObject(Health);
    if ( !Health )
      return 0;
  }
  return Health;
}
