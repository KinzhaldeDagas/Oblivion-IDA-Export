void __thiscall sub_880E20(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebx
  _DWORD *v9; // ebp
  NiRenderedTexture *v10; // ebx
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebx
  NiRenderedTexture *v14; // ebx
  UInt32 v15; // eax
  UInt32 v16; // ebx
  NiRenderedTexture *v17; // ebx
  int (__thiscall *v18)(_DWORD *, int); // edx
  UInt32 v19; // eax
  UInt32 v20; // ebx
  int v21; // eax
  UInt32 v22; // ebp
  UInt32 v23; // ebx
  int v24; // ebx
  float v25; // eax
  int v26; // ebp
  float *v27; // ebx
  bool v28; // zf
  int v29; // ebx
  volatile LONG *v30; // ebp
  NiRenderedTexture *v31; // ecx
  UInt32 v32; // [esp+3Ch] [ebp+4h]
  UInt32 v33; // [esp+3Ch] [ebp+4h]
  UInt32 v34; // [esp+3Ch] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x880e46*/
  v7 = unk_B47740; /*0x880e4d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x880e54*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x880e59*/
  sub_848E50(m_controller); /*0x880e5f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x880e76*/
  v9 = a5; /*0x880e7b*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x880e84*/
  Stage = **(float **)(v7 + 0x24); /*0x880e8e*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x880e7f*/
  v12 = v11(a5, 0); /*0x880e92*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x880e94*/
  v32 = v12; /*0x880e99*/
  if ( m_uiRefCount != v12 ) /*0x880e9d*/
  {
    if ( m_uiRefCount ) /*0x880ea1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x880ea7*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x880ebd*/
      v12 = v32; /*0x880ebf*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x880ec9*/
    if ( v12 ) /*0x880ecc*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x880ed2*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x880ee3*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x880edb*/
  v15 = sub_848FD0(v9, 0); /*0x880ee7*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x880eec*/
  v33 = v15; /*0x880ef1*/
  if ( v16 != v15 ) /*0x880ef5*/
  {
    if ( v16 ) /*0x880ef9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x880eff*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x880f15*/
      v15 = v33; /*0x880f17*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x880f21*/
    if ( v15 ) /*0x880f24*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x880f2a*/
  }
  v18 = *(int (__thiscall **)(_DWORD *, int))(*v9 + 0x88); /*0x880f39*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 8); /*0x880f43*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x880f33*/
  v19 = v18(v9, 1); /*0x880f47*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x880f49*/
  v34 = v19; /*0x880f4e*/
  if ( v20 != v19 ) /*0x880f52*/
  {
    if ( v20 ) /*0x880f56*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x880f5c*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x880f72*/
      v19 = v34; /*0x880f74*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x880f7e*/
    if ( v19 ) /*0x880f81*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x880f87*/
  }
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x880f98*/
  v21 = sub_848FD0(v9, 1); /*0x880f9c*/
  v22 = *(_DWORD *)(LODWORD(Stage) + 4); /*0x880fa5*/
  v23 = v21; /*0x880fa8*/
  if ( v22 != v21 ) /*0x880fac*/
  {
    if ( v22 ) /*0x880fb0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x880fb6*/
        (**(void (__thiscall ***)(UInt32, int))v22)(v22, 1); /*0x880fcd*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v23; /*0x880fd5*/
    if ( v23 ) /*0x880fd8*/
      InterlockedIncrement((volatile LONG *)(v23 + 4)); /*0x880fde*/
  }
  v24 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x880fe7*/
  v25 = unk_B43108[0]; /*0x880fea*/
  v26 = *(_DWORD *)(v24 + 4); /*0x880fef*/
  v27 = (float *)(v24 + 4); /*0x880ff2*/
  v28 = v26 == LODWORD(unk_B43108[0]); /*0x880ff5*/
  Stage = unk_B43108[0]; /*0x880ff7*/
  if ( !v28 ) /*0x880ffb*/
  {
    if ( v26 ) /*0x880fff*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) ) /*0x881005*/
        (**(void (__thiscall ***)(int, int))v26)(v26, 1); /*0x88101c*/
      v25 = Stage; /*0x88101e*/
    }
    *v27 = v25; /*0x881024*/
    if ( v25 != 0.0 ) /*0x881026*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v25) + 4)); /*0x88102c*/
  }
  v29 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x881035*/
  v30 = *(volatile LONG **)(v29 + 4); /*0x88103d*/
  v28 = v30 == g_CanopyShadowMap; /*0x881040*/
  v31 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x881042*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x881044*/
  if ( !v28 ) /*0x881048*/
  {
    if ( v30 ) /*0x88104c*/
    {
      if ( !InterlockedDecrement(v30 + 1) ) /*0x881052*/
        (**(void (__thiscall ***)(void *, int))v30)((void *)v30, 1); /*0x881069*/
      v31 = (NiRenderedTexture *)LODWORD(Stage); /*0x88106b*/
    }
    *(_DWORD *)(v29 + 4) = v31; /*0x881071*/
    if ( v31 ) /*0x881074*/
      InterlockedIncrement((volatile LONG *)&v31->member); /*0x88107a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x881085*/
  Stage = *(float *)&v7; /*0x881088*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8810a0*/
  v28 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x8810a8*/
  if ( v28 ) /*0x8810af*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x8810b3*/
  ++*((_DWORD *)this + 0xE); /*0x8810b8*/
}
