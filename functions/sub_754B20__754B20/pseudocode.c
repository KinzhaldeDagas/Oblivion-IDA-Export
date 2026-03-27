char *__thiscall sub_754B20(char *this, float a2, char a3, char a4, int a5, int a6, float a7)
{
  float v9; // [esp+38h] [ebp+10h]
  float v10; // [esp+38h] [ebp+10h]

  sub_75ECB0(this, a2, a3, a4, a5);
  *((float *)this + 0xC) = 1.0;
  *((float *)this + 0xE) = 1.0;
  *((_DWORD *)this + 0xB) = a6;
  *(_DWORD *)this = &NiPSysSphericalCollider::`vftable';
  *((float *)this + 0xF) = Vector3_InitValue_;
  *((float *)this + 0x10) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x11) = dword_B3F9B0;
  if ( a7 >= 0.0 )
    *((float *)this + 0xC) = a7;
  v9 = -flt_A7DEB4;
  *((float *)this + 0x28) = v9;
  *((float *)this + 0x1B) = v9;
  *((float *)this + 0x29) = v9;
  *((float *)this + 0x1C) = v9;
  *((float *)this + 0x2A) = v9;
  *((float *)this + 0x1D) = v9;
  qmemcpy(this + 0x7C, &unk_B3FADC, 0x24u);
  qmemcpy(this + 0x48, this + 0x7C, 0x24u);
  v10 = -flt_A7DEB4;
  *((float *)this + 0x2B) = v10;
  *((float *)this + 0x1E) = v10;
  return this;
}
