void __thiscall sub_841480(NiTArray_NiD3DPass *this, int a2, int a3, float Stage, _DWORD *a5)
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

  v6 = (NiRenderedTexture *)LODWORD(Stage); /*0x8414a6*/
  v7 = unk_B45908; /*0x8414ad*/
  sub_848DA0(*(float **)(LODWORD(Stage) + 0x10)); /*0x8414b4*/
  m_controller = (float *)v6->member.super.super.m_controller; /*0x8414b9*/
  sub_848E50(m_controller); /*0x8414bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, NiExtraData **))this->_vtbl + 0x2F))( /*0x8414d8*/
    this,
    a2,
    m_controller,
    v6->member.super.super.m_extraDataList);
  v9 = a5; /*0x8414dd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8414e5*/
  Stage = **(float **)(v7 + 0x24); /*0x8414ef*/
  v10 = (NiRenderedTexture *)LODWORD(Stage); /*0x8414e1*/
  v12 = v11(a5, 0); /*0x8414f3*/
  m_uiRefCount = v10->member.super.super.super.m_uiRefCount; /*0x8414f5*/
  v29 = v12; /*0x8414fa*/
  if ( m_uiRefCount != v12 ) /*0x8414fe*/
  {
    if ( m_uiRefCount ) /*0x841502*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x841508*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84151f*/
      v12 = v29; /*0x841521*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v12; /*0x84152b*/
    if ( v12 ) /*0x84152e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x841534*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841542*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 4); /*0x841552*/
  v14 = (NiRenderedTexture *)LODWORD(Stage); /*0x84154a*/
  v15 = sub_848FD0(v9, 0); /*0x841556*/
  v16 = v14->member.super.super.super.m_uiRefCount; /*0x84155b*/
  v30 = v15; /*0x841560*/
  if ( v16 != v15 ) /*0x841564*/
  {
    if ( v16 ) /*0x841568*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84156e*/
        (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x841585*/
      v15 = v30; /*0x841587*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v15; /*0x841591*/
    if ( v15 ) /*0x841594*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84159a*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x8415a8*/
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90); /*0x8415b5*/
  Stage = *(float *)(*(_DWORD *)(v7 + 0x24) + 0x10); /*0x8415bf*/
  v17 = (NiRenderedTexture *)LODWORD(Stage); /*0x8415b0*/
  v19 = v18(v9, 0); /*0x8415c3*/
  v20 = v17->member.super.super.super.m_uiRefCount; /*0x8415c5*/
  v31 = v19; /*0x8415ca*/
  if ( v20 != v19 ) /*0x8415ce*/
  {
    if ( v20 ) /*0x8415d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x8415d8*/
        (**(void (__thiscall ***)(UInt32, int))v20)(v20, 1); /*0x8415ef*/
      v19 = v31; /*0x8415f1*/
    }
    *(_DWORD *)(LODWORD(Stage) + 4) = v19; /*0x8415fb*/
    if ( v19 ) /*0x8415fe*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x841604*/
  }
  sub_848FA0((_DWORD **)LODWORD(Stage), (int)v9); /*0x841612*/
  v21 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x18); /*0x84161a*/
  v22 = unk_B43108[0]; /*0x84161d*/
  v23 = *(_DWORD *)(v21 + 4); /*0x841622*/
  v24 = (float *)(v21 + 4); /*0x841625*/
  v25 = v23 == LODWORD(unk_B43108[0]); /*0x841628*/
  Stage = unk_B43108[0]; /*0x84162a*/
  if ( !v25 ) /*0x84162e*/
  {
    if ( v23 ) /*0x841632*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x841638*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x84164f*/
      v22 = Stage; /*0x841651*/
    }
    *v24 = v22; /*0x841657*/
    if ( v22 != 0.0 ) /*0x841659*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x84165f*/
  }
  v26 = *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 0x1C); /*0x841668*/
  v27 = *(volatile LONG **)(v26 + 4); /*0x841670*/
  v25 = v27 == g_CanopyShadowMap; /*0x841673*/
  v28 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x841675*/
  Stage = *(float *)&g_CanopyShadowMap; /*0x841677*/
  if ( !v25 ) /*0x84167b*/
  {
    if ( v27 ) /*0x84167f*/
    {
      if ( !InterlockedDecrement(v27 + 1) ) /*0x841685*/
        (**(void (__thiscall ***)(void *, int))v27)((void *)v27, 1); /*0x84169b*/
      v28 = (NiRenderedTexture *)LODWORD(Stage); /*0x84169d*/
    }
    *(_DWORD *)(v26 + 4) = v28; /*0x8416a3*/
    if ( v28 ) /*0x8416a6*/
      InterlockedIncrement((volatile LONG *)&v28->member); /*0x8416ac*/
  }
  ++*(_DWORD *)(v7 + 0x60); /*0x8416b7*/
  Stage = *(float *)&v7; /*0x8416ba*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8416d2*/
  v25 = (*(_DWORD *)(v7 + 0x60))-- == 1; /*0x8416da*/
  if ( v25 ) /*0x8416e1*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v7); /*0x8416e5*/
  ++*((_DWORD *)this + 0xE); /*0x8416ea*/
}
