int __thiscall sub_718A50(float *this)
{
  int result; // eax
  float v3; // edx

  sub_70FD10(this);
  result = LODWORD(Vector3_InitValue_);
  *(this + 9) = Vector3_InitValue_;
  *(this + 0xA) = *(&Vector3_InitValue_ + 1);
  v3 = dword_B3F9B0;
  *(this + 0xC) = 1.0;
  *(this + 0xB) = v3;
  return result;
}
