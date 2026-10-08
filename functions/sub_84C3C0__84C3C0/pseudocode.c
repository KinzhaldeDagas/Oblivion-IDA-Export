void __thiscall sub_84C3C0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45634; /*0x84c3f0*/
  sub_848C40((float *)Stage[1].Texture); /*0x84c3f7*/
  v6 = a5; /*0x84c3ff*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84c407*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84c411*/
  v7 = Stage; /*0x84c403*/
  v9 = v8(a5, 0); /*0x84c415*/
  Texture = v7->Texture; /*0x84c417*/
  v11 = (NiTexture *)v9; /*0x84c41a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84c41e*/
  {
    v12 = Stage; /*0x84c457*/
  }
  else
  {
    if ( Texture ) /*0x84c422*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c428*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c43e*/
    }
    v12 = Stage; /*0x84c442*/
    Stage->Texture = v11; /*0x84c446*/
    if ( v11 ) /*0x84c449*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84c44f*/
  }
  if ( v12 ) /*0x84c45d*/
  {
    if ( unk_B42CDD ) /*0x84c45f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84c46f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84c474*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84c47c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84c481*/
  Stage = v14; /*0x84c48b*/
  if ( v15(v6, 0) ) /*0x84c48f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84c4a3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84c4ae*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84c4b4*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84c4b6*/
  }
  v17 = v14->Texture; /*0x84c4bc*/
  if ( v17 == (NiTexture *)v16 ) /*0x84c4c1*/
  {
    v18 = Stage; /*0x84c4fa*/
  }
  else
  {
    if ( v17 ) /*0x84c4c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84c4cb*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84c4e1*/
    }
    v18 = Stage; /*0x84c4e5*/
    Stage->Texture = (NiTexture *)v16; /*0x84c4e9*/
    if ( v16 ) /*0x84c4ec*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84c4f2*/
  }
  if ( v18 ) /*0x84c500*/
  {
    if ( unk_B42CDD ) /*0x84c502*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84c512*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84c517*/
    }
  }
  ++v5->RefCount; /*0x84c521*/
  Stage = (NiD3DTextureStage *)v5; /*0x84c524*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84c540*/
  if ( v5->RefCount-- == 1 ) /*0x84c548*/
    NiD3DPass_ReleaseToPool(v5); /*0x84c553*/
  ++*((_DWORD *)this + 0xE); /*0x84c558*/
}
