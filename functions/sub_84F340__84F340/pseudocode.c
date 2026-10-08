void __thiscall sub_84F340(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v5; // edi
  float *v6; // esi
  NiD3DTextureStage *v7; // ebx
  int v8; // eax
  NiTexture *Texture; // ebx
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v13; // ebx
  int v14; // eax
  NiTexture *v15; // ebx
  NiTexture *v16; // ebp
  NiD3DTextureStage *v17; // ebx
  unsigned int v18; // eax
  NiD3DTextureStage *v20; // [esp+14h] [ebp-14h]
  NiD3DTextureStage *v21; // [esp+14h] [ebp-14h]

  v5 = (NiD3DPass *)unk_B459B8; /*0x84f36b*/
  v6 = (float *)value; /*0x84f374*/
  v7 = **(NiD3DTextureStage ***)(unk_B459B8 + 0x24); /*0x84f378*/
  v20 = v7; /*0x84f386*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f38a*/
  Texture = v7->Texture; /*0x84f38c*/
  v10 = (NiTexture *)v8; /*0x84f38f*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f393*/
  {
    v11 = v20; /*0x84f3cc*/
  }
  else
  {
    if ( Texture ) /*0x84f397*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f39d*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f3b3*/
    }
    v11 = v20; /*0x84f3b7*/
    v20->Texture = v10; /*0x84f3bb*/
    if ( v10 ) /*0x84f3be*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f3c4*/
  }
  if ( v11 ) /*0x84f3d2*/
  {
    if ( unk_B42CDD ) /*0x84f3d4*/
    {
      v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 0x78))(v6); /*0x84f3e4*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f3e9*/
    }
  }
  v13 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84f3f1*/
  v21 = v13; /*0x84f400*/
  v14 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)v6 + 0x88))(v6, 1); /*0x84f404*/
  v15 = v13->Texture; /*0x84f406*/
  v16 = (NiTexture *)v14; /*0x84f409*/
  if ( v15 == (NiTexture *)v14 ) /*0x84f40d*/
  {
    v17 = v21; /*0x84f446*/
  }
  else
  {
    if ( v15 ) /*0x84f411*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84f417*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84f42d*/
    }
    v17 = v21; /*0x84f431*/
    v21->Texture = v16; /*0x84f435*/
    if ( v16 ) /*0x84f438*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x84f43e*/
  }
  if ( v17 ) /*0x84f44c*/
  {
    if ( unk_B42CDD ) /*0x84f44e*/
    {
      v18 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 0x78))(v6); /*0x84f45e*/
      NiD3DTextureStage_ApplyAddressModePreset(v17, v18); /*0x84f463*/
    }
  }
  flt_B464A0[0x62] = v6[0x2A]; /*0x84f46e*/
  flt_B464A0[0x63] = v6[0x2B]; /*0x84f47a*/
  flt_B464A0[0x64] = v6[0x2C]; /*0x84f486*/
  flt_B464A0[0x65] = v6[0x2D]; /*0x84f496*/
  ++v5->RefCount; /*0x84f49c*/
  value = v5; /*0x84f49f*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f4bb*/
  if ( v5->RefCount-- == 1 ) /*0x84f4c3*/
    NiD3DPass_ReleaseToPool(v5); /*0x84f4ce*/
  ++*((_DWORD *)this + 0xE); /*0x84f4d3*/
}
