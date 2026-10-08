void __thiscall sub_878990(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebp
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  UInt32 Unk08; // ebp
  int v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B476C0; /*0x8789bd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8789c4*/
  v7 = *(float **)(a4 + 0xC); /*0x8789c9*/
  sub_848E50(v7); /*0x8789cf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8789e8*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x8789f1*/
  v20 = Stage; /*0x8789fd*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x878a01*/
  v10 = *(_DWORD *)(Stage + 4); /*0x878a03*/
  v11 = v9; /*0x878a06*/
  if ( v10 != v9 ) /*0x878a0a*/
  {
    if ( v10 ) /*0x878a0e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x878a14*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x878a2a*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x878a32*/
    if ( v11 ) /*0x878a35*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x878a3b*/
  }
  Texture = v6->Stages.data->Texture; /*0x878a48*/
  v21 = Texture; /*0x878a50*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x878a54*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x878a59*/
  v15 = v13; /*0x878a5c*/
  if ( m_uiRefCount != v13 ) /*0x878a60*/
  {
    if ( m_uiRefCount ) /*0x878a64*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x878a6a*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x878a80*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x878a88*/
    if ( v15 ) /*0x878a8b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x878a91*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x878a9a*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x878aa2*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x878aa5*/
  v19 = flt_B43110[0]; /*0x878aa7*/
  value = flt_B43110[0]; /*0x878aa9*/
  if ( !v18 ) /*0x878aad*/
  {
    if ( v17 ) /*0x878ab1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x878ab7*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x878acd*/
      v19 = value; /*0x878acf*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x878ad5*/
    if ( v19 != 0.0 ) /*0x878ad8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x878ade*/
  }
  ++v6->RefCount; /*0x878ae9*/
  value = *(float *)&v6; /*0x878aec*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x878b04*/
  v18 = v6->RefCount-- == 1; /*0x878b0c*/
  if ( v18 ) /*0x878b13*/
    NiD3DPass_ReleaseToPool(v6); /*0x878b17*/
  ++*((_DWORD *)this + 0xE); /*0x878b1c*/
}
