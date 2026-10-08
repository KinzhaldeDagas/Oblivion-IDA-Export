void __thiscall sub_878D50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B476C8; /*0x878d7d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x878d84*/
  v7 = *(float **)(a4 + 0xC); /*0x878d89*/
  sub_848E50(v7); /*0x878d8f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878da8*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x878db1*/
  v20 = Stage; /*0x878dbd*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x878dc1*/
  v10 = *(_DWORD *)(Stage + 4); /*0x878dc3*/
  v11 = v9; /*0x878dc6*/
  if ( v10 != v9 ) /*0x878dca*/
  {
    if ( v10 ) /*0x878dce*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x878dd4*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x878dea*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x878df2*/
    if ( v11 ) /*0x878df5*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x878dfb*/
  }
  Texture = v6->Stages.data->Texture; /*0x878e08*/
  v21 = Texture; /*0x878e10*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x878e14*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x878e19*/
  v15 = v13; /*0x878e1c*/
  if ( m_uiRefCount != v13 ) /*0x878e20*/
  {
    if ( m_uiRefCount ) /*0x878e24*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x878e2a*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x878e40*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x878e48*/
    if ( v15 ) /*0x878e4b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x878e51*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x878e5a*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x878e62*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x878e65*/
  v19 = flt_B43110[0]; /*0x878e67*/
  value = flt_B43110[0]; /*0x878e69*/
  if ( !v18 ) /*0x878e6d*/
  {
    if ( v17 ) /*0x878e71*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x878e77*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x878e8d*/
      v19 = value; /*0x878e8f*/
    }
    *(float *)(Unk08 + 4) = v19; /*0x878e95*/
    if ( v19 != 0.0 ) /*0x878e98*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x878e9e*/
  }
  ++v6->RefCount; /*0x878ea9*/
  value = *(float *)&v6; /*0x878eac*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x878ec4*/
  v18 = v6->RefCount-- == 1; /*0x878ecc*/
  if ( v18 ) /*0x878ed3*/
    NiD3DPass_ReleaseToPool(v6); /*0x878ed7*/
  ++*((_DWORD *)this + 0xE); /*0x878edc*/
}
