TESPackage *__thiscall sub_67C260(TESPackage *this, int a2)
{
  float v3; // eax

  TESPackage::TESPackage(this);
  this->__vftable = (TESPackageVtbl *)&SpectatorPackage::`vftable';
  TESPackage_SetType_(this, 0x13);
  *((_DWORD *)this + 0xF) = a2;
  *((float *)this + 0x11) = Vector3_InitValue_;
  *((float *)this + 0x12) = *(&Vector3_InitValue_ + 1);
  v3 = dword_B3F9B0;
  *((float *)this + 0x14) = 0.0;
  *((float *)this + 0x13) = v3;
  return this;
}
