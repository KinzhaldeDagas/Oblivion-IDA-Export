void __thiscall sub_84A510(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
{
  NiD3DPass *v5; // ebx
  _DWORD *v6; // esi
  NiD3DTextureStage *v7; // edi
  int (__thiscall *v8)(_DWORD *, _DWORD); // eax
  int v9; // eax
  NiTexture *Texture; // edi
  NiTexture *v11; // ebp
  NiD3DTextureStage *v12; // edi
  unsigned int v13; // eax
  NiD3DTextureStage *v14; // edi
  int (__thiscall *v15)(_DWORD *, _DWORD); // eax
  int v16; // ebp
  NiTexture *v17; // edi
  NiD3DTextureStage *v18; // edi
  unsigned int v19; // eax
  NiD3DTextureStage *v20; // edi
  int (__thiscall *v21)(_DWORD *, _DWORD); // eax
  int v22; // eax
  NiTexture *v23; // edi
  NiTexture *v24; // ebp
  NiD3DTextureStage *v25; // edi
  unsigned int v26; // eax

  v5 = (NiD3DPass *)unk_B45610; /*0x84a540*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84a547*/
  v6 = a5; /*0x84a54f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84a557*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84a561*/
  v7 = Stage; /*0x84a553*/
  v9 = v8(a5, 0); /*0x84a565*/
  Texture = v7->Texture; /*0x84a567*/
  v11 = (NiTexture *)v9; /*0x84a56a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84a56e*/
  {
    v12 = Stage; /*0x84a5a7*/
  }
  else
  {
    if ( Texture ) /*0x84a572*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84a578*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84a58e*/
    }
    v12 = Stage; /*0x84a592*/
    Stage->Texture = v11; /*0x84a596*/
    if ( v11 ) /*0x84a599*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84a59f*/
  }
  if ( v12 ) /*0x84a5ad*/
  {
    if ( unk_B42CDD ) /*0x84a5af*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a5bf*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84a5c4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84a5cc*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84a5d1*/
  Stage = v14; /*0x84a5db*/
  if ( v15(v6, 0) ) /*0x84a5df*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84a5f3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84a5fe*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84a604*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84a606*/
  }
  v17 = v14->Texture; /*0x84a60c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84a611*/
  {
    v18 = Stage; /*0x84a64a*/
  }
  else
  {
    if ( v17 ) /*0x84a615*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84a61b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84a631*/
    }
    v18 = Stage; /*0x84a635*/
    Stage->Texture = (NiTexture *)v16; /*0x84a639*/
    if ( v16 ) /*0x84a63c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84a642*/
  }
  if ( v18 ) /*0x84a650*/
  {
    if ( unk_B42CDD ) /*0x84a652*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a662*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84a667*/
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90); /*0x84a674*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84a67e*/
  v20 = Stage; /*0x84a66f*/
  v22 = v21(v6, 0); /*0x84a682*/
  v23 = v20->Texture; /*0x84a684*/
  v24 = (NiTexture *)v22; /*0x84a687*/
  if ( v23 == (NiTexture *)v22 ) /*0x84a68b*/
  {
    v25 = Stage; /*0x84a6c4*/
  }
  else
  {
    if ( v23 ) /*0x84a68f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x84a695*/
        v23->__vftable->super.super.Destructor((NiRefObject *)v23, 1); /*0x84a6ab*/
    }
    v25 = Stage; /*0x84a6af*/
    Stage->Texture = v24; /*0x84a6b3*/
    if ( v24 ) /*0x84a6b6*/
      InterlockedIncrement((volatile LONG *)&v24->members); /*0x84a6bc*/
  }
  if ( v25 ) /*0x84a6ca*/
  {
    if ( unk_B42CDD ) /*0x84a6cc*/
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a6dc*/
      NiD3DTextureStage_ApplyAddressModePreset(v25, v26); /*0x84a6e1*/
    }
  }
  ++v5->RefCount; /*0x84a6eb*/
  Stage = (NiD3DTextureStage *)v5; /*0x84a6ee*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84a70a*/
  if ( v5->RefCount-- == 1 ) /*0x84a712*/
    NiD3DPass_ReleaseToPool(v5); /*0x84a71d*/
  ++*((_DWORD *)this + 0xE); /*0x84a722*/
}
