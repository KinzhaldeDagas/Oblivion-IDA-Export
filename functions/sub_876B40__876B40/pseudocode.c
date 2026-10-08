void __thiscall sub_876B40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  UInt32 Unk08; // ebp
  int v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47688; /*0x876b6d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x876b74*/
  v7 = *(float **)(a4 + 0xC); /*0x876b79*/
  sub_848E50(v7); /*0x876b7f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x876b96*/
  Stage = v6->Stages.data->Stage; /*0x876b9f*/
  v20 = Stage; /*0x876bab*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x876baf*/
  v10 = *(_DWORD *)(Stage + 4); /*0x876bb1*/
  v11 = v9; /*0x876bb4*/
  if ( v10 != v9 ) /*0x876bb8*/
  {
    if ( v10 ) /*0x876bbc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x876bc2*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x876bd8*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x876be0*/
    if ( v11 ) /*0x876be3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x876be9*/
  }
  Texture = v6->Stages.data->Texture; /*0x876bf6*/
  v21 = Texture; /*0x876bfe*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x876c02*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x876c07*/
  v15 = v13; /*0x876c0a*/
  if ( m_uiRefCount != v13 ) /*0x876c0e*/
  {
    if ( m_uiRefCount ) /*0x876c12*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x876c18*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x876c2e*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x876c36*/
    if ( v15 ) /*0x876c39*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x876c3f*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x876c48*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x876c50*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x876c53*/
  v19 = flt_B43110[0]; /*0x876c55*/
  value = flt_B43110[0]; /*0x876c57*/
  if ( !v18 ) /*0x876c5b*/
  {
    if ( v17 ) /*0x876c5f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x876c65*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x876c7b*/
      v19 = value; /*0x876c7d*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x876c83*/
    if ( v19 != 0.0 ) /*0x876c86*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x876c8c*/
  }
  ++v6->RefCount; /*0x876c97*/
  value = *(float *)&v6; /*0x876c9a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x876cb2*/
  v18 = v6->RefCount-- == 1; /*0x876cba*/
  if ( v18 ) /*0x876cc1*/
    NiD3DPass_ReleaseToPool(v6); /*0x876cc5*/
  ++*((_DWORD *)this + 0xE); /*0x876cca*/
}
