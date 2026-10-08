void __thiscall sub_84B040(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B4561C; /*0x84b070*/
  sub_848C40((float *)Stage[1].Texture); /*0x84b077*/
  v6 = a5; /*0x84b07f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84b087*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84b091*/
  v7 = Stage; /*0x84b083*/
  v9 = v8(a5, 0); /*0x84b095*/
  Texture = v7->Texture; /*0x84b097*/
  v11 = (NiTexture *)v9; /*0x84b09a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84b09e*/
  {
    v12 = Stage; /*0x84b0d7*/
  }
  else
  {
    if ( Texture ) /*0x84b0a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84b0a8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84b0be*/
    }
    v12 = Stage; /*0x84b0c2*/
    Stage->Texture = v11; /*0x84b0c6*/
    if ( v11 ) /*0x84b0c9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84b0cf*/
  }
  if ( v12 ) /*0x84b0dd*/
  {
    if ( unk_B42CDD ) /*0x84b0df*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84b0ef*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84b0f4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84b0fc*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84b101*/
  Stage = v14; /*0x84b10b*/
  if ( v15(v6, 0) ) /*0x84b10f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84b123*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84b12e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84b134*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84b136*/
  }
  v17 = v14->Texture; /*0x84b13c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84b141*/
  {
    v18 = Stage; /*0x84b17a*/
  }
  else
  {
    if ( v17 ) /*0x84b145*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84b14b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84b161*/
    }
    v18 = Stage; /*0x84b165*/
    Stage->Texture = (NiTexture *)v16; /*0x84b169*/
    if ( v16 ) /*0x84b16c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84b172*/
  }
  if ( v18 ) /*0x84b180*/
  {
    if ( unk_B42CDD ) /*0x84b182*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84b192*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84b197*/
    }
  }
  ++v5->RefCount; /*0x84b1a1*/
  Stage = (NiD3DTextureStage *)v5; /*0x84b1a4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84b1c0*/
  if ( v5->RefCount-- == 1 ) /*0x84b1c8*/
    NiD3DPass_ReleaseToPool(v5); /*0x84b1d3*/
  ++*((_DWORD *)this + 0xE); /*0x84b1d8*/
}
