// OBLIVION AUTHORITY (2026-08-24): Builds generated explicit leaf LODs. Copies highest leaf vector into LOD0, then loops LOD index 1..numLeafLodLevels-1 and calls CLeafLodEngine::ComputeNextLevel on the immediately preceding LOD.
void __thiscall OB_CTreeEngine_BuildLeafLods_010201A0(int this, float a2)
{
  unsigned int v3; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  double v11; // st7
  _DWORD *v12; // ecx
  int v13; // ebp
  bool v14; // cc
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19[3]; // [esp-4h] [ebp-68h] BYREF
  float v20; // [esp+8h] [ebp-5Ch]
  float v21; // [esp+20h] [ebp-44h]
  int v22; // [esp+24h] [ebp-40h]
  int v23; // [esp+28h] [ebp-3Ch] BYREF
  unsigned int v24; // [esp+2Ch] [ebp-38h]
  int v25; // [esp+30h] [ebp-34h]
  int v26; // [esp+34h] [ebp-30h]
  float v27; // [esp+38h] [ebp-2Ch] BYREF
  unsigned int v28; // [esp+3Ch] [ebp-28h]
  unsigned int v29; // [esp+60h] [ebp-4h]

  v3 = 0; /*0x7a396f*/
  v21 = kTerrainLODQuadRayDirectionZ; /*0x7a3971*/
  for ( i = 0; ; i += 0x54 ) /*0x7a3975*/
  {
    v5 = *(_DWORD *)(this + 0x98); /*0x7a3980*/
    if ( !v5 || v3 >= (*(_DWORD *)(this + 0x9C) - v5) / 0x54 ) /*0x7a39a9*/
      break; /*0x7a39a9*/
    v6 = *(_DWORD *)(this + 0x98); /*0x7a39af*/
    if ( !v6 || v3 >= (*(_DWORD *)(this + 0x9C) - v6) / 0x54 ) /*0x7a39d4*/
      _invalid_parameter_noinfo(i, v3, this); /*0x7a39d6*/
    v7 = *(_DWORD *)(this + 0x98); /*0x7a39db*/
    v8 = *(float *)(v7 + i + 0x48); /*0x7a39e1*/
    v9 = i + v7; /*0x7a39e5*/
    if ( *(float *)(v9 + 0x4C) >= v8 ) /*0x7a39f1*/
      v10 = *(float *)(v9 + 0x4C); /*0x7a39f8*/
    else
      v10 = *(float *)(v9 + 0x48); /*0x7a39f3*/
    *(float *)&v22 = v10; /*0x7a39fb*/
    v11 = *(float *)(this + 0xA4) * *(float *)&v22; /*0x7a3a05*/
    ++v3; /*0x7a3a16*/
    if ( v21 < v11 ) /*0x7a3a14*/
      v21 = v11; /*0x7a3a19*/
  }
  if ( kTerrainLODQuadRayDirectionZ == v21 ) /*0x7a3a41*/
    v21 = flt_A31C80; /*0x7a3a49*/
  v12 = *(_DWORD **)(this + 0xD4); /*0x7a3a4d*/
  if ( v12 ) /*0x7a3a55*/
  {
    OB_stVector4_CopyAssign_010201A0(v12, this + 0x74); /*0x7a3a5f*/
    v13 = 1; /*0x7a3a64*/
    v14 = *(_DWORD *)(this + 0xC0) <= 1; /*0x7a3a69*/
    v22 = 1; /*0x7a3a6f*/
    if ( !v14 ) /*0x7a3a73*/
    {
      v15 = 0x10; /*0x7a3a89*/
      v21 = v21 * dbl_A3F3E8; /*0x7a3a8e*/
      do /*0x7a3b56*/
      {
        *(float *)&v22 = (double)v22 * a2 + dbl_A2F928; /*0x7a3aa7*/
        v20 = *(float *)&v22; /*0x7a3aaf*/
        OB_CLeafLodEngine_ctor_010201A0((int)&v27, this + 0x84, v21, *(float *)(this + 0xE4), *(float *)&v22); /*0x7a3ac5*/
        v16 = *(_DWORD *)(this + 0xD4) + v15 - 0x10; /*0x7a3ad3*/
        *(float *)&v22 = COERCE_FLOAT(v19); /*0x7a3ad9*/
        v29 = 0; /*0x7a3ade*/
        OB_stVector4_CopyCtor_010201A0(v19, v13, v16);// BuildLeafLods copies a four-byte pointer vector with the folded shallow vector copy constructor. This does not duplicate or rewrite leaf texture objects. /*0x7a3ae6*/
        v17 = OB_CLeafLodEngine_ComputeNextLevel_010201A0(&v27, v13, &v23, v19[0], v19[1], v19[2], SLODWORD(v20));// OBLIVION AUTHORITY (2026-08-24): Per-lower-LOD call: input is prior explicit LOD, output becomes the current LOD. Thus BuildNewLeaves color averaging is applied at every generated lower level, not merely one special layer. /*0x7a3af4*/
        v18 = *(_DWORD *)(this + 0xD4); /*0x7a3af9*/
        LOBYTE(v29) = 1; /*0x7a3b02*/
        OB_stVector4_CopyAssign_010201A0((_DWORD *)(v15 + v18), (int)v17); /*0x7a3b07*/
        if ( v24 ) /*0x7a3b14*/
          FormHeapFree(v24); /*0x7a3b17*/
        v24 = 0; /*0x7a3b27*/
        v25 = 0; /*0x7a3b2b*/
        v26 = 0; /*0x7a3b2f*/
        v29 = 0xFFFFFFFF; /*0x7a3b33*/
        if ( v28 ) /*0x7a3b3b*/
          FormHeapFree(v28); /*0x7a3b3e*/
        ++v13; /*0x7a3b46*/
        v15 += 0x10; /*0x7a3b49*/
        v14 = v13 < *(_DWORD *)(this + 0xC0); /*0x7a3b4c*/
        v22 = v13; /*0x7a3b52*/
      }
      while ( v14 ); /*0x7a3b56*/
    }
  }
}
