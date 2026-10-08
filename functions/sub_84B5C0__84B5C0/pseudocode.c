void __thiscall sub_84B5C0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45620; /*0x84b5f0*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84b5f7*/
  v6 = a5; /*0x84b5ff*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84b607*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84b611*/
  v7 = Stage; /*0x84b603*/
  v9 = v8(a5, 0); /*0x84b615*/
  Texture = v7->Texture; /*0x84b617*/
  v11 = (NiTexture *)v9; /*0x84b61a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84b61e*/
  {
    v12 = Stage; /*0x84b657*/
  }
  else
  {
    if ( Texture ) /*0x84b622*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84b628*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84b63e*/
    }
    v12 = Stage; /*0x84b642*/
    Stage->Texture = v11; /*0x84b646*/
    if ( v11 ) /*0x84b649*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84b64f*/
  }
  if ( v12 ) /*0x84b65d*/
  {
    if ( unk_B42CDD ) /*0x84b65f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84b66f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84b674*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84b67c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84b681*/
  Stage = v14; /*0x84b68b*/
  if ( v15(v6, 0) ) /*0x84b68f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84b6a3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84b6ae*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84b6b4*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84b6b6*/
  }
  v17 = v14->Texture; /*0x84b6bc*/
  if ( v17 == (NiTexture *)v16 ) /*0x84b6c1*/
  {
    v18 = Stage; /*0x84b6fa*/
  }
  else
  {
    if ( v17 ) /*0x84b6c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84b6cb*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84b6e1*/
    }
    v18 = Stage; /*0x84b6e5*/
    Stage->Texture = (NiTexture *)v16; /*0x84b6e9*/
    if ( v16 ) /*0x84b6ec*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84b6f2*/
  }
  if ( v18 ) /*0x84b700*/
  {
    if ( unk_B42CDD ) /*0x84b702*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84b712*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84b717*/
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90); /*0x84b724*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84b72e*/
  v20 = Stage; /*0x84b71f*/
  v22 = v21(v6, 0); /*0x84b732*/
  v23 = v20->Texture; /*0x84b734*/
  v24 = (NiTexture *)v22; /*0x84b737*/
  if ( v23 == (NiTexture *)v22 ) /*0x84b73b*/
  {
    v25 = Stage; /*0x84b774*/
  }
  else
  {
    if ( v23 ) /*0x84b73f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x84b745*/
        v23->__vftable->super.super.Destructor((NiRefObject *)v23, 1); /*0x84b75b*/
    }
    v25 = Stage; /*0x84b75f*/
    Stage->Texture = v24; /*0x84b763*/
    if ( v24 ) /*0x84b766*/
      InterlockedIncrement((volatile LONG *)&v24->members); /*0x84b76c*/
  }
  if ( v25 ) /*0x84b77a*/
  {
    if ( unk_B42CDD ) /*0x84b77c*/
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84b78c*/
      NiD3DTextureStage_ApplyAddressModePreset(v25, v26); /*0x84b791*/
    }
  }
  ++v5->RefCount; /*0x84b79b*/
  Stage = (NiD3DTextureStage *)v5; /*0x84b79e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84b7ba*/
  if ( v5->RefCount-- == 1 ) /*0x84b7c2*/
    NiD3DPass_ReleaseToPool(v5); /*0x84b7cd*/
  ++*((_DWORD *)this + 0xE); /*0x84b7d2*/
}
