char *__thiscall sub_7561F0(
        char *this,
        float a2,
        char a3,
        char a4,
        int a5,
        int a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  double v15; // st7

  sub_75ECB0(this, a2, a3, a4, a5);
  *((float *)this + 0xC) = a7;
  *((float *)this + 0xD) = a8;
  v15 = flt_A3D65C;
  *((_DWORD *)this + 0xE) = a9;
  *((float *)this + 0x14) = v15;
  *((float *)this + 0x15) = v15;
  *((_DWORD *)this + 0xB) = a6;
  *((_DWORD *)this + 0xF) = a10;
  *((_DWORD *)this + 0x11) = a12;
  *((_DWORD *)this + 0x10) = a11;
  *((_DWORD *)this + 0x12) = a13;
  *(_DWORD *)this = &NiPSysPlanarCollider::`vftable';
  *((_DWORD *)this + 0x13) = a14;
  sub_716DE0((float *)this + 0x16, (int)&Vector3_InitValue_, 0.0);
  *((float *)this + 0x1A) = Vector3_InitValue_;
  *((float *)this + 0x1B) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x1C) = dword_B3F9B0;
  qmemcpy(this + 0x74, &stru_B26AF0[0xA].unk2C, 0x24u);
  sub_718A50((float *)this + 0x26);
  sub_718A50((float *)this + 0x33);
  return this;
}
