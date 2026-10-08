void __thiscall sub_8773B0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  UInt32 Unk08; // ebx
  float v17; // eax
  int v18; // ebp
  float *v19; // ebx
  bool v20; // zf
  UInt32 v21; // ebx
  float v22; // eax
  int v23; // ebp
  float *v24; // ebx
  NiTexture *v25; // ebp
  volatile LONG *v26; // ebx
  NiRenderedTexture *v27; // ecx
  UInt32 v28; // [esp+3Ch] [ebp+Ch]
  NiTexture *v29; // [esp+3Ch] [ebp+Ch]

  v6 = dword_B47698; /*0x8773dd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8773e4*/
  v7 = *(float **)(a4 + 0xC); /*0x8773e9*/
  sub_848E50(v7); /*0x8773ef*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x877406*/
  Stage = v6->Stages.data->Stage; /*0x87740f*/
  v28 = Stage; /*0x87741b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87741f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x877421*/
  v11 = v9; /*0x877424*/
  if ( v10 != v9 ) /*0x877428*/
  {
    if ( v10 ) /*0x87742c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x877432*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x877448*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x877450*/
    if ( v11 ) /*0x877453*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x877459*/
  }
  Texture = v6->Stages.data->Texture; /*0x877466*/
  v29 = Texture; /*0x87746e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x877472*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x877477*/
  v15 = v13; /*0x87747a*/
  if ( m_uiRefCount != v13 ) /*0x87747e*/
  {
    if ( m_uiRefCount ) /*0x877482*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x877488*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87749e*/
    }
    v29->members.super.super.m_uiRefCount = v15; /*0x8774a6*/
    if ( v15 ) /*0x8774a9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8774af*/
  }
  Unk08 = v6->Stages.data[1].Unk08; /*0x8774b8*/
  v17 = flt_B43110[0]; /*0x8774bb*/
  v18 = *(_DWORD *)(Unk08 + 4); /*0x8774c0*/
  v19 = (float *)(Unk08 + 4); /*0x8774c3*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x8774c6*/
  value = flt_B43110[0]; /*0x8774c8*/
  if ( !v20 ) /*0x8774cc*/
  {
    if ( v18 ) /*0x8774d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8774d6*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8774ed*/
      v17 = value; /*0x8774ef*/
    }
    *v19 = v17; /*0x8774f5*/
    if ( v17 != 0.0 ) /*0x8774f7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x8774fd*/
  }
  v21 = v6->Stages.data[2].Stage; /*0x877506*/
  v22 = unk_B43108[0]; /*0x877509*/
  v23 = *(_DWORD *)(v21 + 4); /*0x87750e*/
  v24 = (float *)(v21 + 4); /*0x877511*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x877514*/
  value = unk_B43108[0]; /*0x877516*/
  if ( !v20 ) /*0x87751a*/
  {
    if ( v23 ) /*0x87751e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x877524*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87753b*/
      v22 = value; /*0x87753d*/
    }
    *v24 = v22; /*0x877543*/
    if ( v22 != 0.0 ) /*0x877545*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87754b*/
  }
  v25 = v6->Stages.data[2].Texture; /*0x877554*/
  v26 = (volatile LONG *)v25->members.super.super.m_uiRefCount; /*0x87755c*/
  v20 = v26 == g_CanopyShadowMap; /*0x87755f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x877561*/
  value = *(float *)&g_CanopyShadowMap; /*0x877563*/
  if ( !v20 ) /*0x877567*/
  {
    if ( v26 ) /*0x87756b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x877571*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x877587*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x877589*/
    }
    v25->members.super.super.m_uiRefCount = (UInt32)v27; /*0x87758f*/
    if ( v27 ) /*0x877592*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x877598*/
  }
  ++v6->RefCount; /*0x8775a3*/
  value = *(float *)&v6; /*0x8775a6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8775be*/
  v20 = v6->RefCount-- == 1; /*0x8775c6*/
  if ( v20 ) /*0x8775cd*/
    NiD3DPass_ReleaseToPool(v6); /*0x8775d1*/
  ++*((_DWORD *)this + 0xE); /*0x8775d6*/
}
