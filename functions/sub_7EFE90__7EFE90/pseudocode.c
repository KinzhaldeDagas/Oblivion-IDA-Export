char __thiscall sub_7EFE90(Ni2DBuffer **this, NiGeometry *a2)
{
  NiAVObject *v2; // ebp
  volatile LONG *v4; // esi
  NiGeometry *v5; // edi
  volatile LONG *v6; // edi
  int v7; // esi
  int v8; // ecx
  Ni2DBuffer *v9; // eax
  int v10; // edx
  int v11; // eax
  volatile LONG *v13; // [esp+10h] [ebp-4h] BYREF

  v2 = (NiAVObject *)a2;
  v4 = *sub_405760(a2, (volatile LONG **)&a2);
  if ( a2 )
  {
    v5 = a2;
    if ( !InterlockedDecrement((volatile LONG *)&a2->member) )
      v5->__vftable->super.super.super.Destructor((NiRefObject *)v5, 1);
  }
  if ( !v4 )
  {
    NiAVObject_InitializePropertyState(v2);
    v4 = *sub_405760((NiGeometry *)v2, &v13);
    if ( v13 )
    {
      v6 = v13;
      if ( !InterlockedDecrement(v13 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
  }
  v7 = *((_DWORD *)v4 + 8);
  if ( !v7 )
    return 0;
  v8 = *(_DWORD *)(v7 + 0x20);
  if ( *(_DWORD *)v8 )
    v9 = *(Ni2DBuffer **)(*(_DWORD *)v8 + 8);
  else
    v9 = 0;
  NiSmartPointer_Set__(this + 0x27, v9);
  v10 = *(_DWORD *)(v7 + 0x20);
  if ( *(_DWORD *)v10 )
    v11 = (*(unsigned __int16 *)(*(_DWORD *)v10 + 4) >> 0xC) & 3;
  else
    v11 = 3;
  ((void (__thiscall *)(Ni2DBuffer **, int))(*this)[5].members.data)(this, v11);
  sub_4A1220((int **)v2, v7);
  return 1;
}
