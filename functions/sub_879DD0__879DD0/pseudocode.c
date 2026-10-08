void __thiscall sub_879DD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // esi
  UInt32 Stage; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v14; // ebp
  UInt32 v15; // ebp
  int v16; // ebx
  bool v17; // zf
  float v18; // ecx
  UInt32 v19; // [esp+2Ch] [ebp+4h]
  NiTexture *v20; // [esp+2Ch] [ebp+4h]

  v6 = (NiD3DPass *)unk_B476E8; /*0x879e02*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x879e0f*/
  Stage = v6->Stages.data->Stage; /*0x879e18*/
  v19 = Stage; /*0x879e1f*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x879e23*/
  v9 = *(_DWORD *)(Stage + 4); /*0x879e28*/
  v10 = v8; /*0x879e2b*/
  if ( v9 != v8 ) /*0x879e2f*/
  {
    if ( v9 ) /*0x879e33*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x879e39*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x879e4f*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x879e57*/
    if ( v10 ) /*0x879e5a*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x879e60*/
  }
  Texture = v6->Stages.data->Texture; /*0x879e69*/
  v20 = Texture; /*0x879e7a*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x879e7e*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x879e80*/
  v14 = v12; /*0x879e83*/
  if ( m_uiRefCount != v12 ) /*0x879e87*/
  {
    if ( m_uiRefCount ) /*0x879e8b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x879e91*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x879ea7*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x879eaf*/
    if ( v14 ) /*0x879eb2*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x879eb8*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x879ec1*/
  v16 = *(_DWORD *)(v15 + 4); /*0x879ec9*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x879ecc*/
  v18 = flt_B43110[0]; /*0x879ece*/
  value = flt_B43110[0]; /*0x879ed0*/
  if ( !v17 ) /*0x879ed4*/
  {
    if ( v16 ) /*0x879ed8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x879ede*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x879ef4*/
      v18 = value; /*0x879ef6*/
    }
    *(float *)(v15 + 4) = v18; /*0x879efc*/
    if ( v18 != 0.0 ) /*0x879eff*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x879f05*/
  }
  ++v6->RefCount; /*0x879f10*/
  value = *(float *)&v6; /*0x879f13*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x879f2b*/
  v17 = v6->RefCount-- == 1; /*0x879f33*/
  if ( v17 ) /*0x879f3a*/
    NiD3DPass_ReleaseToPool(v6); /*0x879f3e*/
  ++*((_DWORD *)this + 0xE); /*0x879f43*/
}
