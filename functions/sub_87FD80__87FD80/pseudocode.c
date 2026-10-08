void __thiscall sub_87FD80(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  NiTexture *v16; // ebx
  float v17; // eax
  UInt32 v18; // ebp
  float *p_m_uiRefCount; // ebx
  bool v20; // zf
  UInt32 Unk08; // ebx
  float v22; // eax
  int v23; // ebp
  float *v24; // ebx
  UInt32 v25; // ebp
  volatile LONG *v26; // ebx
  float v27; // ecx
  UInt32 v28; // [esp+3Ch] [ebp+Ch]
  NiTexture *v29; // [esp+3Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B47720; /*0x87fdad*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x87fdb4*/
  v7 = *(float **)(a4 + 0xC); /*0x87fdb9*/
  sub_848E50(v7); /*0x87fdbf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x87fdd6*/
  Stage = v6->Stages.data->Stage; /*0x87fddf*/
  v28 = Stage; /*0x87fdeb*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87fdef*/
  v10 = *(_DWORD *)(Stage + 4); /*0x87fdf1*/
  v11 = v9; /*0x87fdf4*/
  if ( v10 != v9 ) /*0x87fdf8*/
  {
    if ( v10 ) /*0x87fdfc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x87fe02*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87fe18*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x87fe20*/
    if ( v11 ) /*0x87fe23*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87fe29*/
  }
  Texture = v6->Stages.data->Texture; /*0x87fe36*/
  v29 = Texture; /*0x87fe3e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87fe42*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87fe47*/
  v15 = v13; /*0x87fe4a*/
  if ( m_uiRefCount != v13 ) /*0x87fe4e*/
  {
    if ( m_uiRefCount ) /*0x87fe52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87fe58*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87fe6e*/
    }
    v29->members.super.super.m_uiRefCount = v15; /*0x87fe76*/
    if ( v15 ) /*0x87fe79*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87fe7f*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x87fe88*/
  v17 = flt_B43110[0]; /*0x87fe8b*/
  v18 = v16->members.super.super.m_uiRefCount; /*0x87fe90*/
  p_m_uiRefCount = (float *)&v16->members.super.super.m_uiRefCount; /*0x87fe93*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x87fe96*/
  value = flt_B43110[0]; /*0x87fe98*/
  if ( !v20 ) /*0x87fe9c*/
  {
    if ( v18 ) /*0x87fea0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x87fea6*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x87febd*/
      v17 = value; /*0x87febf*/
    }
    *p_m_uiRefCount = v17; /*0x87fec5*/
    if ( v17 != 0.0 ) /*0x87fec7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87fecd*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x87fed6*/
  v22 = unk_B43108[0]; /*0x87fed9*/
  v23 = *(_DWORD *)(Unk08 + 4); /*0x87fede*/
  v24 = (float *)(Unk08 + 4); /*0x87fee1*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x87fee4*/
  value = unk_B43108[0]; /*0x87fee6*/
  if ( !v20 ) /*0x87feea*/
  {
    if ( v23 ) /*0x87feee*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x87fef4*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87ff0b*/
      v22 = value; /*0x87ff0d*/
    }
    *v24 = v22; /*0x87ff13*/
    if ( v22 != 0.0 ) /*0x87ff15*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87ff1b*/
  }
  v25 = v6->Stages.data[2].Stage; /*0x87ff24*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x87ff2c*/
  v20 = v26 == g_CanopyShadowMap; /*0x87ff2f*/
  v27 = *(float *)&g_CanopyShadowMap; /*0x87ff31*/
  value = *(float *)&g_CanopyShadowMap; /*0x87ff33*/
  if ( !v20 ) /*0x87ff37*/
  {
    if ( v26 ) /*0x87ff3b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x87ff41*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x87ff57*/
      v27 = value; /*0x87ff59*/
    }
    *(float *)(v25 + 4) = v27; /*0x87ff5f*/
    if ( v27 != 0.0 ) /*0x87ff62*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v27) + 4)); /*0x87ff68*/
  }
  ++v6->RefCount; /*0x87ff73*/
  value = *(float *)&v6; /*0x87ff76*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87ff8e*/
  v20 = v6->RefCount-- == 1; /*0x87ff96*/
  if ( v20 ) /*0x87ff9d*/
    NiD3DPass_ReleaseToPool(v6); /*0x87ffa1*/
  ++*((_DWORD *)this + 0xE); /*0x87ffa6*/
}
