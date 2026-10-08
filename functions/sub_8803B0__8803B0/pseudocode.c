void __thiscall SkinShader_QueueSKIN2013_SKIN2006(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B4772C; /*0x8803dd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8803e4*/
  v7 = *(float **)(a4 + 0xC); /*0x8803e9*/
  sub_848E50(v7); /*0x8803ef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x880406*/
  Stage = v6->Stages.data->Stage; /*0x88040f*/
  v20 = Stage; /*0x88041b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x88041f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x880421*/
  v11 = v9; /*0x880424*/
  if ( v10 != v9 ) /*0x880428*/
  {
    if ( v10 ) /*0x88042c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x880432*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x880448*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x880450*/
    if ( v11 ) /*0x880453*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x880459*/
  }
  Texture = v6->Stages.data->Texture; /*0x880466*/
  v21 = Texture; /*0x88046e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x880472*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x880477*/
  v15 = v13; /*0x88047a*/
  if ( m_uiRefCount != v13 ) /*0x88047e*/
  {
    if ( m_uiRefCount ) /*0x880482*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x880488*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x88049e*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x8804a6*/
    if ( v15 ) /*0x8804a9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8804af*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x8804b8*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x8804c0*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x8804c3*/
  v19 = flt_B43110[0]; /*0x8804c5*/
  value = flt_B43110[0]; /*0x8804c7*/
  if ( !v18 ) /*0x8804cb*/
  {
    if ( v17 ) /*0x8804cf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x8804d5*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x8804eb*/
      v19 = value; /*0x8804ed*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x8804f3*/
    if ( v19 != 0.0 ) /*0x8804f6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x8804fc*/
  }
  ++v6->RefCount; /*0x880507*/
  value = *(float *)&v6; /*0x88050a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x880522*/
  v18 = v6->RefCount-- == 1; /*0x88052a*/
  if ( v18 ) /*0x880531*/
    NiD3DPass_ReleaseToPool(v6); /*0x880535*/
  ++*((_DWORD *)this + 0xE); /*0x88053a*/
}
