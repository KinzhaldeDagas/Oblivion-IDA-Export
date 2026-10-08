void __thiscall sub_84BD80(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84bdab*/
  v6 = (NiD3DPass *)unk_B4568C; /*0x84bdb2*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84bdb9*/
  sub_848E50((float *)v5[1].Stage); /*0x84bdc4*/
  v7 = a5; /*0x84bdcc*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84bdd4*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84bdde*/
  v8 = Stage; /*0x84bdd0*/
  v10 = v9(a5, 0); /*0x84bde2*/
  Texture = v8->Texture; /*0x84bde4*/
  v12 = (NiTexture *)v10; /*0x84bde7*/
  if ( Texture == (NiTexture *)v10 ) /*0x84bdeb*/
  {
    v13 = Stage; /*0x84be24*/
  }
  else
  {
    if ( Texture ) /*0x84bdef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84bdf5*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84be0b*/
    }
    v13 = Stage; /*0x84be0f*/
    Stage->Texture = v12; /*0x84be13*/
    if ( v12 ) /*0x84be16*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84be1c*/
  }
  if ( v13 ) /*0x84be2a*/
  {
    if ( unk_B42CDD ) /*0x84be2c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84be3c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84be41*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84be49*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84be4e*/
  Stage = v15; /*0x84be58*/
  if ( v16(v7, 0) ) /*0x84be5c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84be70*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84be7b*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84be81*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84be83*/
  }
  v18 = v15->Texture; /*0x84be89*/
  if ( v18 == (NiTexture *)v17 ) /*0x84be8e*/
  {
    v19 = Stage; /*0x84bec7*/
  }
  else
  {
    if ( v18 ) /*0x84be92*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84be98*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84beae*/
    }
    v19 = Stage; /*0x84beb2*/
    Stage->Texture = (NiTexture *)v17; /*0x84beb6*/
    if ( v17 ) /*0x84beb9*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84bebf*/
  }
  if ( v19 ) /*0x84becd*/
  {
    if ( unk_B42CDD ) /*0x84becf*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bedf*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84bee4*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84bef1*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84befb*/
  v21 = Stage; /*0x84beec*/
  v23 = v22(v7, 0); /*0x84beff*/
  v24 = v21->Texture; /*0x84bf01*/
  v25 = (NiTexture *)v23; /*0x84bf04*/
  if ( v24 == (NiTexture *)v23 ) /*0x84bf08*/
  {
    v26 = Stage; /*0x84bf41*/
  }
  else
  {
    if ( v24 ) /*0x84bf0c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84bf12*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84bf28*/
    }
    v26 = Stage; /*0x84bf2c*/
    Stage->Texture = v25; /*0x84bf30*/
    if ( v25 ) /*0x84bf33*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84bf39*/
  }
  if ( v26 ) /*0x84bf47*/
  {
    if ( unk_B42CDD ) /*0x84bf49*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bf59*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84bf5e*/
    }
  }
  ++v6->RefCount; /*0x84bf68*/
  Stage = (NiD3DTextureStage *)v6; /*0x84bf6b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84bf87*/
  if ( v6->RefCount-- == 1 ) /*0x84bf8f*/
    NiD3DPass_ReleaseToPool(v6); /*0x84bf9a*/
  ++*((_DWORD *)this + 0xE); /*0x84bf9f*/
}
