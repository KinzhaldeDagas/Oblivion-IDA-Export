void __thiscall sub_84C200(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45630; /*0x84c230*/
  sub_848C40((float *)Stage[1].Texture); /*0x84c237*/
  v6 = a5; /*0x84c23f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84c247*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84c251*/
  v7 = Stage; /*0x84c243*/
  v9 = v8(a5, 0); /*0x84c255*/
  Texture = v7->Texture; /*0x84c257*/
  v11 = (NiTexture *)v9; /*0x84c25a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84c25e*/
  {
    v12 = Stage; /*0x84c297*/
  }
  else
  {
    if ( Texture ) /*0x84c262*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c268*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c27e*/
    }
    v12 = Stage; /*0x84c282*/
    Stage->Texture = v11; /*0x84c286*/
    if ( v11 ) /*0x84c289*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84c28f*/
  }
  if ( v12 ) /*0x84c29d*/
  {
    if ( unk_B42CDD ) /*0x84c29f*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84c2af*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84c2b4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84c2bc*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84c2c1*/
  Stage = v14; /*0x84c2cb*/
  if ( v15(v6, 0) ) /*0x84c2cf*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84c2e3*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84c2ee*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84c2f4*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84c2f6*/
  }
  v17 = v14->Texture; /*0x84c2fc*/
  if ( v17 == (NiTexture *)v16 ) /*0x84c301*/
  {
    v18 = Stage; /*0x84c33a*/
  }
  else
  {
    if ( v17 ) /*0x84c305*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84c30b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84c321*/
    }
    v18 = Stage; /*0x84c325*/
    Stage->Texture = (NiTexture *)v16; /*0x84c329*/
    if ( v16 ) /*0x84c32c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84c332*/
  }
  if ( v18 ) /*0x84c340*/
  {
    if ( unk_B42CDD ) /*0x84c342*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84c352*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84c357*/
    }
  }
  ++v5->RefCount; /*0x84c361*/
  Stage = (NiD3DTextureStage *)v5; /*0x84c364*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84c380*/
  if ( v5->RefCount-- == 1 ) /*0x84c388*/
    NiD3DPass_ReleaseToPool(v5); /*0x84c393*/
  ++*((_DWORD *)this + 0xE); /*0x84c398*/
}
