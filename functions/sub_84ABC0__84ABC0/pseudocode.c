void __thiscall sub_84ABC0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
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

  v5 = unk_B45614; /*0x84abf2*/
  v29 = (NiD3DPass *)unk_B45614; /*0x84abf9*/
  sub_848C40((float *)a4[1].Texture); /*0x84abfd*/
  v6 = *(NiD3DTextureStage ***)(v5 + 0x24); /*0x84ac02*/
  v7 = a5; /*0x84ac05*/
  v8 = *v6; /*0x84ac0b*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84ac17*/
  Texture = v8->Texture; /*0x84ac19*/
  v11 = (NiTexture *)v9; /*0x84ac1c*/
  if ( Texture != (NiTexture *)v9 ) /*0x84ac20*/
  {
    if ( Texture ) /*0x84ac24*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ac2a*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ac40*/
    }
    v8->Texture = v11; /*0x84ac44*/
    if ( v11 ) /*0x84ac47*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84ac4d*/
  }
  if ( v8 ) /*0x84ac55*/
  {
    if ( unk_B42CDD ) /*0x84ac57*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ac67*/
      NiD3DTextureStage_ApplyAddressModePreset(v8, v12); /*0x84ac6c*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84ac7a*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84ac87*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84ac9b*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84aca6*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84acac*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84acae*/
  }
  v15 = v13->Texture; /*0x84acb4*/
  if ( v15 != (NiTexture *)v14 ) /*0x84acb9*/
  {
    if ( v15 ) /*0x84acbd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84acc3*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84acd9*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84acdd*/
    if ( v14 ) /*0x84ace0*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84ace6*/
  }
  if ( v13 ) /*0x84acee*/
  {
    if ( unk_B42CDD ) /*0x84acf0*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ad00*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84ad05*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84ad13*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84ad20*/
  v19 = Unk08->Texture; /*0x84ad22*/
  v20 = (NiTexture *)v18; /*0x84ad25*/
  if ( v19 != (NiTexture *)v18 ) /*0x84ad29*/
  {
    if ( v19 ) /*0x84ad2d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84ad33*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84ad49*/
    }
    Unk08->Texture = v20; /*0x84ad4d*/
    if ( v20 ) /*0x84ad50*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84ad56*/
  }
  if ( Unk08 ) /*0x84ad5e*/
  {
    if ( unk_B42CDD ) /*0x84ad60*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ad70*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84ad75*/
    }
  }
  Stage = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84ad81*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84ad86*/
  a4 = Stage; /*0x84ad90*/
  if ( v23(v7, 1) ) /*0x84ad94*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84ada8*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84adb3*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84adb9*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84adbb*/
  }
  v25 = Stage->Texture; /*0x84adc1*/
  if ( v25 == (NiTexture *)v24 ) /*0x84adc6*/
  {
    v26 = a4; /*0x84adff*/
  }
  else
  {
    if ( v25 ) /*0x84adca*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84add0*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84ade6*/
    }
    v26 = a4; /*0x84adea*/
    a4->Texture = (NiTexture *)v24; /*0x84adee*/
    if ( v24 ) /*0x84adf1*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84adf7*/
  }
  if ( v26 ) /*0x84ae05*/
  {
    if ( unk_B42CDD ) /*0x84ae07*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ae17*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84ae1c*/
    }
  }
  ++v29->RefCount; /*0x84ae26*/
  a4 = (NiD3DTextureStage *)v29; /*0x84ae29*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84ae45*/
  if ( v29->RefCount-- == 1 ) /*0x84ae4d*/
    NiD3DPass_ReleaseToPool(v29); /*0x84ae58*/
  ++*((_DWORD *)this + 0xE); /*0x84ae5d*/
}
