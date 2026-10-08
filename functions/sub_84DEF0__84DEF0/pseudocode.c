void __thiscall sub_84DEF0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = dword_B45650; /*0x84df20*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84df27*/
  v6 = a5; /*0x84df2f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84df37*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84df41*/
  v7 = Stage; /*0x84df33*/
  v9 = v8(a5, 0); /*0x84df45*/
  Texture = v7->Texture; /*0x84df47*/
  v11 = (NiTexture *)v9; /*0x84df4a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84df4e*/
  {
    v12 = Stage; /*0x84df87*/
  }
  else
  {
    if ( Texture ) /*0x84df52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84df58*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84df6e*/
    }
    v12 = Stage; /*0x84df72*/
    Stage->Texture = v11; /*0x84df76*/
    if ( v11 ) /*0x84df79*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84df7f*/
  }
  if ( v12 ) /*0x84df8d*/
  {
    if ( unk_B42CDD ) /*0x84df8f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84df9f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84dfa4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84dfac*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84dfb1*/
  Stage = v14; /*0x84dfbb*/
  if ( v15(v6, 0) ) /*0x84dfbf*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84dfd3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84dfde*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84dfe4*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84dfe6*/
  }
  v17 = v14->Texture; /*0x84dfec*/
  if ( v17 == (NiTexture *)v16 ) /*0x84dff1*/
  {
    v18 = Stage; /*0x84e02a*/
  }
  else
  {
    if ( v17 ) /*0x84dff5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84dffb*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84e011*/
    }
    v18 = Stage; /*0x84e015*/
    Stage->Texture = (NiTexture *)v16; /*0x84e019*/
    if ( v16 ) /*0x84e01c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84e022*/
  }
  if ( v18 ) /*0x84e030*/
  {
    if ( unk_B42CDD ) /*0x84e032*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84e042*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84e047*/
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90); /*0x84e054*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84e05e*/
  v20 = Stage; /*0x84e04f*/
  v22 = v21(v6, 0); /*0x84e062*/
  v23 = v20->Texture; /*0x84e064*/
  v24 = (NiTexture *)v22; /*0x84e067*/
  if ( v23 == (NiTexture *)v22 ) /*0x84e06b*/
  {
    v25 = Stage; /*0x84e0a4*/
  }
  else
  {
    if ( v23 ) /*0x84e06f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x84e075*/
        v23->__vftable->super.super.Destructor((NiRefObject *)v23, 1); /*0x84e08b*/
    }
    v25 = Stage; /*0x84e08f*/
    Stage->Texture = v24; /*0x84e093*/
    if ( v24 ) /*0x84e096*/
      InterlockedIncrement((volatile LONG *)&v24->members); /*0x84e09c*/
  }
  if ( v25 ) /*0x84e0aa*/
  {
    if ( unk_B42CDD ) /*0x84e0ac*/
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84e0bc*/
      NiD3DTextureStage_ApplyAddressModePreset(v25, v26); /*0x84e0c1*/
    }
  }
  ++v5->RefCount; /*0x84e0cb*/
  Stage = (NiD3DTextureStage *)v5; /*0x84e0ce*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84e0ea*/
  if ( v5->RefCount-- == 1 ) /*0x84e0f2*/
    NiD3DPass_ReleaseToPool(v5); /*0x84e0fd*/
  ++*((_DWORD *)this + 0xE); /*0x84e102*/
}
