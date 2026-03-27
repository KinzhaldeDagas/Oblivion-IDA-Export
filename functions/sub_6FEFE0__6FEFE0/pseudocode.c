int __thiscall sub_6FEFE0(float *this)
{
  int result; // eax

  *(this + 9) = Vector3_InitValue_;
  *(this + 0xA) = *(&Vector3_InitValue_ + 1);
  result = LODWORD(dword_B3F9B0);
  *(this + 0xB) = dword_B3F9B0;
  return result;
}
