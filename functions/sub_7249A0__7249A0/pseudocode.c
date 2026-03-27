float *__thiscall sub_7249A0(float *this)
{
  float v2; // edx

  sub_738760(this);
  *(_DWORD *)this = &NiRangeLODData::`vftable';
  *(this + 2) = Vector3_InitValue_;
  *(this + 3) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  *(this + 8) = 0.0;
  *(this + 9) = 0.0;
  *(this + 4) = v2;
  return this;
}
