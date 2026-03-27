NiTimeController *__thiscall sub_8AA810(NiTimeController *this)
{
  double v2; // st7

  NiTimeController::NiTimeController(this);
  v2 = flt_A30634;
  this->vtbl = (NiTimeControllerVtbl *)&bhkBlendController::`vftable';
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x10) = &NiTLargeArray<BLENDKEY>::`vftable';
  *((_DWORD *)this + 0x15) = 1;
  *((float *)this + 0x16) = v2;
  *((_DWORD *)this + 0xF) = 0;
  *((float *)this + 0x17) = v2;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x15) = 4;
  return this;
}
