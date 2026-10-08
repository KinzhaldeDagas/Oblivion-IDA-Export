// Constructs ExtraInvestmentGold, type 0x52 and supplied integer amount.
_BYTE *__thiscall ExtraInvestmentGold_ctor(_BYTE *this, int a2)
{
  *(this + 4) = 0x52; /*0x42a076*/
  *((_DWORD *)this + 2) = 0; /*0x42a07a*/
  *(_DWORD *)this = &ExtraInvestmentGold::`vftable'; /*0x42a081*/
  *((_DWORD *)this + 3) = a2; /*0x42a087*/
  return this; /*0x42a08a*/
}
