void __thiscall sub_849550(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v5 = (NiD3DPass *)unk_B455EC; /*0x849580*/
  sub_848DA0((float *)Stage[1].Texture); /*0x849587*/
  v6 = a5; /*0x84958f*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x849597*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x8495a1*/
  v7 = Stage; /*0x849593*/
  v9 = v8(a5, 0); /*0x8495a5*/
  Texture = v7->Texture; /*0x8495a7*/
  v11 = (NiTexture *)v9; /*0x8495aa*/
  if ( Texture == (NiTexture *)v9 ) /*0x8495ae*/
  {
    v12 = Stage; /*0x8495e7*/
  }
  else
  {
    if ( Texture ) /*0x8495b2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x8495b8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8495ce*/
    }
    v12 = Stage; /*0x8495d2*/
    Stage->Texture = v11; /*0x8495d6*/
    if ( v11 ) /*0x8495d9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x8495df*/
  }
  if ( v12 ) /*0x8495ed*/
  {
    if ( unk_B42CDD ) /*0x8495ef*/
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x8495ff*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849604*/
    }
  }
  v15 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x90); /*0x849611*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84961b*/
  v14 = Stage; /*0x84960c*/
  v16 = v15(v6, 0); /*0x84961f*/
  v17 = v14->Texture; /*0x849621*/
  v18 = (NiTexture *)v16; /*0x849624*/
  if ( v17 == (NiTexture *)v16 ) /*0x849628*/
  {
    v19 = Stage; /*0x849661*/
  }
  else
  {
    if ( v17 ) /*0x84962c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849632*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x849648*/
    }
    v19 = Stage; /*0x84964c*/
    Stage->Texture = v18; /*0x849650*/
    if ( v18 ) /*0x849653*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x849659*/
  }
  if ( v19 ) /*0x849667*/
  {
    if ( unk_B42CDD ) /*0x849669*/
    {
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x849679*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84967e*/
    }
  }
  ++v5->RefCount; /*0x849688*/
  Stage = (NiD3DTextureStage *)v5; /*0x84968b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8496a7*/
  if ( v5->RefCount-- == 1 ) /*0x8496af*/
    NiD3DPass_ReleaseToPool(v5); /*0x8496ba*/
  ++*((_DWORD *)this + 0xE); /*0x8496bf*/
}
