void __thiscall sub_83FD50(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, float *a5)
{
  NiRenderedTexture *v6; // ebp
  float *v7; // esi
  int v8; // ebx
  float *v9; // esi
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(float *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  NiRenderedTexture *v17; // ebp
  int (__thiscall *v18)(float *, int); // eax
  UInt32 v19; // eax
  UInt32 v20; // ebp
  int v21; // esi
  float v22; // eax
  int v23; // ebp
  float *v24; // esi
  bool v25; // zf
  int v26; // ebp
  volatile LONG *v27; // esi
  NiRenderedTexture *v28; // ecx
  UInt32 v29; // [esp+38h] [ebp+4h]
  UInt32 v30; // [esp+38h] [ebp+4h]
  UInt32 v31; // [esp+38h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fd76*/
  v7 = *(float **)(LODWORD(Stage) + 0xC); /*0x83fd7a*/
  v8 = unk_B458A4; /*0x83fd7d*/
  sub_848E50(v7); /*0x83fd84*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x83fd9d*/
    this,
    a2,
    v7,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x83fd9f*/
  flt_B464A0[0x62] = a5[0x2A]; /*0x83fda9*/
  flt_B464A0[0x63] = v9[0x2B]; /*0x83fdb4*/
  flt_B464A0[0x64] = v9[0x2C]; /*0x83fdc0*/
  flt_B464A0[0x65] = v9[0x2D]; /*0x83fdcc*/
  v11 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 0x88); /*0x83fdd8*/
  Stage = **(float **)(v8 + 0x24); /*0x83fde2*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fdd4*/
  v12 = v11(v9, 0); /*0x83fde6*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x83fde8*/
  v29 = v12; /*0x83fded*/
  if ( m_uiRefCount != v12 ) /*0x83fdf1*/
  {
    if ( m_uiRefCount ) /*0x83fdf5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83fdfb*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83fe12*/
      v12 = v29; /*0x83fe14*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x83fe1e*/
    if ( v12 ) /*0x83fe21*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x83fe27*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83fe35*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 4); /*0x83fe45*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fe3d*/
  v15 = sub_848FD0(v9, 0); /*0x83fe49*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x83fe4e*/
  v30 = v15; /*0x83fe53*/
  if ( v16 != v15 ) /*0x83fe57*/
  {
    if ( v16 ) /*0x83fe5b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x83fe61*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x83fe78*/
      v15 = v30; /*0x83fe7a*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x83fe84*/
    if ( v15 ) /*0x83fe87*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83fe8d*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83fe9b*/
  v18 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v9 + 0x88); /*0x83fea8*/
  Stage = *(float *)(*(_DWORD *)(v8 + 0x24) + 0x10); /*0x83feb2*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x83fea3*/
  v19 = v18(v9, 1); /*0x83feb6*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x83feb8*/
  v31 = v19; /*0x83febd*/
  if ( v20 != v19 ) /*0x83fec1*/
  {
    if ( v20 ) /*0x83fec5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x83fecb*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x83fee2*/
      v19 = v31; /*0x83fee4*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x83feee*/
    if ( v19 ) /*0x83fef1*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x83fef7*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x83ff05*/
  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x18); /*0x83ff0d*/
  v22 = unk_B43108[0]; /*0x83ff10*/
  v23 = *(_DWORD *)(v21 + 4); /*0x83ff15*/
  v24 = (float *)(v21 + 4); /*0x83ff18*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x83ff1b*/
  Stage = unk_B43108[0]; /*0x83ff1d*/
  if ( !v25 ) /*0x83ff21*/
  {
    if ( v23 ) /*0x83ff25*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x83ff2b*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x83ff42*/
      v22 = Stage; /*0x83ff44*/
    }
    *v24 = v22; /*0x83ff4a*/
    if ( v22 != 0.0 ) /*0x83ff4c*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x83ff52*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v8 + 0x24) + 0x1C); /*0x83ff5b*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x83ff63*/
  v25 = v27 == g_CanopyShadowMap; /*0x83ff66*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x83ff68*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x83ff6a*/
  if ( !v25 ) /*0x83ff6e*/
  {
    if ( v27 ) /*0x83ff72*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x83ff78*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x83ff8e*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x83ff90*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x83ff96*/
    if ( v28 ) /*0x83ff99*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x83ff9f*/
  }
  ++*(_DWORD *)(v8 + 0x60); /*0x83ffaa*/
  Stage = *(float *)&v8; /*0x83ffad*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x83ffc5*/
  v25 = (*(_DWORD *)(v8 + 0x60))-- == 1; /*0x83ffcd*/
  if ( v25 ) /*0x83ffd4*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v8); /*0x83ffd8*/
  ++*((_DWORD *)this + 0xE); /*0x83ffdd*/
}
