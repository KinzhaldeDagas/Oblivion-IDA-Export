bool __thiscall sub_626E60(TESObjectREFR **this)
{
  TESObjectREFR **v1; // eax
  int v2; // edx

  v1 = this + 0x15;
  v2 = 0;
  if ( this == (TESObjectREFR **)0xFFFFFFAC )
    return 0;
  do
  {
    if ( *v1 )
      ++v2;
    v1 = (TESObjectREFR **)v1[1];
  }
  while ( v1 );
  return v2 == 1
      && *(this + 0x15) == (TESObjectREFR *)TESDataHandler_g_PlayerRef
      && !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0);
}
