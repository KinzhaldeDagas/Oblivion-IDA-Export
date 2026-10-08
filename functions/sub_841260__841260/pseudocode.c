void __thiscall sub_841260(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
{
  NiRenderedTexture *v6; // ebx
  int v7; // edi
  float *m_controller; // ebp
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x841286*/
  v7 = unk_B45904; /*0x84128d*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x841294*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x841299*/
  sub_848E50(m_controller); /*0x84129f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x8412b8*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x8412bd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8412c5*/
  Stage = **(float **)(v7 + 0x24); /*0x8412cf*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8412c1*/
  v12 = v11(a5, 0); /*0x8412d3*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x8412d5*/
  v25 = v12; /*0x8412da*/
  if ( m_uiRefCount != v12 ) /*0x8412de*/
  {
    if ( m_uiRefCount ) /*0x8412e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8412e8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8412ff*/
      v12 = v25; /*0x841301*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x84130b*/
    if ( v12 ) /*0x84130e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841314*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841322*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x841332*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x84132a*/
  v15 = sub_848FD0(v9, 0); /*0x841336*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x84133b*/
  v26 = v15; /*0x841340*/
  if ( v16 != v15 ) /*0x841344*/
  {
    if ( v16 ) /*0x841348*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84134e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x841365*/
      v15 = v26; /*0x841367*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x841371*/
    if ( v15 ) /*0x841374*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84137a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841388*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x841390*/
  v18 = unk_B43108[0]; /*0x841393*/
  v19 = *(_DWORD *)(v17 + 4); /*0x841398*/
  v20 = (float *)(v17 + 4); /*0x84139b*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x84139e*/
  Stage = unk_B43108[0]; /*0x8413a0*/
  if ( !v21 ) /*0x8413a4*/
  {
    if ( v19 ) /*0x8413a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x8413ae*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x8413c5*/
      v18 = Stage; /*0x8413c7*/
    }
    *v20 = v18; /*0x8413cd*/
    if ( v18 != 0.0 ) /*0x8413cf*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x8413d5*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x8413de*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x8413e6*/
  v21 = v23 == g_CanopyShadowMap; /*0x8413e9*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8413eb*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x8413ed*/
  if ( !v21 ) /*0x8413f1*/
  {
    if ( v23 ) /*0x8413f5*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x8413fb*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x841411*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x841413*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x841419*/
    if ( v24 ) /*0x84141c*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x841422*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x84142d*/
  Stage = *(float *)&v7; /*0x841430*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x841448*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x841450*/
  if ( v21 ) /*0x841457*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x84145b*/
  ++*((_DWORD *)this + 0xE); /*0x841460*/
}
