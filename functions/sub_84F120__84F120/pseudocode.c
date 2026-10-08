void __thiscall sub_84F120(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v5; // ebx
  NiD3DPass *v6; // esi
  NiD3DTextureStage *v7; // edi
  int v8; // eax
  NiTexture *Texture; // edi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // edi
  unsigned int v12; // eax
  NiD3DTextureStage *v13; // edi
  int v14; // eax
  NiTexture *v15; // edi
  NiTexture *v16; // ebp
  NiD3DTextureStage *v17; // edi
  unsigned int v18; // eax
  NiD3DTextureStage *Unk08; // edi
  int v20; // ebp
  NiTexture *v21; // edi
  NiD3DTextureStage *v22; // edi
  unsigned int v23; // eax
  NiD3DTextureStage *v25; // [esp+14h] [ebp-14h]
  NiD3DTextureStage *v26; // [esp+14h] [ebp-14h]
  NiD3DTextureStage *v27; // [esp+14h] [ebp-14h]

  v5 = (NiD3DPass *)unk_B459B4; /*0x84f14b*/
  v6 = value; /*0x84f154*/
  v7 = **(NiD3DTextureStage ***)(unk_B459B4 + 0x24); /*0x84f158*/
  v25 = v7; /*0x84f166*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f16a*/
  Texture = v7->Texture; /*0x84f16c*/
  v10 = (NiTexture *)v8; /*0x84f16f*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f173*/
  {
    v11 = v25; /*0x84f1ac*/
  }
  else
  {
    if ( Texture ) /*0x84f177*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f17d*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f193*/
    }
    v11 = v25; /*0x84f197*/
    v25->Texture = v10; /*0x84f19b*/
    if ( v10 ) /*0x84f19e*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f1a4*/
  }
  if ( v11 ) /*0x84f1b2*/
  {
    if ( unk_B42CDD ) /*0x84f1b4*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f1c4*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f1c9*/
    }
  }
  v13 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84f1d1*/
  v26 = v13; /*0x84f1e0*/
  v14 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75FD90)(v6, 1); /*0x84f1e4*/
  v15 = v13->Texture; /*0x84f1e6*/
  v16 = (NiTexture *)v14; /*0x84f1e9*/
  if ( v15 == (NiTexture *)v14 ) /*0x84f1ed*/
  {
    v17 = v26; /*0x84f226*/
  }
  else
  {
    if ( v15 ) /*0x84f1f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84f1f7*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84f20d*/
    }
    v17 = v26; /*0x84f211*/
    v26->Texture = v16; /*0x84f215*/
    if ( v16 ) /*0x84f218*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x84f21e*/
  }
  if ( v17 ) /*0x84f22c*/
  {
    if ( unk_B42CDD ) /*0x84f22e*/
    {
      v18 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f23e*/
      NiD3DTextureStage_ApplyAddressModePreset(v17, v18); /*0x84f243*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84f24b*/
  v27 = Unk08; /*0x84f25a*/
  if ( ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1) ) /*0x84f25e*/
  {
    v20 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1); /*0x84f272*/
  }
  else
  {
    v20 = unk_B430F0; /*0x84f27d*/
    if ( (v6->TexturesPerPass & 0x80) == 0 ) /*0x84f283*/
      v20 = LODWORD(flt_B430DC[0]); /*0x84f285*/
  }
  v21 = Unk08->Texture; /*0x84f28b*/
  if ( v21 == (NiTexture *)v20 ) /*0x84f290*/
  {
    v22 = v27; /*0x84f2c9*/
  }
  else
  {
    if ( v21 ) /*0x84f294*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->members) ) /*0x84f29a*/
        v21->__vftable->super.super.Destructor((NiRefObject *)v21, 1); /*0x84f2b0*/
    }
    v22 = v27; /*0x84f2b4*/
    v27->Texture = (NiTexture *)v20; /*0x84f2b8*/
    if ( v20 ) /*0x84f2bb*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x84f2c1*/
  }
  if ( v22 ) /*0x84f2cf*/
  {
    if ( unk_B42CDD ) /*0x84f2d1*/
    {
      v23 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f2e1*/
      NiD3DTextureStage_ApplyAddressModePreset(v22, v23); /*0x84f2e6*/
    }
  }
  ++v5->RefCount; /*0x84f2f0*/
  value = v5; /*0x84f2f3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f30f*/
  if ( v5->RefCount-- == 1 ) /*0x84f317*/
    NiD3DPass_ReleaseToPool(v5); /*0x84f322*/
  ++*((_DWORD *)this + 0xE); /*0x84f327*/
}
