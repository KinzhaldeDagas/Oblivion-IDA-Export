void __thiscall sub_84CFF0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
{
  NiD3DPass *v5; // esi
  NiD3DTextureStage **data; // ecx
  _DWORD *v7; // esi
  NiD3DTextureStage *v8; // ebp
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
  NiD3DTextureStage *Stage; // edi
  int (__thiscall *v23)(_DWORD *, int); // eax
  int v24; // ebp
  NiTexture *v25; // edi
  NiD3DTextureStage *v26; // edi
  unsigned int v27; // eax
  NiD3DPass *v29; // [esp+18h] [ebp-14h]

  v5 = dword_B45640; /*0x84d022*/
  v29 = dword_B45640; /*0x84d029*/
  sub_848C40((float *)a4[1].Texture); /*0x84d02d*/
  data = (NiD3DTextureStage **)v5->Stages.data; /*0x84d032*/
  v7 = a5; /*0x84d035*/
  v8 = *data; /*0x84d03b*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84d047*/
  Texture = v8->Texture; /*0x84d049*/
  v11 = (NiTexture *)v9; /*0x84d04c*/
  if ( Texture != (NiTexture *)v9 ) /*0x84d050*/
  {
    if ( Texture ) /*0x84d054*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84d05a*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84d070*/
    }
    v8->Texture = v11; /*0x84d074*/
    if ( v11 ) /*0x84d077*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84d07d*/
  }
  if ( v8 ) /*0x84d085*/
  {
    if ( unk_B42CDD ) /*0x84d087*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d097*/
      NiD3DTextureStage_ApplyAddressModePreset(v8, v12); /*0x84d09c*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84d0aa*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84d0b7*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84d0cb*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84d0d6*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84d0dc*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84d0de*/
  }
  v15 = v13->Texture; /*0x84d0e4*/
  if ( v15 != (NiTexture *)v14 ) /*0x84d0e9*/
  {
    if ( v15 ) /*0x84d0ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84d0f3*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84d109*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84d10d*/
    if ( v14 ) /*0x84d110*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84d116*/
  }
  if ( v13 ) /*0x84d11e*/
  {
    if ( unk_B42CDD ) /*0x84d120*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d130*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84d135*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84d143*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84d150*/
  v19 = Unk08->Texture; /*0x84d152*/
  v20 = (NiTexture *)v18; /*0x84d155*/
  if ( v19 != (NiTexture *)v18 ) /*0x84d159*/
  {
    if ( v19 ) /*0x84d15d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84d163*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84d179*/
    }
    Unk08->Texture = v20; /*0x84d17d*/
    if ( v20 ) /*0x84d180*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84d186*/
  }
  if ( Unk08 ) /*0x84d18e*/
  {
    if ( unk_B42CDD ) /*0x84d190*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d1a0*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84d1a5*/
    }
  }
  Stage = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84d1b1*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84d1b6*/
  a4 = Stage; /*0x84d1c0*/
  if ( v23(v7, 1) ) /*0x84d1c4*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84d1d8*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84d1e3*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84d1e9*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84d1eb*/
  }
  v25 = Stage->Texture; /*0x84d1f1*/
  if ( v25 == (NiTexture *)v24 ) /*0x84d1f6*/
  {
    v26 = a4; /*0x84d22f*/
  }
  else
  {
    if ( v25 ) /*0x84d1fa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84d200*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84d216*/
    }
    v26 = a4; /*0x84d21a*/
    a4->Texture = (NiTexture *)v24; /*0x84d21e*/
    if ( v24 ) /*0x84d221*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84d227*/
  }
  if ( v26 ) /*0x84d235*/
  {
    if ( unk_B42CDD ) /*0x84d237*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84d247*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84d24c*/
    }
  }
  ++v29->RefCount; /*0x84d256*/
  a4 = (NiD3DTextureStage *)v29; /*0x84d259*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84d275*/
  if ( v29->RefCount-- == 1 ) /*0x84d27d*/
    NiD3DPass_ReleaseToPool(v29); /*0x84d288*/
  ++*((_DWORD *)this + 0xE); /*0x84d28d*/
}
