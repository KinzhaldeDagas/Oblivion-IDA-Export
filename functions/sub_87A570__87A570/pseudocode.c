void __thiscall sub_87A570(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // ebp
  NiRenderedTexture *v16; // eax
  int v17; // edi
  NiRenderedTexture **v18; // ebp
  bool v19; // zf
  int v20; // ebp
  NiRenderedTexture *v21; // edi
  NiRenderedTexture *v22; // ecx
  int v23; // [esp+38h] [ebp+Ch]
  int v24; // [esp+38h] [ebp+Ch]

  v6 = dword_B47700;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24);
  v23 = v7;
  v8 = sub_848FD0(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v23 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  v11 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4);
  v24 = v11;
  v12 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0);
  v13 = *(_DWORD *)(v11 + 4);
  v14 = v12;
  if ( v13 != v12 )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
    *(_DWORD *)(v24 + 4) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10);
  v16 = (NiRenderedTexture *)dword_B43108;
  v17 = *(_DWORD *)(v15 + 4);
  v18 = (NiRenderedTexture **)(v15 + 4);
  v19 = v17 == dword_B43108;
  a5 = (NiRenderedTexture *)dword_B43108;
  if ( !v19 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
      v16 = a5;
    }
    *v18 = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)&v16->member);
  }
  v20 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14);
  v21 = *(NiRenderedTexture **)(v20 + 4);
  v19 = v21 == CanopySadowMap;
  v22 = CanopySadowMap;
  a5 = CanopySadowMap;
  if ( !v19 )
  {
    if ( v21 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->member) )
        v21->__vftable->super.super.super.Destructor((NiRefObject *)v21, 1);
      v22 = a5;
    }
    *(_DWORD *)(v20 + 4) = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)&v22->member);
  }
  ++*(_DWORD *)(v6 + 0x60);
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  v19 = (*(_DWORD *)(v6 + 0x60))-- == 1;
  if ( v19 )
    sub_7604D0((NiD3DPass *)v6);
  ++*((_DWORD *)this + 0xE);
}
