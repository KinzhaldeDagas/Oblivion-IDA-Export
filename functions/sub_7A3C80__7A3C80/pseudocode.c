// Flattens branch tree, ranks by volume/large-branch retention/fuzziness, then emits branch LOD strips through OB_CBranch_ComputeLod_010201A0.
void __thiscall OB_CTreeEngine_BuildBranchLods_010201A0(OB_CTreeEngine_010201A0 *this)
{
  OB_CTreeEngine_010201A0 *v1; // ebx
  unsigned int v2; // ebp
  unsigned int *v3; // edi
  OB_CBranch_010201A0 *trunkBranch; // ecx
  OB_CIndexedGeometry_010201A0 *branchGeometry; // eax
  float *begin; // esi
  OB_stVectorFloat_010201A0 *p_vertexCoords; // eax
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int *v10; // esi
  double v11; // st7
  unsigned int *capacity; // edi
  unsigned int *end; // ecx
  unsigned int *v14; // edx
  unsigned int *v15; // ecx
  unsigned int *v16; // ebx
  unsigned int *v17; // edi
  unsigned int *v18; // ecx
  unsigned int *v19; // esi
  unsigned int *v20; // esi
  int v21; // eax
  double v22; // st7
  unsigned int *v23; // ecx
  unsigned int v24; // esi
  unsigned int *v25; // ecx
  const unsigned int *v26; // edi
  unsigned int *v27; // ebp
  float v28; // esi
  float v29; // ebx
  OB_CTreeEngine_010201A0 *v30; // edi
  double v31; // st7
  double v32; // st7
  signed int v33; // ebp
  unsigned int v34; // esi
  unsigned int *v35; // edi
  unsigned int j; // esi
  unsigned int *v37; // ecx
  OB_stVector4Iterator_010201A0 _FFFFFFFC; // [esp-4h] [ebp-78h]
  rsize_t _FFFFFFFCa; // [esp-4h] [ebp-78h]
  OB_stVector4Iterator_010201A0 _FFFFFFFCb; // [esp-4h] [ebp-78h]
  rsize_t v41; // [esp+8h] [ebp-6Ch]
  OB_stRandom_010201A0 v42; // [esp+23h] [ebp-51h] BYREF
  float v43; // [esp+24h] [ebp-50h]
  OB_CTreeEngine_010201A0 *v44; // [esp+28h] [ebp-4Ch]
  float i; // [esp+2Ch] [ebp-48h]
  float v46; // [esp+30h] [ebp-44h]
  float maxBranchVolumePercent; // [esp+34h] [ebp-40h]
  float Uniform_010201A0; // [esp+38h] [ebp-3Ch]
  OB_stVector4Iterator_010201A0 result; // [esp+3Ch] [ebp-38h] BYREF
  OB_stVector4_010201A0 v50; // [esp+44h] [ebp-30h] BYREF
  OB_stVector4_010201A0 v51; // [esp+54h] [ebp-20h] BYREF
  int v52; // [esp+70h] [ebp-4h]

  v1 = this; /*0x7a3cad*/
  v44 = this; /*0x7a3caf*/
  v2 = 0; /*0x7a3cb3*/
  v3 = 0; /*0x7a3cb5*/
  memset(&v50.begin, 0, 0xC); /*0x7a3cb7*/
  trunkBranch = this->trunkBranch; /*0x7a3cc3*/
  v52 = 0; /*0x7a3cc8*/
  if ( trunkBranch ) /*0x7a3ccc*/
  {
    branchGeometry = v1->branchGeometry; /*0x7a3cce*/
    begin = branchGeometry->vertexCoords.begin; /*0x7a3cd1*/
    p_vertexCoords = &branchGeometry->vertexCoords; /*0x7a3cd4*/
    if ( begin ) /*0x7a3cd9*/
      v8 = p_vertexCoords->end - begin; /*0x7a3ce4*/
    else
      v8 = 0; /*0x7a3cdb*/
    if ( (unsigned __int16)(v8 / 3) ) /*0x7a3cee*/
    {
      OB_CBranch_BuildBranchVector_010201A0(trunkBranch, &v50.allocatorState); /*0x7a3cfa*/
      v3 = v50.begin; /*0x7a3cff*/
    }
  }
  v46 = 0.0; /*0x7a3d09*/
  v9 = 0; /*0x7a3d0d*/
  for ( i = 0.0; v9 < OB_stVector4_Size_010201A0(&v50); ++v9 ) /*0x7a3d13*/
  {
    if ( !v3 || v9 >= v50.end - v3 ) /*0x7a3d2b*/
    {
      _invalid_parameter_noinfo(); /*0x7a3d2d*/
      v3 = v50.begin; /*0x7a3d32*/
    }
    v43 = *(float *)(v3[v9] + 0x28); /*0x7a3d3c*/
    v46 = v43 + v46; /*0x7a3d4a*/
    if ( i < (double)v43 ) /*0x7a3d59*/
      i = v43; /*0x7a3d5b*/
  }
  OB_stRandom_ctor_010201A0(&v42); /*0x7a3d77*/
  v10 = 0; /*0x7a3d84*/
  v11 = 1.0 - v1->largeBranchPercent; /*0x7a3d86*/
  capacity = 0; /*0x7a3d88*/
  memset(&v51.begin, 0, 0xC); /*0x7a3d8a*/
  maxBranchVolumePercent = v11; /*0x7a3d96*/
  end = v50.end; /*0x7a3d9a*/
  v14 = v50.begin; /*0x7a3d9e*/
  LOBYTE(v52) = 2; /*0x7a3da2*/
  while ( v14 && v2 < end - v14 ) /*0x7a3db8*/
  {
    v43 = *(float *)(v14[v2] + 0x28); /*0x7a3dc4*/
    if ( maxBranchVolumePercent * i >= v43 ) /*0x7a3ddb*/
    {
      Uniform_010201A0 = OB_stRandom_GetUniform_010201A0(&v42, 0.0, v1->branchReductionFuzziness); /*0x7a3edb*/
      v22 = Uniform_010201A0; /*0x7a3edf*/
      Uniform_010201A0 = 1.0 - Uniform_010201A0; /*0x7a3ee9*/
      v43 = v22 * i + Uniform_010201A0 * v43; /*0x7a3efd*/
      if ( v43 <= 0.0 ) /*0x7a3f0c*/
        v43 = 0.0; /*0x7a3f0e*/
      v23 = v50.begin; /*0x7a3f16*/
      if ( !v50.begin || v2 >= v50.end - v50.begin ) /*0x7a3f29*/
      {
        _invalid_parameter_noinfo(); /*0x7a3f2b*/
        v23 = v50.begin; /*0x7a3f30*/
      }
      *(float *)(v23[v2] + 0x2C) = v43; /*0x7a3f3b*/
      end = v50.end; /*0x7a3f3e*/
      v14 = v50.begin; /*0x7a3f42*/
      capacity = v51.capacity; /*0x7a3f46*/
      v10 = v51.begin; /*0x7a3f4a*/
      ++v2; /*0x7a3f4e*/
    }
    else
    {
      if ( v2 >= end - v14 ) /*0x7a3dec*/
      {
        _invalid_parameter_noinfo(); /*0x7a3dee*/
        v14 = v50.begin; /*0x7a3df3*/
        capacity = v51.capacity; /*0x7a3df7*/
        v10 = v51.begin; /*0x7a3dfb*/
      }
      v15 = v51.end; /*0x7a3e01*/
      v16 = &v14[v2]; /*0x7a3e05*/
      if ( v10 && v51.end - v10 < (unsigned int)(capacity - v10) ) /*0x7a3e18*/
      {
        *v51.end = *v16; /*0x7a3e21*/
        v51.end = v15 + 1; /*0x7a3e23*/
      }
      else
      {
        v17 = v51.end; /*0x7a3e2b*/
        if ( v10 > v51.end ) /*0x7a3e2d*/
          _invalid_parameter_noinfo(); /*0x7a3e2f*/
        _FFFFFFFC.current = v17; /*0x7a3e35*/
        _FFFFFFFC.owner = &v51; /*0x7a3e3a*/
        OB_stVector4_InsertOne_010201A0(&v51, &result, _FFFFFFFC, v16); /*0x7a3e44*/
      }
      v14 = v50.begin; /*0x7a3e49*/
      v18 = v50.end; /*0x7a3e4d*/
      v19 = v50.begin; /*0x7a3e53*/
      if ( v50.begin > v50.end ) /*0x7a3e55*/
      {
        _invalid_parameter_noinfo(); /*0x7a3e57*/
        v18 = v50.end; /*0x7a3e5c*/
        v14 = v50.begin; /*0x7a3e60*/
      }
      v20 = &v19[v2]; /*0x7a3e64*/
      if ( v20 > v18 || v20 < v14 ) /*0x7a3e6d*/
      {
        _invalid_parameter_noinfo(); /*0x7a3e6f*/
        v18 = v50.end; /*0x7a3e74*/
        v14 = v50.begin; /*0x7a3e78*/
      }
      v21 = v18 - (v20 + 1); /*0x7a3e83*/
      if ( v21 > 0 ) /*0x7a3e88*/
      {
        HIDWORD(_FFFFFFFCa) = v20 + 1; /*0x7a3e8f*/
        LODWORD(_FFFFFFFCa) = 4 * v21; /*0x7a3e90*/
        memmove_s(v20, _FFFFFFFCa, (const void *)_FFFFFFFCa, v41); /*0x7a3e92*/
        v18 = v50.end; /*0x7a3e97*/
        v14 = v50.begin; /*0x7a3e9b*/
      }
      v1 = v44; /*0x7a3ea2*/
      capacity = v51.capacity; /*0x7a3ea6*/
      v10 = v51.begin; /*0x7a3eaa*/
      end = v18 + 0xFFFFFFFF; /*0x7a3eae*/
      v50.end = end; /*0x7a3eb4*/
    }
  }
  OB_CBranch_SortBranchVector_010201A0((int)v10, (int)&v50); /*0x7a3f5b*/
  OB_CBranch_SortBranchVector_010201A0((int)v10, (int)&v51); /*0x7a3f65*/
  v24 = 0; /*0x7a3f71*/
  if ( OB_stVector4_Size_010201A0(&v51) ) /*0x7a3f73*/
  {
    do /*0x7a3fd1*/
    {
      v25 = v51.begin; /*0x7a3f80*/
      if ( !v51.begin || v24 >= v51.end - v51.begin ) /*0x7a3f93*/
      {
        _invalid_parameter_noinfo(); /*0x7a3f95*/
        v25 = v51.begin; /*0x7a3f9a*/
      }
      v26 = &v25[v24]; /*0x7a3fa6*/
      v27 = v50.begin; /*0x7a3fa9*/
      if ( v50.begin > v50.end ) /*0x7a3fab*/
        _invalid_parameter_noinfo(); /*0x7a3fad*/
      _FFFFFFFCb.current = v27; /*0x7a3fb3*/
      _FFFFFFFCb.owner = &v50; /*0x7a3fb4*/
      OB_stVector4_InsertOne_010201A0(&v50, &result, _FFFFFFFCb, v26); /*0x7a3fbe*/
      ++v24; /*0x7a3fc7*/
    }
    while ( v24 < OB_stVector4_Size_010201A0(&v51) ); /*0x7a3fd1*/
    v1 = v44; /*0x7a3fd3*/
  }
  v28 = *(float *)&v1->branchLodCount; /*0x7a3fd7*/
  v29 = 0.0; /*0x7a3fda*/
  v43 = v28; /*0x7a3fde*/
  if ( v28 != 0.0 ) /*0x7a3fe2*/
  {
    while ( 1 ) /*0x7a3ff6*/
    {
      v30 = v44; /*0x7a3ff6*/
      if ( v29 == 0.0 ) /*0x7a3ffa*/
        OB_CIndexedGeometry_DeleteLodStrip_010201A0(v44->branchGeometry, 0); /*0x7a4000*/
      if ( SLODWORD(v28) >= 2 ) /*0x7a4008*/
      {
        maxBranchVolumePercent = v30->maxBranchVolumePercent; /*0x7a4018*/
        Uniform_010201A0 = v29; /*0x7a401c*/
        v32 = (double)SLODWORD(v29); /*0x7a4020*/
        if ( v29 < 0.0 ) /*0x7a4024*/
          v32 = v32 + flt_A2FC78; /*0x7a4026*/
        Uniform_010201A0 = v32 / (double)(LODWORD(v28) - 1); /*0x7a4037*/
        v31 = maxBranchVolumePercent + (v30->minBranchVolumePercent - maxBranchVolumePercent) * Uniform_010201A0; /*0x7a404f*/
      }
      else
      {
        v31 = 1.0; /*0x7a400a*/
      }
      i = v31; /*0x7a4051*/
      v33 = 0; /*0x7a405d*/
      v34 = 0; /*0x7a4063*/
      Uniform_010201A0 = i * v46; /*0x7a4065*/
      i = 0.0; /*0x7a406b*/
      if ( OB_stVector4_Size_010201A0(&v50) ) /*0x7a406f*/
      {
        v35 = v50.begin; /*0x7a4078*/
        do /*0x7a40ce*/
        {
          if ( Uniform_010201A0 <= (double)i ) /*0x7a408b*/
            break; /*0x7a408b*/
          if ( !v35 || v34 >= v50.end - v35 ) /*0x7a409c*/
          {
            _invalid_parameter_noinfo(); /*0x7a409e*/
            v35 = v50.begin; /*0x7a40a3*/
          }
          maxBranchVolumePercent = *(float *)(v35[v34] + 0x28); /*0x7a40b1*/
          ++v33; /*0x7a40b5*/
          ++v34; /*0x7a40bc*/
          i = maxBranchVolumePercent + i; /*0x7a40c3*/
        }
        while ( v34 < OB_stVector4_Size_010201A0(&v50) ); /*0x7a40ce*/
        v30 = v44; /*0x7a40d0*/
      }
      OB_CIndexedGeometry_ResetStripCounter_010201A0(v30->branchGeometry, LOWORD(v29)); /*0x7a40d8*/
      if ( v29 != 0.0 || v33 ) /*0x7a40e3*/
      {
        for ( j = 0; (int)j < v33; ++j ) /*0x7a40f6*/
        {
          v37 = v50.begin; /*0x7a40f8*/
          if ( !v50.begin || j >= v50.end - v50.begin ) /*0x7a410b*/
          {
            _invalid_parameter_noinfo(); /*0x7a410d*/
            v37 = v50.begin; /*0x7a4112*/
          }
          OB_CBranch_ComputeLod_010201A0((OB_CBranch_010201A0 *)v37[j], LOWORD(v29), v30->branchGeometry); /*0x7a411e*/
        }
      }
      else
      {
        OB_CIndexedGeometry_AddStrip_010201A0(v30->branchGeometry, 0, 0, 0); /*0x7a40eb*/
      }
      if ( ++LODWORD(v29) >= LODWORD(v43) ) /*0x7a4131*/
        break; /*0x7a4131*/
      v28 = v43; /*0x7a3ff0*/
    }
  }
  if ( v51.begin ) /*0x7a413f*/
    FormHeapFree((unsigned int)v51.begin); /*0x7a4142*/
  memset(&v51.begin, 0, 0xC); /*0x7a414e*/
  LOBYTE(v52) = 0; /*0x7a415a*/
  Shared_NoOpVirtual_60D0A0(&v42); /*0x7a415f*/
  if ( v50.begin ) /*0x7a416a*/
    FormHeapFree((unsigned int)v50.begin); /*0x7a416d*/
}
