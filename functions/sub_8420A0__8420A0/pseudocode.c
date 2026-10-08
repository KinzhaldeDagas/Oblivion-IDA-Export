void __thiscall sub_8420A0(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebx
  _DWORD *v9; // ebx
  NiRenderedTexture *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  UInt32 v12; // eax
  UInt32 m_uiRefCount; // ebp
  NiRenderedTexture *v14; // ebp
  UInt32 v15; // eax
  UInt32 v16; // ebp
  int v17; // ebx
  float v18; // eax
  int v19; // ebp
  float *v20; // ebx
  bool v21; // zf
  int v22; // ebp
  volatile LONG *v23; // ebx
  NiRenderedTexture *v24; // ecx
  UInt32 v25; // [esp+30h] [ebp+4h]
  UInt32 v26; // [esp+30h] [ebp+4h]

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x8420c6*/
  v7 = unk_B456F4; /*0x8420cd*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x8420d4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8420d9*/
  sub_848E50(m_controller); /*0x8420df*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x8420f6*/
  v9 = a5; /*0x8420fb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x842103*/
  Stage = **(float **)(v7 + 0x24); /*0x84210d*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8420ff*/
  v12 = v11(a5, 0); /*0x842111*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x842113*/
  v25 = v12; /*0x842118*/
  if ( m_uiRefCount != v12 ) /*0x84211c*/
  {
    if ( m_uiRefCount ) /*0x842120*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x842126*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84213d*/
      v12 = v25; /*0x84213f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x842149*/
    if ( v12 ) /*0x84214c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x842152*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x842160*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x842170*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x842168*/
  v15 = sub_848FD0(v9, 0); /*0x842174*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x842179*/
  v26 = v15; /*0x84217e*/
  if ( v16 != v15 ) /*0x842182*/
  {
    if ( v16 ) /*0x842186*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84218c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x8421a3*/
      v15 = v26; /*0x8421a5*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x8421af*/
    if ( v15 ) /*0x8421b2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8421b8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8421c6*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x8421ce*/
  v18 = unk_B43108[0]; /*0x8421d1*/
  v19 = *(_DWORD *)(v17 + 4); /*0x8421d6*/
  v20 = (float *)(v17 + 4); /*0x8421d9*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x8421dc*/
  Stage = unk_B43108[0]; /*0x8421de*/
  if ( !v21 ) /*0x8421e2*/
  {
    if ( v19 ) /*0x8421e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x8421ec*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x842203*/
      v18 = Stage; /*0x842205*/
    }
    *v20 = v18; /*0x84220b*/
    if ( v18 != 0.0 ) /*0x84220d*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x842213*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x84221c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x842224*/
  v21 = v23 == g_CanopyShadowMap; /*0x842227*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x842229*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x84222b*/
  if ( !v21 ) /*0x84222f*/
  {
    if ( v23 ) /*0x842233*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x842239*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x84224f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x842251*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x842257*/
    if ( v24 ) /*0x84225a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x842260*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x84226b*/
  Stage = *(float *)&v7; /*0x84226e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x842286*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x84228e*/
  if ( v21 ) /*0x842295*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x842299*/
  ++*((_DWORD *)this + 0xE); /*0x84229e*/
}
