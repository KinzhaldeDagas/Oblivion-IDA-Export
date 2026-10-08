void __thiscall sub_879360(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x87938b*/
  v7 = *(float **)&Stage->Name[8]; /*0x87938f*/
  v8 = (NiD3DPass *)unk_B476D4; /*0x879392*/
  sub_848E50(v7); /*0x879399*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8793b2*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x8793b7*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8793bf*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x8793c9*/
  v10 = Stage; /*0x8793bb*/
  v12 = v11(a5, 0); /*0x8793cd*/
  v13 = *(_DWORD *)v10->Name; /*0x8793cf*/
  v14 = v12; /*0x8793d2*/
  if ( v13 != v12 ) /*0x8793d6*/
  {
    if ( v13 ) /*0x8793da*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x8793e0*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8793f6*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x8793fe*/
    if ( v14 ) /*0x879401*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x879407*/
  }
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x87941a*/
  v15 = Stage; /*0x879410*/
  v16 = sub_848FD0(v9, 0); /*0x87941e*/
  v17 = *(_DWORD *)v15->Name; /*0x879423*/
  v18 = v16; /*0x879426*/
  if ( v17 != v16 ) /*0x87942a*/
  {
    if ( v17 ) /*0x87942e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x879434*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x87944a*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x879452*/
    if ( v18 ) /*0x879455*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x87945b*/
  }
  Texture = v8->Stages.data[1].Texture; /*0x879466*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90))(v9, 0); /*0x879473*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x879475*/
  v22 = v20; /*0x879478*/
  if ( m_uiRefCount != v20 ) /*0x87947c*/
  {
    if ( m_uiRefCount ) /*0x879480*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x879486*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87949c*/
    }
    Texture->members.super.super.m_uiRefCount = v22; /*0x8794a0*/
    if ( v22 ) /*0x8794a3*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x8794a9*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x8794b2*/
  v24 = *(_DWORD *)(Unk08 + 4); /*0x8794ba*/
  v25 = (float *)(Unk08 + 4); /*0x8794bd*/
  v26 = flt_B43110[0]; /*0x8794c2*/
  if ( v24 != LODWORD(flt_B43110[0]) ) /*0x8794c4*/
  {
    if ( v24 ) /*0x8794c8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x8794ce*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x8794e4*/
    }
    *v25 = v26; /*0x8794e8*/
    if ( v26 != 0.0 ) /*0x8794ea*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v26) + 4)); /*0x8794f0*/
  }
  v27 = v8->Stages.data[2].Stage; /*0x8794f9*/
  v28 = *(_DWORD *)(v27 + 4); /*0x879501*/
  v29 = (float *)(v27 + 4); /*0x879504*/
  v30 = unk_B43108[0]; /*0x879509*/
  if ( v28 != LODWORD(unk_B43108[0]) ) /*0x87950b*/
  {
    if ( v28 ) /*0x87950f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x879515*/
        (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x87952b*/
    }
    *v29 = v30; /*0x87952f*/
    if ( v30 != 0.0 ) /*0x879531*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x879537*/
  }
  v31 = v8->Stages.data[2].Texture; /*0x879540*/
  v32 = (volatile LONG *)v31->members.super.super.m_uiRefCount; /*0x879548*/
  v33 = (volatile LONG *)g_CanopyShadowMap; /*0x87954d*/
  if ( v32 != g_CanopyShadowMap ) /*0x87954f*/
  {
    if ( v32 ) /*0x879553*/
    {
      if ( !InterlockedDecrement(v32 + 1) ) /*0x879559*/
        (**(void (__thiscall ***)(void *, int))v32)((void *)v32, 1); /*0x87956f*/
    }
    v31->members.super.super.m_uiRefCount = (UInt32)v33; /*0x879573*/
    if ( v33 ) /*0x879576*/
      InterlockedIncrement(v33 + 1); /*0x87957c*/
  }
  ++v8->RefCount; /*0x879587*/
  Stage = v8; /*0x87958a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8795a6*/
  if ( v8->RefCount-- == 1 ) /*0x8795ae*/
    NiD3DPass_ReleaseToPool(v8); /*0x8795b9*/
  ++*((_DWORD *)this + 0xE); /*0x8795be*/
}
