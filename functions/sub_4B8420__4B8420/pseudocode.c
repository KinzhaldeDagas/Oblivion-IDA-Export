_DWORD *__thiscall sub_4B8420(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *(this + 1) = a2; /*0x4b8429*/
  *this = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectCELL *,bool>::`vftable'; /*0x4b8436*/
  *(this + 3) = 0; /*0x4b843c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *(this + 1); /*0x4b8454*/
  *(this + 2) = v3; /*0x4b8458*/
  _memset(v3, 0, v5); /*0x4b845b*/
  *this = &NiTPointerMap<TESObjectCELL *,bool>::`vftable'; /*0x4b8463*/
  return this; /*0x4b846b*/
}
