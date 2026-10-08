void __thiscall sub_84FC70(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B459E4; /*0x84fc97*/
  v7 = value; /*0x84fca0*/
  v8 = **(NiD3DTextureStage ***)(unk_B459E4 + 0x24); /*0x84fca4*/
  v14 = v8; /*0x84fcb2*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84fcb6*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84fcca*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84fcce*/
    v9 = unk_B430F0; /*0x84fcd5*/
    if ( v10 ) /*0x84fcdb*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84fcdd*/
  }
  Texture = v8->Texture; /*0x84fce3*/
  if ( Texture == (NiTexture *)v9 ) /*0x84fce8*/
  {
    v12 = v14; /*0x84fd21*/
  }
  else
  {
    if ( Texture ) /*0x84fcec*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84fcf2*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84fd08*/
    }
    v12 = v14; /*0x84fd0c*/
    v14->Texture = (NiTexture *)v9; /*0x84fd10*/
    if ( v9 ) /*0x84fd13*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84fd19*/
  }
  if ( v12 ) /*0x84fd27*/
  {
    if ( unk_B42CDD ) /*0x84fd29*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84fd3b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84fd40*/
    }
  }
  ++v6->RefCount; /*0x84fd4a*/
  value = v6; /*0x84fd4d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84fd65*/
  v10 = v6->RefCount-- == 1; /*0x84fd6d*/
  if ( v10 ) /*0x84fd74*/
    NiD3DPass_ReleaseToPool(v6); /*0x84fd78*/
  ++*((_DWORD *)this + 0xE); /*0x84fd7d*/
}
