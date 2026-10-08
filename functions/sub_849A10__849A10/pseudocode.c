void __thiscall sub_849A10(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
{
  NiD3DPass *v5; // esi
  int v6; // ebx
  NiD3DTextureStage *v7; // edi
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  NiTexture *Texture; // edi
  NiTexture *v11; // ebp
  NiD3DTextureStage *v12; // edi
  unsigned int v13; // eax
  NiD3DTextureStage *v14; // edi
  int (__thiscall *v15)(int, _DWORD); // eax
  int v16; // eax
  NiTexture *v17; // edi
  NiTexture *v18; // ebp
  NiD3DTextureStage *v19; // edi
  unsigned int v20; // eax

  v5 = (NiD3DPass *)unk_B455FC; /*0x849a40*/
  sub_848DA0((float *)Stage[1].Texture); /*0x849a47*/
  v6 = a5; /*0x849a4f*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x849a57*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x849a61*/
  v7 = Stage; /*0x849a53*/
  v9 = v8(a5, 0); /*0x849a65*/
  Texture = v7->Texture; /*0x849a67*/
  v11 = (NiTexture *)v9; /*0x849a6a*/
  if ( Texture == (NiTexture *)v9 ) /*0x849a6e*/
  {
    v12 = Stage; /*0x849aa7*/
  }
  else
  {
    if ( Texture ) /*0x849a72*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849a78*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849a8e*/
    }
    v12 = Stage; /*0x849a92*/
    Stage->Texture = v11; /*0x849a96*/
    if ( v11 ) /*0x849a99*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x849a9f*/
  }
  if ( v12 ) /*0x849aad*/
  {
    if ( unk_B42CDD ) /*0x849aaf*/
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x849abf*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849ac4*/
    }
  }
  v15 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x90); /*0x849ad1*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x849adb*/
  v14 = Stage; /*0x849acc*/
  v16 = v15(v6, 0); /*0x849adf*/
  v17 = v14->Texture; /*0x849ae1*/
  v18 = (NiTexture *)v16; /*0x849ae4*/
  if ( v17 == (NiTexture *)v16 ) /*0x849ae8*/
  {
    v19 = Stage; /*0x849b21*/
  }
  else
  {
    if ( v17 ) /*0x849aec*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849af2*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x849b08*/
    }
    v19 = Stage; /*0x849b0c*/
    Stage->Texture = v18; /*0x849b10*/
    if ( v18 ) /*0x849b13*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x849b19*/
  }
  if ( v19 ) /*0x849b27*/
  {
    if ( unk_B42CDD ) /*0x849b29*/
    {
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x849b39*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x849b3e*/
    }
  }
  ++v5->RefCount; /*0x849b48*/
  Stage = (NiD3DTextureStage *)v5; /*0x849b4b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x849b67*/
  if ( v5->RefCount-- == 1 ) /*0x849b6f*/
    NiD3DPass_ReleaseToPool(v5); /*0x849b7a*/
  ++*((_DWORD *)this + 0xE); /*0x849b7f*/
}
