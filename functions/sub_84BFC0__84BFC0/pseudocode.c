void __thiscall sub_84BFC0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84bfeb*/
  v6 = (NiD3DPass *)unk_B45690; /*0x84bff2*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84bff9*/
  sub_848E50((float *)v5[1].Stage); /*0x84c004*/
  v7 = a5; /*0x84c00c*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84c014*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84c01e*/
  v8 = Stage; /*0x84c010*/
  v10 = v9(a5, 0); /*0x84c022*/
  Texture = v8->Texture; /*0x84c024*/
  v12 = (NiTexture *)v10; /*0x84c027*/
  if ( Texture == (NiTexture *)v10 ) /*0x84c02b*/
  {
    v13 = Stage; /*0x84c064*/
  }
  else
  {
    if ( Texture ) /*0x84c02f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c035*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c04b*/
    }
    v13 = Stage; /*0x84c04f*/
    Stage->Texture = v12; /*0x84c053*/
    if ( v12 ) /*0x84c056*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84c05c*/
  }
  if ( v13 ) /*0x84c06a*/
  {
    if ( unk_B42CDD ) /*0x84c06c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84c07c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84c081*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84c089*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84c08e*/
  Stage = v15; /*0x84c098*/
  if ( v16(v7, 0) ) /*0x84c09c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84c0b0*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84c0bb*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84c0c1*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84c0c3*/
  }
  v18 = v15->Texture; /*0x84c0c9*/
  if ( v18 == (NiTexture *)v17 ) /*0x84c0ce*/
  {
    v19 = Stage; /*0x84c107*/
  }
  else
  {
    if ( v18 ) /*0x84c0d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84c0d8*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84c0ee*/
    }
    v19 = Stage; /*0x84c0f2*/
    Stage->Texture = (NiTexture *)v17; /*0x84c0f6*/
    if ( v17 ) /*0x84c0f9*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84c0ff*/
  }
  if ( v19 ) /*0x84c10d*/
  {
    if ( unk_B42CDD ) /*0x84c10f*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84c11f*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84c124*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84c131*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84c13b*/
  v21 = Stage; /*0x84c12c*/
  v23 = v22(v7, 0); /*0x84c13f*/
  v24 = v21->Texture; /*0x84c141*/
  v25 = (NiTexture *)v23; /*0x84c144*/
  if ( v24 == (NiTexture *)v23 ) /*0x84c148*/
  {
    v26 = Stage; /*0x84c181*/
  }
  else
  {
    if ( v24 ) /*0x84c14c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84c152*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84c168*/
    }
    v26 = Stage; /*0x84c16c*/
    Stage->Texture = v25; /*0x84c170*/
    if ( v25 ) /*0x84c173*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84c179*/
  }
  if ( v26 ) /*0x84c187*/
  {
    if ( unk_B42CDD ) /*0x84c189*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84c199*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84c19e*/
    }
  }
  ++v6->RefCount; /*0x84c1a8*/
  Stage = (NiD3DTextureStage *)v6; /*0x84c1ab*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84c1c7*/
  if ( v6->RefCount-- == 1 ) /*0x84c1cf*/
    NiD3DPass_ReleaseToPool(v6); /*0x84c1da*/
  ++*((_DWORD *)this + 0xE); /*0x84c1df*/
}
