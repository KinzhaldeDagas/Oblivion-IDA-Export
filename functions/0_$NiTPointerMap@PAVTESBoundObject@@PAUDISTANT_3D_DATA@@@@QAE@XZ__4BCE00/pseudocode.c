NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *__thiscall NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(
        NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *> *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v7; // [esp-8h] [ebp-2Ch]

  *((_DWORD *)this + 4) = 0x25;
  *((_DWORD *)this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable';
  *((_DWORD *)this + 6) = 0;
  v2 = FormHeapAlloc(0x94u);
  v7 = 4 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v2;
  _memset(v2, 0, v7);
  *((_DWORD *)this + 3) = &NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable';
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = InterlockedDecrement;
  *((_BYTE *)this + 0x28) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *((_DWORD *)this + 8);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 8) = 0;
  }
  v5 = *((_DWORD *)this + 7);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 7) = 0;
  }
  return this;
}
