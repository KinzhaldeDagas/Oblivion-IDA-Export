void __thiscall sub_8517F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  NiD3DTextureStage *v7; // esi
  int v8; // eax
  NiTexture *Texture; // esi
  NiTexture *v10; // ebp
  NiD3DTextureStage *v11; // esi
  unsigned int v12; // eax
  NiD3DTextureStage *v13; // esi
  int v14; // ebp
  NiTexture *v15; // esi
  NiD3DTextureStage *v16; // esi
  unsigned int v17; // eax
  NiD3DTextureStage *v19; // [esp+14h] [ebp-18h]
  NiD3DTextureStage *v20; // [esp+14h] [ebp-18h]
  int v21; // [esp+18h] [ebp-14h]

  v6 = (NiD3DPass *)unk_B45B40; /*0x851824*/
  v7 = **(NiD3DTextureStage ***)(unk_B45B40 + 0x24); /*0x851831*/
  v21 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x851835*/
  v19 = v7; /*0x851842*/
  v8 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v21); /*0x851846*/
  Texture = v7->Texture; /*0x851848*/
  v10 = (NiTexture *)v8; /*0x85184b*/
  if ( Texture == (NiTexture *)v8 ) /*0x85184f*/
  {
    v11 = v19; /*0x851888*/
  }
  else
  {
    if ( Texture ) /*0x851853*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x851859*/
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x85186f*/
    }
    v11 = v19; /*0x851873*/
    v19->Texture = v10; /*0x851877*/
    if ( v10 ) /*0x85187a*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x851880*/
  }
  if ( v11 ) /*0x85188e*/
  {
    if ( unk_B42CDD ) /*0x851890*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*a5 + 0x78))(a5); /*0x8518a0*/
      NiD3DTextureStage_ApplyAddressModePreset(v11, v12); /*0x8518a5*/
    }
  }
  v13 = (NiD3DTextureStage *)v6->Stages.data->Texture; /*0x8518ad*/
  v20 = v13; /*0x8518bf*/
  if ( (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v21) ) /*0x8518c3*/
  {
    v14 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x8C))(a5, v21); /*0x8518d6*/
  }
  else
  {
    v14 = unk_B430F0; /*0x8518e1*/
    if ( (a5[7] & 0x80) == 0 ) /*0x8518e7*/
      v14 = LODWORD(flt_B430DC[0]); /*0x8518e9*/
  }
  v15 = v13->Texture; /*0x8518ef*/
  if ( v15 == (NiTexture *)v14 ) /*0x8518f4*/
  {
    v16 = v20; /*0x85192d*/
  }
  else
  {
    if ( v15 ) /*0x8518f8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->members) ) /*0x8518fe*/
        v15->__vftable->super.super.Destructor((NiRefObject *)v15, 1); /*0x851914*/
    }
    v16 = v20; /*0x851918*/
    v20->Texture = (NiTexture *)v14; /*0x85191c*/
    if ( v14 ) /*0x85191f*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x851925*/
  }
  if ( v16 ) /*0x851933*/
  {
    if ( unk_B42CDD ) /*0x851935*/
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*a5 + 0x78))(a5); /*0x851945*/
      NiD3DTextureStage_ApplyAddressModePreset(v16, v17); /*0x85194a*/
    }
  }
  if ( (_BYTE)value ) /*0x851954*/
  {
    ++v6->RefCount; /*0x85195b*/
    value = v6; /*0x85195e*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85197a*/
    if ( v6->RefCount-- == 1 ) /*0x851982*/
      NiD3DPass_ReleaseToPool(v6); /*0x85198d*/
    ++*((_DWORD *)this + 0xE); /*0x851992*/
  }
}
