void __thiscall sub_84E9E0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *value, _DWORD *a5)
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

  v6 = flt_B464A0[0x27]; /*0x84ea0c*/
  v7 = flt_B464A0[0x28]; /*0x84ea12*/
  v8 = (NiD3DPass *)unk_B45668; /*0x84ea18*/
  flt_B464A0[0x22] = flt_B464A0[0x26]; /*0x84ea1e*/
  v9 = flt_B464A0[0x29]; /*0x84ea23*/
  flt_B464A0[0x23] = v6; /*0x84ea28*/
  v10 = value; /*0x84ea2e*/
  flt_B464A0[0x24] = v7; /*0x84ea32*/
  flt_B464A0[0x25] = v9; /*0x84ea38*/
  sub_848C40(*(float **)&v10->Name[0xC]); /*0x84ea43*/
  v11 = a5; /*0x84ea4b*/
  Stage = (NiD3DTextureStage *)v8->Stages.data->Stage; /*0x84ea4f*/
  v18 = Stage; /*0x84ea5e*/
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x8C))(a5, 0) ) /*0x84ea62*/
  {
    value = (NiD3DPass *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*v11 + 0x8C))(v11, 0); /*0x84ea77*/
  }
  else if ( (v11[7] & 0x80) != 0 ) /*0x84ea84*/
  {
    value = (NiD3DPass *)unk_B430F0; /*0x84ea8b*/
  }
  else
  {
    value = (NiD3DPass *)LODWORD(flt_B430DC[0]); /*0x84ea97*/
  }
  Texture = Stage->Texture; /*0x84ea9b*/
  if ( Texture == (NiTexture *)value ) /*0x84eaa2*/
  {
    v16 = v18; /*0x84eadf*/
  }
  else
  {
    if ( Texture ) /*0x84eaa6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84eaac*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84eac2*/
    }
    v14 = value; /*0x84eac4*/
    v15 = value == 0; /*0x84eac8*/
    v16 = v18; /*0x84eaca*/
    v18->Texture = (NiTexture *)value; /*0x84eace*/
    if ( !v15 ) /*0x84ead1*/
      InterlockedIncrement((volatile LONG *)v14->Name); /*0x84ead7*/
  }
  if ( v16 ) /*0x84eae5*/
  {
    if ( unk_B42CDD ) /*0x84eae7*/
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x78))(v11); /*0x84eaf8*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x84eafd*/
    }
  }
  ++v8->RefCount; /*0x84eb07*/
  value = v8; /*0x84eb0a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84eb22*/
  v15 = v8->RefCount-- == 1; /*0x84eb2a*/
  if ( v15 ) /*0x84eb31*/
    NiD3DPass_ReleaseToPool(v8); /*0x84eb35*/
  ++*((_DWORD *)this + 0xE); /*0x84eb3a*/
}
