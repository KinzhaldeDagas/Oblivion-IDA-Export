void __thiscall sub_8476F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *z, NiD3DPass *value)
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

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x847722*/
  v8 = (NiD3DPass *)unk_B45B70; /*0x847740*/
  *(float *)&v29 = (float)*(unsigned __int8 *)(z[0x32] + v6); /*0x847774*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v29, dword_B25ADC); /*0x847784*/
  Stage = v8->Stages.data->Stage; /*0x84778c*/
  za = Stage; /*0x84779c*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*z + 0x88))(z, v6); /*0x8477a0*/
  v11 = *(_DWORD *)(Stage + 4); /*0x8477a2*/
  v25 = v10; /*0x8477a7*/
  if ( v11 != v10 ) /*0x8477ab*/
  {
    if ( v11 ) /*0x8477af*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8477b5*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8477cc*/
      v10 = v25; /*0x8477ce*/
    }
    *(_DWORD *)(za + 4) = v10; /*0x8477d8*/
    if ( v10 ) /*0x8477db*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x8477e1*/
  }
  sub_848FA0((_DWORD **)za, (int)z); /*0x8477f1*/
  Texture = v8->Stages.data->Texture; /*0x8477f9*/
  zb = (unsigned int)Texture; /*0x847802*/
  v13 = sub_848FD0(z, v6); /*0x847806*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x84780b*/
  v26 = v13; /*0x847810*/
  if ( m_uiRefCount != v13 ) /*0x847814*/
  {
    if ( m_uiRefCount ) /*0x847818*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x84781e*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x847835*/
      v13 = v26; /*0x847837*/
    }
    *(_DWORD *)(zb + 4) = v13; /*0x847841*/
    if ( v13 ) /*0x847844*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x84784a*/
  }
  v22 = z; /*0x847854*/
  v15 = this; /*0x847855*/
  sub_848FA0((_DWORD **)zb, (int)v22); /*0x84785c*/
  if ( v6 == 4 ) /*0x847866*/
  {
    v16 = 1.0; /*0x847868*/
    v28 = 1.0; /*0x84786a*/
  }
  else
  {
    v28 = 0.0; /*0x847884*/
    v16 = 1.0; /*0x847888*/
    if ( v6 == 3 ) /*0x84788a*/
    {
      v24 = 1.0; /*0x84788c*/
      v18 = 0.0; /*0x847890*/
      v19 = 1.0; /*0x847890*/
      goto LABEL_21; /*0x847890*/
    }
  }
  v17 = v16; /*0x847871*/
  v18 = 0.0; /*0x847871*/
  v19 = v17; /*0x847871*/
  v24 = 0.0; /*0x847873*/
  if ( v6 == 2 ) /*0x847877*/
  {
    v20 = v19; /*0x847879*/
    v19 = 0.0; /*0x847879*/
    v27 = v20; /*0x84787b*/
    goto LABEL_23; /*0x84787f*/
  }
LABEL_21:
  v27 = v18; /*0x847892*/
  if ( v6 != 1 ) /*0x847899*/
    v19 = v18; /*0x84789f*/
LABEL_23:
  *(float *)&zc = v19; /*0x8478a1*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(2u, zc, LODWORD(v27), LODWORD(v24), LODWORD(v28)); /*0x8478e7*/
  OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x847979*/
    3u,
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0),
    COERCE_UNSIGNED_INT(0.0));
  if ( (_BYTE)value ) /*0x847986*/
  {
    ++v8->RefCount; /*0x84798d*/
    value = v8; /*0x847990*/
    NiTArray_NiD3DPass_SetAt(v15 + 4, *(_DWORD *)&v15[3].capacity, &value); /*0x8479a8*/
    if ( v8->RefCount-- == 1 ) /*0x8479b0*/
      NiD3DPass_ReleaseToPool(v8); /*0x8479bb*/
    ++*(_DWORD *)&v15[3].capacity; /*0x8479c0*/
  }
}
