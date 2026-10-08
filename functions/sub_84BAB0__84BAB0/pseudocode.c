void __thiscall sub_84BAB0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
{
  NiD3DPass *v5; // edi
  int v6; // ebx
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

  v5 = (NiD3DPass *)a4; /*0x84badd*/
  v6 = unk_B45628; /*0x84bae4*/
  v29 = (NiD3DPass *)unk_B45628; /*0x84baeb*/
  sub_848C40((float *)a4[1].Texture); /*0x84baef*/
  sub_848E50(*(float **)&v5->Name[8]); /*0x84bafa*/
  v7 = a5; /*0x84bb02*/
  v8 = **(NiD3DTextureStage ***)(v6 + 0x24); /*0x84bb08*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84bb14*/
  Texture = v8->Texture; /*0x84bb16*/
  v11 = (NiTexture *)v9; /*0x84bb19*/
  if ( Texture != (NiTexture *)v9 ) /*0x84bb1d*/
  {
    if ( Texture ) /*0x84bb21*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84bb27*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84bb3d*/
    }
    v8->Texture = v11; /*0x84bb41*/
    if ( v11 ) /*0x84bb44*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84bb4a*/
  }
  if ( v8 ) /*0x84bb52*/
  {
    if ( unk_B42CDD ) /*0x84bb54*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bb64*/
      NiD3DTextureStage_ApplyAddressModePreset(v8, v12); /*0x84bb69*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84bb77*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84bb84*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84bb98*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84bba3*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84bba9*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84bbab*/
  }
  v15 = v13->Texture; /*0x84bbb1*/
  if ( v15 != (NiTexture *)v14 ) /*0x84bbb6*/
  {
    if ( v15 ) /*0x84bbba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84bbc0*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84bbd6*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84bbda*/
    if ( v14 ) /*0x84bbdd*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84bbe3*/
  }
  if ( v13 ) /*0x84bbeb*/
  {
    if ( unk_B42CDD ) /*0x84bbed*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bbfd*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84bc02*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84bc10*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84bc1d*/
  v19 = Unk08->Texture; /*0x84bc1f*/
  v20 = (NiTexture *)v18; /*0x84bc22*/
  if ( v19 != (NiTexture *)v18 ) /*0x84bc26*/
  {
    if ( v19 ) /*0x84bc2a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84bc30*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84bc46*/
    }
    Unk08->Texture = v20; /*0x84bc4a*/
    if ( v20 ) /*0x84bc4d*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84bc53*/
  }
  if ( Unk08 ) /*0x84bc5b*/
  {
    if ( unk_B42CDD ) /*0x84bc5d*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bc6d*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84bc72*/
    }
  }
  Stage = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84bc7e*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84bc83*/
  a4 = Stage; /*0x84bc8d*/
  if ( v23(v7, 1) ) /*0x84bc91*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84bca5*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84bcb0*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84bcb6*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84bcb8*/
  }
  v25 = Stage->Texture; /*0x84bcbe*/
  if ( v25 == (NiTexture *)v24 ) /*0x84bcc3*/
  {
    v26 = a4; /*0x84bcfc*/
  }
  else
  {
    if ( v25 ) /*0x84bcc7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84bccd*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84bce3*/
    }
    v26 = a4; /*0x84bce7*/
    a4->Texture = (NiTexture *)v24; /*0x84bceb*/
    if ( v24 ) /*0x84bcee*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84bcf4*/
  }
  if ( v26 ) /*0x84bd02*/
  {
    if ( unk_B42CDD ) /*0x84bd04*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84bd14*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84bd19*/
    }
  }
  ++v29->RefCount; /*0x84bd23*/
  a4 = (NiD3DTextureStage *)v29; /*0x84bd26*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84bd42*/
  if ( v29->RefCount-- == 1 ) /*0x84bd4a*/
    NiD3DPass_ReleaseToPool(v29); /*0x84bd55*/
  ++*((_DWORD *)this + 0xE); /*0x84bd5a*/
}
