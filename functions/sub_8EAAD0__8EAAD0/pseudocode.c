int __thiscall sub_8EAAD0(float *this, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float v6; // [esp+Ch] [ebp-4h]

  v3 = fConstant_1 / *(this + 0x3C); /*0x8eaae2*/
  v4 = fConstant_1 / *(this + 0x3D); /*0x8eaaf1*/
  v5 = fConstant_1 / *(this + 0x3E); /*0x8eaafd*/
  *(_OWORD *)a2 = 0; /*0x8eab03*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8eab06*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8eab0a*/
  v6 = v5; /*0x8eab0e*/
  *(float *)a2 = v3; /*0x8eab14*/
  *(float *)(a2 + 0x14) = v4; /*0x8eab1a*/
  *(float *)(a2 + 0x28) = v6; /*0x8eab1d*/
  return a2; /*0x8eab20*/
}
