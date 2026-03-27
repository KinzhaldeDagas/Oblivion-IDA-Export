_DWORD *__thiscall sub_4F0DE0(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  int v5; // [esp-8h] [ebp-Ch]

  *(this + 1) = a2;
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable';
  *(this + 3) = 0;
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *(this + 1);
  *(this + 2) = v3;
  _memset(v3, 0, v5);
  *this = &NiTPointerMap<unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable';
  return this;
}
