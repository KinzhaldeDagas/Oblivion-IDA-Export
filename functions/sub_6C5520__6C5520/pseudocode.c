NiTimeController *__thiscall sub_6C5520(NiTimeController *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-24h]

  NiTimeController::NiTimeController(this); /*0x6c5549*/
  this->vtbl = (NiTimeControllerVtbl *)&NiControllerManager::`vftable'; /*0x6c5550*/
  *((_DWORD *)this + 0xF) = &NiTArray<NiPointer<NiControllerSequence>>::`vftable'; /*0x6c555a*/
  *((_WORD *)this + 0x22) = 0; /*0x6c5561*/
  *((_WORD *)this + 0x25) = 0xA; /*0x6c5565*/
  *((_WORD *)this + 0x23) = 0; /*0x6c556b*/
  *((_WORD *)this + 0x24) = 0; /*0x6c556f*/
  *((_DWORD *)this + 0x10) = 0; /*0x6c5573*/
  *((_DWORD *)this + 0x13) = 0; /*0x6c5576*/
  *((_DWORD *)this + 0x14) = 0; /*0x6c5579*/
  *((_DWORD *)this + 0x15) = 0; /*0x6c557c*/
  *((_DWORD *)this + 0x17) = 0x25; /*0x6c5586*/
  *((_DWORD *)this + 0x16) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiControllerSequence *>::`vftable'; /*0x6c5598*/
  *((_DWORD *)this + 0x19) = 0; /*0x6c559f*/
  v2 = FormHeapAlloc(0x94u); /*0x6c55a7*/
  v4 = 4 * *((_DWORD *)this + 0x17); /*0x6c55b3*/
  *((_DWORD *)this + 0x18) = v2; /*0x6c55b6*/
  _memset(v2, 0, v4); /*0x6c55b9*/
  *((_BYTE *)this + 0x68) = 0; /*0x6c55c1*/
  *((_DWORD *)this + 0x16) = &NiTStringPointerMap<NiControllerSequence *>::`vftable'; /*0x6c55c4*/
  *((_BYTE *)this + 0x6C) = 0; /*0x6c55cb*/
  *((_DWORD *)this + 0x1C) = 0; /*0x6c55ce*/
  *((_DWORD *)this + 0x1D) = 0; /*0x6c55d1*/
  *((_DWORD *)this + 0x1E) = 0; /*0x6c55d4*/
  *((_DWORD *)this + 0x1F) = 0; /*0x6c55d7*/
  return this; /*0x6c55dc*/
}
