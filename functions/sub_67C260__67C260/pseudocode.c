// RadiantAI: SpectatorPackage constructor, type 0x13. Cut/beta-looking special package; opt-in constructor logging only.
TESPackage *__thiscall sub_67C260(TESPackage *this, int a2)
{
  float v3; // eax

  TESPackage::TESPackage(this); /*0x67c288*/
  this->__vftable = (TESPackageVtbl *)&SpectatorPackage::`vftable'; /*0x67c299*/
  TESPackage_SetType_(this, 0x13); /*0x67c29f*/
  *((_DWORD *)this + 0xF) = a2; /*0x67c2aa*/
  *((float *)this + 0x11) = g_zeroNiPoint3; /*0x67c2b3*/
  *((float *)this + 0x12) = *(&g_zeroNiPoint3 + 1); /*0x67c2bc*/
  v3 = MEMORY[0xB3F9B0][0]; /*0x67c2bf*/
  *((float *)this + 0x14) = 0.0; /*0x67c2c4*/
  *((float *)this + 0x13) = v3; /*0x67c2c7*/
  return this; /*0x67c2cc*/
}
