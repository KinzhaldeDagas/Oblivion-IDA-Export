void __thiscall sub_84A740(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = Stage; /*0x84a76b*/
  v6 = (NiD3DPass *)unk_B45678; /*0x84a772*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84a779*/
  sub_848E50((float *)v5[1].Stage); /*0x84a784*/
  v7 = a5; /*0x84a78c*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84a794*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84a79e*/
  v8 = Stage; /*0x84a790*/
  v10 = v9(a5, 0); /*0x84a7a2*/
  Texture = v8->Texture; /*0x84a7a4*/
  v12 = (NiTexture *)v10; /*0x84a7a7*/
  if ( Texture == (NiTexture *)v10 ) /*0x84a7ab*/
  {
    v13 = Stage; /*0x84a7e4*/
  }
  else
  {
    if ( Texture ) /*0x84a7af*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84a7b5*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84a7cb*/
    }
    v13 = Stage; /*0x84a7cf*/
    Stage->Texture = v12; /*0x84a7d3*/
    if ( v12 ) /*0x84a7d6*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84a7dc*/
  }
  if ( v13 ) /*0x84a7ea*/
  {
    if ( unk_B42CDD ) /*0x84a7ec*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84a7fc*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84a801*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84a809*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84a80e*/
  Stage = v15; /*0x84a818*/
  if ( v16(v7, 0) ) /*0x84a81c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84a830*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84a83b*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84a841*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84a843*/
  }
  v18 = v15->Texture; /*0x84a849*/
  if ( v18 == (NiTexture *)v17 ) /*0x84a84e*/
  {
    v19 = Stage; /*0x84a887*/
  }
  else
  {
    if ( v18 ) /*0x84a852*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84a858*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84a86e*/
    }
    v19 = Stage; /*0x84a872*/
    Stage->Texture = (NiTexture *)v17; /*0x84a876*/
    if ( v17 ) /*0x84a879*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84a87f*/
  }
  if ( v19 ) /*0x84a88d*/
  {
    if ( unk_B42CDD ) /*0x84a88f*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84a89f*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84a8a4*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84a8b1*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84a8bb*/
  v21 = Stage; /*0x84a8ac*/
  v23 = v22(v7, 0); /*0x84a8bf*/
  v24 = v21->Texture; /*0x84a8c1*/
  v25 = (NiTexture *)v23; /*0x84a8c4*/
  if ( v24 == (NiTexture *)v23 ) /*0x84a8c8*/
  {
    v26 = Stage; /*0x84a901*/
  }
  else
  {
    if ( v24 ) /*0x84a8cc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84a8d2*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84a8e8*/
    }
    v26 = Stage; /*0x84a8ec*/
    Stage->Texture = v25; /*0x84a8f0*/
    if ( v25 ) /*0x84a8f3*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84a8f9*/
  }
  if ( v26 ) /*0x84a907*/
  {
    if ( unk_B42CDD ) /*0x84a909*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84a919*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84a91e*/
    }
  }
  ++v6->RefCount; /*0x84a928*/
  Stage = (NiD3DTextureStage *)v6; /*0x84a92b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84a947*/
  if ( v6->RefCount-- == 1 ) /*0x84a94f*/
    NiD3DPass_ReleaseToPool(v6); /*0x84a95a*/
  ++*((_DWORD *)this + 0xE); /*0x84a95f*/
}
