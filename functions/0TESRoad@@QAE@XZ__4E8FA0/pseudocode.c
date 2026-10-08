// Verified TESRoad constructor sets TESForm type byte to 0x38 and initializes a 37-bucket NiTPointerMap<unsigned int, BSSimpleList<TESConnectedPoint*>*> at +0x1C. Owner WorldSpace pointer is at +0x2C, confirmed by ROAD group helpers and WorldSpace clone repair. The TESConnectedPoint object layout is still Unknown.
TESRoad *__thiscall TESRoad_ctor(TESRoad *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-24h]

  TESForm_constr((TESForm *)this); /*0x4e8fc9*/
  *(_DWORD *)this = &TESRoad::`vftable'; /*0x4e8fce*/
  *((_DWORD *)this + 8) = 0x25; /*0x4e8fdd*/
  *((_DWORD *)this + 7) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable'; /*0x4e8fee*/
  *((_DWORD *)this + 0xA) = 0; /*0x4e8ff5*/
  v2 = FormHeapAlloc(0x94u); /*0x4e8ffd*/
  v4 = 4 * *((_DWORD *)this + 8); /*0x4e9009*/
  *((_DWORD *)this + 9) = v2; /*0x4e900c*/
  _memset(v2, 0, v4); /*0x4e900f*/
  *((_DWORD *)this + 7) = &NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable'; /*0x4e9017*/
  *((_BYTE *)this + 4) = 0x38; /*0x4e9025*/
  *((_DWORD *)this + 0xB) = 0; /*0x4e9029*/
  *((_DWORD *)this + 6) = 0; /*0x4e902c*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4e902f*/
  return this; /*0x4e9036*/
}
