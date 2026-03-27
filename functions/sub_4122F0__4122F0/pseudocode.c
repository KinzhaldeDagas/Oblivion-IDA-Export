void __cdecl sub_4122F0(float *a1)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  float v4; // [esp+8h] [ebp-10h]
  float v5; // [esp+Ch] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+14h] [ebp-4h]

  v1 = (int)a1[1] >> 0xC;
  v4 = (float)((int)*a1 >> 0xC << 0xC);
  v5 = *a1 - v4;
  v7 = Double_To_SInt32((double)(int)v5 / flt_B03174);
  v6 = (float)(v1 << 0xC);
  v2 = flt_B03174;
  v3 = Double_To_SInt32(flt_B03174);
  *a1 = v2 * (double)v7 + v4;
  a1[1] = (double)v3 * flt_B03174 + v6;
  a1[2] = 0.0;
}
