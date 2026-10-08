NiDynamicGeometryGroup *__thiscall NiDynamicGeometryGroup::NiDynamicGeometryGroup(NiDynamicGeometryGroup *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v5; // [esp-18h] [ebp-20h]
  unsigned int v6; // [esp-8h] [ebp-10h]

  sub_7828D0((NiGeometryGroup *)this); /*0x77e6c4*/
  *(_DWORD *)this = &NiDynamicGeometryGroup::`vftable'; /*0x77e6dc*/
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77e6e2*/
  *((_DWORD *)this + 4) = 0x25; /*0x77e6e9*/
  *((_DWORD *)this + 6) = 0; /*0x77e6f0*/
  v2 = FormHeapAlloc(0x94u); /*0x77e6f8*/
  v6 = 4 * *((_DWORD *)this + 4); /*0x77e704*/
  *((_DWORD *)this + 5) = v2; /*0x77e707*/
  _memset(v2, 0, v6); /*0x77e70a*/
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77e720*/
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable'; /*0x77e727*/
  *((_DWORD *)this + 8) = 0x25; /*0x77e72e*/
  *((_DWORD *)this + 0xA) = 0; /*0x77e735*/
  v3 = FormHeapAlloc(0x94u); /*0x77e73d*/
  v5 = 4 * *((_DWORD *)this + 8); /*0x77e749*/
  *((_DWORD *)this + 9) = v3; /*0x77e74c*/
  _memset(v3, 0, v5); /*0x77e74f*/
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiVBChip *>::`vftable'; /*0x77e754*/
  *((_WORD *)this + 0x1A) = 0; /*0x77e75b*/
  *((_WORD *)this + 0x1B) = 0; /*0x77e75f*/
  *((_WORD *)this + 0x1C) = 0; /*0x77e763*/
  *((_DWORD *)this + 0xC) = 0; /*0x77e767*/
  *((_DWORD *)this + 0xB) = &NiTArray<NiVBDynamicSet *>::`vftable'; /*0x77e76a*/
  *((_WORD *)this + 0x1D) = 1; /*0x77e776*/
  *((_WORD *)this + 0x22) = 0; /*0x77e77a*/
  *((_WORD *)this + 0x25) = 1; /*0x77e77e*/
  *((_WORD *)this + 0x23) = 0; /*0x77e782*/
  *((_WORD *)this + 0x24) = 0; /*0x77e786*/
  *((_DWORD *)this + 0x10) = 0; /*0x77e78a*/
  *((_DWORD *)this + 0xF) = &NiTArray<NiVBChip *>::`vftable'; /*0x77e790*/
  *((_DWORD *)this + 0x13) = 0; /*0x77e797*/
  return this; /*0x77e79a*/
}
