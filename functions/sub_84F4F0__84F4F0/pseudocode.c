void __thiscall sub_84F4F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *v7; // edi
  int v8; // eax
  NiTexture *Texture; // edi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // edi
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B459BC; /*0x84f517*/
  v7 = **(NiD3DTextureStage ***)(unk_B459BC + 0x24); /*0x84f524*/
  v14 = v7; /*0x84f530*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f534*/
  Texture = v7->Texture; /*0x84f536*/
  v10 = (NiTexture *)v8; /*0x84f539*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f53d*/
  {
    v11 = v14; /*0x84f576*/
  }
  else
  {
    if ( Texture ) /*0x84f541*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f547*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f55d*/
    }
    v11 = v14; /*0x84f561*/
    v14->Texture = v10; /*0x84f565*/
    if ( v10 ) /*0x84f568*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f56e*/
  }
  if ( v11 ) /*0x84f57c*/
  {
    if ( unk_B42CDD ) /*0x84f57e*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84f590*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f595*/
    }
  }
  ++v6->RefCount; /*0x84f59f*/
  value = v6; /*0x84f5a2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f5ba*/
  if ( v6->RefCount-- == 1 ) /*0x84f5c2*/
    NiD3DPass_ReleaseToPool(v6); /*0x84f5cd*/
  ++*((_DWORD *)this + 0xE); /*0x84f5d2*/
}
