void __thiscall sub_84B3E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x84b406*/
  v7 = (NiD3DPass *)unk_B45684; /*0x84b40d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84b414*/
  sub_848E50((float *)v6[1].Stage); /*0x84b41f*/
  v8 = (_DWORD *)a5; /*0x84b427*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84b430*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84b43a*/
  v9 = Stage; /*0x84b42b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84b43e*/
  Texture = v9->Texture; /*0x84b440*/
  a5 = (int)v11; /*0x84b445*/
  if ( Texture == v11 ) /*0x84b449*/
  {
    v13 = Stage; /*0x84b486*/
  }
  else
  {
    if ( Texture ) /*0x84b44d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84b453*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84b469*/
      v11 = (NiTexture *)a5; /*0x84b46b*/
    }
    v13 = Stage; /*0x84b471*/
    Stage->Texture = v11; /*0x84b475*/
    if ( v11 ) /*0x84b478*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84b47e*/
  }
  if ( v13 ) /*0x84b48c*/
  {
    if ( unk_B42CDD ) /*0x84b48e*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84b49f*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84b4a4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84b4ac*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84b4b2*/
  Stage = v15; /*0x84b4bc*/
  if ( v16(v8, 0) ) /*0x84b4c0*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84b4d5*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84b4e2*/
  {
    a5 = unk_B430F0; /*0x84b4ea*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84b4f6*/
  }
  v17 = v15->Texture; /*0x84b4fa*/
  if ( v17 == (NiTexture *)a5 ) /*0x84b501*/
  {
    v20 = Stage; /*0x84b53e*/
  }
  else
  {
    if ( v17 ) /*0x84b505*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84b50b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84b521*/
    }
    v18 = a5; /*0x84b523*/
    v19 = a5 == 0; /*0x84b527*/
    v20 = Stage; /*0x84b529*/
    Stage->Texture = (NiTexture *)a5; /*0x84b52d*/
    if ( !v19 ) /*0x84b530*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84b536*/
  }
  if ( v20 ) /*0x84b544*/
  {
    if ( unk_B42CDD ) /*0x84b546*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84b557*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84b55c*/
    }
  }
  ++v7->RefCount; /*0x84b566*/
  Stage = (NiD3DTextureStage *)v7; /*0x84b569*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84b581*/
  v19 = v7->RefCount-- == 1; /*0x84b589*/
  if ( v19 ) /*0x84b590*/
    NiD3DPass_ReleaseToPool(v7); /*0x84b594*/
  ++*((_DWORD *)this + 0xE); /*0x84b599*/
}
