void __thiscall sub_849770(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v5 = (NiD3DPass *)unk_B455F4; /*0x8497a0*/
  sub_848DA0((float *)Stage[1].Texture); /*0x8497a7*/
  v6 = a5; /*0x8497af*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x8497b7*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Stage; /*0x8497c1*/
  v7 = Stage; /*0x8497b3*/
  v9 = v8(a5, 0); /*0x8497c5*/
  Texture = v7->Texture; /*0x8497c7*/
  v11 = (NiTexture *)v9; /*0x8497ca*/
  if ( Texture == (NiTexture *)v9 ) /*0x8497ce*/
  {
    v12 = Stage; /*0x849807*/
  }
  else
  {
    if ( Texture ) /*0x8497d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x8497d8*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8497ee*/
    }
    v12 = Stage; /*0x8497f2*/
    Stage->Texture = v11; /*0x8497f6*/
    if ( v11 ) /*0x8497f9*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x8497ff*/
  }
  if ( v12 ) /*0x84980d*/
  {
    if ( unk_B42CDD ) /*0x84980f*/
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x84981f*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x849824*/
    }
  }
  v15 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x90); /*0x849831*/
  Stage = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84983b*/
  v14 = Stage; /*0x84982c*/
  v16 = v15(v6, 0); /*0x84983f*/
  v17 = v14->Texture; /*0x849841*/
  v18 = (NiTexture *)v16; /*0x849844*/
  if ( v17 == (NiTexture *)v16 ) /*0x849848*/
  {
    v19 = Stage; /*0x849881*/
  }
  else
  {
    if ( v17 ) /*0x84984c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x849852*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x849868*/
    }
    v19 = Stage; /*0x84986c*/
    Stage->Texture = v18; /*0x849870*/
    if ( v18 ) /*0x849873*/
      InterlockedIncrement((volatile LONG *)&v18->members); /*0x849879*/
  }
  if ( v19 ) /*0x849887*/
  {
    if ( unk_B42CDD ) /*0x849889*/
    {
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x78))(v6); /*0x849899*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84989e*/
    }
  }
  ++v5->RefCount; /*0x8498a8*/
  Stage = (NiD3DTextureStage *)v5; /*0x8498ab*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x8498c7*/
  if ( v5->RefCount-- == 1 ) /*0x8498cf*/
    NiD3DPass_ReleaseToPool(v5); /*0x8498da*/
  ++*((_DWORD *)this + 0xE); /*0x8498df*/
}
