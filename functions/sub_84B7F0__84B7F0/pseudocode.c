void __thiscall sub_84B7F0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
{
  int v5; // esi
  NiD3DTextureStage **v6; // ecx
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

  v5 = unk_B45628; /*0x84b822*/
  v29 = (NiD3DPass *)unk_B45628; /*0x84b829*/
  sub_848C40((float *)a4[1].Texture); /*0x84b82d*/
  v6 = *(NiD3DTextureStage ***)(v5 + 0x24); /*0x84b832*/
  v7 = a5; /*0x84b835*/
  v8 = *v6; /*0x84b83b*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84b847*/
  Texture = v8->Texture; /*0x84b849*/
  v11 = (NiTexture *)v9; /*0x84b84c*/
  if ( Texture != (NiTexture *)v9 ) /*0x84b850*/
  {
    if ( Texture ) /*0x84b854*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84b85a*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84b870*/
    }
    v8->Texture = v11; /*0x84b874*/
    if ( v11 ) /*0x84b877*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84b87d*/
  }
  if ( v8 ) /*0x84b885*/
  {
    if ( unk_B42CDD ) /*0x84b887*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84b897*/
      NiD3DTextureStage_ApplyAddressModePreset(v8, v12); /*0x84b89c*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84b8aa*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84b8b7*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84b8cb*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84b8d6*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84b8dc*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84b8de*/
  }
  v15 = v13->Texture; /*0x84b8e4*/
  if ( v15 != (NiTexture *)v14 ) /*0x84b8e9*/
  {
    if ( v15 ) /*0x84b8ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84b8f3*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84b909*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84b90d*/
    if ( v14 ) /*0x84b910*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84b916*/
  }
  if ( v13 ) /*0x84b91e*/
  {
    if ( unk_B42CDD ) /*0x84b920*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84b930*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84b935*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84b943*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84b950*/
  v19 = Unk08->Texture; /*0x84b952*/
  v20 = (NiTexture *)v18; /*0x84b955*/
  if ( v19 != (NiTexture *)v18 ) /*0x84b959*/
  {
    if ( v19 ) /*0x84b95d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84b963*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84b979*/
    }
    Unk08->Texture = v20; /*0x84b97d*/
    if ( v20 ) /*0x84b980*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84b986*/
  }
  if ( Unk08 ) /*0x84b98e*/
  {
    if ( unk_B42CDD ) /*0x84b990*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84b9a0*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84b9a5*/
    }
  }
  Stage = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84b9b1*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84b9b6*/
  a4 = Stage; /*0x84b9c0*/
  if ( v23(v7, 1) ) /*0x84b9c4*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84b9d8*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84b9e3*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84b9e9*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84b9eb*/
  }
  v25 = Stage->Texture; /*0x84b9f1*/
  if ( v25 == (NiTexture *)v24 ) /*0x84b9f6*/
  {
    v26 = a4; /*0x84ba2f*/
  }
  else
  {
    if ( v25 ) /*0x84b9fa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84ba00*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84ba16*/
    }
    v26 = a4; /*0x84ba1a*/
    a4->Texture = (NiTexture *)v24; /*0x84ba1e*/
    if ( v24 ) /*0x84ba21*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84ba27*/
  }
  if ( v26 ) /*0x84ba35*/
  {
    if ( unk_B42CDD ) /*0x84ba37*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ba47*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84ba4c*/
    }
  }
  ++v29->RefCount; /*0x84ba56*/
  a4 = (NiD3DTextureStage *)v29; /*0x84ba59*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84ba75*/
  if ( v29->RefCount-- == 1 ) /*0x84ba7d*/
    NiD3DPass_ReleaseToPool(v29); /*0x84ba88*/
  ++*((_DWORD *)this + 0xE); /*0x84ba8d*/
}
