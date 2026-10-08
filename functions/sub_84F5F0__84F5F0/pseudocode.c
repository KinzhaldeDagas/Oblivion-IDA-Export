void __thiscall sub_84F5F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *v7; // edi
  int v8; // eax
  NiTexture *Texture; // edi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // edi
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B459C0; /*0x84f617*/
  v7 = **(NiD3DTextureStage ***)(unk_B459C0 + 0x24); /*0x84f624*/
  v14 = v7; /*0x84f630*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84f634*/
  Texture = v7->Texture; /*0x84f636*/
  v10 = (NiTexture *)v8; /*0x84f639*/
  if ( Texture == (NiTexture *)v8 ) /*0x84f63d*/
  {
    v11 = v14; /*0x84f676*/
  }
  else
  {
    if ( Texture ) /*0x84f641*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84f647*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84f65d*/
    }
    v11 = v14; /*0x84f661*/
    v14->Texture = v10; /*0x84f665*/
    if ( v10 ) /*0x84f668*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84f66e*/
  }
  if ( v11 ) /*0x84f67c*/
  {
    if ( unk_B42CDD ) /*0x84f67e*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84f690*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x84f695*/
    }
  }
  ++v6->RefCount; /*0x84f69f*/
  value = v6; /*0x84f6a2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84f6ba*/
  if ( v6->RefCount-- == 1 ) /*0x84f6c2*/
    NiD3DPass_ReleaseToPool(v6); /*0x84f6cd*/
  ++*((_DWORD *)this + 0xE); /*0x84f6d2*/
}
