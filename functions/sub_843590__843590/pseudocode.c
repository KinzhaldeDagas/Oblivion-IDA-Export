void __thiscall sub_843590(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x8435b6*/
  v7 = unk_B45760; /*0x8435bd*/
  sub_848C40(*(float **)(LODWORD(Stage) + 0x10)); /*0x8435c4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8435c9*/
  sub_848E50(m_controller); /*0x8435cf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, m_controller, 0); /*0x8435e6*/
  v9 = a5; /*0x8435eb*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8435f3*/
  Stage = **(float **)(v7 + 0x24); /*0x8435fd*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8435ef*/
  v12 = v11(a5, 0); /*0x843601*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x843603*/
  v25 = v12; /*0x843608*/
  if ( m_uiRefCount != v12 ) /*0x84360c*/
  {
    if ( m_uiRefCount ) /*0x843610*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x843616*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84362d*/
      v12 = v25; /*0x84362f*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x843639*/
    if ( v12 ) /*0x84363c*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x843642*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x843650*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x843660*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x843658*/
  v15 = sub_848FD0(v9, 0); /*0x843664*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x843669*/
  v26 = v15; /*0x84366e*/
  if ( v16 != v15 ) /*0x843672*/
  {
    if ( v16 ) /*0x843676*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84367c*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x843693*/
      v15 = v26; /*0x843695*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x84369f*/
    if ( v15 ) /*0x8436a2*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8436a8*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8436b6*/
  v17 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x14); /*0x8436be*/
  v18 = unk_B43108[0]; /*0x8436c1*/
  v19 = *(_DWORD *)(v17 + 4); /*0x8436c6*/
  v20 = (float *)(v17 + 4); /*0x8436c9*/
  v21 = v19 == LODWORD(unk_B43108[0]); /*0x8436cc*/
  Stage = unk_B43108[0]; /*0x8436ce*/
  if ( !v21 ) /*0x8436d2*/
  {
    if ( v19 ) /*0x8436d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x8436dc*/
        (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x8436f3*/
      v18 = Stage; /*0x8436f5*/
    }
    *v20 = v18; /*0x8436fb*/
    if ( v18 != 0.0 ) /*0x8436fd*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x843703*/
  }
  v22 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x84370c*/
  v23 = *(volatile LONG **)(v22 + 4); /*0x843714*/
  v21 = v23 == g_CanopyShadowMap; /*0x843717*/
  v24 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x843719*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x84371b*/
  if ( !v21 ) /*0x84371f*/
  {
    if ( v23 ) /*0x843723*/
    {
      if ( !InterlockedDecrement(v23 + 1) ) /*0x843729*/
        (**(void (__thiscall ***)(void *, int))v23)((void *)v23, 1); /*0x84373f*/
      v24 = (NiRenderedTexture *)LODWORD(Stage); /*0x843741*/
    }
    *(_DWORD *)(v22 + 4) = v24; /*0x843747*/
    if ( v24 ) /*0x84374a*/
      InterlockedIncrement((volatile LONG *)&v24->member); /*0x843750*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x84375b*/
  Stage = *(float *)&v7; /*0x84375e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x843776*/
  v21 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x84377e*/
  if ( v21 ) /*0x843785*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x843789*/
  ++*((_DWORD *)this + 0xE); /*0x84378e*/
}
