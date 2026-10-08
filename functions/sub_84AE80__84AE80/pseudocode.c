void __thiscall sub_84AE80(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45618; /*0x84aeb0*/
  sub_848C40((float *)Stage[1].Texture); /*0x84aeb7*/
  v6 = a5; /*0x84aebf*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84aec7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84aed1*/
  v7 = Stage; /*0x84aec3*/
  v9 = v8(a5, 0); /*0x84aed5*/
  Texture = v7->Texture; /*0x84aed7*/
  v11 = (NiTexture *)v9; /*0x84aeda*/
  if ( Texture == (NiTexture *)v9 ) /*0x84aede*/
  {
    v12 = Stage; /*0x84af17*/
  }
  else
  {
    if ( Texture ) /*0x84aee2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84aee8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84aefe*/
    }
    v12 = Stage; /*0x84af02*/
    Stage->Texture = v11; /*0x84af06*/
    if ( v11 ) /*0x84af09*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84af0f*/
  }
  if ( v12 ) /*0x84af1d*/
  {
    if ( unk_B42CDD ) /*0x84af1f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84af2f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84af34*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84af3c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84af41*/
  Stage = v14; /*0x84af4b*/
  if ( v15(v6, 0) ) /*0x84af4f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84af63*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84af6e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84af74*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84af76*/
  }
  v17 = v14->Texture; /*0x84af7c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84af81*/
  {
    v18 = Stage; /*0x84afba*/
  }
  else
  {
    if ( v17 ) /*0x84af85*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84af8b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84afa1*/
    }
    v18 = Stage; /*0x84afa5*/
    Stage->Texture = (NiTexture *)v16; /*0x84afa9*/
    if ( v16 ) /*0x84afac*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84afb2*/
  }
  if ( v18 ) /*0x84afc0*/
  {
    if ( unk_B42CDD ) /*0x84afc2*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84afd2*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84afd7*/
    }
  }
  ++v5->RefCount; /*0x84afe1*/
  Stage = (NiD3DTextureStage *)v5; /*0x84afe4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84b000*/
  if ( v5->RefCount-- == 1 ) /*0x84b008*/
    NiD3DPass_ReleaseToPool(v5); /*0x84b013*/
  ++*((_DWORD *)this + 0xE); /*0x84b018*/
}
