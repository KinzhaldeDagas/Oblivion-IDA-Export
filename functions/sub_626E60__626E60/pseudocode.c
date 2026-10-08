bool __thiscall sub_626E60(TESObjectREFR **this)
{
  TESObjectREFR **v1; // eax
  int v2; // edx

  v1 = this + 0x15; /*0x626e64*/
  v2 = 0; /*0x626e66*/
  if ( this == (TESObjectREFR **)0xFFFFFFAC ) /*0x626e6a*/
    return 0; /*0x626e6a*/
  do /*0x626e7d*/
  {
    if ( *v1 ) /*0x626e70*/
      ++v2; /*0x626e75*/
    v1 = (TESObjectREFR **)v1[1]; /*0x626e78*/
  }
  while ( v1 ); /*0x626e7d*/
  return v2 == 1 /*0x626e9c*/
      && *(this + 0x15) == (TESObjectREFR *)reference
      && !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0);
}
