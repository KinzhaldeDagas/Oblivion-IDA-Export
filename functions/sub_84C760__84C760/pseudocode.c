void __thiscall sub_84C760(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
{
  NiD3DTextureStage *v6; // esi
  NiD3DPass *v7; // edi
  _DWORD *v8; // ebp
  NiD3DTextureStage *v9; // esi
  int (__thiscall *v10)(int, _DWORD); // eax
  NiTexture *v11; // eax
  NiTexture *Texture; // esi
  NiD3DTextureStage *v13; // esi
  unsigned int v14; // eax
  NiD3DTextureStage *v15; // esi
  int (__thiscall *v16)(_DWORD *, _DWORD); // eax
  NiTexture *v17; // esi
  int v18; // eax
  bool v19; // zf
  NiD3DTextureStage *v20; // esi
  unsigned int v21; // eax

  v6 = Stage; /*0x84c786*/
  v7 = (NiD3DPass *)unk_B4569C; /*0x84c78d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84c794*/
  sub_848E50((float *)v6[1].Stage); /*0x84c79f*/
  v8 = (_DWORD *)a5; /*0x84c7a7*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84c7b0*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84c7ba*/
  v9 = Stage; /*0x84c7ab*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84c7be*/
  Texture = v9->Texture; /*0x84c7c0*/
  a5 = (int)v11; /*0x84c7c5*/
  if ( Texture == v11 ) /*0x84c7c9*/
  {
    v13 = Stage; /*0x84c806*/
  }
  else
  {
    if ( Texture ) /*0x84c7cd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84c7d3*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84c7e9*/
      v11 = (NiTexture *)a5; /*0x84c7eb*/
    }
    v13 = Stage; /*0x84c7f1*/
    Stage->Texture = v11; /*0x84c7f5*/
    if ( v11 ) /*0x84c7f8*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84c7fe*/
  }
  if ( v13 ) /*0x84c80c*/
  {
    if ( unk_B42CDD ) /*0x84c80e*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84c81f*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84c824*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84c82c*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84c832*/
  Stage = v15; /*0x84c83c*/
  if ( v16(v8, 0) ) /*0x84c840*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84c855*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84c862*/
  {
    a5 = unk_B430F0; /*0x84c86a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84c876*/
  }
  v17 = v15->Texture; /*0x84c87a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84c881*/
  {
    v20 = Stage; /*0x84c8be*/
  }
  else
  {
    if ( v17 ) /*0x84c885*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84c88b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84c8a1*/
    }
    v18 = a5; /*0x84c8a3*/
    v19 = a5 == 0; /*0x84c8a7*/
    v20 = Stage; /*0x84c8a9*/
    Stage->Texture = (NiTexture *)a5; /*0x84c8ad*/
    if ( !v19 ) /*0x84c8b0*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84c8b6*/
  }
  if ( v20 ) /*0x84c8c4*/
  {
    if ( unk_B42CDD ) /*0x84c8c6*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84c8d7*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84c8dc*/
    }
  }
  ++v7->RefCount; /*0x84c8e6*/
  Stage = (NiD3DTextureStage *)v7; /*0x84c8e9*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84c901*/
  v19 = v7->RefCount-- == 1; /*0x84c909*/
  if ( v19 ) /*0x84c910*/
    NiD3DPass_ReleaseToPool(v7); /*0x84c914*/
  ++*((_DWORD *)this + 0xE); /*0x84c919*/
}
