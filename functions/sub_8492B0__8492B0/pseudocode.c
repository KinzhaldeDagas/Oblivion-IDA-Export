void __thiscall sub_8492B0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v5 = (NiD3DPass *)unk_B455E4; /*0x8492e0*/
  sub_848DA0((float *)Stage[1].Texture); /*0x8492e7*/
  v6 = a5; /*0x8492ef*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x8492f7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x849301*/
  v7 = Stage; /*0x8492f3*/
  v9 = v8(a5, 0); /*0x849305*/
  Texture = v7->Texture; /*0x849307*/
  v11 = (NiTexture *)v9; /*0x84930a*/
  if ( Texture == (NiTexture *)v9 ) /*0x84930e*/
  {
    v12 = Stage; /*0x849347*/
  }
  else
  {
    if ( Texture ) /*0x849312*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849318*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84932e*/
    }
    v12 = Stage; /*0x849332*/
    Stage->Texture = v11; /*0x849336*/
    if ( v11 ) /*0x849339*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84933f*/
  }
  if ( v12 ) /*0x84934d*/
  {
    if ( unk_B42CDD ) /*0x84934f*/
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x84935f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849364*/
    }
  }
  v15 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x90); /*0x849371*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84937b*/
  v14 = Stage; /*0x84936c*/
  v16 = v15(v6, 0); /*0x84937f*/
  v17 = v14->Texture; /*0x849381*/
  v18 = (NiTexture *)v16; /*0x849384*/
  if ( v17 == (NiTexture *)v16 ) /*0x849388*/
  {
    v19 = Stage; /*0x8493c1*/
  }
  else
  {
    if ( v17 ) /*0x84938c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849392*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x8493a8*/
    }
    v19 = Stage; /*0x8493ac*/
    Stage->Texture = v18; /*0x8493b0*/
    if ( v18 ) /*0x8493b3*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x8493b9*/
  }
  if ( v19 ) /*0x8493c7*/
  {
    if ( unk_B42CDD ) /*0x8493c9*/
    {
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x8493d9*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x8493de*/
    }
  }
  ++v5->RefCount; /*0x8493e8*/
  Stage = (NiD3DTextureStage *)v5; /*0x8493eb*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x849407*/
  if ( v5->RefCount-- == 1 ) /*0x84940f*/
    NiD3DPass_ReleaseToPool(v5); /*0x84941a*/
  ++*((_DWORD *)this + 0xE); /*0x84941f*/
}
