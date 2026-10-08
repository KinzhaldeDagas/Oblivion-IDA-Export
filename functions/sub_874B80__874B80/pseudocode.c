void __thiscall sub_874B80(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  NiTexture *v16; // ebp
  UInt32 v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47648; /*0x874bad*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x874bb4*/
  v7 = *(float **)(a4 + 0xC); /*0x874bb9*/
  sub_848E50(v7); /*0x874bbf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x874bd6*/
  Stage = v6->Stages.data->Stage; /*0x874bdf*/
  v20 = Stage; /*0x874beb*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x874bef*/
  v10 = *(_DWORD *)(Stage + 4); /*0x874bf1*/
  v11 = v9; /*0x874bf4*/
  if ( v10 != v9 ) /*0x874bf8*/
  {
    if ( v10 ) /*0x874bfc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x874c02*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x874c18*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x874c20*/
    if ( v11 ) /*0x874c23*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x874c29*/
  }
  Texture = v6->Stages.data->Texture; /*0x874c36*/
  v21 = Texture; /*0x874c3e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x874c42*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x874c47*/
  v15 = v13; /*0x874c4a*/
  if ( m_uiRefCount != v13 ) /*0x874c4e*/
  {
    if ( m_uiRefCount ) /*0x874c52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x874c58*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x874c6e*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x874c76*/
    if ( v15 ) /*0x874c79*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x874c7f*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x874c88*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x874c90*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x874c93*/
  v19 = flt_B43110[0]; /*0x874c95*/
  value = flt_B43110[0]; /*0x874c97*/
  if ( !v18 ) /*0x874c9b*/
  {
    if ( v17 ) /*0x874c9f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x874ca5*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x874cbb*/
      v19 = value; /*0x874cbd*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x874cc3*/
    if ( v19 != 0.0 ) /*0x874cc6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x874ccc*/
  }
  ++v6->RefCount; /*0x874cd7*/
  value = *(float *)&v6; /*0x874cda*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x874cf2*/
  v18 = v6->RefCount-- == 1; /*0x874cfa*/
  if ( v18 ) /*0x874d01*/
    NiD3DPass_ReleaseToPool(v6); /*0x874d05*/
  ++*((_DWORD *)this + 0xE); /*0x874d0a*/
}
