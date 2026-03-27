_DWORD *__thiscall sub_7766E0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v6; // [esp-8h] [ebp-10h]

  *(this + 1) = 0x25;
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable';
  *(this + 3) = 0;
  v4 = FormHeapAlloc(0x94u);
  v6 = 4 * *(this + 1);
  *(this + 2) = v4;
  _memset(v4, 0, v6);
  *this = &NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable';
  *(this + 7) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = &NiTPointerList<NiLight *>::`vftable';
  *(this + 9) = a2;
  *(this + 0xA) = 0xFFFFFFFF;
  *(this + 8) = a3;
  (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 4))(a3);
  *(this + 0xF) = 0;
  _memset(this + 0x10, 0, 0x200);
  sub_776240((_DWORD **)this);
  return this;
}
