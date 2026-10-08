void __thiscall sub_84F7F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v5 = (NiD3DPass *)unk_B459C8; /*0x84f81b*/
  v6 = value; /*0x84f824*/
  v7 = **(NiD3DTextureStage ***)(unk_B459C8 + 0x24); /*0x84f828*/
  v25 = v7; /*0x84f836*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f83a*/
  Texture = v7->Texture; /*0x84f83c*/
  v10 = (NiTexture *)v8; /*0x84f83f*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f843*/
  {
    v11 = v25; /*0x84f87c*/
  }
  else
  {
    if ( Texture ) /*0x84f847*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f84d*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f863*/
    }
    v11 = v25; /*0x84f867*/
    v25->Texture = v10; /*0x84f86b*/
    if ( v10 ) /*0x84f86e*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f874*/
  }
  if ( v11 ) /*0x84f882*/
  {
    if ( unk_B42CDD ) /*0x84f884*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f894*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f899*/
    }
  }
  v13 = (NiD3DTextureStage *)v5->Stages.data->Texture; /*0x84f8a1*/
  v26 = v13; /*0x84f8b0*/
  v14 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75FD90)(v6, 1); /*0x84f8b4*/
  v15 = v13->Texture; /*0x84f8b6*/
  v16 = (NiTexture *)v14; /*0x84f8b9*/
  if ( v15 == (NiTexture *)v14 ) /*0x84f8bd*/
  {
    v17 = v26; /*0x84f8f6*/
  }
  else
  {
    if ( v15 ) /*0x84f8c1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x84f8c7*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x84f8dd*/
    }
    v17 = v26; /*0x84f8e1*/
    v26->Texture = v16; /*0x84f8e5*/
    if ( v16 ) /*0x84f8e8*/
      InterlockedIncrement((volatile LONG *)&v16->members); /*0x84f8ee*/
  }
  if ( v17 ) /*0x84f8fc*/
  {
    if ( unk_B42CDD ) /*0x84f8fe*/
    {
      v18 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f90e*/
      NiD3DTextureStage_ApplyAddressModePreset(v17, v18); /*0x84f913*/
    }
  }
  Unk08 = (NiD3DTextureStage *)v5->Stages.data->Unk08; /*0x84f91b*/
  v27 = Unk08; /*0x84f92a*/
  if ( ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1) ) /*0x84f92e*/
  {
    v20 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75F9E0)(v6, 1); /*0x84f942*/
  }
  else
  {
    v20 = unk_B430F0; /*0x84f94d*/
    if ( (v6->TexturesPerPass & 0x80) == 0 ) /*0x84f953*/
      v20 = LODWORD(flt_B430DC[0]); /*0x84f955*/
  }
  v21 = Unk08->Texture; /*0x84f95b*/
  if ( v21 == (NiTexture *)v20 ) /*0x84f960*/
  {
    v22 = v27; /*0x84f999*/
  }
  else
  {
    if ( v21 ) /*0x84f964*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v21->members) ) /*0x84f96a*/
        v21->__vftable->super.super.Destructor((NiRefObject *)v21, 1); /*0x84f980*/
    }
    v22 = v27; /*0x84f984*/
    v27->Texture = (NiTexture *)v20; /*0x84f988*/
    if ( v20 ) /*0x84f98b*/
      InterlockedIncrement((volatile LONG *)(v20 + 4)); /*0x84f991*/
  }
  if ( v22 ) /*0x84f99f*/
  {
    if ( unk_B42CDD ) /*0x84f9a1*/
    {
      v23 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6); /*0x84f9b1*/
      NiD3DTextureStage_ApplyAddressModePreset(v22, v23); /*0x84f9b6*/
    }
  }
  ++v5->RefCount; /*0x84f9c0*/
  value = v5; /*0x84f9c3*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f9df*/
  if ( v5->RefCount-- == 1 ) /*0x84f9e7*/
    NiD3DPass_ReleaseToPool(v5); /*0x84f9f2*/
  ++*((_DWORD *)this + 0xE); /*0x84f9f7*/
}
