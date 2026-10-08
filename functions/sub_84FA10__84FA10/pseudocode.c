void __thiscall sub_84FA10(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B459DC; /*0x84fa37*/
  v7 = value; /*0x84fa40*/
  v8 = **(NiD3DTextureStage ***)(unk_B459DC + 0x24); /*0x84fa44*/
  v14 = v8; /*0x84fa52*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84fa56*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84fa6a*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84fa6e*/
    v9 = unk_B430F0; /*0x84fa75*/
    if ( v10 ) /*0x84fa7b*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84fa7d*/
  }
  Texture = v8->Texture; /*0x84fa83*/
  if ( Texture == (NiTexture *)v9 ) /*0x84fa88*/
  {
    v12 = v14; /*0x84fac1*/
  }
  else
  {
    if ( Texture ) /*0x84fa8c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84fa92*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84faa8*/
    }
    v12 = v14; /*0x84faac*/
    v14->Texture = (NiTexture *)v9; /*0x84fab0*/
    if ( v9 ) /*0x84fab3*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84fab9*/
  }
  if ( v12 ) /*0x84fac7*/
  {
    if ( unk_B42CDD ) /*0x84fac9*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84fadb*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84fae0*/
    }
  }
  ++v6->RefCount; /*0x84faea*/
  value = v6; /*0x84faed*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84fb05*/
  v10 = v6->RefCount-- == 1; /*0x84fb0d*/
  if ( v10 ) /*0x84fb14*/
    NiD3DPass_ReleaseToPool(v6); /*0x84fb18*/
  ++*((_DWORD *)this + 0xE); /*0x84fb1d*/
}
