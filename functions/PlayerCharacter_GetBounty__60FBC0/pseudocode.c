double __thiscall PlayerCharacter_GetBounty(TESObjectREFR *this)
{
  ExtraDataList_GetCrimeGold(&this->member.baseExtraList); /*0x60fbc7*/
  return PlayerCharacter_GetBounty_::EnforceMinimumOfZero();
}
