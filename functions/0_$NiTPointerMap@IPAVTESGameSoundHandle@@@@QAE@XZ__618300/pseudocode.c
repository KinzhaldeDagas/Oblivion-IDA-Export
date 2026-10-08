NiTPointerMap<unsigned int,TESGameSoundHandle *> *__thiscall NiTPointerMap<unsigned int,TESGameSoundHandle *>::NiTPointerMap<unsigned int,TESGameSoundHandle *>(
        NiTPointerMap<unsigned int,TESGameSoundHandle *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x618309*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESGameSoundHandle *>::`vftable'; /*0x618316*/
  *((_DWORD *)this + 3) = 0; /*0x61831c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x618334*/
  *((_DWORD *)this + 2) = v3; /*0x618338*/
  _memset(v3, 0, v5); /*0x61833b*/
  *(_DWORD *)this = &NiTPointerMap<unsigned int,TESGameSoundHandle *>::`vftable'; /*0x618343*/
  return this; /*0x61834b*/
}
