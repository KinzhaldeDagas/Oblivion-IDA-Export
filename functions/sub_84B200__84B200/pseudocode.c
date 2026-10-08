void __thiscall sub_84B200(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x84b226*/
  v7 = (NiD3DPass *)unk_B45680; /*0x84b22d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84b234*/
  sub_848E50((float *)v6[1].Stage); /*0x84b23f*/
  v8 = (_DWORD *)a5; /*0x84b247*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84b250*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84b25a*/
  v9 = Stage; /*0x84b24b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84b25e*/
  Texture = v9->Texture; /*0x84b260*/
  a5 = (int)v11; /*0x84b265*/
  if ( Texture == v11 ) /*0x84b269*/
  {
    v13 = Stage; /*0x84b2a6*/
  }
  else
  {
    if ( Texture ) /*0x84b26d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84b273*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84b289*/
      v11 = (NiTexture *)a5; /*0x84b28b*/
    }
    v13 = Stage; /*0x84b291*/
    Stage->Texture = v11; /*0x84b295*/
    if ( v11 ) /*0x84b298*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84b29e*/
  }
  if ( v13 ) /*0x84b2ac*/
  {
    if ( unk_B42CDD ) /*0x84b2ae*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84b2bf*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84b2c4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84b2cc*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84b2d2*/
  Stage = v15; /*0x84b2dc*/
  if ( v16(v8, 0) ) /*0x84b2e0*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84b2f5*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84b302*/
  {
    a5 = unk_B430F0; /*0x84b30a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84b316*/
  }
  v17 = v15->Texture; /*0x84b31a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84b321*/
  {
    v20 = Stage; /*0x84b35e*/
  }
  else
  {
    if ( v17 ) /*0x84b325*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84b32b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84b341*/
    }
    v18 = a5; /*0x84b343*/
    v19 = a5 == 0; /*0x84b347*/
    v20 = Stage; /*0x84b349*/
    Stage->Texture = (NiTexture *)a5; /*0x84b34d*/
    if ( !v19 ) /*0x84b350*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84b356*/
  }
  if ( v20 ) /*0x84b364*/
  {
    if ( unk_B42CDD ) /*0x84b366*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84b377*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84b37c*/
    }
  }
  ++v7->RefCount; /*0x84b386*/
  Stage = (NiD3DTextureStage *)v7; /*0x84b389*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84b3a1*/
  v19 = v7->RefCount-- == 1; /*0x84b3a9*/
  if ( v19 ) /*0x84b3b0*/
    NiD3DPass_ReleaseToPool(v7); /*0x84b3b4*/
  ++*((_DWORD *)this + 0xE); /*0x84b3b9*/
}
