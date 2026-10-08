NiTPointerMap<NiObject *,bool> *__thiscall NiTPointerMap<NiObject *,bool>::NiTPointerMap<NiObject *,bool>(
        NiTPointerMap<NiObject *,bool> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x478459*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,bool>::`vftable'; /*0x478466*/
  *((_DWORD *)this + 3) = 0; /*0x47846c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x478484*/
  *((_DWORD *)this + 2) = v3; /*0x478488*/
  _memset(v3, 0, v5); /*0x47848b*/
  *(_DWORD *)this = &NiTPointerMap<NiObject *,bool>::`vftable'; /*0x478493*/
  return this; /*0x47849b*/
}
