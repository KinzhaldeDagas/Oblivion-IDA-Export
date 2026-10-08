void __thiscall sub_876790(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B47680; /*0x8767bd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8767c4*/
  v7 = *(float **)(a4 + 0xC); /*0x8767c9*/
  sub_848E50(v7); /*0x8767cf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x8767e6*/
  Stage = v6->Stages.data->Stage; /*0x8767ef*/
  v20 = Stage; /*0x8767fb*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x8767ff*/
  v10 = *(_DWORD *)(Stage + 4); /*0x876801*/
  v11 = v9; /*0x876804*/
  if ( v10 != v9 ) /*0x876808*/
  {
    if ( v10 ) /*0x87680c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x876812*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x876828*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x876830*/
    if ( v11 ) /*0x876833*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x876839*/
  }
  Texture = v6->Stages.data->Texture; /*0x876846*/
  v21 = Texture; /*0x87684e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x876852*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x876857*/
  v15 = v13; /*0x87685a*/
  if ( m_uiRefCount != v13 ) /*0x87685e*/
  {
    if ( m_uiRefCount ) /*0x876862*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x876868*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87687e*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x876886*/
    if ( v15 ) /*0x876889*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87688f*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x876898*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x8768a0*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x8768a3*/
  v19 = flt_B43110[0]; /*0x8768a5*/
  value = flt_B43110[0]; /*0x8768a7*/
  if ( !v18 ) /*0x8768ab*/
  {
    if ( v17 ) /*0x8768af*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x8768b5*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x8768cb*/
      v19 = value; /*0x8768cd*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x8768d3*/
    if ( v19 != 0.0 ) /*0x8768d6*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x8768dc*/
  }
  ++v6->RefCount; /*0x8768e7*/
  value = *(float *)&v6; /*0x8768ea*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x876902*/
  v18 = v6->RefCount-- == 1; /*0x87690a*/
  if ( v18 ) /*0x876911*/
    NiD3DPass_ReleaseToPool(v6); /*0x876915*/
  ++*((_DWORD *)this + 0xE); /*0x87691a*/
}
