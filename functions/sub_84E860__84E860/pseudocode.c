void __thiscall sub_84E860(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *value, _DWORD *a5)
{
  float v6; // ecx
  float v7; // edx
  NiD3DPass *v8; // esi
  float v9; // eax
  NiD3DPass *v10; // ecx
  _DWORD *v11; // ebp
  NiD3DTextureStage *Stage; // ebx
  NiTexture *Texture; // ebx
  NiD3DPass *v14; // eax
  bool v15; // zf
  NiD3DTextureStage *v16; // ebx
  unsigned int v17; // eax
  NiD3DTextureStage *v18; // [esp+14h] [ebp-10h]

  v6 = flt_B464A0[0x27]; /*0x84e88c*/
  v7 = flt_B464A0[0x28]; /*0x84e892*/
  v8 = (NiD3DPass *)unk_B45664; /*0x84e898*/
  flt_B464A0[0x22] = flt_B464A0[0x26]; /*0x84e89e*/
  v9 = flt_B464A0[0x29]; /*0x84e8a3*/
  flt_B464A0[0x23] = v6; /*0x84e8a8*/
  v10 = value; /*0x84e8ae*/
  flt_B464A0[0x24] = v7; /*0x84e8b2*/
  flt_B464A0[0x25] = v9; /*0x84e8b8*/
  sub_848C40(*(float **)&v10->Name[0xC]); /*0x84e8c3*/
  v11 = a5; /*0x84e8cb*/
  Stage = (NiD3DTextureStage *)v8->Stages.data->Stage; /*0x84e8cf*/
  v18 = Stage; /*0x84e8de*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x8C))(a5, 0) ) /*0x84e8e2*/
  {
    value = (NiD3DPass *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 0x8C))(v11, 0); /*0x84e8f7*/
  }
  else if ( (v11[7] & 0x80) != 0 ) /*0x84e904*/
  {
    value = (NiD3DPass *)unk_B430F0; /*0x84e90b*/
  }
  else
  {
    value = (NiD3DPass *)LODWORD(flt_B430DC[0]); /*0x84e917*/
  }
  Texture = Stage->Texture; /*0x84e91b*/
  if ( Texture == (NiTexture *)value ) /*0x84e922*/
  {
    v16 = v18; /*0x84e95f*/
  }
  else
  {
    if ( Texture ) /*0x84e926*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84e92c*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84e942*/
    }
    v14 = value; /*0x84e944*/
    v15 = value == 0; /*0x84e948*/
    v16 = v18; /*0x84e94a*/
    v18->Texture = (NiTexture *)value; /*0x84e94e*/
    if ( !v15 ) /*0x84e951*/
      InterlockedIncrement((volatile LONG *)v14->Name); /*0x84e957*/
  }
  if ( v16 ) /*0x84e965*/
  {
    if ( unk_B42CDD ) /*0x84e967*/
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x78))(v11); /*0x84e978*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x84e97d*/
    }
  }
  ++v8->RefCount; /*0x84e987*/
  value = v8; /*0x84e98a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84e9a2*/
  v15 = v8->RefCount-- == 1; /*0x84e9aa*/
  if ( v15 ) /*0x84e9b1*/
    NiD3DPass_ReleaseToPool(v8); /*0x84e9b5*/
  ++*((_DWORD *)this + 0xE); /*0x84e9ba*/
}
