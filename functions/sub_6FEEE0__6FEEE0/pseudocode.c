float *__thiscall sub_6FEEE0(float *this)
{
  float v2; // edx

  sub_752BF0(this);
  *(_DWORD *)this = &BSParentVelocityModifier::`vftable';
  *((_DWORD *)this + 3) = 0xBB8;
  *(this + 9) = Vector3_InitValue_;
  *(this + 0xA) = *(&Vector3_InitValue_ + 1);
  *(this + 0xB) = dword_B3F9B0;
  *(this + 0xC) = Vector3_InitValue_;
  *(this + 0xD) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  *(this + 8) = 0.0;
  *(this + 6) = 0.0;
  *(this + 0xE) = v2;
  return this;
}
