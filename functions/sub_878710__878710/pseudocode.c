void __thiscall sub_878710(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebp
  float *v7; // edi
  NiD3DPass *v8; // esi
  _DWORD *v9; // ebx
  NiD3DPass *v10; // edi
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  NiD3DPass *v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  NiTexture *Texture; // ebp
  int v20; // eax
  UInt32 m_uiRefCount; // edi
  int v22; // ebx
  UInt32 Unk08; // edi
  int v24; // ebx
  float *v25; // edi
  float v26; // ebp
  UInt32 v27; // edi
  int v28; // ebx
  float *v29; // edi
  float v30; // ebp
  NiTexture *v31; // ebx
  volatile LONG *v32; // edi
  volatile LONG *v33; // ebp

  v6 = Stage; /*0x87873b*/
  v7 = *(float **)&Stage->Name[8]; /*0x87873f*/
  v8 = (NiD3DPass *)unk_B476BC; /*0x878742*/
  sub_848E50(v7); /*0x878749*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878762*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x878767*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87876f*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x878779*/
  v10 = Stage; /*0x87876b*/
  v12 = v11(a5, 0); /*0x87877d*/
  v13 = *(_DWORD *)v10->Name; /*0x87877f*/
  v14 = v12; /*0x878782*/
  if ( v13 != v12 ) /*0x878786*/
  {
    if ( v13 ) /*0x87878a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x878790*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8787a6*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x8787ae*/
    if ( v14 ) /*0x8787b1*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x8787b7*/
  }
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x8787ca*/
  v15 = Stage; /*0x8787c0*/
  v16 = sub_848FD0(v9, 0); /*0x8787ce*/
  v17 = *(_DWORD *)v15->Name; /*0x8787d3*/
  v18 = v16; /*0x8787d6*/
  if ( v17 != v16 ) /*0x8787da*/
  {
    if ( v17 ) /*0x8787de*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x8787e4*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x8787fa*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x878802*/
    if ( v18 ) /*0x878805*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x87880b*/
  }
  Texture = v8->Stages.data[1].Texture; /*0x878816*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90))(v9, 0); /*0x878823*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x878825*/
  v22 = v20; /*0x878828*/
  if ( m_uiRefCount != v20 ) /*0x87882c*/
  {
    if ( m_uiRefCount ) /*0x878830*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x878836*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87884c*/
    }
    Texture->members.super.super.m_uiRefCount = v22; /*0x878850*/
    if ( v22 ) /*0x878853*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x878859*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x878862*/
  v24 = *(_DWORD *)(Unk08 + 4); /*0x87886a*/
  v25 = (float *)(Unk08 + 4); /*0x87886d*/
  v26 = flt_B43110[0]; /*0x878872*/
  if ( v24 != LODWORD(flt_B43110[0]) ) /*0x878874*/
  {
    if ( v24 ) /*0x878878*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x87887e*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x878894*/
    }
    *v25 = v26; /*0x878898*/
    if ( v26 != 0.0 ) /*0x87889a*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v26) + 4)); /*0x8788a0*/
  }
  v27 = v8->Stages.data[2].Stage; /*0x8788a9*/
  v28 = *(_DWORD *)(v27 + 4); /*0x8788b1*/
  v29 = (float *)(v27 + 4); /*0x8788b4*/
  v30 = unk_B43108[0]; /*0x8788b9*/
  if ( v28 != LODWORD(unk_B43108[0]) ) /*0x8788bb*/
  {
    if ( v28 ) /*0x8788bf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x8788c5*/
        (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x8788db*/
    }
    *v29 = v30; /*0x8788df*/
    if ( v30 != 0.0 ) /*0x8788e1*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x8788e7*/
  }
  v31 = v8->Stages.data[2].Texture; /*0x8788f0*/
  v32 = (volatile LONG *)v31->members.super.super.m_uiRefCount; /*0x8788f8*/
  v33 = (volatile LONG *)g_CanopyShadowMap; /*0x8788fd*/
  if ( v32 != g_CanopyShadowMap ) /*0x8788ff*/
  {
    if ( v32 ) /*0x878903*/
    {
      if ( !InterlockedDecrement(v32 + 1) ) /*0x878909*/
        (**(void (__thiscall ***)(void *, int))v32)((void *)v32, 1); /*0x87891f*/
    }
    v31->members.super.super.m_uiRefCount = (UInt32)v33; /*0x878923*/
    if ( v33 ) /*0x878926*/
      InterlockedIncrement(v33 + 1); /*0x87892c*/
  }
  ++v8->RefCount; /*0x878937*/
  Stage = v8; /*0x87893a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x878956*/
  if ( v8->RefCount-- == 1 ) /*0x87895e*/
    NiD3DPass_ReleaseToPool(v8); /*0x878969*/
  ++*((_DWORD *)this + 0xE); /*0x87896e*/
}
