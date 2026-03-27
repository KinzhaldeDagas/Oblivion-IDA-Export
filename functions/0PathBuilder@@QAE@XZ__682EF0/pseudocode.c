PathBuilder *__thiscall PathBuilder::PathBuilder(PathBuilder *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp-28h] [ebp-44h]
  int v7; // [esp-18h] [ebp-34h]
  int v8; // [esp-8h] [ebp-24h]

  BackgroundLoader::BackgroundLoader(this, 1, 0, 1, 0, 1);
  *(_DWORD *)this = &PathBuilder::`vftable';
  *((_DWORD *)this + 4) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 5) = 0x25;
  *((_DWORD *)this + 7) = 0;
  v2 = FormHeapAlloc(0x94u);
  v8 = 4 * *((_DWORD *)this + 5);
  *((_DWORD *)this + 6) = v2;
  _memset(v2, 0, v8);
  *((_DWORD *)this + 4) = &NiTPointerMap<Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 8) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 9) = 0x25;
  *((_DWORD *)this + 0xB) = 0;
  v3 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 9);
  *((_DWORD *)this + 0xA) = v3;
  _memset(v3, 0, v7);
  *((_DWORD *)this + 8) = &NiTPointerMap<Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 0xC) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 0xD) = 0x25;
  *((_DWORD *)this + 0xF) = 0;
  v4 = FormHeapAlloc(0x94u);
  v6 = 4 * *((_DWORD *)this + 0xD);
  *((_DWORD *)this + 0xE) = v4;
  _memset(v4, 0, v6);
  *((_DWORD *)this + 0xC) = &NiTPointerMap<Actor *,PathingData *>::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  return this;
}
