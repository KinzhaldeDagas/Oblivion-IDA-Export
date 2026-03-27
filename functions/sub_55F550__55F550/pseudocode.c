void __thiscall sub_55F550(unsigned int *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  void (__thiscall ***v3)(_DWORD, int); // esi
  NiRenderedTexture *v4; // esi
  unsigned int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi

  sub_55E390(0);
  v2 = InterlockedDecrement;
  if ( dword_B43108 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))dword_B43108;
    if ( !v2((volatile LONG *)(dword_B43108 + 4)) )
    {
      if ( v3 )
        (**v3)(v3, 1);
    }
    dword_B43108 = 0;
  }
  v4 = CanopySadowMap;
  if ( CanopySadowMap )
  {
    if ( !v2((volatile LONG *)&v4->member) )
    {
      if ( v4 )
        v4->__vftable->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
    CanopySadowMap = 0;
  }
  byte_B06A28 = 1;
  sub_4A3C60();
  v5 = *(this + 9);
  if ( v5 )
  {
    *(_DWORD *)v5 = &LockFreeMap<TESObjectREFR *,BSTreeNode *>::`vftable';
    sub_55F3C0((LockFreeMap *)v5, 1);
    FormHeapFree(*(_DWORD *)(v5 + 0xC));
    FormHeapFree(*(_DWORD *)(v5 + 4));
    FormHeapFree(v5);
  }
  v6 = *(this + 6);
  if ( v6 )
  {
    if ( !v2((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *(this + 5);
  if ( v7 )
  {
    if ( !v2((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *(this + 4);
  if ( v8 )
  {
    if ( !v2((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *(this + 3);
  if ( v9 )
  {
    if ( !v2((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *(this + 2);
  if ( v10 )
  {
    if ( !v2((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *(this + 1);
  if ( v11 )
  {
    if ( !v2((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
}
