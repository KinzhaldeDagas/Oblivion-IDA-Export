void __thiscall sub_83AEB0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebp
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ebx
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  int v15; // ebx
  UInt32 v16; // ebx
  float v17; // eax
  int v18; // ebp
  float v19; // edx
  double v20; // st7
  double v21; // st7
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-14h]
  int v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+3Ch] [ebp+4h]
  int v27; // [esp+44h] [ebp+Ch]
  NiTexture *v28; // [esp+44h] [ebp+Ch]
  float v29; // [esp+44h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B4577C; /*0x83aee0*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x83aee7*/
  v7 = *(float **)(a4 + 0xC); /*0x83aeec*/
  sub_848E50(v7); /*0x83aef2*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x83af09*/
  Stage = v6->Stages.data->Stage; /*0x83af14*/
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)value + 0x88))(value, 0); /*0x83af1e*/
  v10 = *(_DWORD *)(Stage + 4); /*0x83af20*/
  v27 = v9; /*0x83af25*/
  if ( v10 != v9 ) /*0x83af29*/
  {
    if ( v10 ) /*0x83af2d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x83af33*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x83af49*/
      v9 = v27; /*0x83af4b*/
    }
    *(_DWORD *)(Stage + 4) = v9; /*0x83af51*/
    if ( v9 ) /*0x83af54*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x83af5a*/
  }
  v11 = (_DWORD *)value; /*0x83af60*/
  sub_848FA0((_DWORD **)Stage, value); /*0x83af68*/
  Texture = v6->Stages.data->Texture; /*0x83af70*/
  v28 = Texture; /*0x83af78*/
  v13 = sub_848FD0(v11, 0); /*0x83af7c*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x83af81*/
  v15 = v13; /*0x83af84*/
  if ( m_uiRefCount != v13 ) /*0x83af88*/
  {
    if ( m_uiRefCount ) /*0x83af8c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x83af92*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x83afa9*/
    }
    v28->members.super.super.m_uiRefCount = v15; /*0x83afb1*/
    if ( v15 ) /*0x83afb4*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x83afba*/
  }
  v16 = v6->Stages.data[2].Stage; /*0x83afc3*/
  v17 = flt_B430DC[3]; /*0x83afc6*/
  v18 = *(_DWORD *)(v16 + 4); /*0x83afcb*/
  v29 = flt_B430DC[3]; /*0x83afd0*/
  if ( v18 != LODWORD(flt_B430DC[3]) ) /*0x83afd4*/
  {
    if ( v18 ) /*0x83afd8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x83afde*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x83aff5*/
      v17 = v29; /*0x83aff7*/
    }
    *(float *)(v16 + 4) = v17; /*0x83affd*/
    if ( v17 != 0.0 ) /*0x83b000*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x83b006*/
  }
  sub_848FA0((_DWORD **)v16, value); /*0x83b014*/
  v19 = *(float *)(a2 + 0x8C); /*0x83b023*/
  *(float *)&value = 0.0 - *(float *)(a2 + 0x88); /*0x83b04c*/
  *(float *)&v26 = 0.0 - v19; /*0x83b054*/
  v20 = *(float *)&value; /*0x83b058*/
  value = (int)v6; /*0x83b05c*/
  *(float *)&v23 = v20; /*0x83b060*/
  flt_B4617C[0] = *(float *)&v23; /*0x83b06c*/
  v21 = flt_A94900; /*0x83b07a*/
  flt_B4617C[1] = *(float *)&v26; /*0x83b080*/
  *(float *)&v24 = v21; /*0x83b086*/
  *(float *)&v25 = v21; /*0x83b08e*/
  flt_B4617C[2] = *(float *)&v24; /*0x83b096*/
  flt_B4617C[3] = *(float *)&v25; /*0x83b09b*/
  ++v6->RefCount; /*0x83b0a1*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x83b0b8*/
  if ( v6->RefCount-- == 1 ) /*0x83b0c0*/
    NiD3DPass_ReleaseToPool(v6); /*0x83b0cb*/
  ++*((_DWORD *)this + 0xE); /*0x83b0d0*/
}
