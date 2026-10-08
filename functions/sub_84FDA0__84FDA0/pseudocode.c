void __thiscall sub_84FDA0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DPass *v7; // ebx
  NiD3DTextureStage *v8; // edi
  int v9; // ebx
  bool v10; // zf
  NiTexture *Texture; // edi
  NiD3DTextureStage *v12; // edi
  unsigned int v13; // eax
  NiD3DTextureStage *v14; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B459E8; /*0x84fdc7*/
  v7 = value; /*0x84fdd0*/
  v8 = **(NiD3DTextureStage ***)(unk_B459E8 + 0x24); /*0x84fdd4*/
  v14 = v8; /*0x84fde2*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84fde6*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84fdfa*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84fdfe*/
    v9 = unk_B430F0; /*0x84fe05*/
    if ( v10 ) /*0x84fe0b*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84fe0d*/
  }
  Texture = v8->Texture; /*0x84fe13*/
  if ( Texture == (NiTexture *)v9 ) /*0x84fe18*/
  {
    v12 = v14; /*0x84fe51*/
  }
  else
  {
    if ( Texture ) /*0x84fe1c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84fe22*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84fe38*/
    }
    v12 = v14; /*0x84fe3c*/
    v14->Texture = (NiTexture *)v9; /*0x84fe40*/
    if ( v9 ) /*0x84fe43*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84fe49*/
  }
  if ( v12 ) /*0x84fe57*/
  {
    if ( unk_B42CDD ) /*0x84fe59*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84fe6b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84fe70*/
    }
  }
  ++v6->RefCount; /*0x84fe7a*/
  value = v6; /*0x84fe7d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84fe95*/
  v10 = v6->RefCount-- == 1; /*0x84fe9d*/
  if ( v10 ) /*0x84fea4*/
    NiD3DPass_ReleaseToPool(v6); /*0x84fea8*/
  ++*((_DWORD *)this + 0xE); /*0x84fead*/
}
