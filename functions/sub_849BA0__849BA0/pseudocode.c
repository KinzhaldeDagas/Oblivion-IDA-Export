void __thiscall sub_849BA0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45604; /*0x849bd0*/
  sub_848C40((float *)Stage[1].Texture); /*0x849bd7*/
  v6 = a5; /*0x849bdf*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x849be7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x849bf1*/
  v7 = Stage; /*0x849be3*/
  v9 = v8(a5, 0); /*0x849bf5*/
  Texture = v7->Texture; /*0x849bf7*/
  v11 = (NiTexture *)v9; /*0x849bfa*/
  if ( Texture == (NiTexture *)v9 ) /*0x849bfe*/
  {
    v12 = Stage; /*0x849c37*/
  }
  else
  {
    if ( Texture ) /*0x849c02*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849c08*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849c1e*/
    }
    v12 = Stage; /*0x849c22*/
    Stage->Texture = v11; /*0x849c26*/
    if ( v11 ) /*0x849c29*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x849c2f*/
  }
  if ( v12 ) /*0x849c3d*/
  {
    if ( unk_B42CDD ) /*0x849c3f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x849c4f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849c54*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x849c5c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x849c61*/
  Stage = v14; /*0x849c6b*/
  if ( v15(v6, 0) ) /*0x849c6f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x849c83*/
  }
  else
  {
    v16 = unk_B430F0; /*0x849c8e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x849c94*/
      v16 = LODWORD(flt_B430DC[0]); /*0x849c96*/
  }
  v17 = v14->Texture; /*0x849c9c*/
  if ( v17 == (NiTexture *)v16 ) /*0x849ca1*/
  {
    v18 = Stage; /*0x849cda*/
  }
  else
  {
    if ( v17 ) /*0x849ca5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849cab*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x849cc1*/
    }
    v18 = Stage; /*0x849cc5*/
    Stage->Texture = (NiTexture *)v16; /*0x849cc9*/
    if ( v16 ) /*0x849ccc*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x849cd2*/
  }
  if ( v18 ) /*0x849ce0*/
  {
    if ( unk_B42CDD ) /*0x849ce2*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x849cf2*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x849cf7*/
    }
  }
  ++v5->RefCount; /*0x849d01*/
  Stage = (NiD3DTextureStage *)v5; /*0x849d04*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x849d20*/
  if ( v5->RefCount-- == 1 ) /*0x849d28*/
    NiD3DPass_ReleaseToPool(v5); /*0x849d33*/
  ++*((_DWORD *)this + 0xE); /*0x849d38*/
}
