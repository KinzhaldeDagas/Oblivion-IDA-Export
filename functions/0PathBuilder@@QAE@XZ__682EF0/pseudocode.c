PathBuilder *__thiscall PathBuilder::PathBuilder(PathBuilder *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v6; // [esp-28h] [ebp-44h]
  unsigned int v7; // [esp-18h] [ebp-34h]
  unsigned int v8; // [esp-8h] [ebp-24h]

  BackgroundLoader::BackgroundLoader(this, 1, 0, 1, 0, 1); /*0x682f23*/
  *(_DWORD *)this = &PathBuilder::`vftable'; /*0x682f39*/
  *((_DWORD *)this + 4) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable'; /*0x682f43*/
  *((_DWORD *)this + 5) = 0x25; /*0x682f4a*/
  *((_DWORD *)this + 7) = 0; /*0x682f51*/
  v2 = FormHeapAlloc(0x94u); /*0x682f59*/
  v8 = 4 * *((_DWORD *)this + 5); /*0x682f65*/
  *((_DWORD *)this + 6) = v2; /*0x682f68*/
  _memset(v2, 0, v8); /*0x682f6b*/
  *((_DWORD *)this + 4) = &NiTPointerMap<Actor *,PathingData *>::`vftable'; /*0x682f70*/
  *((_DWORD *)this + 8) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable'; /*0x682f8d*/
  *((_DWORD *)this + 9) = 0x25; /*0x682f94*/
  *((_DWORD *)this + 0xB) = 0; /*0x682f9b*/
  v3 = FormHeapAlloc(0x94u); /*0x682fa3*/
  v7 = 4 * *((_DWORD *)this + 9); /*0x682faf*/
  *((_DWORD *)this + 0xA) = v3; /*0x682fb2*/
  _memset(v3, 0, v7); /*0x682fb5*/
  *((_DWORD *)this + 8) = &NiTPointerMap<Actor *,PathingData *>::`vftable'; /*0x682fba*/
  *((_DWORD *)this + 0xC) = &NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable'; /*0x682fd7*/
  *((_DWORD *)this + 0xD) = 0x25; /*0x682fde*/
  *((_DWORD *)this + 0xF) = 0; /*0x682fe5*/
  v4 = FormHeapAlloc(0x94u); /*0x682fed*/
  v6 = 4 * *((_DWORD *)this + 0xD); /*0x682ff9*/
  *((_DWORD *)this + 0xE) = v4; /*0x682ffc*/
  _memset(v4, 0, v6); /*0x682fff*/
  *((_DWORD *)this + 0xC) = &NiTPointerMap<Actor *,PathingData *>::`vftable'; /*0x683004*/
  *((_DWORD *)this + 0x10) = 0; /*0x68300e*/
  *((_DWORD *)this + 0x11) = 0; /*0x683011*/
  return this; /*0x683016*/
}
