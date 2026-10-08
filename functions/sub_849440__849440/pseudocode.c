void __thiscall sub_849440(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *Stage; // ebx
  int v8; // eax
  NiTexture *Texture; // ebx
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B455E8; /*0x84946d*/
  sub_848C40((float *)a4[1].Texture); /*0x849474*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84947c*/
  v14 = Stage; /*0x84948c*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x849490*/
  Texture = Stage->Texture; /*0x849492*/
  v10 = (NiTexture *)v8; /*0x849495*/
  if ( Texture == (NiTexture *)v8 ) /*0x849499*/
  {
    v11 = v14; /*0x8494d2*/
  }
  else
  {
    if ( Texture ) /*0x84949d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x8494a3*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x8494b9*/
    }
    v11 = v14; /*0x8494bd*/
    v14->Texture = v10; /*0x8494c1*/
    if ( v10 ) /*0x8494c4*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x8494ca*/
  }
  if ( v11 ) /*0x8494d8*/
  {
    if ( unk_B42CDD ) /*0x8494da*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x8494ec*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8494f1*/
    }
  }
  ++v6->RefCount; /*0x8494fb*/
  value = v6; /*0x8494fe*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x849516*/
  if ( v6->RefCount-- == 1 ) /*0x84951e*/
    NiD3DPass_ReleaseToPool(v6); /*0x849529*/
  ++*((_DWORD *)this + 0xE); /*0x84952e*/
}
