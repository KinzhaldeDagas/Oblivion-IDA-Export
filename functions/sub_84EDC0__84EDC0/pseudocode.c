void __thiscall sub_84EDC0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B45930; /*0x84ede7*/
  v7 = value; /*0x84edf0*/
  v8 = **(NiD3DTextureStage ***)(unk_B45930 + 0x24); /*0x84edf4*/
  v14 = v8; /*0x84ee02*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84ee06*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84ee1a*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84ee1e*/
    v9 = unk_B430F0; /*0x84ee25*/
    if ( v10 ) /*0x84ee2b*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84ee2d*/
  }
  Texture = v8->Texture; /*0x84ee33*/
  if ( Texture == (NiTexture *)v9 ) /*0x84ee38*/
  {
    v12 = v14; /*0x84ee71*/
  }
  else
  {
    if ( Texture ) /*0x84ee3c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ee42*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ee58*/
    }
    v12 = v14; /*0x84ee5c*/
    v14->Texture = (NiTexture *)v9; /*0x84ee60*/
    if ( v9 ) /*0x84ee63*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84ee69*/
  }
  if ( v12 ) /*0x84ee77*/
  {
    if ( unk_B42CDD ) /*0x84ee79*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84ee8b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84ee90*/
    }
  }
  ++v6->RefCount; /*0x84ee9a*/
  value = v6; /*0x84ee9d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84eeb5*/
  v10 = v6->RefCount-- == 1; /*0x84eebd*/
  if ( v10 ) /*0x84eec4*/
    NiD3DPass_ReleaseToPool(v6); /*0x84eec8*/
  ++*((_DWORD *)this + 0xE); /*0x84eecd*/
}
