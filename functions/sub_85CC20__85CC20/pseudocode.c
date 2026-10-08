void __thiscall sub_85CC20(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // edi
  float *v8; // ebx
  UInt32 Stage; // ebx
  int v10; // eax
  int v11; // ebx
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v16; // [esp+28h] [ebp+4h]
  int v17; // [esp+28h] [ebp+4h]
  UInt32 v18; // [esp+30h] [ebp+Ch]
  NiTexture *v19; // [esp+30h] [ebp+Ch]

  v7 = (NiD3DPass *)unk_B477D0; /*0x85cc4d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x85cc54*/
  v8 = *(float **)(a4 + 0xC); /*0x85cc59*/
  sub_848E50(v8); /*0x85cc5f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v8, 0); /*0x85cc76*/
  Stage = v7->Stages.data->Stage; /*0x85cc7f*/
  v18 = Stage; /*0x85cc8e*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x85cc92*/
  v11 = *(_DWORD *)(Stage + 4); /*0x85cc94*/
  v16 = v10; /*0x85cc99*/
  if ( v11 != v10 ) /*0x85cc9d*/
  {
    if ( v11 ) /*0x85cca1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x85cca7*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x85ccbd*/
      v10 = v16; /*0x85ccbf*/
    }
    *(_DWORD *)(v18 + 4) = v10; /*0x85ccc9*/
    if ( v10 ) /*0x85cccc*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85ccd2*/
  }
  sub_848FA0((_DWORD **)v18, (int)a5); /*0x85cce0*/
  Texture = v7->Stages.data->Texture; /*0x85cce8*/
  v19 = Texture; /*0x85ccf0*/
  v13 = sub_848FD0(a5, 0); /*0x85ccf4*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85ccf9*/
  v17 = v13; /*0x85ccfe*/
  if ( m_uiRefCount != v13 ) /*0x85cd02*/
  {
    if ( m_uiRefCount ) /*0x85cd06*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85cd0c*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85cd22*/
      v13 = v17; /*0x85cd24*/
    }
    v19->members.super.super.m_uiRefCount = v13; /*0x85cd2e*/
    if ( v13 ) /*0x85cd31*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x85cd37*/
  }
  sub_848FA0(v19, (int)a5); /*0x85cd45*/
  if ( !(_BYTE)value ) /*0x85cd4f*/
  {
    ++v7->RefCount; /*0x85cd56*/
    value = v7; /*0x85cd59*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85cd71*/
    if ( v7->RefCount-- == 1 ) /*0x85cd79*/
      NiD3DPass_ReleaseToPool(v7); /*0x85cd84*/
    ++*((_DWORD *)this + 0xE); /*0x85cd89*/
  }
}
