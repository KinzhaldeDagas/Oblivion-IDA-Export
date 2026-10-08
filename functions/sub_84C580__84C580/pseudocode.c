void __thiscall sub_84C580(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x84c5a6*/
  v7 = (NiD3DPass *)unk_B45698; /*0x84c5ad*/
  sub_848C40((float *)Stage[1].Texture); /*0x84c5b4*/
  sub_848E50((float *)v6[1].Stage); /*0x84c5bf*/
  v8 = (_DWORD *)a5; /*0x84c5c7*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84c5d0*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84c5da*/
  v9 = Stage; /*0x84c5cb*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84c5de*/
  Texture = v9->Texture; /*0x84c5e0*/
  a5 = (int)v11; /*0x84c5e5*/
  if ( Texture == v11 ) /*0x84c5e9*/
  {
    v13 = Stage; /*0x84c626*/
  }
  else
  {
    if ( Texture ) /*0x84c5ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c5f3*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c609*/
      v11 = (NiTexture *)a5; /*0x84c60b*/
    }
    v13 = Stage; /*0x84c611*/
    Stage->Texture = v11; /*0x84c615*/
    if ( v11 ) /*0x84c618*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84c61e*/
  }
  if ( v13 ) /*0x84c62c*/
  {
    if ( unk_B42CDD ) /*0x84c62e*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84c63f*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84c644*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84c64c*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84c652*/
  Stage = v15; /*0x84c65c*/
  if ( v16(v8, 0) ) /*0x84c660*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84c675*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84c682*/
  {
    a5 = unk_B430F0; /*0x84c68a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84c696*/
  }
  v17 = v15->Texture; /*0x84c69a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84c6a1*/
  {
    v20 = Stage; /*0x84c6de*/
  }
  else
  {
    if ( v17 ) /*0x84c6a5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84c6ab*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84c6c1*/
    }
    v18 = a5; /*0x84c6c3*/
    v19 = a5 == 0; /*0x84c6c7*/
    v20 = Stage; /*0x84c6c9*/
    Stage->Texture = (NiTexture *)a5; /*0x84c6cd*/
    if ( !v19 ) /*0x84c6d0*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84c6d6*/
  }
  if ( v20 ) /*0x84c6e4*/
  {
    if ( unk_B42CDD ) /*0x84c6e6*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84c6f7*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84c6fc*/
    }
  }
  ++v7->RefCount; /*0x84c706*/
  Stage = (NiD3DTextureStage *)v7; /*0x84c709*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84c721*/
  v19 = v7->RefCount-- == 1; /*0x84c729*/
  if ( v19 ) /*0x84c730*/
    NiD3DPass_ReleaseToPool(v7); /*0x84c734*/
  ++*((_DWORD *)this + 0xE); /*0x84c739*/
}
