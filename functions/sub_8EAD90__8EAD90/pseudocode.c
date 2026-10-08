int __thiscall sub_8EAD90(int this, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  int v7; // [esp+4h] [ebp+4h]

  v3 = fConstant_1 / a2[5]; /*0x8ead9a*/
  v7 = *(_DWORD *)(this + 0xFC); /*0x8eada3*/
  v4 = fConstant_1 / a2[0xA]; /*0x8eadad*/
  v5 = fConstant_1 / *a2; /*0x8eadb6*/
  *(float *)(this + 0xF0) = v5; /*0x8eadba*/
  *(float *)(this + 0xF4) = v3; /*0x8eadc2*/
  *(float *)(this + 0xF8) = v4; /*0x8eadc8*/
  *(_DWORD *)(this + 0xFC) = v7; /*0x8eadce*/
  return v7; /*0x8eadd4*/
}
