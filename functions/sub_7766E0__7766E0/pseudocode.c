_DWORD *__thiscall sub_7766E0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  unsigned int v6; // [esp-8h] [ebp-10h]

  *(this + 1) = 0x25; /*0x7766eb*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x7766fa*/
  *(this + 3) = 0; /*0x776700*/
  v4 = FormHeapAlloc(0x94u); /*0x776708*/
  v6 = 4 * *(this + 1); /*0x776714*/
  *(this + 2) = v4; /*0x776717*/
  _memset(v4, 0, v6); /*0x77671a*/
  *this = &NiTPointerMap<NiLight *,NiDX9LightManager::LightEntry *>::`vftable'; /*0x776727*/
  *(this + 7) = 0; /*0x77672d*/
  *(this + 5) = 0; /*0x776730*/
  *(this + 6) = 0; /*0x776733*/
  *(this + 4) = &NiTPointerList<NiLight *>::`vftable'; /*0x776736*/
  *(this + 9) = a2; /*0x77673d*/
  *(this + 0xA) = 0xFFFFFFFF; /*0x776740*/
  *(this + 8) = a3; /*0x776747*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x776753*/
  *(this + 0xF) = 0; /*0x77675f*/
  _memset((int)(this + 0x10), 0, 0x200u); /*0x776762*/
  sub_776240((_DWORD **)this); /*0x77676c*/
  return this; /*0x776771*/
}
