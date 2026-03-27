char __thiscall sub_556A70(_DWORD *this, Ni2DBuffer **a2)
{
  Ni2DBuffer **v3; // esi
  Ni2DBuffer *v4; // edi
  bool v5; // zf
  int v6; // eax
  _DWORD *v7; // ecx
  Ni2DBuffer *v8; // eax
  Ni2DBuffer **v9; // edi
  int v10; // ebx
  NiNode *m_uiRefCount; // edi
  NiInterpController *m_controller; // ecx
  _DWORD *v13; // eax
  unsigned int *v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // esi
  Ni2DBuffer *v17; // [esp-4h] [ebp-30h]
  Ni2DBuffer *v18; // [esp-4h] [ebp-30h]
  UInt32 v19; // [esp+14h] [ebp-18h] BYREF
  UInt32 v20[2]; // [esp+18h] [ebp-14h] BYREF
  unsigned int v21; // [esp+28h] [ebp-4h]

  v20[0] = 0;
  v21 = 0;
  v19 = 0;
  v3 = a2;
  v4 = *a2;
  v5 = *a2 == 0;
  LOBYTE(v21) = 1;
  if ( !v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
    {
      if ( v4 )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v4->__vftable)(v4, 1);
    }
    *v3 = 0;
  }
  v6 = *(this + 2);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD **)(v6 + 0x10);
  if ( !v7 || !v7[0x2D] )
    return 0;
  v8 = (Ni2DBuffer *)sub_700900(v7);
  NiSmartPointer_Set__(v3, v8);
  v17 = (Ni2DBuffer *)*sub_700790(*(void **)(*(_DWORD *)(*(this + 2) + 0x10) + 0xB4), (int *)&a2);
  LOBYTE(v21) = 2;
  NiSmartPointer_Set__((Ni2DBuffer **)v20, v17);
  LOBYTE(v21) = 1;
  if ( a2 )
  {
    v9 = a2;
    if ( !InterlockedDecrement((volatile LONG *)a2 + 1) )
      ((void (__thiscall *)(Ni2DBuffer **, int))(*v9)->__vftable)(v9, 1);
  }
  v10 = v20[0];
  (*((void (__thiscall **)(Ni2DBuffer *, UInt32))(*v3)->__vftable + 0x23))(*v3, v20[0]);
  m_uiRefCount = (NiNode *)(*v3)[9].members.super.m_uiRefCount;
  if ( m_uiRefCount )
  {
    m_controller = m_uiRefCount->members.super.super.m_controller;
    if ( m_controller )
    {
      v18 = (Ni2DBuffer *)*sub_700790(m_controller, (int *)&a2);
      LOBYTE(v21) = 3;
      NiSmartPointer_Set__((Ni2DBuffer **)&v19, v18);
      LOBYTE(v21) = 1;
      sub_7016A0((NiD3DVertexShader *)&a2);
      sub_478300(m_uiRefCount, (NiTimeController *)v19);
    }
  }
  v13 = (_DWORD *)FormHeapAlloc(0x18u);
  v20[1] = (UInt32)v13;
  LOBYTE(v21) = 4;
  if ( v13 )
    v14 = sub_55C6E0(v13, (int)*v3, *(void **)(*(this + 2) + 0x14), *(_DWORD *)(*(this + 2) + 0x18));
  else
    v14 = 0;
  LOBYTE(v21) = 1;
  if ( v14 )
    NiNode_AddNiExtraData((const void **)&(*v3)->__vftable, v10, v14);
  if ( *(_DWORD *)(*(this + 2) + 0x20) )
    NiNode_AddNiExtraData((const void **)&(*v3)->__vftable, v10, *(unsigned int **)(*(this + 2) + 0x20));
  v15 = (void (__thiscall ***)(_DWORD, int))v19;
  LOBYTE(v21) = 0;
  if ( v19 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
      (**v15)(v15, 1);
  }
  v21 = 0xFFFFFFFF;
  if ( v10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  return 1;
}
