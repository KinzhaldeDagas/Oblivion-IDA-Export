void __thiscall sub_847400(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *z, NiD3DPass *value)
{
  int v6; // esi
  NiD3DPass *v8; // ebx
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  NiTexture *Texture; // ebp
  int v13; // eax
  UInt32 m_uiRefCount; // ebp
  NiTArray_NiD3DPass *v15; // edi
  double v16; // st6
  double v17; // rt0
  double v18; // st6
  double v19; // st7
  double v20; // st6
  _DWORD *v22; // [esp-4h] [ebp-40h]
  float v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+18h] [ebp-24h]
  float v27; // [esp+18h] [ebp-24h]
  float v28; // [esp+1Ch] [ebp-20h]
  unsigned int v29; // [esp+28h] [ebp-14h]
  unsigned int za; // [esp+4Ch] [ebp+10h]
  unsigned int zb; // [esp+4Ch] [ebp+10h]
  unsigned int zc; // [esp+4Ch] [ebp+10h]

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x847432*/
  v8 = (NiD3DPass *)unk_B45B6C; /*0x847450*/
  *(float *)&v29 = (float)*(unsigned __int8 *)(z[0x32] + v6); /*0x847484*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v29, dword_B25ADC); /*0x847494*/
  Stage = v8->Stages.data->Stage; /*0x84749c*/
  za = Stage; /*0x8474ac*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*z + 0x88))(z, v6); /*0x8474b0*/
  v11 = *(_DWORD *)(Stage + 4); /*0x8474b2*/
  v25 = v10; /*0x8474b7*/
  if ( v11 != v10 ) /*0x8474bb*/
  {
    if ( v11 ) /*0x8474bf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8474c5*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8474dc*/
      v10 = v25; /*0x8474de*/
    }
    *(_DWORD *)(za + 4) = v10; /*0x8474e8*/
    if ( v10 ) /*0x8474eb*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x8474f1*/
  }
  sub_848FA0((_DWORD **)za, (int)z); /*0x847501*/
  Texture = v8->Stages.data->Texture; /*0x847509*/
  zb = (unsigned int)Texture; /*0x847512*/
  v13 = sub_848FD0(z, v6); /*0x847516*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x84751b*/
  v26 = v13; /*0x847520*/
  if ( m_uiRefCount != v13 ) /*0x847524*/
  {
    if ( m_uiRefCount ) /*0x847528*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x84752e*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x847545*/
      v13 = v26; /*0x847547*/
    }
    *(_DWORD *)(zb + 4) = v13; /*0x847551*/
    if ( v13 ) /*0x847554*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x84755a*/
  }
  v22 = z; /*0x847564*/
  v15 = this; /*0x847565*/
  sub_848FA0((_DWORD **)zb, (int)v22); /*0x84756c*/
  if ( v6 == 4 ) /*0x847576*/
  {
    v16 = 1.0; /*0x847578*/
    v28 = 1.0; /*0x84757a*/
  }
  else
  {
    v28 = 0.0; /*0x847594*/
    v16 = 1.0; /*0x847598*/
    if ( v6 == 3 ) /*0x84759a*/
    {
      v24 = 1.0; /*0x84759c*/
      v18 = 0.0; /*0x8475a0*/
      v19 = 1.0; /*0x8475a0*/
      goto LABEL_21; /*0x8475a0*/
    }
  }
  v17 = v16; /*0x847581*/
  v18 = 0.0; /*0x847581*/
  v19 = v17; /*0x847581*/
  v24 = 0.0; /*0x847583*/
  if ( v6 == 2 ) /*0x847587*/
  {
    v20 = v19; /*0x847589*/
    v19 = 0.0; /*0x847589*/
    v27 = v20; /*0x84758b*/
    goto LABEL_23; /*0x84758f*/
  }
LABEL_21:
  v27 = v18; /*0x8475a2*/
  if ( v6 != 1 ) /*0x8475a9*/
    v19 = v18; /*0x8475af*/
LABEL_23:
  *(float *)&zc = v19; /*0x8475b1*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, zc, LODWORD(v27), LODWORD(v24), LODWORD(v28)); /*0x8475f7*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x847689*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x847696*/
  {
    ++v8->RefCount; /*0x84769d*/
    value = v8; /*0x8476a0*/
    NiTArray_NiD3DPass_SetAt(v15 + 4, *(_DWORD *)&v15[3].capacity, &value); /*0x8476b8*/
    if ( v8->RefCount-- == 1 ) /*0x8476c0*/
      NiD3DPass_ReleaseToPool(v8); /*0x8476cb*/
    ++*(_DWORD *)&v15[3].capacity; /*0x8476d0*/
  }
}
