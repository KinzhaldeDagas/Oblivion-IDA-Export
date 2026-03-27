NiDynamicGeometryGroup *__thiscall NiDynamicGeometryGroup::NiDynamicGeometryGroup(NiDynamicGeometryGroup *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp-18h] [ebp-20h]
  int v6; // [esp-8h] [ebp-10h]

  sub_7828D0((NiGeometryGroup *)this);
  *(_DWORD *)this = &NiDynamicGeometryGroup::`vftable';
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable';
  *((_DWORD *)this + 4) = 0x25;
  *((_DWORD *)this + 6) = 0;
  v2 = FormHeapAlloc(0x94u);
  v6 = 4 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v2;
  _memset(v2, 0, v6);
  *((_DWORD *)this + 3) = &NiTPointerMap<unsigned int,NiVBDynamicSet *>::`vftable';
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable';
  *((_DWORD *)this + 8) = 0x25;
  *((_DWORD *)this + 0xA) = 0;
  v3 = FormHeapAlloc(0x94u);
  v5 = 4 * *((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v3;
  _memset(v3, 0, v5);
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,NiVBChip *>::`vftable';
  *((_WORD *)this + 0x1A) = 0;
  *((_WORD *)this + 0x1B) = 0;
  *((_WORD *)this + 0x1C) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xB) = &NiTArray<NiVBDynamicSet *>::`vftable';
  *((_WORD *)this + 0x1D) = 1;
  *((_WORD *)this + 0x22) = 0;
  *((_WORD *)this + 0x25) = 1;
  *((_WORD *)this + 0x23) = 0;
  *((_WORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0xF) = &NiTArray<NiVBChip *>::`vftable';
  *((_DWORD *)this + 0x13) = 0;
  return this;
}
