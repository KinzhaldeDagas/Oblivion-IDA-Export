NiTextureEffect *__thiscall NiTextureEffect::NiTextureEffect(NiTextureEffect *this)
{
  NiDynamicEffect::NiDynamicEffect((NiDynamicEffect *)this);
  *(_DWORD *)this = &NiTextureEffect::`vftable';
  qmemcpy((char *)this + 0xDC, &stru_B26AF0[0xA].unk2C, 0x24u);
  *((float *)this + 0x40) = 0.0;
  *((float *)this + 0x41) = 0.0;
  *((float *)this + 0x42) = 0.0;
  qmemcpy((char *)this + 0x10C, &stru_B26AF0[0xA].unk2C, 0x24u);
  *((float *)this + 0x4C) = 0.0;
  *((float *)this + 0x4D) = 0.0;
  *((float *)this + 0x4E) = 0.0;
  *((_DWORD *)this + 0x4F) = 0;
  sub_716DE0((float *)this + 0x55, (int)&dword_B258D0, 0.0);
  sub_716DE0((float *)this + 0x59, (int)&dword_B258D0, 0.0);
  *((_DWORD *)this + 0x50) = 0;
  *((_DWORD *)this + 0x51) = 3;
  *((_DWORD *)this + 0x52) = 0;
  *((_DWORD *)this + 0x53) = 0;
  *((_BYTE *)this + 0x150) = 0;
  return this;
}
