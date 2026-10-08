void __thiscall sub_8490F0(NiTArray_NiD3DPass *this, int a2, NiD3DTextureStage *a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  NiD3DTextureStage *Stage; // edi
  int v8; // eax
  NiTexture *Texture; // edi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // edi
  unsigned int v12; // eax
  NiD3DTextureStage *v14; // [esp+28h] [ebp+8h]

  v6 = (NiD3DPass *)unk_B455AC; /*0x84911b*/
  if ( a3 ) /*0x849121*/
    NiD3DPass_SetVertexShader(v6, (NiD3DVertexShader *)unk_B4530C[0]); /*0x849129*/
  else
    NiD3DPass_SetVertexShader(v6, (NiD3DVertexShader *)unk_B45290[0]); /*0x849134*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x849143*/
  Stage = (NiD3DTextureStage *)v6->Stages.data->Stage; /*0x84914f*/
  v14 = Stage; /*0x84915b*/
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75FD90)(value, 0); /*0x84915f*/
  Texture = Stage->Texture; /*0x849161*/
  v10 = (NiTexture *)v8; /*0x849164*/
  if ( Texture == (NiTexture *)v8 ) /*0x849168*/
  {
    v11 = v14; /*0x8491a1*/
  }
  else
  {
    if ( Texture ) /*0x84916c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849172*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849188*/
    }
    v11 = v14; /*0x84918c*/
    v14->Texture = v10; /*0x849190*/
    if ( v10 ) /*0x849193*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x849199*/
  }
  if ( v11 ) /*0x8491a7*/
  {
    if ( unk_B42CDD ) /*0x8491a9*/
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x8491bb*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8491c0*/
    }
  }
  ++v6->RefCount; /*0x8491ca*/
  value = v6; /*0x8491cd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x8491e5*/
  if ( v6->RefCount-- == 1 ) /*0x8491ed*/
    NiD3DPass_ReleaseToPool(v6); /*0x8491f8*/
  ++*((_DWORD *)this + 0xE); /*0x8491fd*/
}
