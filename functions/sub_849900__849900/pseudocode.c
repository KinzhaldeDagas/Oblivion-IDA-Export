void __thiscall sub_849900(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *Stage; // ebx
  int v8; // eax
  NiTexture *Texture; // ebx
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // ebx
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B455F8; /*0x84992d*/
  sub_848C40((float *)a4[1].Texture); /*0x849934*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84993c*/
  v14 = Stage; /*0x84994c*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x849950*/
  Texture = Stage->Texture; /*0x849952*/
  v10 = (NiTexture *)v8; /*0x849955*/
  if ( Texture == (NiTexture *)v8 ) /*0x849959*/
  {
    v11 = v14; /*0x849992*/
  }
  else
  {
    if ( Texture ) /*0x84995d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849963*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849979*/
    }
    v11 = v14; /*0x84997d*/
    v14->Texture = v10; /*0x849981*/
    if ( v10 ) /*0x849984*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x84998a*/
  }
  if ( v11 ) /*0x849998*/
  {
    if ( unk_B42CDD ) /*0x84999a*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x8499ac*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8499b1*/
    }
  }
  ++v6->RefCount; /*0x8499bb*/
  value = v6; /*0x8499be*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8499d6*/
  if ( v6->RefCount-- == 1 ) /*0x8499de*/
    NiD3DPass_ReleaseToPool(v6); /*0x8499e9*/
  ++*((_DWORD *)this + 0xE); /*0x8499ee*/
}
