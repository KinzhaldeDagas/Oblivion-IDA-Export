float *__thiscall sub_75F780(float *this)
{
  float *result; // eax
  float v2; // ecx

  result = this;
  *this = Vector3_InitValue_;
  *(this + 1) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  result[3] = 0.0;
  result[2] = v2;
  result[4] = 0.0;
  result[5] = 0.0;
  *((_WORD *)result + 0xC) = 0;
  *((_WORD *)result + 0xD) = 0;
  return result;
}
