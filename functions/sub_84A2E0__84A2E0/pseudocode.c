void __thiscall sub_84A2E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B4560C; /*0x84a310*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84a317*/
  v6 = a5; /*0x84a31f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84a327*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84a331*/
  v7 = Stage; /*0x84a323*/
  v9 = v8(a5, 0); /*0x84a335*/
  Texture = v7->Texture; /*0x84a337*/
  v11 = (NiTexture *)v9; /*0x84a33a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84a33e*/
  {
    v12 = Stage; /*0x84a377*/
  }
  else
  {
    if ( Texture ) /*0x84a342*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84a348*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84a35e*/
    }
    v12 = Stage; /*0x84a362*/
    Stage->Texture = v11; /*0x84a366*/
    if ( v11 ) /*0x84a369*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84a36f*/
  }
  if ( v12 ) /*0x84a37d*/
  {
    if ( unk_B42CDD ) /*0x84a37f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a38f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84a394*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84a39c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84a3a1*/
  Stage = v14; /*0x84a3ab*/
  if ( v15(v6, 0) ) /*0x84a3af*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84a3c3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84a3ce*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84a3d4*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84a3d6*/
  }
  v17 = v14->Texture; /*0x84a3dc*/
  if ( v17 == (NiTexture *)v16 ) /*0x84a3e1*/
  {
    v18 = Stage; /*0x84a41a*/
  }
  else
  {
    if ( v17 ) /*0x84a3e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84a3eb*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84a401*/
    }
    v18 = Stage; /*0x84a405*/
    Stage->Texture = (NiTexture *)v16; /*0x84a409*/
    if ( v16 ) /*0x84a40c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84a412*/
  }
  if ( v18 ) /*0x84a420*/
  {
    if ( unk_B42CDD ) /*0x84a422*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a432*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84a437*/
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90); /*0x84a444*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84a44e*/
  v20 = Stage; /*0x84a43f*/
  v22 = v21(v6, 0); /*0x84a452*/
  v23 = v20->Texture; /*0x84a454*/
  v24 = (NiTexture *)v22; /*0x84a457*/
  if ( v23 == (NiTexture *)v22 ) /*0x84a45b*/
  {
    v25 = Stage; /*0x84a494*/
  }
  else
  {
    if ( v23 ) /*0x84a45f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x84a465*/
        v23->__vftable->super.super.Destructor((NiRefObject *)v23, 1); /*0x84a47b*/
    }
    v25 = Stage; /*0x84a47f*/
    Stage->Texture = v24; /*0x84a483*/
    if ( v24 ) /*0x84a486*/
      InterlockedIncrement((volatile LONG *)&v24->members); /*0x84a48c*/
  }
  if ( v25 ) /*0x84a49a*/
  {
    if ( unk_B42CDD ) /*0x84a49c*/
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84a4ac*/
      NiD3DTextureStage_ApplyAddressModePreset(v25, v26); /*0x84a4b1*/
    }
  }
  ++v5->RefCount; /*0x84a4bb*/
  Stage = (NiD3DTextureStage *)v5; /*0x84a4be*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84a4da*/
  if ( v5->RefCount-- == 1 ) /*0x84a4e2*/
    NiD3DPass_ReleaseToPool(v5); /*0x84a4ed*/
  ++*((_DWORD *)this + 0xE); /*0x84a4f2*/
}
