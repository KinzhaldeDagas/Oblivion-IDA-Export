_DWORD *__thiscall sub_67C660(float **this, _DWORD *a2, TESObjectREFR *a3)
{
  double v4; // st7
  double v5; // st6
  float *v6; // ecx
  int v8; // ecx
  int v9; // edx
  _BYTE v10[12]; // [esp+4h] [ebp-Ch] BYREF

  v4 = dbl_A3A5B0;
  if ( v4 == *((float *)this + 0x12)
    || (v5 = *((float *)this + 0x11), v6 = (float *)(this + 0x11), v5 == v4)
    || *((float *)this + 0x13) == v4
    || sub_8AA350(v6, &Vector3_InitValue_) )
  {
    sub_67C4A0(this, (int)v10, a3, 0);
  }
  v8 = (int)*(this + 0x12);
  *a2 = *(this + 0x11);
  v9 = (int)*(this + 0x13);
  a2[1] = v8;
  a2[2] = v9;
  return a2;
}
