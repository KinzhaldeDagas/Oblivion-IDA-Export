float *__thiscall sub_95F620(float *this, float *a2, float *a3)
{
  double v4; // st7
  float v5; // edx
  double v6; // st6
  float v7; // ecx
  double v8; // st7
  double v9; // st6
  float v11[4]; // [esp+8h] [ebp-10h] BYREF

  *(_DWORD *)this = &NiHalfSpaceBV::`vftable'; /*0x95f62a*/
  sub_716DB0((NiFrustumPlanes *)(this + 1)); /*0x95f630*/
  *(this + 5) = *a2; /*0x95f63b*/
  *(this + 6) = a2[1]; /*0x95f641*/
  *(this + 7) = a2[2]; /*0x95f64b*/
  sub_716DB0((NiFrustumPlanes *)v11); /*0x95f64e*/
  v4 = a2[1] * a3[1]; /*0x95f65a*/
  v5 = a3[1]; /*0x95f661*/
  v6 = *a2 * *a3; /*0x95f664*/
  v11[0] = *a3; /*0x95f666*/
  v7 = a3[2]; /*0x95f66a*/
  v11[1] = v5; /*0x95f66d*/
  v8 = v4 + v6; /*0x95f671*/
  v9 = a2[2]; /*0x95f677*/
  v11[2] = v7; /*0x95f67a*/
  v11[3] = v8 + v9 * a3[2]; /*0x95f686*/
  sub_95DB70(this, v11); /*0x95f68a*/
  return this; /*0x95f68f*/
}
