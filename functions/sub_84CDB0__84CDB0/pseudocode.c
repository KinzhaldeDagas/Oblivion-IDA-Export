void __thiscall sub_84CDB0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, _DWORD *a5)
{
  NiD3DTextureStage *v5; // edi
  NiD3DPass *v6; // ebx
  _DWORD *v7; // esi
  NiD3DTextureStage *v8; // edi
  int (__thiscall *v9)(_DWORD *, _DWORD); // eax
  int v10; // eax
  NiTexture *Texture; // edi
  NiTexture *v12; // ebp
  NiD3DTextureStage *v13; // edi
  unsigned int v14; // eax
  NiD3DTextureStage *v15; // edi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  int v17; // ebp
  NiTexture *v18; // edi
  NiD3DTextureStage *v19; // edi
  unsigned int v20; // eax
  NiD3DTextureStage *v21; // edi
  int (__thiscall *v22)(_DWORD *, _DWORD); // eax
  int v23; // eax
  NiTexture *v24; // edi
  NiTexture *v25; // ebp
  NiD3DTextureStage *v26; // edi
  unsigned int v27; // eax

  v5 = Stage; /*0x84cddb*/
  v6 = dword_B456A4; /*0x84cde2*/
  sub_848DA0((float *)Stage[1].Texture); /*0x84cde9*/
  sub_848E50((float *)v5[1].Stage); /*0x84cdf4*/
  v7 = a5; /*0x84cdfc*/
  v9 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x84ce04*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84ce0e*/
  v8 = Stage; /*0x84ce00*/
  v10 = v9(a5, 0); /*0x84ce12*/
  Texture = v8->Texture; /*0x84ce14*/
  v12 = (NiTexture *)v10; /*0x84ce17*/
  if ( Texture == (NiTexture *)v10 ) /*0x84ce1b*/
  {
    v13 = Stage; /*0x84ce54*/
  }
  else
  {
    if ( Texture ) /*0x84ce1f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ce25*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ce3b*/
    }
    v13 = Stage; /*0x84ce3f*/
    Stage->Texture = v12; /*0x84ce43*/
    if ( v12 ) /*0x84ce46*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x84ce4c*/
  }
  if ( v13 ) /*0x84ce5a*/
  {
    if ( unk_B42CDD ) /*0x84ce5c*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84ce6c*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84ce71*/
    }
  }
  v15 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x84ce79*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C); /*0x84ce7e*/
  Stage = v15; /*0x84ce88*/
  if ( v16(v7, 0) ) /*0x84ce8c*/
  {
    v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0); /*0x84cea0*/
  }
  else
  {
    v17 = unk_B430F0; /*0x84ceab*/
    if ( (v7[7] & 0x80) == 0 ) /*0x84ceb1*/
      v17 = LODWORD(flt_B430DC[0]); /*0x84ceb3*/
  }
  v18 = v15->Texture; /*0x84ceb9*/
  if ( v18 == (NiTexture *)v17 ) /*0x84cebe*/
  {
    v19 = Stage; /*0x84cef7*/
  }
  else
  {
    if ( v18 ) /*0x84cec2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x84cec8*/
        v18->__vftable->super.super.Destructor((NiRefObject *)v18, 1); /*0x84cede*/
    }
    v19 = Stage; /*0x84cee2*/
    Stage->Texture = (NiTexture *)v17; /*0x84cee6*/
    if ( v17 ) /*0x84cee9*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x84ceef*/
  }
  if ( v19 ) /*0x84cefd*/
  {
    if ( unk_B42CDD ) /*0x84ceff*/
    {
      v20 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84cf0f*/
      NiD3DTextureStage_ApplyAddressModePreset(v19, v20); /*0x84cf14*/
    }
  }
  v22 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x90); /*0x84cf21*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Unk08; /*0x84cf2b*/
  v21 = Stage; /*0x84cf1c*/
  v23 = v22(v7, 0); /*0x84cf2f*/
  v24 = v21->Texture; /*0x84cf31*/
  v25 = (NiTexture *)v23; /*0x84cf34*/
  if ( v24 == (NiTexture *)v23 ) /*0x84cf38*/
  {
    v26 = Stage; /*0x84cf71*/
  }
  else
  {
    if ( v24 ) /*0x84cf3c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x84cf42*/
        v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x84cf58*/
    }
    v26 = Stage; /*0x84cf5c*/
    Stage->Texture = v25; /*0x84cf60*/
    if ( v25 ) /*0x84cf63*/
      InterlockedIncrement((volatile LONG *)&v25->members); /*0x84cf69*/
  }
  if ( v26 ) /*0x84cf77*/
  {
    if ( unk_B42CDD ) /*0x84cf79*/
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7); /*0x84cf89*/
      NiD3DTextureStage_ApplyAddressModePreset(v26, v27); /*0x84cf8e*/
    }
  }
  ++v6->RefCount; /*0x84cf98*/
  Stage = (NiD3DTextureStage *)v6; /*0x84cf9b*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84cfb7*/
  if ( v6->RefCount-- == 1 ) /*0x84cfbf*/
    NiD3DPass_ReleaseToPool(v6); /*0x84cfca*/
  ++*((_DWORD *)this + 0xE); /*0x84cfcf*/
}
