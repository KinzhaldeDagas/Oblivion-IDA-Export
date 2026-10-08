NiTextureEffect *__thiscall NiTextureEffect::NiTextureEffect(NiTextureEffect *this)
{
  NiDynamicEffect::NiDynamicEffect((NiDynamicEffect *)this); /*0x73bbbb*/
  *(_DWORD *)this = &NiTextureEffect::`vftable'; /*0x73bbc2*/
  qmemcpy((char *)this + 0xDC, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x73bbd9*/
  *((float *)this + 0x40) = 0.0; /*0x73bbdb*/
  *((float *)this + 0x41) = 0.0; /*0x73bbe1*/
  *((float *)this + 0x42) = 0.0; /*0x73bbe7*/
  qmemcpy((char *)this + 0x10C, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x73bbfd*/
  *((float *)this + 0x4C) = 0.0; /*0x73bbff*/
  *((float *)this + 0x4D) = 0.0; /*0x73bc05*/
  *((float *)this + 0x4E) = 0.0; /*0x73bc0b*/
  *((_DWORD *)this + 0x4F) = 0; /*0x73bc17*/
  sub_716DE0((float *)this + 0x55, (int)&stru_B258D0, 0.0); /*0x73bc31*/
  sub_716DE0((float *)this + 0x59, (int)&stru_B258D0, 0.0); /*0x73bc47*/
  *((_DWORD *)this + 0x50) = 0; /*0x73bc4c*/
  *((_DWORD *)this + 0x51) = 3; /*0x73bc52*/
  *((_DWORD *)this + 0x52) = 0; /*0x73bc5c*/
  *((_DWORD *)this + 0x53) = 0; /*0x73bc62*/
  *((_BYTE *)this + 0x150) = 0; /*0x73bc68*/
  return this; /*0x73bc70*/
}
