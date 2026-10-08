void __thiscall sub_877870(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B476A0; /*0x87789d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8778a4*/
  v7 = *(float **)(a4 + 0xC); /*0x8778a9*/
  sub_848E50(v7); /*0x8778af*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8778c8*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x8778d1*/
  v20 = Stage; /*0x8778dd*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x8778e1*/
  v10 = *(_DWORD *)(Stage + 4); /*0x8778e3*/
  v11 = v9; /*0x8778e6*/
  if ( v10 != v9 ) /*0x8778ea*/
  {
    if ( v10 ) /*0x8778ee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8778f4*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87790a*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x877912*/
    if ( v11 ) /*0x877915*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87791b*/
  }
  Texture = v6->Stages.data->Texture; /*0x877928*/
  v21 = Texture; /*0x877930*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x877934*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x877939*/
  v15 = v13; /*0x87793c*/
  if ( m_uiRefCount != v13 ) /*0x877940*/
  {
    if ( m_uiRefCount ) /*0x877944*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87794a*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x877960*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x877968*/
    if ( v15 ) /*0x87796b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x877971*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x87797a*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x877982*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x877985*/
  v19 = flt_B43110[0]; /*0x877987*/
  value = flt_B43110[0]; /*0x877989*/
  if ( !v18 ) /*0x87798d*/
  {
    if ( v17 ) /*0x877991*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x877997*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x8779ad*/
      v19 = value; /*0x8779af*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x8779b5*/
    if ( v19 != 0.0 ) /*0x8779b8*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x8779be*/
  }
  ++v6->RefCount; /*0x8779c9*/
  value = *(float *)&v6; /*0x8779cc*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8779e4*/
  v18 = v6->RefCount-- == 1; /*0x8779ec*/
  if ( v18 ) /*0x8779f3*/
    NiD3DPass_ReleaseToPool(v6); /*0x8779f7*/
  ++*((_DWORD *)this + 0xE); /*0x8779fc*/
}
