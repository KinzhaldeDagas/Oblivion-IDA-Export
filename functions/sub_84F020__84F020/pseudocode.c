void __thiscall sub_84F020(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *v7; // edi
  int v8; // eax
  NiTexture *Texture; // edi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // edi
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B459B0; /*0x84f047*/
  v7 = **(NiD3DTextureStage ***)(unk_B459B0 + 0x24); /*0x84f054*/
  v14 = v7; /*0x84f060*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f064*/
  Texture = v7->Texture; /*0x84f066*/
  v10 = (NiTexture *)v8; /*0x84f069*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f06d*/
  {
    v11 = v14; /*0x84f0a6*/
  }
  else
  {
    if ( Texture ) /*0x84f071*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f077*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f08d*/
    }
    v11 = v14; /*0x84f091*/
    v14->Texture = v10; /*0x84f095*/
    if ( v10 ) /*0x84f098*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f09e*/
  }
  if ( v11 ) /*0x84f0ac*/
  {
    if ( unk_B42CDD ) /*0x84f0ae*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84f0c0*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f0c5*/
    }
  }
  ++v6->RefCount; /*0x84f0cf*/
  value = v6; /*0x84f0d2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f0ea*/
  if ( v6->RefCount-- == 1 ) /*0x84f0f2*/
    NiD3DPass_ReleaseToPool(v6); /*0x84f0fd*/
  ++*((_DWORD *)this + 0xE); /*0x84f102*/
}
