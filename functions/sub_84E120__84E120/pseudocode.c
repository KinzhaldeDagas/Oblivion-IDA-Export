void __thiscall sub_84E120(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, _DWORD *a5)
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

  v5 = unk_B45654; /*0x84e152*/
  v29 = (NiD3DPass *)unk_B45654; /*0x84e159*/
  sub_848C40((float *)a4[1].Texture); /*0x84e15d*/
  v6 = *(NiD3DTextureStage ***)(v5 + 0x24); /*0x84e162*/
  v7 = a5; /*0x84e165*/
  v8 = *v6; /*0x84e16b*/
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84e177*/
  Texture = v8->Texture; /*0x84e179*/
  v11 = (NiTexture *)v9; /*0x84e17c*/
  if ( Texture != (NiTexture *)v9 ) /*0x84e180*/
  {
    if ( Texture ) /*0x84e184*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84e18a*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84e1a0*/
    }
    v8->Texture = v11; /*0x84e1a4*/
    if ( v11 ) /*0x84e1a7*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84e1ad*/
  }
  if ( v8 ) /*0x84e1b5*/
  {
    if ( unk_B42CDD ) /*0x84e1b7*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e1c7*/
      NiD3DTextureStage_ApplyAddressModePreset(v8, v12); /*0x84e1cc*/
    }
  }
  v13 = (NiD3DTextureStage *)v29->Stages.data->Texture; /*0x84e1da*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) ) /*0x84e1e7*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84e1fb*/
  }
  else
  {
    v14 = unk_B430F0; /*0x84e206*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84e20c*/
      v14 = LODWORD(flt_B430DC[0]); /*0x84e20e*/
  }
  v15 = v13->Texture; /*0x84e214*/
  if ( v15 != (NiTexture *)v14 ) /*0x84e219*/
  {
    if ( v15 ) /*0x84e21d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84e223*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84e239*/
    }
    v13->Texture = (NiTexture *)v14; /*0x84e23d*/
    if ( v14 ) /*0x84e240*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x84e246*/
  }
  if ( v13 ) /*0x84e24e*/
  {
    if ( unk_B42CDD ) /*0x84e250*/
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e260*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v16); /*0x84e265*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v29->Stages.data->Unk08; /*0x84e273*/
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1); /*0x84e280*/
  v19 = Unk08->Texture; /*0x84e282*/
  v20 = (NiTexture *)v18; /*0x84e285*/
  if ( v19 != (NiTexture *)v18 ) /*0x84e289*/
  {
    if ( v19 ) /*0x84e28d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x84e293*/
        v19->__vftable->super.super.Destructor((NiRefObject *)v19, 1); /*0x84e2a9*/
    }
    Unk08->Texture = v20; /*0x84e2ad*/
    if ( v20 ) /*0x84e2b0*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x84e2b6*/
  }
  if ( Unk08 ) /*0x84e2be*/
  {
    if ( unk_B42CDD ) /*0x84e2c0*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e2d0*/
      NiD3DTextureStage_ApplyAddressModePreset(Unk08, v21); /*0x84e2d5*/
    }
  }
  Stage = (NiD3DTextureStage *)v29->Stages.data[1].Stage; /*0x84e2e1*/
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C); /*0x84e2e6*/
  a4 = Stage; /*0x84e2f0*/
  if ( v23(v7, 1) ) /*0x84e2f4*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1); /*0x84e308*/
  }
  else
  {
    v24 = unk_B430F0; /*0x84e313*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84e319*/
      v24 = LODWORD(flt_B430DC[0]); /*0x84e31b*/
  }
  v25 = Stage->Texture; /*0x84e321*/
  if ( v25 == (NiTexture *)v24 ) /*0x84e326*/
  {
    v26 = a4; /*0x84e35f*/
  }
  else
  {
    if ( v25 ) /*0x84e32a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x84e330*/
        v25->__vftable->super.super.Destructor((NiRefObject *)v25, 1); /*0x84e346*/
    }
    v26 = a4; /*0x84e34a*/
    a4->Texture = (NiTexture *)v24; /*0x84e34e*/
    if ( v24 ) /*0x84e351*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x84e357*/
  }
  if ( v26 ) /*0x84e365*/
  {
    if ( unk_B42CDD ) /*0x84e367*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e377*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84e37c*/
    }
  }
  ++v29->RefCount; /*0x84e386*/
  a4 = (NiD3DTextureStage *)v29; /*0x84e389*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&a4); /*0x84e3a5*/
  if ( v29->RefCount-- == 1 ) /*0x84e3ad*/
    NiD3DPass_ReleaseToPool(v29); /*0x84e3b8*/
  ++*((_DWORD *)this + 0xE); /*0x84e3bd*/
}
