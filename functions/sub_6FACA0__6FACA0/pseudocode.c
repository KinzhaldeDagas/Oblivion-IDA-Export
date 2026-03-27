int __cdecl sub_6FACA0(float a1, float a2)
{
  float *v2; // eax
  int result; // eax
  float v4[3]; // [esp+4h] [ebp-3Ch] BYREF
  float v5[3]; // [esp+10h] [ebp-30h] BYREF
  float v6[9]; // [esp+1Ch] [ebp-24h] BYREF

  v4[0] = 0.0;
  v4[1] = a1 * fCostant_100;
  v4[2] = 0.0;
  NiMatrix33_InitRotationTransform(v6, a2);
  v2 = sub_710250(v5, v4, v6);
  *(float *)&qword_B3F494 = *v2;
  *((float *)&qword_B3F494 + 1) = v2[1];
  result = *((_DWORD *)v2 + 2);
  LODWORD(flt_B3F49C) = result;
  return result;
}
