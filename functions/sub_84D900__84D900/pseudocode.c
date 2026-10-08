void __thiscall sub_84D900(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x84d926*/
  v7 = dword_B456A8; /*0x84d92d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84d934*/
  sub_848E50((float *)v6[1].Stage); /*0x84d93f*/
  v8 = (_DWORD *)a5; /*0x84d947*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84d950*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84d95a*/
  v9 = Stage; /*0x84d94b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84d95e*/
  Texture = v9->Texture; /*0x84d960*/
  a5 = (int)v11; /*0x84d965*/
  if ( Texture == v11 ) /*0x84d969*/
  {
    v13 = Stage; /*0x84d9a6*/
  }
  else
  {
    if ( Texture ) /*0x84d96d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84d973*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84d989*/
      v11 = (NiTexture *)a5; /*0x84d98b*/
    }
    v13 = Stage; /*0x84d991*/
    Stage->Texture = v11; /*0x84d995*/
    if ( v11 ) /*0x84d998*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84d99e*/
  }
  if ( v13 ) /*0x84d9ac*/
  {
    if ( unk_B42CDD ) /*0x84d9ae*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84d9bf*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84d9c4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84d9cc*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84d9d2*/
  Stage = v15; /*0x84d9dc*/
  if ( v16(v8, 0) ) /*0x84d9e0*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84d9f5*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84da02*/
  {
    a5 = unk_B430F0; /*0x84da0a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84da16*/
  }
  v17 = v15->Texture; /*0x84da1a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84da21*/
  {
    v20 = Stage; /*0x84da5e*/
  }
  else
  {
    if ( v17 ) /*0x84da25*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84da2b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84da41*/
    }
    v18 = a5; /*0x84da43*/
    v19 = a5 == 0; /*0x84da47*/
    v20 = Stage; /*0x84da49*/
    Stage->Texture = (NiTexture *)a5; /*0x84da4d*/
    if ( !v19 ) /*0x84da50*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84da56*/
  }
  if ( v20 ) /*0x84da64*/
  {
    if ( unk_B42CDD ) /*0x84da66*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84da77*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84da7c*/
    }
  }
  ++v7->RefCount; /*0x84da86*/
  Stage = (NiD3DTextureStage *)v7; /*0x84da89*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84daa1*/
  v19 = v7->RefCount-- == 1; /*0x84daa9*/
  if ( v19 ) /*0x84dab0*/
    NiD3DPass_ReleaseToPool(v7); /*0x84dab4*/
  ++*((_DWORD *)this + 0xE); /*0x84dab9*/
}
