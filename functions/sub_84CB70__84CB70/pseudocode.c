void __thiscall sub_84CB70(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84cb9b*/
  v6 = dword_B456A0; /*0x84cba2*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84cba9*/
  sub_848E50((float *)v5[1].Stage); /*0x84cbb4*/
  v7 = a5; /*0x84cbbc*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84cbc4*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84cbce*/
  v8 = Stage; /*0x84cbc0*/
  v10 = v9(a5, 0); /*0x84cbd2*/
  Texture = v8->Texture; /*0x84cbd4*/
  v12 = (NiTexture *)v10; /*0x84cbd7*/
  if ( Texture == (NiTexture *)v10 ) /*0x84cbdb*/
  {
    v13 = Stage; /*0x84cc14*/
  }
  else
  {
    if ( Texture ) /*0x84cbdf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84cbe5*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84cbfb*/
    }
    v13 = Stage; /*0x84cbff*/
    Stage->Texture = v12; /*0x84cc03*/
    if ( v12 ) /*0x84cc06*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84cc0c*/
  }
  if ( v13 ) /*0x84cc1a*/
  {
    if ( unk_B42CDD ) /*0x84cc1c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84cc2c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84cc31*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84cc39*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84cc3e*/
  Stage = v15; /*0x84cc48*/
  if ( v16(v7, 0) ) /*0x84cc4c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84cc60*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84cc6b*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84cc71*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84cc73*/
  }
  v18 = v15->Texture; /*0x84cc79*/
  if ( v18 == (NiTexture *)v17 ) /*0x84cc7e*/
  {
    v19 = Stage; /*0x84ccb7*/
  }
  else
  {
    if ( v18 ) /*0x84cc82*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84cc88*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84cc9e*/
    }
    v19 = Stage; /*0x84cca2*/
    Stage->Texture = (NiTexture *)v17; /*0x84cca6*/
    if ( v17 ) /*0x84cca9*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84ccaf*/
  }
  if ( v19 ) /*0x84ccbd*/
  {
    if ( unk_B42CDD ) /*0x84ccbf*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84cccf*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84ccd4*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84cce1*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84cceb*/
  v21 = Stage; /*0x84ccdc*/
  v23 = v22(v7, 0); /*0x84ccef*/
  v24 = v21->Texture; /*0x84ccf1*/
  v25 = (NiTexture *)v23; /*0x84ccf4*/
  if ( v24 == (NiTexture *)v23 ) /*0x84ccf8*/
  {
    v26 = Stage; /*0x84cd31*/
  }
  else
  {
    if ( v24 ) /*0x84ccfc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84cd02*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84cd18*/
    }
    v26 = Stage; /*0x84cd1c*/
    Stage->Texture = v25; /*0x84cd20*/
    if ( v25 ) /*0x84cd23*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84cd29*/
  }
  if ( v26 ) /*0x84cd37*/
  {
    if ( unk_B42CDD ) /*0x84cd39*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84cd49*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84cd4e*/
    }
  }
  ++v6->RefCount; /*0x84cd58*/
  Stage = (NiD3DTextureStage *)v6; /*0x84cd5b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84cd77*/
  if ( v6->RefCount-- == 1 ) /*0x84cd7f*/
    NiD3DPass_ReleaseToPool(v6); /*0x84cd8a*/
  ++*((_DWORD *)this + 0xE); /*0x84cd8f*/
}
