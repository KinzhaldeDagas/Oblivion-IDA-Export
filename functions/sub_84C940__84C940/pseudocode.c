void __thiscall sub_84C940(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45638; /*0x84c970*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84c977*/
  v6 = a5; /*0x84c97f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84c987*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84c991*/
  v7 = Stage; /*0x84c983*/
  v9 = v8(a5, 0); /*0x84c995*/
  Texture = v7->Texture; /*0x84c997*/
  v11 = (NiTexture *)v9; /*0x84c99a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84c99e*/
  {
    v12 = Stage; /*0x84c9d7*/
  }
  else
  {
    if ( Texture ) /*0x84c9a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c9a8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c9be*/
    }
    v12 = Stage; /*0x84c9c2*/
    Stage->Texture = v11; /*0x84c9c6*/
    if ( v11 ) /*0x84c9c9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84c9cf*/
  }
  if ( v12 ) /*0x84c9dd*/
  {
    if ( unk_B42CDD ) /*0x84c9df*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84c9ef*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84c9f4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84c9fc*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84ca01*/
  Stage = v14; /*0x84ca0b*/
  if ( v15(v6, 0) ) /*0x84ca0f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84ca23*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84ca2e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84ca34*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84ca36*/
  }
  v17 = v14->Texture; /*0x84ca3c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84ca41*/
  {
    v18 = Stage; /*0x84ca7a*/
  }
  else
  {
    if ( v17 ) /*0x84ca45*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84ca4b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84ca61*/
    }
    v18 = Stage; /*0x84ca65*/
    Stage->Texture = (NiTexture *)v16; /*0x84ca69*/
    if ( v16 ) /*0x84ca6c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84ca72*/
  }
  if ( v18 ) /*0x84ca80*/
  {
    if ( unk_B42CDD ) /*0x84ca82*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84ca92*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84ca97*/
    }
  }
  v21 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x90); /*0x84caa4*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84caae*/
  v20 = Stage; /*0x84ca9f*/
  v22 = v21(v6, 0); /*0x84cab2*/
  v23 = v20->Texture; /*0x84cab4*/
  v24 = (NiTexture *)v22; /*0x84cab7*/
  if ( v23 == (NiTexture *)v22 ) /*0x84cabb*/
  {
    v25 = Stage; /*0x84caf4*/
  }
  else
  {
    if ( v23 ) /*0x84cabf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v23->members) ) /*0x84cac5*/
        v23->__vftable->super.super.Destructor((NiRefObject *)v23, 1); /*0x84cadb*/
    }
    v25 = Stage; /*0x84cadf*/
    Stage->Texture = v24; /*0x84cae3*/
    if ( v24 ) /*0x84cae6*/
      InterlockedIncrement((volatile LONG *)&v24->members); /*0x84caec*/
  }
  if ( v25 ) /*0x84cafa*/
  {
    if ( unk_B42CDD ) /*0x84cafc*/
    {
      v26 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84cb0c*/
      NiD3DTextureStage_ApplyAddressModePreset(v25, v26); /*0x84cb11*/
    }
  }
  ++v5->RefCount; /*0x84cb1b*/
  Stage = (NiD3DTextureStage *)v5; /*0x84cb1e*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84cb3a*/
  if ( v5->RefCount-- == 1 ) /*0x84cb42*/
    NiD3DPass_ReleaseToPool(v5); /*0x84cb4d*/
  ++*((_DWORD *)this + 0xE); /*0x84cb52*/
}
