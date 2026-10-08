void __thiscall sub_850930(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *Stage; // ebx
  int v8; // eax
  NiTexture *Texture; // ebx
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45C18; /*0x85095d*/
  sub_848DA0((float *)a4[1].Texture); /*0x850964*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x85096c*/
  v14 = Stage; /*0x85097c*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[9].Destroy)(value, 0); /*0x850980*/
  Texture = Stage->Texture; /*0x850982*/
  v10 = (NiTexture *)v8; /*0x850985*/
  if ( Texture == (NiTexture *)v8 ) /*0x850989*/
  {
    v11 = v14; /*0x8509c2*/
  }
  else
  {
    if ( Texture ) /*0x85098d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x850993*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8509a9*/
    }
    v11 = v14; /*0x8509ad*/
    v14->Texture = v10; /*0x8509b1*/
    if ( v10 ) /*0x8509b4*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x8509ba*/
  }
  if ( v11 ) /*0x8509c8*/
  {
    if ( unk_B42CDD ) /*0x8509ca*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x8509dc*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8509e1*/
    }
  }
  ++v6->RefCount; /*0x8509eb*/
  value = v6; /*0x8509ee*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x850a06*/
  if ( v6->RefCount-- == 1 ) /*0x850a0e*/
    NiD3DPass_ReleaseToPool(v6); /*0x850a19*/
  ++*((_DWORD *)this + 0xE); /*0x850a1e*/
}
