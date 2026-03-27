NiTimeController *__thiscall sub_6E18D0(NiTimeController *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-20h]

  NiTimeController::NiTimeController(this);
  this->vtbl = (NiTimeControllerVtbl *)&NiKeyframeManager::`vftable';
  *((_DWORD *)this + 0x10) = 0x25;
  *((_DWORD *)this + 0xF) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiSequence>>::`vftable';
  *((_DWORD *)this + 0x12) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 0x10);
  *((_DWORD *)this + 0x11) = v2;
  _memset(v2, 0, v4);
  *((_BYTE *)this + 0x4C) = 0;
  *((_DWORD *)this + 0xF) = &NiTStringPointerMap<NiPointer<NiSequence>>::`vftable';
  return this;
}
