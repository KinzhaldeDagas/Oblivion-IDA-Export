void __thiscall sub_84E3E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84e40b*/
  v6 = dword_B456B4; /*0x84e412*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84e419*/
  sub_848E50((float *)v5[1].Stage); /*0x84e424*/
  v7 = a5; /*0x84e42c*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84e434*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84e43e*/
  v8 = Stage; /*0x84e430*/
  v10 = v9(a5, 0); /*0x84e442*/
  Texture = v8->Texture; /*0x84e444*/
  v12 = (NiTexture *)v10; /*0x84e447*/
  if ( Texture == (NiTexture *)v10 ) /*0x84e44b*/
  {
    v13 = Stage; /*0x84e484*/
  }
  else
  {
    if ( Texture ) /*0x84e44f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84e455*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84e46b*/
    }
    v13 = Stage; /*0x84e46f*/
    Stage->Texture = v12; /*0x84e473*/
    if ( v12 ) /*0x84e476*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84e47c*/
  }
  if ( v13 ) /*0x84e48a*/
  {
    if ( unk_B42CDD ) /*0x84e48c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e49c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84e4a1*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84e4a9*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84e4ae*/
  Stage = v15; /*0x84e4b8*/
  if ( v16(v7, 0) ) /*0x84e4bc*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84e4d0*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84e4db*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84e4e1*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84e4e3*/
  }
  v18 = v15->Texture; /*0x84e4e9*/
  if ( v18 == (NiTexture *)v17 ) /*0x84e4ee*/
  {
    v19 = Stage; /*0x84e527*/
  }
  else
  {
    if ( v18 ) /*0x84e4f2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84e4f8*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84e50e*/
    }
    v19 = Stage; /*0x84e512*/
    Stage->Texture = (NiTexture *)v17; /*0x84e516*/
    if ( v17 ) /*0x84e519*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84e51f*/
  }
  if ( v19 ) /*0x84e52d*/
  {
    if ( unk_B42CDD ) /*0x84e52f*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e53f*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84e544*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84e551*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84e55b*/
  v21 = Stage; /*0x84e54c*/
  v23 = v22(v7, 0); /*0x84e55f*/
  v24 = v21->Texture; /*0x84e561*/
  v25 = (NiTexture *)v23; /*0x84e564*/
  if ( v24 == (NiTexture *)v23 ) /*0x84e568*/
  {
    v26 = Stage; /*0x84e5a1*/
  }
  else
  {
    if ( v24 ) /*0x84e56c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84e572*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84e588*/
    }
    v26 = Stage; /*0x84e58c*/
    Stage->Texture = v25; /*0x84e590*/
    if ( v25 ) /*0x84e593*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84e599*/
  }
  if ( v26 ) /*0x84e5a7*/
  {
    if ( unk_B42CDD ) /*0x84e5a9*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e5b9*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84e5be*/
    }
  }
  ++v6->RefCount; /*0x84e5c8*/
  Stage = (NiD3DTextureStage *)v6; /*0x84e5cb*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84e5e7*/
  if ( v6->RefCount-- == 1 ) /*0x84e5ef*/
    NiD3DPass_ReleaseToPool(v6); /*0x84e5fa*/
  ++*((_DWORD *)this + 0xE); /*0x84e5ff*/
}
