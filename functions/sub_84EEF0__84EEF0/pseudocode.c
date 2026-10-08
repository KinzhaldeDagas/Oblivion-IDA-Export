void __thiscall sub_84EEF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B45934; /*0x84ef17*/
  v7 = value; /*0x84ef20*/
  v8 = **(NiD3DTextureStage ***)(unk_B45934 + 0x24); /*0x84ef24*/
  v14 = v8; /*0x84ef32*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84ef36*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84ef4a*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84ef4e*/
    v9 = unk_B430F0; /*0x84ef55*/
    if ( v10 ) /*0x84ef5b*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84ef5d*/
  }
  Texture = v8->Texture; /*0x84ef63*/
  if ( Texture == (NiTexture *)v9 ) /*0x84ef68*/
  {
    v12 = v14; /*0x84efa1*/
  }
  else
  {
    if ( Texture ) /*0x84ef6c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84ef72*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84ef88*/
    }
    v12 = v14; /*0x84ef8c*/
    v14->Texture = (NiTexture *)v9; /*0x84ef90*/
    if ( v9 ) /*0x84ef93*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84ef99*/
  }
  if ( v12 ) /*0x84efa7*/
  {
    if ( unk_B42CDD ) /*0x84efa9*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84efbb*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84efc0*/
    }
  }
  ++v6->RefCount; /*0x84efca*/
  value = v6; /*0x84efcd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84efe5*/
  v10 = v6->RefCount-- == 1; /*0x84efed*/
  if ( v10 ) /*0x84eff4*/
    NiD3DPass_ReleaseToPool(v6); /*0x84eff8*/
  ++*((_DWORD *)this + 0xE); /*0x84effd*/
}
