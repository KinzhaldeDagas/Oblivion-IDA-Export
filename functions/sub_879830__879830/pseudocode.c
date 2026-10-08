void __thiscall sub_879830(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
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

  v6 = Stage; /*0x87985b*/
  v7 = *(float **)&Stage->Name[8]; /*0x87985f*/
  v8 = (NiD3DPass *)unk_B476DC; /*0x879862*/
  sub_848E50(v7); /*0x879869*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x879882*/
    this,
    a2,
    v7,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x879887*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x87988f*/
  Stage = (NiD3DPass *)v8->Stages.data->Stage; /*0x879899*/
  v10 = Stage; /*0x87988b*/
  v12 = v11(a5, 0); /*0x87989d*/
  v13 = *(_DWORD *)v10->Name; /*0x87989f*/
  v14 = v12; /*0x8798a2*/
  if ( v13 != v12 ) /*0x8798a6*/
  {
    if ( v13 ) /*0x8798aa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x8798b0*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8798c6*/
    }
    *(_DWORD *)Stage->Name = v14; /*0x8798ce*/
    if ( v14 ) /*0x8798d1*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x8798d7*/
  }
  Stage = (NiD3DPass *)v8->Stages.data->Texture; /*0x8798ea*/
  v15 = Stage; /*0x8798e0*/
  v16 = sub_848FD0(v9, 0); /*0x8798ee*/
  v17 = *(_DWORD *)v15->Name; /*0x8798f3*/
  v18 = v16; /*0x8798f6*/
  if ( v17 != v16 ) /*0x8798fa*/
  {
    if ( v17 ) /*0x8798fe*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x879904*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x87991a*/
    }
    *(_DWORD *)Stage->Name = v18; /*0x879922*/
    if ( v18 ) /*0x879925*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x87992b*/
  }
  Texture = v8->Stages.data[1].Texture; /*0x879936*/
  v20 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x90))(v9, 0); /*0x879943*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x879945*/
  v22 = v20; /*0x879948*/
  if ( m_uiRefCount != v20 ) /*0x87994c*/
  {
    if ( m_uiRefCount ) /*0x879950*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x879956*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87996c*/
    }
    Texture->members.super.super.m_uiRefCount = v22; /*0x879970*/
    if ( v22 ) /*0x879973*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x879979*/
  }
  Unk08 = v8->Stages.data[1].Unk08; /*0x879982*/
  v24 = *(_DWORD *)(Unk08 + 4); /*0x87998a*/
  v25 = (float *)(Unk08 + 4); /*0x87998d*/
  v26 = flt_B43110[0]; /*0x879992*/
  if ( v24 != LODWORD(flt_B43110[0]) ) /*0x879994*/
  {
    if ( v24 ) /*0x879998*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) ) /*0x87999e*/
        (**(void (__thiscall ***)(int, int))v24)(v24, 1); /*0x8799b4*/
    }
    *v25 = v26; /*0x8799b8*/
    if ( v26 != 0.0 ) /*0x8799ba*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v26) + 4)); /*0x8799c0*/
  }
  v27 = v8->Stages.data[2].Stage; /*0x8799c9*/
  v28 = *(_DWORD *)(v27 + 4); /*0x8799d1*/
  v29 = (float *)(v27 + 4); /*0x8799d4*/
  v30 = unk_B43108[0]; /*0x8799d9*/
  if ( v28 != LODWORD(unk_B43108[0]) ) /*0x8799db*/
  {
    if ( v28 ) /*0x8799df*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v28 + 4)) ) /*0x8799e5*/
        (**(void (__thiscall ***)(int, int))v28)(v28, 1); /*0x8799fb*/
    }
    *v29 = v30; /*0x8799ff*/
    if ( v30 != 0.0 ) /*0x879a01*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v30) + 4)); /*0x879a07*/
  }
  v31 = v8->Stages.data[2].Texture; /*0x879a10*/
  v32 = (volatile LONG *)v31->members.super.super.m_uiRefCount; /*0x879a18*/
  v33 = (volatile LONG *)g_CanopyShadowMap; /*0x879a1d*/
  if ( v32 != g_CanopyShadowMap ) /*0x879a1f*/
  {
    if ( v32 ) /*0x879a23*/
    {
      if ( !InterlockedDecrement(v32 + 1) ) /*0x879a29*/
        (**(void (__thiscall ***)(void *, int))v32)((void *)v32, 1); /*0x879a3f*/
    }
    v31->members.super.super.m_uiRefCount = (UInt32)v33; /*0x879a43*/
    if ( v33 ) /*0x879a46*/
      InterlockedIncrement(v33 + 1); /*0x879a4c*/
  }
  ++v8->RefCount; /*0x879a57*/
  Stage = v8; /*0x879a5a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x879a76*/
  if ( v8->RefCount-- == 1 ) /*0x879a7e*/
    NiD3DPass_ReleaseToPool(v8); /*0x879a89*/
  ++*((_DWORD *)this + 0xE); /*0x879a8e*/
}
