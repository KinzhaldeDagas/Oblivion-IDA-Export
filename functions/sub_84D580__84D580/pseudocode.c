void __thiscall sub_84D580(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
{
  NiD3DPass *v5; // edi
  _DWORD *v6; // ebx
  NiD3DTextureStage *v7; // esi
  int (__thiscall *v8)(_DWORD *, _DWORD); // eax
  int v9; // eax
  NiTexture *Texture; // esi
  NiTexture *v11; // ebp
  NiD3DTextureStage *v12; // esi
  unsigned int v13; // eax
  NiD3DTextureStage *v14; // esi
  int (__thiscall *v15)(_DWORD *, _DWORD); // eax
  int v16; // ebp
  NiTexture *v17; // esi
  NiD3DTextureStage *v18; // esi
  unsigned int v19; // eax

  v5 = dword_B45644; /*0x84d5b0*/
  sub_848C40((float *)Stage[1].Texture); /*0x84d5b7*/
  v6 = a5; /*0x84d5bf*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84d5c7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84d5d1*/
  v7 = Stage; /*0x84d5c3*/
  v9 = v8(a5, 0); /*0x84d5d5*/
  Texture = v7->Texture; /*0x84d5d7*/
  v11 = (NiTexture *)v9; /*0x84d5da*/
  if ( Texture == (NiTexture *)v9 ) /*0x84d5de*/
  {
    v12 = Stage; /*0x84d617*/
  }
  else
  {
    if ( Texture ) /*0x84d5e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84d5e8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84d5fe*/
    }
    v12 = Stage; /*0x84d602*/
    Stage->Texture = v11; /*0x84d606*/
    if ( v11 ) /*0x84d609*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84d60f*/
  }
  if ( v12 ) /*0x84d61d*/
  {
    if ( unk_B42CDD ) /*0x84d61f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84d62f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84d634*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84d63c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84d641*/
  Stage = v14; /*0x84d64b*/
  if ( v15(v6, 0) ) /*0x84d64f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84d663*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84d66e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84d674*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84d676*/
  }
  v17 = v14->Texture; /*0x84d67c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84d681*/
  {
    v18 = Stage; /*0x84d6ba*/
  }
  else
  {
    if ( v17 ) /*0x84d685*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84d68b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84d6a1*/
    }
    v18 = Stage; /*0x84d6a5*/
    Stage->Texture = (NiTexture *)v16; /*0x84d6a9*/
    if ( v16 ) /*0x84d6ac*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84d6b2*/
  }
  if ( v18 ) /*0x84d6c0*/
  {
    if ( unk_B42CDD ) /*0x84d6c2*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84d6d2*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84d6d7*/
    }
  }
  ++v5->RefCount; /*0x84d6e1*/
  Stage = (NiD3DTextureStage *)v5; /*0x84d6e4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84d700*/
  if ( v5->RefCount-- == 1 ) /*0x84d708*/
    NiD3DPass_ReleaseToPool(v5); /*0x84d713*/
  ++*((_DWORD *)this + 0xE); /*0x84d718*/
}
