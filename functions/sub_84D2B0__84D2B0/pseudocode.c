void __thiscall sub_84D2B0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
{
  NiD3DPass *v5; // edi
  NiD3DPass *v6; // ebx
  _DWORD *v7; // esi
  NiD3DTextureStage *Stage; // ebp
  int v9; // eax
  NiTexture *Texture; // edi
  NiTexture *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v13; // ebp
  int v14; // ebx
  NiTexture *v15; // edi
  unsigned int v16; // eax
  NiD3DTextureStage *Unk08; // ebx
  int v18; // eax
  NiTexture *v19; // edi
  NiTexture *v20; // ebp
  unsigned int v21; // eax
  NiD3DTextureStage *v22; // edi
  int (__thiscall *v23)(_DWORD *, int); // eax
  int v24; // ebp
  NiTexture *v25; // edi
  NiD3DTextureStage *v26; // edi
  unsigned int v27; // eax
  NiD3DPass *v29; // [esp+18h] [ebp-14h]

  v5 = (NiD3DPass *)a4; /*0x84d2dd*/
  v6 = dword_B456B0; /*0x84d2e4*/
  v29 = dword_B456B0; /*0x84d2eb*/
  sub_848C40((float *)a4[1].Texture); /*0x84d2ef*/
  sub_848E50(*(float **)&v5->Name[8]); /*0x84d2fa*/
  v7 = a5; /*0x84d302*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84d308*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84d314*/
  Texture = Stage->Texture; /*0x84d316*/
  v11 = (NiTexture *)v9; /*0x84d319*/
  if ( Texture != (NiTexture *)v9 ) /*0x84d31d*/
  {
    if ( Texture ) /*0x84d321*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84d327*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84d33d*/
    }
    Stage->Texture = v11; /*0x84d341*/
    if ( v11 ) /*0x84d344*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84d34a*/
  }
  if ( Stage ) /*0x84d352*/
  {
    if ( unk_B42CDD ) /*0x84d354*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d364*/
      NiD3DTextureStage_ApplyAddressModePreset(Stage, v12); /*0x84d369*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84d377*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84d384*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84d398*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84d3a3*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84d3a9*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84d3ab*/
  }
  v15 = v13->Texture; /*0x84d3b1*/
  if ( v15 != (NiTexture *)v14 ) /*0x84d3b6*/
  {
    if ( v15 ) /*0x84d3ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84d3c0*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84d3d6*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84d3da*/
    if ( v14 ) /*0x84d3dd*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84d3e3*/
  }
  if ( v13 ) /*0x84d3eb*/
  {
    if ( unk_B42CDD ) /*0x84d3ed*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d3fd*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84d402*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84d410*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84d41d*/
  v19 = Unk08->Texture; /*0x84d41f*/
  v20 = (NiTexture *)v18; /*0x84d422*/
  if ( v19 != (NiTexture *)v18 ) /*0x84d426*/
  {
    if ( v19 ) /*0x84d42a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84d430*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84d446*/
    }
    Unk08->Texture = v20; /*0x84d44a*/
    if ( v20 ) /*0x84d44d*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84d453*/
  }
  if ( Unk08 ) /*0x84d45b*/
  {
    if ( unk_B42CDD ) /*0x84d45d*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d46d*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84d472*/
    }
  }
  v22 = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84d47e*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84d483*/
  a4 = v22; /*0x84d48d*/
  if ( v23(v7, 1) ) /*0x84d491*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84d4a5*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84d4b0*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84d4b6*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84d4b8*/
  }
  v25 = v22->Texture; /*0x84d4be*/
  if ( v25 == (NiTexture *)v24 ) /*0x84d4c3*/
  {
    v26 = a4; /*0x84d4fc*/
  }
  else
  {
    if ( v25 ) /*0x84d4c7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84d4cd*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84d4e3*/
    }
    v26 = a4; /*0x84d4e7*/
    a4->Texture = (NiTexture *)v24; /*0x84d4eb*/
    if ( v24 ) /*0x84d4ee*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84d4f4*/
  }
  if ( v26 ) /*0x84d502*/
  {
    if ( unk_B42CDD ) /*0x84d504*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d514*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84d519*/
    }
  }
  ++v29->RefCount; /*0x84d523*/
  a4 = (NiD3DTextureStage *)v29; /*0x84d526*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84d542*/
  if ( v29->RefCount-- == 1 ) /*0x84d54a*/
    NiD3DPass_ReleaseToPool(v29); /*0x84d555*/
  ++*((_DWORD *)this + 0xE); /*0x84d55a*/
}
