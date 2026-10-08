NiTimeController *__thiscall sub_6E18D0(NiTimeController *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-20h]

  NiTimeController::NiTimeController(this); /*0x6e18f8*/
  this->vtbl = (NiTimeControllerVtbl *)&NiKeyframeManager::`vftable'; /*0x6e18fd*/
  *((_DWORD *)this + 0x10) = 0x25; /*0x6e190a*/
  *((_DWORD *)this + 0xF) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiSequence>>::`vftable'; /*0x6e191f*/
  *((_DWORD *)this + 0x12) = 0; /*0x6e1926*/
  v2 = FormHeapAlloc(0x94u); /*0x6e1932*/
  v4 = 4 * *((_DWORD *)this + 0x10); /*0x6e193e*/
  *((_DWORD *)this + 0x11) = v2; /*0x6e1942*/
  _memset(v2, 0, v4); /*0x6e1945*/
  *((_BYTE *)this + 0x4C) = 0; /*0x6e194d*/
  *((_DWORD *)this + 0xF) = &NiTStringPointerMap<NiPointer<NiSequence>>::`vftable'; /*0x6e1951*/
  return this; /*0x6e195a*/
}
