void __thiscall sub_84E620(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84e64b*/
  v6 = (NiD3DPass *)unk_B456B8; /*0x84e652*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84e659*/
  sub_848E50((float *)v5[1].Stage); /*0x84e664*/
  v7 = a5; /*0x84e66c*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84e674*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84e67e*/
  v8 = Stage; /*0x84e670*/
  v10 = v9(a5, 0); /*0x84e682*/
  Texture = v8->Texture; /*0x84e684*/
  v12 = (NiTexture *)v10; /*0x84e687*/
  if ( Texture == (NiTexture *)v10 ) /*0x84e68b*/
  {
    v13 = Stage; /*0x84e6c4*/
  }
  else
  {
    if ( Texture ) /*0x84e68f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84e695*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84e6ab*/
    }
    v13 = Stage; /*0x84e6af*/
    Stage->Texture = v12; /*0x84e6b3*/
    if ( v12 ) /*0x84e6b6*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84e6bc*/
  }
  if ( v13 ) /*0x84e6ca*/
  {
    if ( unk_B42CDD ) /*0x84e6cc*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e6dc*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84e6e1*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84e6e9*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84e6ee*/
  Stage = v15; /*0x84e6f8*/
  if ( v16(v7, 0) ) /*0x84e6fc*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84e710*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84e71b*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84e721*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84e723*/
  }
  v18 = v15->Texture; /*0x84e729*/
  if ( v18 == (NiTexture *)v17 ) /*0x84e72e*/
  {
    v19 = Stage; /*0x84e767*/
  }
  else
  {
    if ( v18 ) /*0x84e732*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84e738*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84e74e*/
    }
    v19 = Stage; /*0x84e752*/
    Stage->Texture = (NiTexture *)v17; /*0x84e756*/
    if ( v17 ) /*0x84e759*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84e75f*/
  }
  if ( v19 ) /*0x84e76d*/
  {
    if ( unk_B42CDD ) /*0x84e76f*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e77f*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84e784*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84e791*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84e79b*/
  v21 = Stage; /*0x84e78c*/
  v23 = v22(v7, 0); /*0x84e79f*/
  v24 = v21->Texture; /*0x84e7a1*/
  v25 = (NiTexture *)v23; /*0x84e7a4*/
  if ( v24 == (NiTexture *)v23 ) /*0x84e7a8*/
  {
    v26 = Stage; /*0x84e7e1*/
  }
  else
  {
    if ( v24 ) /*0x84e7ac*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84e7b2*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84e7c8*/
    }
    v26 = Stage; /*0x84e7cc*/
    Stage->Texture = v25; /*0x84e7d0*/
    if ( v25 ) /*0x84e7d3*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84e7d9*/
  }
  if ( v26 ) /*0x84e7e7*/
  {
    if ( unk_B42CDD ) /*0x84e7e9*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84e7f9*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84e7fe*/
    }
  }
  ++v6->RefCount; /*0x84e808*/
  Stage = (NiD3DTextureStage *)v6; /*0x84e80b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84e827*/
  if ( v6->RefCount-- == 1 ) /*0x84e82f*/
    NiD3DPass_ReleaseToPool(v6); /*0x84e83a*/
  ++*((_DWORD *)this + 0xE); /*0x84e83f*/
}
