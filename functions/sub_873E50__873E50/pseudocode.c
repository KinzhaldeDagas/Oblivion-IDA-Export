void __thiscall sub_873E50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B47630; /*0x873e7d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x873e84*/
  v7 = *(float **)(a4 + 0xC); /*0x873e89*/
  sub_848E50(v7); /*0x873e8f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x873ea6*/
  Stage = v6->Stages.data->Stage; /*0x873eaf*/
  v28 = Stage; /*0x873ebb*/
  v9 = (*(int (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(COERCE_FLOAT(LODWORD(value)), 0); /*0x873ebf*/
  v10 = *(_DWORD *)(Stage + 4); /*0x873ec1*/
  v11 = v9; /*0x873ec4*/
  if ( v10 != v9 ) /*0x873ec8*/
  {
    if ( v10 ) /*0x873ecc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x873ed2*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x873ee8*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x873ef0*/
    if ( v11 ) /*0x873ef3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x873ef9*/
  }
  Texture = v6->Stages.data->Texture; /*0x873f06*/
  v29 = Texture; /*0x873f0e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x873f12*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x873f17*/
  v15 = v13; /*0x873f1a*/
  if ( m_uiRefCount != v13 ) /*0x873f1e*/
  {
    if ( m_uiRefCount ) /*0x873f22*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x873f28*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x873f3e*/
    }
    v29->members.super.super.m_uiRefCount = v15; /*0x873f46*/
    if ( v15 ) /*0x873f49*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x873f4f*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x873f58*/
  v17 = flt_B43110[0]; /*0x873f5b*/
  v18 = v16->members.super.super.m_uiRefCount; /*0x873f60*/
  p_m_uiRefCount = (float *)&v16->members.super.super.m_uiRefCount; /*0x873f63*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x873f66*/
  value = flt_B43110[0]; /*0x873f68*/
  if ( !v20 ) /*0x873f6c*/
  {
    if ( v18 ) /*0x873f70*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x873f76*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x873f8d*/
      v17 = value; /*0x873f8f*/
    }
    *p_m_uiRefCount = v17; /*0x873f95*/
    if ( v17 != 0.0 ) /*0x873f97*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x873f9d*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x873fa6*/
  v22 = unk_B43108[0]; /*0x873fa9*/
  v23 = *(_DWORD *)(Unk08 + 4); /*0x873fae*/
  v24 = (float *)(Unk08 + 4); /*0x873fb1*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x873fb4*/
  value = unk_B43108[0]; /*0x873fb6*/
  if ( !v20 ) /*0x873fba*/
  {
    if ( v23 ) /*0x873fbe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x873fc4*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x873fdb*/
      v22 = value; /*0x873fdd*/
    }
    *v24 = v22; /*0x873fe3*/
    if ( v22 != 0.0 ) /*0x873fe5*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x873feb*/
  }
  v25 = v6->Stages.data[2].Stage; /*0x873ff4*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x873ffc*/
  v20 = v26 == g_CanopyShadowMap; /*0x873fff*/
  v27 = *(float *)&g_CanopyShadowMap; /*0x874001*/
  value = *(float *)&g_CanopyShadowMap; /*0x874003*/
  if ( !v20 ) /*0x874007*/
  {
    if ( v26 ) /*0x87400b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x874011*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x874027*/
      v27 = value; /*0x874029*/
    }
    *(float *)(v25 + 4) = v27; /*0x87402f*/
    if ( v27 != 0.0 ) /*0x874032*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v27) + 4)); /*0x874038*/
  }
  ++v6->RefCount; /*0x874043*/
  value = *(float *)&v6; /*0x874046*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87405e*/
  v20 = v6->RefCount-- == 1; /*0x874066*/
  if ( v20 ) /*0x87406d*/
    NiD3DPass_ReleaseToPool(v6); /*0x874071*/
  ++*((_DWORD *)this + 0xE); /*0x874076*/
}
