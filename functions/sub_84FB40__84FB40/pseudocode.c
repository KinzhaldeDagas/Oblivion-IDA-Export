void __thiscall sub_84FB40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = (NiD3DPass *)unk_B459E0; /*0x84fb67*/
  v7 = value; /*0x84fb70*/
  v8 = **(NiD3DTextureStage ***)(unk_B459E0 + 0x24); /*0x84fb74*/
  v14 = v8; /*0x84fb82*/
  if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))value->__vftable[8].sub_75F9E0)(value, 0) ) /*0x84fb86*/
  {
    v9 = ((int (__thiscall *)(NiD3DPass *, _DWORD))v7->__vftable[8].sub_75F9E0)(v7, 0); /*0x84fb9a*/
  }
  else
  {
    v10 = (v7->TexturesPerPass & 0x80) == 0; /*0x84fb9e*/
    v9 = unk_B430F0; /*0x84fba5*/
    if ( v10 ) /*0x84fbab*/
      v9 = LODWORD(flt_B430DC[0]); /*0x84fbad*/
  }
  Texture = v8->Texture; /*0x84fbb3*/
  if ( Texture == (NiTexture *)v9 ) /*0x84fbb8*/
  {
    v12 = v14; /*0x84fbf1*/
  }
  else
  {
    if ( Texture ) /*0x84fbbc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84fbc2*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84fbd8*/
    }
    v12 = v14; /*0x84fbdc*/
    v14->Texture = (NiTexture *)v9; /*0x84fbe0*/
    if ( v9 ) /*0x84fbe3*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84fbe9*/
  }
  if ( v12 ) /*0x84fbf7*/
  {
    if ( unk_B42CDD ) /*0x84fbf9*/
    {
      v13 = ((int (__thiscall *)(NiD3DPass *))value->__vftable[7].sub_75FD90)(value); /*0x84fc0b*/
      NiD3DTextureStage_ApplyAddressModePreset(v12, v13); /*0x84fc10*/
    }
  }
  ++v6->RefCount; /*0x84fc1a*/
  value = v6; /*0x84fc1d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x84fc35*/
  v10 = v6->RefCount-- == 1; /*0x84fc3d*/
  if ( v10 ) /*0x84fc44*/
    NiD3DPass_ReleaseToPool(v6); /*0x84fc48*/
  ++*((_DWORD *)this + 0xE); /*0x84fc4d*/
}
