int __thiscall PlayerCharacter_GetBounty(TESObjectREFR *this)
{
  double CrimeGold; // st7
  PlayerCharacter *v3; // eax

  CrimeGold = ExtraDataList_GetCrimeGold(&this->member.baseExtraList);
  v3 = TESDataHandler_g_PlayerRef;
  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef && v3->isInSEWorld )
    return PlayerCharacter_GetBounty_::EnforceMinimumOfZero(*(float *)&v3->unk700);
  else
    return PlayerCharacter_GetBounty_::EnforceMinimumOfZero(CrimeGold);
}
