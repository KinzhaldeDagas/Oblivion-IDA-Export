void __cdecl sub_4122F0(float *a1)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  float v4; // [esp+8h] [ebp-10h]
  float v5; // [esp+Ch] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+14h] [ebp-4h]

  v1 = (int)a1[1] >> 0xC; /*0x41232c*/
  v4 = (float)((int)*a1 >> 0xC << 0xC); /*0x41232f*/
  v5 = *a1 - v4; /*0x412339*/
  v7 = Double_To_SInt32((double)(int)v5 / flt_B03174); /*0x41235f*/
  v6 = (float)(v1 << 0xC); /*0x412363*/
  v2 = flt_B03174; /*0x412388*/
  v3 = Double_To_SInt32(flt_B03174); /*0x41238a*/
  *a1 = v2 * (double)v7 + v4; /*0x41239c*/
  a1[1] = (double)v3 * flt_B03174 + v6; /*0x4123ac*/
  a1[2] = 0.0; /*0x4123b1*/
}
