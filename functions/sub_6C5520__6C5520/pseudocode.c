NiTimeController *__thiscall sub_6C5520(NiTimeController *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-24h]

  NiTimeController::NiTimeController(this);
  this->vtbl = (NiTimeControllerVtbl *)&NiControllerManager::`vftable';
  *((_DWORD *)this + 0xF) = &NiTArray<NiPointer<NiControllerSequence>>::`vftable';
  *((_WORD *)this + 0x22) = 0;
  *((_WORD *)this + 0x25) = 0xA;
  *((_WORD *)this + 0x23) = 0;
  *((_WORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x17) = 0x25;
  *((_DWORD *)this + 0x16) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable';
  *((_DWORD *)this + 0x19) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 0x17);
  *((_DWORD *)this + 0x18) = v2;
  _memset(v2, 0, v4);
  *((_BYTE *)this + 0x68) = 0;
  *((_DWORD *)this + 0x16) = &NiTStringPointerMap<NiControllerSequence *>::`vftable';
  *((_BYTE *)this + 0x6C) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  *((_DWORD *)this + 0x1F) = 0;
  return this;
}
