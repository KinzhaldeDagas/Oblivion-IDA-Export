void __thiscall sub_84EC90(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B4592C; /*0x84ecb7*/
  v7 = value; /*0x84ecc0*/
  v8 = **(NiD3DTextureStage ***)(unk_B4592C + 0x24); /*0x84ecc4*/
  v14 = v8; /*0x84ecd2*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84ecd6*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84ecea*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84ecee*/
    v9 = unk_B430F0; /*0x84ecf5*/
    if ( v10 ) /*0x84ecfb*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84ecfd*/
  }
  Texture = v8->Texture; /*0x84ed03*/
  if ( Texture == (NiTexture *)v9 ) /*0x84ed08*/
  {
    v12 = v14; /*0x84ed41*/
  }
  else
  {
    if ( Texture ) /*0x84ed0c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ed12*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ed28*/
    }
    v12 = v14; /*0x84ed2c*/
    v14->Texture = (NiTexture *)v9; /*0x84ed30*/
    if ( v9 ) /*0x84ed33*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84ed39*/
  }
  if ( v12 ) /*0x84ed47*/
  {
    if ( unk_B42CDD ) /*0x84ed49*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84ed5b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84ed60*/
    }
  }
  ++v6->RefCount; /*0x84ed6a*/
  value = v6; /*0x84ed6d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84ed85*/
  v10 = v6->RefCount-- == 1; /*0x84ed8d*/
  if ( v10 ) /*0x84ed94*/
    NiD3DPass_ReleaseToPool(v6); /*0x84ed98*/
  ++*((_DWORD *)this + 0xE); /*0x84ed9d*/
}
