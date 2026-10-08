void __thiscall sub_84DAE0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DTextureStage *Stage, int a5)
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

  v6 = Stage; /*0x84db06*/
  v7 = dword_B456AC; /*0x84db0d*/
  sub_848C40((float *)Stage[1].Texture); /*0x84db14*/
  sub_848E50((float *)v6[1].Stage); /*0x84db1f*/
  v8 = (_DWORD *)a5; /*0x84db27*/
  v10 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x84db30*/
  Stage = (NiD3DTextureStage *)v7->Stages.data->Stage; /*0x84db3a*/
  v9 = Stage; /*0x84db2b*/
  v11 = (NiTexture *)v10(a5, 0); /*0x84db3e*/
  Texture = v9->Texture; /*0x84db40*/
  a5 = (int)v11; /*0x84db45*/
  if ( Texture == v11 ) /*0x84db49*/
  {
    v13 = Stage; /*0x84db86*/
  }
  else
  {
    if ( Texture ) /*0x84db4d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x84db53*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x84db69*/
      v11 = (NiTexture *)a5; /*0x84db6b*/
    }
    v13 = Stage; /*0x84db71*/
    Stage->Texture = v11; /*0x84db75*/
    if ( v11 ) /*0x84db78*/
      InterlockedIncrement((volatile LONG *)&v11->members); /*0x84db7e*/
  }
  if ( v13 ) /*0x84db8c*/
  {
    if ( unk_B42CDD ) /*0x84db8e*/
    {
      v14 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84db9f*/
      NiD3DTextureStage_ApplyAddressModePreset(v13, v14); /*0x84dba4*/
    }
  }
  v15 = (NiD3DTextureStage *)v7->Stages.data->Texture; /*0x84dbac*/
  v16 = *(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C); /*0x84dbb2*/
  Stage = v15; /*0x84dbbc*/
  if ( v16(v8, 0) ) /*0x84dbc0*/
  {
    a5 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x8C))(v8, 0); /*0x84dbd5*/
  }
  else if ( (v8[7] & 0x80) != 0 ) /*0x84dbe2*/
  {
    a5 = unk_B430F0; /*0x84dbea*/
  }
  else
  {
    a5 = LODWORD(flt_B430DC[0]); /*0x84dbf6*/
  }
  v17 = v15->Texture; /*0x84dbfa*/
  if ( v17 == (NiTexture *)a5 ) /*0x84dc01*/
  {
    v20 = Stage; /*0x84dc3e*/
  }
  else
  {
    if ( v17 ) /*0x84dc05*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x84dc0b*/
        v17->__vftable->super.super.Destructor((NiRefObject *)v17, 1); /*0x84dc21*/
    }
    v18 = a5; /*0x84dc23*/
    v19 = a5 == 0; /*0x84dc27*/
    v20 = Stage; /*0x84dc29*/
    Stage->Texture = (NiTexture *)a5; /*0x84dc2d*/
    if ( !v19 ) /*0x84dc30*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x84dc36*/
  }
  if ( v20 ) /*0x84dc44*/
  {
    if ( unk_B42CDD ) /*0x84dc46*/
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v8 + 0x78))(v8); /*0x84dc57*/
      NiD3DTextureStage_ApplyAddressModePreset(v20, v21); /*0x84dc5c*/
    }
  }
  ++v7->RefCount; /*0x84dc66*/
  Stage = (NiD3DTextureStage *)v7; /*0x84dc69*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&Stage); /*0x84dc81*/
  v19 = v7->RefCount-- == 1; /*0x84dc89*/
  if ( v19 ) /*0x84dc90*/
    NiD3DPass_ReleaseToPool(v7); /*0x84dc94*/
  ++*((_DWORD *)this + 0xE); /*0x84dc99*/
}
