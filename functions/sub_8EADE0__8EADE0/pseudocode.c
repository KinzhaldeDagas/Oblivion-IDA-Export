int __thiscall sub_8EADE0(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  int result; // eax

  v2 = *(this + 0x3F);
  v3 = a2[0xA];
  v4 = a2[5];
  result = *(_DWORD *)a2;
  *(this + 0x3C) = *a2;
  *(this + 0x3D) = v4;
  *(this + 0x3E) = v3;
  *(this + 0x3F) = v2;
  return result;
}
