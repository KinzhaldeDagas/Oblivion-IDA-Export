float *__thiscall sub_95F620(float *this, float *a2, float *a3)
{
  double v4; // st7
  float v5; // edx
  double v6; // st6
  float v7; // ecx
  double v8; // st7
  double v9; // st6
  float v11[4]; // [esp+8h] [ebp-10h] BYREF

  *(_DWORD *)this = &NiHalfSpaceBV::`vftable';
  sub_716DB0((NiFrustumPlanes *)(this + 1));
  *(this + 5) = *a2;
  *(this + 6) = a2[1];
  *(this + 7) = a2[2];
  sub_716DB0((NiFrustumPlanes *)v11);
  v4 = a2[1] * a3[1];
  v5 = a3[1];
  v6 = *a2 * *a3;
  v11[0] = *a3;
  v7 = a3[2];
  v11[1] = v5;
  v8 = v4 + v6;
  v9 = a2[2];
  v11[2] = v7;
  v11[3] = v8 + v9 * a3[2];
  sub_95DB70(this, v11);
  return this;
}
