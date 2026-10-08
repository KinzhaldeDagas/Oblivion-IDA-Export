_DWORD *__thiscall sub_67C660(float **this, _DWORD *a2, TESObjectREFR *a3)
{
  double v4; // st7
  double v5; // st6
  float *v6; // ecx
  int v8; // ecx
  int v9; // edx
  float v10[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = dbl_A3A5B0; /*0x67c673*/
  if ( v4 == *((float *)this + 0x12) /*0x67c69a*/
    || (v5 = *((float *)this + 0x11), v6 = (float *)(this + 0x11), v5 == v4)
    || *((float *)this + 0x13) == v4
    || sub_8AA350(v6, &g_zeroNiPoint3.x) )
  {
    sub_67C4A0(this, v10, a3, 0); /*0x67c6b5*/
  }
  v8 = (int)*(this + 0x12); /*0x67c6c1*/
  *a2 = *(this + 0x11); /*0x67c6c4*/
  v9 = (int)*(this + 0x13); /*0x67c6c6*/
  a2[1] = v8; /*0x67c6c9*/
  a2[2] = v9; /*0x67c6cc*/
  return a2; /*0x67c6cf*/
}
