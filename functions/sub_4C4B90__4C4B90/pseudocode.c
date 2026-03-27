void __thiscall sub_4C4B90(_DWORD *this)
{
  int v2; // eax
  int v3; // [esp-8h] [ebp-Ch]

  *(this + 1) = 0x25;
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGrassAreaParam * *>::`vftable';
  *(this + 3) = 0;
  v2 = FormHeapAlloc(0x94u);
  v3 = 4 * *(this + 1);
  *(this + 2) = v2;
  _memset(v2, 0, v3);
  *this = &NiTPointerMap<unsigned int,TESGrassAreaParam * *>::`vftable';
}
