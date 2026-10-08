void __thiscall sub_84A980(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
{
  NiD3DTextureStage *v5; // edi
  NiD3DPass *v6; // ebx
  _DWORD *v7; // esi
  NiD3DTextureStage *v8; // edi
  int (__thiscall *v9)(_DWORD *, _DWORD); // eax
  int v10; // eax
  NiTexture *Texture; // edi
  NiTexture *v12; // ebp
  NiD3DTextureStage *v13; // edi
  unsigned int v14; // eax
  NiD3DTextureStage *v15; // edi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int v17; // ebp
  NiTexture *v18; // edi
  NiD3DTextureStage *v19; // edi
  unsigned int v20; // eax
  NiD3DTextureStage *v21; // edi
  int (__thiscall *v22)(_DWORD *, _DWORD); // eax
  int v23; // eax
  NiTexture *v24; // edi
  NiTexture *v25; // ebp
  NiD3DTextureStage *v26; // edi
  unsigned int v27; // eax

  v5 = Stage; /*0x84a9ab*/
  v6 = (NiD3DPass *)unk_B4567C; /*0x84a9b2*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84a9b9*/
  sub_848E50((float *)v5[1].Stage); /*0x84a9c4*/
  v7 = a5; /*0x84a9cc*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84a9d4*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84a9de*/
  v8 = Stage; /*0x84a9d0*/
  v10 = v9(a5, 0); /*0x84a9e2*/
  Texture = v8->Texture; /*0x84a9e4*/
  v12 = (NiTexture *)v10; /*0x84a9e7*/
  if ( Texture == (NiTexture *)v10 ) /*0x84a9eb*/
  {
    v13 = Stage; /*0x84aa24*/
  }
  else
  {
    if ( Texture ) /*0x84a9ef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84a9f5*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84aa0b*/
    }
    v13 = Stage; /*0x84aa0f*/
    Stage->Texture = v12; /*0x84aa13*/
    if ( v12 ) /*0x84aa16*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84aa1c*/
  }
  if ( v13 ) /*0x84aa2a*/
  {
    if ( unk_B42CDD ) /*0x84aa2c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84aa3c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84aa41*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84aa49*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84aa4e*/
  Stage = v15; /*0x84aa58*/
  if ( v16(v7, 0) ) /*0x84aa5c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84aa70*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84aa7b*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84aa81*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84aa83*/
  }
  v18 = v15->Texture; /*0x84aa89*/
  if ( v18 == (NiTexture *)v17 ) /*0x84aa8e*/
  {
    v19 = Stage; /*0x84aac7*/
  }
  else
  {
    if ( v18 ) /*0x84aa92*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84aa98*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84aaae*/
    }
    v19 = Stage; /*0x84aab2*/
    Stage->Texture = (NiTexture *)v17; /*0x84aab6*/
    if ( v17 ) /*0x84aab9*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84aabf*/
  }
  if ( v19 ) /*0x84aacd*/
  {
    if ( unk_B42CDD ) /*0x84aacf*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84aadf*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84aae4*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84aaf1*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84aafb*/
  v21 = Stage; /*0x84aaec*/
  v23 = v22(v7, 0); /*0x84aaff*/
  v24 = v21->Texture; /*0x84ab01*/
  v25 = (NiTexture *)v23; /*0x84ab04*/
  if ( v24 == (NiTexture *)v23 ) /*0x84ab08*/
  {
    v26 = Stage; /*0x84ab41*/
  }
  else
  {
    if ( v24 ) /*0x84ab0c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84ab12*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84ab28*/
    }
    v26 = Stage; /*0x84ab2c*/
    Stage->Texture = v25; /*0x84ab30*/
    if ( v25 ) /*0x84ab33*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84ab39*/
  }
  if ( v26 ) /*0x84ab47*/
  {
    if ( unk_B42CDD ) /*0x84ab49*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ab59*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84ab5e*/
    }
  }
  ++v6->RefCount; /*0x84ab68*/
  Stage = (NiD3DTextureStage *)v6; /*0x84ab6b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84ab87*/
  if ( v6->RefCount-- == 1 ) /*0x84ab8f*/
    NiD3DPass_ReleaseToPool(v6); /*0x84ab9a*/
  ++*((_DWORD *)this + 0xE); /*0x84ab9f*/
}
