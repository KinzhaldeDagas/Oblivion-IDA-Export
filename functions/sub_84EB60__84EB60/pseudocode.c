void __thiscall sub_84EB60(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B45928; /*0x84eb87*/
  v7 = value; /*0x84eb90*/
  v8 = **(NiD3DTextureStage ***)(unk_B45928 + 0x24); /*0x84eb94*/
  v14 = v8; /*0x84eba2*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84eba6*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84ebba*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84ebbe*/
    v9 = unk_B430F0; /*0x84ebc5*/
    if ( v10 ) /*0x84ebcb*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84ebcd*/
  }
  Texture = v8->Texture; /*0x84ebd3*/
  if ( Texture == (NiTexture *)v9 ) /*0x84ebd8*/
  {
    v12 = v14; /*0x84ec11*/
  }
  else
  {
    if ( Texture ) /*0x84ebdc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ebe2*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ebf8*/
    }
    v12 = v14; /*0x84ebfc*/
    v14->Texture = (NiTexture *)v9; /*0x84ec00*/
    if ( v9 ) /*0x84ec03*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84ec09*/
  }
  if ( v12 ) /*0x84ec17*/
  {
    if ( unk_B42CDD ) /*0x84ec19*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84ec2b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84ec30*/
    }
  }
  ++v6->RefCount; /*0x84ec3a*/
  value = v6; /*0x84ec3d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84ec55*/
  v10 = v6->RefCount-- == 1; /*0x84ec5d*/
  if ( v10 ) /*0x84ec64*/
    NiD3DPass_ReleaseToPool(v6); /*0x84ec68*/
  ++*((_DWORD *)this + 0xE); /*0x84ec6d*/
}
