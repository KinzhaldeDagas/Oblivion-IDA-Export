NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *__thiscall NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(
        NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  unsigned int v7; // [esp-8h] [ebp-2Ch]

  *((_DWORD *)this + 4) = 0x25; /*0x4bce32*/
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'; /*0x4bce41*/
  *((_DWORD *)this + 6) = 0; /*0x4bce48*/
  v2 = FormHeapAlloc(0x94u); /*0x4bce50*/
  v7 = 4 * *((_DWORD *)this + 4); /*0x4bce5c*/
  *((_DWORD *)this + 5) = v2; /*0x4bce5f*/
  _memset(v2, 0, v7); /*0x4bce62*/
  *((_DWORD *)this + 3) = &NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable'; /*0x4bce6a*/
  *((_DWORD *)this + 7) = 0; /*0x4bce75*/
  *((_DWORD *)this + 8) = 0; /*0x4bce78*/
  v3 = InterlockedDecrement; /*0x4bce7b*/
  *((_BYTE *)this + 0x28) = 0; /*0x4bce81*/
  *(_DWORD *)this = 0; /*0x4bce84*/
  *((_DWORD *)this + 1) = 0; /*0x4bce86*/
  *((_DWORD *)this + 2) = 0; /*0x4bce89*/
  v4 = *((_DWORD *)this + 8); /*0x4bce8c*/
  if ( v4 ) /*0x4bce96*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x4bce9c*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4bceae*/
    *((_DWORD *)this + 8) = 0; /*0x4bceb0*/
  }
  v5 = *((_DWORD *)this + 7); /*0x4bceb3*/
  if ( v5 ) /*0x4bceb8*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x4bcebe*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4bced0*/
    *((_DWORD *)this + 7) = 0; /*0x4bced2*/
  }
  return this; /*0x4bced7*/
}
