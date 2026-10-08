void __thiscall sub_84D740(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = dword_B45648; /*0x84d770*/
  sub_848C40((float *)Stage[1].Texture); /*0x84d777*/
  v6 = a5; /*0x84d77f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84d787*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x84d791*/
  v7 = Stage; /*0x84d783*/
  v9 = v8(a5, 0); /*0x84d795*/
  Texture = v7->Texture; /*0x84d797*/
  v11 = (NiTexture *)v9; /*0x84d79a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84d79e*/
  {
    v12 = Stage; /*0x84d7d7*/
  }
  else
  {
    if ( Texture ) /*0x84d7a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84d7a8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84d7be*/
    }
    v12 = Stage; /*0x84d7c2*/
    Stage->Texture = v11; /*0x84d7c6*/
    if ( v11 ) /*0x84d7c9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84d7cf*/
  }
  if ( v12 ) /*0x84d7dd*/
  {
    if ( unk_B42CDD ) /*0x84d7df*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84d7ef*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84d7f4*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84d7fc*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x84d801*/
  Stage = v14; /*0x84d80b*/
  if ( v15(v6, 0) ) /*0x84d80f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x84d823*/
  }
  else
  {
    v16 = unk_B430F0; /*0x84d82e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x84d834*/
      v16 = LODWORD(flt_B430DC[0]); /*0x84d836*/
  }
  v17 = v14->Texture; /*0x84d83c*/
  if ( v17 == (NiTexture *)v16 ) /*0x84d841*/
  {
    v18 = Stage; /*0x84d87a*/
  }
  else
  {
    if ( v17 ) /*0x84d845*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84d84b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84d861*/
    }
    v18 = Stage; /*0x84d865*/
    Stage->Texture = (NiTexture *)v16; /*0x84d869*/
    if ( v16 ) /*0x84d86c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x84d872*/
  }
  if ( v18 ) /*0x84d880*/
  {
    if ( unk_B42CDD ) /*0x84d882*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x84d892*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x84d897*/
    }
  }
  ++v5->RefCount; /*0x84d8a1*/
  Stage = (NiD3DTextureStage *)v5; /*0x84d8a4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84d8c0*/
  if ( v5->RefCount-- == 1 ) /*0x84d8c8*/
    NiD3DPass_ReleaseToPool(v5); /*0x84d8d3*/
  ++*((_DWORD *)this + 0xE); /*0x84d8d8*/
}
