int __thiscall sub_54C5D0(float *this, float a2, float a3, float a4, int a5)
{
  int result; // eax
  float v7; // ecx
  float v8; // edx

  if ( Vector3_InitValue_ == *(this + 0x5C)
    && *(&Vector3_InitValue_ + 1) == *(this + 0x5D)
    && dword_B3F9B0 == *(this + 0x5E) )
  {
    if ( sub_8AA390(&a2, &Vector3_InitValue_) )
    {
      *((_DWORD *)this + 0x70) = 1;
      *(this + 0x71) = 0.0;
    }
  }
  if ( Vector3_InitValue_ == a2 && *(&Vector3_InitValue_ + 1) == a3 && dword_B3F9B0 == a4 )
    *(this + 0x70) = 0.0;
  result = LODWORD(a2);
  v7 = a3;
  v8 = a4;
  *(this + 0x5C) = a2;
  *(this + 0x5D) = v7;
  *(this + 0x5E) = v8;
  *((_BYTE *)this + 0x1D5) = 1;
  return result;
}
