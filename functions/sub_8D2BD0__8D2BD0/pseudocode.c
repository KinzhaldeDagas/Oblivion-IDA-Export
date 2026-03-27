int __thiscall sub_8D2BD0(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st7
  int result; // eax

  v2 = -a2[1];
  v3 = a2[2];
  *this = 0.0;
  *(this + 1) = v3;
  *(this + 2) = v2;
  *(this + 3) = 0.0;
  v4 = *a2;
  *(this + 4) = -a2[2];
  *(this + 5) = 0.0;
  *(this + 6) = v4;
  *(this + 7) = 0.0;
  v5 = *a2;
  result = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 8) = result;
  *(this + 9) = -v5;
  *(this + 0xA) = 0.0;
  *(this + 0xB) = 0.0;
  return result;
}
