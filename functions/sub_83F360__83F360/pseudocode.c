void __thiscall sub_83F360(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // edi
  int v7; // ebx
  float *m_controller; // ebp
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f386*/
  v7 = unk_B45888; /*0x83f38d*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x83f394*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x83f399*/
  sub_848E50(m_controller); /*0x83f39f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83f3b8*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83f3bd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x83f3c5*/
  Stage = **(float **)(v7 + 0x24); /*0x83f3cf*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f3c1*/
  v12 = v11(a5, 0); /*0x83f3d3*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83f3d5*/
  v29 = v12; /*0x83f3da*/
  if ( m_uiRefCount != v12 ) /*0x83f3de*/
  {
    if ( m_uiRefCount ) /*0x83f3e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83f3e8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83f3ff*/
      v12 = v29; /*0x83f401*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83f40b*/
    if ( v12 ) /*0x83f40e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83f414*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f422*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x83f432*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f42a*/
  v15 = sub_848FD0(v9, 0); /*0x83f436*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83f43b*/
  v30 = v15; /*0x83f440*/
  if ( v16 != v15 ) /*0x83f444*/
  {
    if ( v16 ) /*0x83f448*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83f44e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83f465*/
      v15 = v30; /*0x83f467*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83f471*/
    if ( v15 ) /*0x83f474*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83f47a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f488*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x83f495*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x83f49f*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f490*/
  v19 = v18(v9, 0); /*0x83f4a3*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83f4a5*/
  v31 = v19; /*0x83f4aa*/
  if ( v20 != v19 ) /*0x83f4ae*/
  {
    if ( v20 ) /*0x83f4b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83f4b8*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83f4cf*/
      v19 = v31; /*0x83f4d1*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83f4db*/
    if ( v19 ) /*0x83f4de*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83f4e4*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83f4f2*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x83f4fa*/
  v22 = unk_B43108[0]; /*0x83f4fd*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83f502*/
  v24 = (float *)(v21 + 4); /*0x83f505*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83f508*/
  Stage = unk_B43108[0]; /*0x83f50a*/
  if ( !v25 ) /*0x83f50e*/
  {
    if ( v23 ) /*0x83f512*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83f518*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83f52f*/
      v22 = Stage; /*0x83f531*/
    }
    *v24 = v22; /*0x83f537*/
    if ( v22 != 0.0 ) /*0x83f539*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83f53f*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x83f548*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83f550*/
  v25 = v27 == g_CanopyShadowMap; /*0x83f553*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83f555*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83f557*/
  if ( !v25 ) /*0x83f55b*/
  {
    if ( v27 ) /*0x83f55f*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83f565*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83f57b*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83f57d*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83f583*/
    if ( v28 ) /*0x83f586*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83f58c*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x83f597*/
  Stage = *(float *)&v7; /*0x83f59a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83f5b2*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x83f5ba*/
  if ( v25 ) /*0x83f5c1*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x83f5c5*/
  ++*((_DWORD *)this + 0xE); /*0x83f5ca*/
}
