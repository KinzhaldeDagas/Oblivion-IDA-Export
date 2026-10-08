void __thiscall sub_850A40(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *Stage; // ebx
  int v8; // eax
  NiTexture *Texture; // ebx
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45C1C; /*0x850a6d*/
  sub_848DA0((float *)a4[1].Texture); /*0x850a74*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x850a7c*/
  v14 = Stage; /*0x850a8c*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[9].Destroy)(value, 0); /*0x850a90*/
  Texture = Stage->Texture; /*0x850a92*/
  v10 = (NiTexture *)v8; /*0x850a95*/
  if ( Texture == (NiTexture *)v8 ) /*0x850a99*/
  {
    v11 = v14; /*0x850ad2*/
  }
  else
  {
    if ( Texture ) /*0x850a9d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850aa3*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x850ab9*/
    }
    v11 = v14; /*0x850abd*/
    v14->Texture = v10; /*0x850ac1*/
    if ( v10 ) /*0x850ac4*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x850aca*/
  }
  if ( v11 ) /*0x850ad8*/
  {
    if ( unk_B42CDD ) /*0x850ada*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x850aec*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x850af1*/
    }
  }
  ++v6->RefCount; /*0x850afb*/
  value = v6; /*0x850afe*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x850b16*/
  if ( v6->RefCount-- == 1 ) /*0x850b1e*/
    NiD3DPass_ReleaseToPool(v6); /*0x850b29*/
  ++*((_DWORD *)this + 0xE); /*0x850b2e*/
}
