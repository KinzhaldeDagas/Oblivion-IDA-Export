void __thiscall sub_84A100(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
{
  NiD3DTextureStage *v6; // esi
  NiD3DPass *v7; // edi
  _DWORD *v8; // ebp
  NiD3DTextureStage *v9; // esi
  int (__thiscall *v10)(int, _DWORD); // eax
  NiTexture *v11; // eax
  NiTexture *Texture; // esi
  NiD3DTextureStage *v13; // esi
  unsigned int v14; // eax
  NiD3DTextureStage *v15; // esi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  NiTexture *v17; // esi
  int v18; // eax
  bool v19; // zf
  NiD3DTextureStage *v20; // esi
  unsigned int v21; // eax

  v6 = Stage; /*0x84a126*/
  v7 = (NiD3DPass *)unk_B45674; /*0x84a12d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84a134*/
  sub_848E50((float *)v6[1].Stage); /*0x84a13f*/
  v8 = (_DWORD *)a5; /*0x84a147*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84a150*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84a15a*/
  v9 = Stage; /*0x84a14b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84a15e*/
  Texture = v9->Texture; /*0x84a160*/
  a5 = (int)v11; /*0x84a165*/
  if ( Texture == v11 ) /*0x84a169*/
  {
    v13 = Stage; /*0x84a1a6*/
  }
  else
  {
    if ( Texture ) /*0x84a16d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84a173*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84a189*/
      v11 = (NiTexture *)a5; /*0x84a18b*/
    }
    v13 = Stage; /*0x84a191*/
    Stage->Texture = v11; /*0x84a195*/
    if ( v11 ) /*0x84a198*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84a19e*/
  }
  if ( v13 ) /*0x84a1ac*/
  {
    if ( unk_B42CDD ) /*0x84a1ae*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84a1bf*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84a1c4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84a1cc*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84a1d2*/
  Stage = v15; /*0x84a1dc*/
  if ( v16(v8, 0) ) /*0x84a1e0*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84a1f5*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84a202*/
  {
    a5 = unk_B430F0; /*0x84a20a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84a216*/
  }
  v17 = v15->Texture; /*0x84a21a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84a221*/
  {
    v20 = Stage; /*0x84a25e*/
  }
  else
  {
    if ( v17 ) /*0x84a225*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84a22b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84a241*/
    }
    v18 = a5; /*0x84a243*/
    v19 = a5 == 0; /*0x84a247*/
    v20 = Stage; /*0x84a249*/
    Stage->Texture = (NiTexture *)a5; /*0x84a24d*/
    if ( !v19 ) /*0x84a250*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84a256*/
  }
  if ( v20 ) /*0x84a264*/
  {
    if ( unk_B42CDD ) /*0x84a266*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84a277*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84a27c*/
    }
  }
  ++v7->RefCount; /*0x84a286*/
  Stage = (NiD3DTextureStage *)v7; /*0x84a289*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84a2a1*/
  v19 = v7->RefCount-- == 1; /*0x84a2a9*/
  if ( v19 ) /*0x84a2b0*/
    NiD3DPass_ReleaseToPool(v7); /*0x84a2b4*/
  ++*((_DWORD *)this + 0xE); /*0x84a2b9*/
}
