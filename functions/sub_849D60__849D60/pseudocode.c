void __thiscall sub_849D60(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
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

  v5 = (NiD3DPass *)unk_B45608; /*0x849d90*/
  sub_848C40((float *)Stage[1].Texture); /*0x849d97*/
  v6 = a5; /*0x849d9f*/
  v8 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x849da7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x849db1*/
  v7 = Stage; /*0x849da3*/
  v9 = v8(a5, 0); /*0x849db5*/
  Texture = v7->Texture; /*0x849db7*/
  v11 = (NiTexture *)v9; /*0x849dba*/
  if ( Texture == (NiTexture *)v9 ) /*0x849dbe*/
  {
    v12 = Stage; /*0x849df7*/
  }
  else
  {
    if ( Texture ) /*0x849dc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849dc8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849dde*/
    }
    v12 = Stage; /*0x849de2*/
    Stage->Texture = v11; /*0x849de6*/
    if ( v11 ) /*0x849de9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x849def*/
  }
  if ( v12 ) /*0x849dfd*/
  {
    if ( unk_B42CDD ) /*0x849dff*/
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x849e0f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849e14*/
    }
  }
  v14 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x849e1c*/
  v15 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C); /*0x849e21*/
  Stage = v14; /*0x849e2b*/
  if ( v15(v6, 0) ) /*0x849e2f*/
  {
    v16 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 0x8C))(v6, 0); /*0x849e43*/
  }
  else
  {
    v16 = unk_B430F0; /*0x849e4e*/
    if ( (v6[7] & 0x80) == 0 ) /*0x849e54*/
      v16 = LODWORD(flt_B430DC[0]); /*0x849e56*/
  }
  v17 = v14->Texture; /*0x849e5c*/
  if ( v17 == (NiTexture *)v16 ) /*0x849e61*/
  {
    v18 = Stage; /*0x849e9a*/
  }
  else
  {
    if ( v17 ) /*0x849e65*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849e6b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x849e81*/
    }
    v18 = Stage; /*0x849e85*/
    Stage->Texture = (NiTexture *)v16; /*0x849e89*/
    if ( v16 ) /*0x849e8c*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x849e92*/
  }
  if ( v18 ) /*0x849ea0*/
  {
    if ( unk_B42CDD ) /*0x849ea2*/
    {
      v19 = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x78))(v6); /*0x849eb2*/
      NiD3DTextureStage_ApplyAddressModePreset(v18, v19); /*0x849eb7*/
    }
  }
  ++v5->RefCount; /*0x849ec1*/
  Stage = (NiD3DTextureStage *)v5; /*0x849ec4*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x849ee0*/
  if ( v5->RefCount-- == 1 ) /*0x849ee8*/
    NiD3DPass_ReleaseToPool(v5); /*0x849ef3*/
  ++*((_DWORD *)this + 0xE); /*0x849ef8*/
}
