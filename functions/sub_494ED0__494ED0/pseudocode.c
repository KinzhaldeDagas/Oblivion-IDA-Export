int __thiscall sub_494ED0(TESObjectREFR *this, UInt32 a2)
{
  int result; // eax

  result = 0; /*0x494ed4*/
  if ( a2 < this->member.super.refID ) /*0x494ed9*/
    return *(_DWORD *)(*(_DWORD *)&this->member.super.type + 4 * a2); /*0x494ede*/
  return result; /*0x494ee1*/
}
