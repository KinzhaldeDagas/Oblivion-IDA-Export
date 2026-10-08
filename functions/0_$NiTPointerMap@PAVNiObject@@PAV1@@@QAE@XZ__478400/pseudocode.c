NiTPointerMap<NiObject *,NiObject *> *__thiscall NiTPointerMap<NiObject *,NiObject *>::NiTPointerMap<NiObject *,NiObject *>(
        NiTPointerMap<NiObject *,NiObject *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x478409*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,NiObject *>::`vftable'; /*0x478416*/
  *((_DWORD *)this + 3) = 0; /*0x47841c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x478434*/
  *((_DWORD *)this + 2) = v3; /*0x478438*/
  _memset(v3, 0, v5); /*0x47843b*/
  *(_DWORD *)this = &NiTPointerMap<NiObject *,NiObject *>::`vftable'; /*0x478443*/
  return this; /*0x47844b*/
}
