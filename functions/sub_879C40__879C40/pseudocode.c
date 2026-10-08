void __thiscall sub_879C40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B476E4; /*0x879c72*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x879c7f*/
  Stage = v6->Stages.data->Stage; /*0x879c88*/
  v19 = Stage; /*0x879c8f*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x879c93*/
  v9 = *(_DWORD *)(Stage + 4); /*0x879c98*/
  v10 = v8; /*0x879c9b*/
  if ( v9 != v8 ) /*0x879c9f*/
  {
    if ( v9 ) /*0x879ca3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x879ca9*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x879cbf*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x879cc7*/
    if ( v10 ) /*0x879cca*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x879cd0*/
  }
  Texture = v6->Stages.data->Texture; /*0x879cd9*/
  v20 = Texture; /*0x879cea*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x879cee*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x879cf0*/
  v14 = v12; /*0x879cf3*/
  if ( m_uiRefCount != v12 ) /*0x879cf7*/
  {
    if ( m_uiRefCount ) /*0x879cfb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x879d01*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x879d17*/
    }
    v20->members.super.super.m_uiRefCount = v14; /*0x879d1f*/
    if ( v14 ) /*0x879d22*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x879d28*/
  }
  v15 = v6->Stages.data[1].Stage; /*0x879d31*/
  v16 = *(_DWORD *)(v15 + 4); /*0x879d39*/
  v17 = v16 == LODWORD(flt_B43110[0]); /*0x879d3c*/
  v18 = flt_B43110[0]; /*0x879d3e*/
  value = flt_B43110[0]; /*0x879d40*/
  if ( !v17 ) /*0x879d44*/
  {
    if ( v16 ) /*0x879d48*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x879d4e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x879d64*/
      v18 = value; /*0x879d66*/
    }
    *(float *)(v15 + 4) = v18; /*0x879d6c*/
    if ( v18 != 0.0 ) /*0x879d6f*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v18) + 4)); /*0x879d75*/
  }
  ++v6->RefCount; /*0x879d80*/
  value = *(float *)&v6; /*0x879d83*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x879d9b*/
  v17 = v6->RefCount-- == 1; /*0x879da3*/
  if ( v17 ) /*0x879daa*/
    NiD3DPass_ReleaseToPool(v6); /*0x879dae*/
  ++*((_DWORD *)this + 0xE); /*0x879db3*/
}
