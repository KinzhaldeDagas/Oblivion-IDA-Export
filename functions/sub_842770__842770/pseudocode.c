void __thiscall sub_842770(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x842796*/
  v7 = unk_B45710; /*0x84279d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x8427a4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8427a9*/
  sub_848E50(m_controller); /*0x8427af*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x8427c6*/
  v9 = a5; /*0x8427cb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8427d3*/
  Stage = **(float **)(v7 + 0x24); /*0x8427dd*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8427cf*/
  v12 = v11(a5, 0); /*0x8427e1*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x8427e3*/
  v29 = v12; /*0x8427e8*/
  if ( m_uiRefCount != v12 ) /*0x8427ec*/
  {
    if ( m_uiRefCount ) /*0x8427f0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8427f6*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84280d*/
      v12 = v29; /*0x84280f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x842819*/
    if ( v12 ) /*0x84281c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842822*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842830*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x842840*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x842838*/
  v15 = sub_848FD0(v9, 0); /*0x842844*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x842849*/
  v30 = v15; /*0x84284e*/
  if ( v16 != v15 ) /*0x842852*/
  {
    if ( v16 ) /*0x842856*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84285c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x842873*/
      v15 = v30; /*0x842875*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x84287f*/
    if ( v15 ) /*0x842882*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x842888*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842896*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x8428a3*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0xC); /*0x8428ad*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x84289e*/
  v19 = v18(v9, 0); /*0x8428b1*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x8428b3*/
  v31 = v19; /*0x8428b8*/
  if ( v20 != v19 ) /*0x8428bc*/
  {
    if ( v20 ) /*0x8428c0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8428c6*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x8428dd*/
      v19 = v31; /*0x8428df*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x8428e9*/
    if ( v19 ) /*0x8428ec*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x8428f2*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842900*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x842908*/
  v22 = unk_B43108[0]; /*0x84290b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x842910*/
  v24 = (float *)(v21 + 4); /*0x842913*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x842916*/
  Stage = unk_B43108[0]; /*0x842918*/
  if ( !v25 ) /*0x84291c*/
  {
    if ( v23 ) /*0x842920*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x842926*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x84293d*/
      v22 = Stage; /*0x84293f*/
    }
    *v24 = v22; /*0x842945*/
    if ( v22 != 0.0 ) /*0x842947*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x84294d*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x842956*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x84295e*/
  v25 = v27 == g_CanopyShadowMap; /*0x842961*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x842963*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x842965*/
  if ( !v25 ) /*0x842969*/
  {
    if ( v27 ) /*0x84296d*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x842973*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x842989*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x84298b*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x842991*/
    if ( v28 ) /*0x842994*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x84299a*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8429a5*/
  Stage = *(float *)&v7; /*0x8429a8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8429c0*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x8429c8*/
  if ( v25 ) /*0x8429cf*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x8429d3*/
  ++*((_DWORD *)this + 0xE); /*0x8429d8*/
}
