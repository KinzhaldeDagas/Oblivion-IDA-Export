void __thiscall sub_849F20(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x849f46*/
  v7 = (NiD3DPass *)unk_B45670; /*0x849f4d*/
  sub_848C40((float *)Stage[1].Texture); /*0x849f54*/
  sub_848E50((float *)v6[1].Stage); /*0x849f5f*/
  v8 = (_DWORD *)a5; /*0x849f67*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x849f70*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x849f7a*/
  v9 = Stage; /*0x849f6b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x849f7e*/
  Texture = v9->Texture; /*0x849f80*/
  a5 = (int)v11; /*0x849f85*/
  if ( Texture == v11 ) /*0x849f89*/
  {
    v13 = Stage; /*0x849fc6*/
  }
  else
  {
    if ( Texture ) /*0x849f8d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x849f93*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x849fa9*/
      v11 = (NiTexture *)a5; /*0x849fab*/
    }
    v13 = Stage; /*0x849fb1*/
    Stage->Texture = v11; /*0x849fb5*/
    if ( v11 ) /*0x849fb8*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x849fbe*/
  }
  if ( v13 ) /*0x849fcc*/
  {
    if ( unk_B42CDD ) /*0x849fce*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x849fdf*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x849fe4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x849fec*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x849ff2*/
  Stage = v15; /*0x849ffc*/
  if ( v16(v8, 0) ) /*0x84a000*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84a015*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84a022*/
  {
    a5 = unk_B430F0; /*0x84a02a*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84a036*/
  }
  v17 = v15->Texture; /*0x84a03a*/
  if ( v17 == (NiTexture *)a5 ) /*0x84a041*/
  {
    v20 = Stage; /*0x84a07e*/
  }
  else
  {
    if ( v17 ) /*0x84a045*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84a04b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84a061*/
    }
    v18 = a5; /*0x84a063*/
    v19 = a5 == 0; /*0x84a067*/
    v20 = Stage; /*0x84a069*/
    Stage->Texture = (NiTexture *)a5; /*0x84a06d*/
    if ( !v19 ) /*0x84a070*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84a076*/
  }
  if ( v20 ) /*0x84a084*/
  {
    if ( unk_B42CDD ) /*0x84a086*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84a097*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84a09c*/
    }
  }
  ++v7->RefCount; /*0x84a0a6*/
  Stage = (NiD3DTextureStage *)v7; /*0x84a0a9*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84a0c1*/
  v19 = v7->RefCount-- == 1; /*0x84a0c9*/
  if ( v19 ) /*0x84a0d0*/
    NiD3DPass_ReleaseToPool(v7); /*0x84a0d4*/
  ++*((_DWORD *)this + 0xE); /*0x84a0d9*/
}
