void __thiscall sub_847160(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *w, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // edi
  NiTexture *Texture; // edi
  int v13; // eax
  UInt32 m_uiRefCount; // edi
  NiTArray_NiD3DPass *v15; // edi
  double v16; // st6
  double v17; // st6
  double v18; // st7
  double v19; // st7
  double v20; // rtt
  double v21; // rt0
  double v22; // st6
  unsigned int z; // [esp+14h] [ebp-28h]
  unsigned int za; // [esp+14h] [ebp-28h]
  unsigned int zb; // [esp+14h] [ebp-28h]
  float v28; // [esp+18h] [ebp-24h]
  float v29; // [esp+1Ch] [ebp-20h]
  unsigned int wa; // [esp+4Ch] [ebp+10h]
  unsigned int wb; // [esp+4Ch] [ebp+10h]
  unsigned int wc; // [esp+4Ch] [ebp+10h]

  v6 = (NiD3DPass *)unk_B45B68; /*0x847190*/
  v7 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x847196*/
  v9 = **(_DWORD **)(unk_B45B68 + 0x24); /*0x8471a1*/
  z = v9; /*0x8471af*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*w + 0x88))(w, v7); /*0x8471b3*/
  v11 = *(_DWORD *)(v9 + 4); /*0x8471b5*/
  wa = v10; /*0x8471ba*/
  if ( v11 != v10 ) /*0x8471be*/
  {
    if ( v11 ) /*0x8471c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8471c8*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8471de*/
      v10 = wa; /*0x8471e0*/
    }
    *(_DWORD *)(z + 4) = v10; /*0x8471ea*/
    if ( v10 ) /*0x8471ed*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x8471f3*/
  }
  sub_848FA0((_DWORD **)z, (int)w); /*0x847203*/
  Texture = v6->Stages.data->Texture; /*0x84720b*/
  za = (unsigned int)Texture; /*0x847214*/
  v13 = sub_848FD0(w, v7); /*0x847218*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x84721d*/
  wb = v13; /*0x847222*/
  if ( m_uiRefCount != v13 ) /*0x847226*/
  {
    if ( m_uiRefCount ) /*0x84722a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x847230*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x847246*/
      v13 = wb; /*0x847248*/
    }
    *(_DWORD *)(za + 4) = v13; /*0x847252*/
    if ( v13 ) /*0x847255*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x84725b*/
  }
  v15 = this; /*0x847265*/
  sub_848FA0((_DWORD **)za, (int)w); /*0x84726d*/
  v16 = 0.0; /*0x847277*/
  if ( v7 == 4 ) /*0x847279*/
  {
    v17 = 1.0; /*0x84727b*/
    v18 = 0.0; /*0x84727b*/
    v29 = 1.0; /*0x84727d*/
  }
  else
  {
    v29 = 0.0; /*0x847286*/
    if ( v7 == 3 ) /*0x84728a*/
    {
      *(float *)&zb = 1.0; /*0x847290*/
      v19 = 1.0; /*0x847294*/
      goto LABEL_19; /*0x847294*/
    }
    v17 = 1.0; /*0x8472a3*/
    v18 = 0.0; /*0x8472a3*/
  }
  v20 = v17; /*0x8472a8*/
  v16 = v18; /*0x8472a8*/
  v19 = v20; /*0x8472a8*/
  *(float *)&zb = v16; /*0x8472aa*/
  if ( v7 == 2 ) /*0x8472ae*/
  {
    v21 = v16; /*0x8472b0*/
    v22 = v19; /*0x8472b0*/
    v19 = v21; /*0x8472b0*/
    v28 = v22; /*0x8472b2*/
    goto LABEL_25; /*0x8472b2*/
  }
LABEL_19:
  v28 = v16; /*0x847296*/
  if ( v7 != 1 ) /*0x84729d*/
    v19 = v16; /*0x8472b8*/
LABEL_25:
  *(float *)&wc = v19; /*0x8472ba*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0, wc, LODWORD(v28), zb, LODWORD(v29)); /*0x847300*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x847392*/
    0x19u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x84739f*/
  {
    ++v6->RefCount; /*0x8473a6*/
    value = v6; /*0x8473a9*/
    NiTArray_NiD3DPass_SetAt(v15 + 4, *(_DWORD *)&v15[3].capacity, &value); /*0x8473c1*/
    if ( v6->RefCount-- == 1 ) /*0x8473c9*/
      NiD3DPass_ReleaseToPool(v6); /*0x8473d4*/
    ++*(_DWORD *)&v15[3].capacity; /*0x8473d9*/
  }
}
