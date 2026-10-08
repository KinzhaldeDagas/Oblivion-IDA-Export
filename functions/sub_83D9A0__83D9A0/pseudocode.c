void __thiscall sub_83D9A0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // edi
  int v7; // ebx
  float *m_controller; // edi
  _DWORD *v9; // edi
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  NiRenderedTexture *v17; // ebp
  int (__thiscall *v18)(_DWORD *, _DWORD); // eax
  UInt32 v19; // eax
  UInt32 v20; // ebp
  int v21; // edi
  float v22; // eax
  int v23; // ebp
  float *v24; // edi
  bool v25; // zf
  int v26; // ebp
  volatile LONG *v27; // edi
  NiRenderedTexture *v28; // ecx
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]
  UInt32 v31; // [esp+38h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d9c6*/
  v7 = unk_B45820; /*0x83d9cd*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83d9d4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83d9d9*/
  sub_848E50(m_controller); /*0x83d9df*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x83d9f6*/
  v9 = a5; /*0x83d9fb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83da03*/
  Stage = **(float **)(v7 + 0x24); /*0x83da0d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83d9ff*/
  v12 = v11(a5, 0); /*0x83da11*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83da13*/
  v29 = v12; /*0x83da18*/
  if ( m_uiRefCount != v12 ) /*0x83da1c*/
  {
    if ( m_uiRefCount ) /*0x83da20*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83da26*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83da3d*/
      v12 = v29; /*0x83da3f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83da49*/
    if ( v12 ) /*0x83da4c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83da52*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83da60*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83da70*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83da68*/
  v15 = sub_848FD0(v9, 0); /*0x83da74*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83da79*/
  v30 = v15; /*0x83da7e*/
  if ( v16 != v15 ) /*0x83da82*/
  {
    if ( v16 ) /*0x83da86*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83da8c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83daa3*/
      v15 = v30; /*0x83daa5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83daaf*/
    if ( v15 ) /*0x83dab2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83dab8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83dac6*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83dad3*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83dadd*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dace*/
  v19 = v18(v9, 0); /*0x83dae1*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83dae3*/
  v31 = v19; /*0x83dae8*/
  if ( v20 != v19 ) /*0x83daec*/
  {
    if ( v20 ) /*0x83daf0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83daf6*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83db0d*/
      v19 = v31; /*0x83db0f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83db19*/
    if ( v19 ) /*0x83db1c*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83db22*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83db30*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83db38*/
  v22 = unk_B43108[0]; /*0x83db3b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83db40*/
  v24 = (float *)(v21 + 4); /*0x83db43*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83db46*/
  Stage = unk_B43108[0]; /*0x83db48*/
  if ( !v25 ) /*0x83db4c*/
  {
    if ( v23 ) /*0x83db50*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83db56*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83db6d*/
      v22 = Stage; /*0x83db6f*/
    }
    *v24 = v22; /*0x83db75*/
    if ( v22 != 0.0 ) /*0x83db77*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83db7d*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83db86*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83db8e*/
  v25 = v27 == g_CanopyShadowMap; /*0x83db91*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83db93*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83db95*/
  if ( !v25 ) /*0x83db99*/
  {
    if ( v27 ) /*0x83db9d*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83dba3*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83dbb9*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83dbbb*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83dbc1*/
    if ( v28 ) /*0x83dbc4*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83dbca*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83dbd5*/
  Stage = *(float *)&v7; /*0x83dbd8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83dbf0*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83dbf8*/
  if ( v25 ) /*0x83dbff*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83dc03*/
  ++*((_DWORD *)this + 0xE); /*0x83dc08*/
}
