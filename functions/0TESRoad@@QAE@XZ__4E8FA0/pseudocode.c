TESRoad *__thiscall TESRoad::TESRoad(TESRoad *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-24h]

  TESForm_constr((TESForm *)this);
  *(_DWORD *)this = &TESRoad::`vftable';
  *((_DWORD *)this + 8) = 0x25;
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable';
  *((_DWORD *)this + 0xA) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 8);
  *((_DWORD *)this + 9) = v2;
  _memset(v2, 0, v4);
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable';
  *((_BYTE *)this + 4) = 0x38;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 6) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
