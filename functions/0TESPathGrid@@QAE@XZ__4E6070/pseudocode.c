TESPathGrid *__thiscall TESPathGrid::TESPathGrid(TESPathGrid *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v6; // [esp-18h] [ebp-38h]
  int v7; // [esp-8h] [ebp-28h]

  TESForm_constr((TESForm *)this);
  *((_DWORD *)this + 6) = &TESChildCell::`vftable';
  *(_DWORD *)this = &TESPathGrid::`vftable'{for `TESPathGrid'};
  *((_DWORD *)this + 6) = &TESPathGrid::`vftable'{for `TESChildCell'};
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xD) = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  *((_DWORD *)this + 0xE) = 0x25;
  *((_DWORD *)this + 0x10) = 0;
  v2 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 0xE);
  *((_DWORD *)this + 0xF) = v2;
  _memset(v2, 0, v7);
  *((_DWORD *)this + 0xD) = &NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  *((_DWORD *)this + 0x11) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  *((_DWORD *)this + 0x12) = 0x25;
  *((_DWORD *)this + 0x14) = 0;
  v3 = FormHeapAlloc(0x94u);
  v6 = 4 * *((_DWORD *)this + 0x12);
  *((_DWORD *)this + 0x13) = v3;
  _memset(v3, 0, v6);
  *((_DWORD *)this + 0x11) = &NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable';
  *((_BYTE *)this + 4) = 0x34;
  v4 = *((_DWORD *)this + 7);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_WORD *)this + 0x18) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  ++dword_B35F80;
  return this;
}
