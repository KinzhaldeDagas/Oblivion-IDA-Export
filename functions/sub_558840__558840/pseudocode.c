// Apply EGM banks 0 and 1 as weighted int16 position deltas to the geometry vertex buffer. Validates basis dimensions, serializes shared model access, and marks only the vertex channel dirty. This routine does not regenerate the geometry normal array; bFixFaceNormals later performs only a targeted FaceGenFace-to-FaceGenEars seam copy.
bool __thiscall BSFaceGenModel_ApplyEGMMorph(
        void *this,
        const FaceGenHeadParameters *parameters,
        NiGeometry *geometry,
        float morphScale,
        const NiPoint3 *basePositions)
{
  unsigned int p_z; // edi
  NiObject *FaceGenBaseVertexData; // esi
  NiGeometryData *geomData; // ecx
  BSStringT *v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  volatile LONG *v12; // ebp
  LONG v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned int v20; // ebp
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // esi
  int v30; // ecx
  int v31; // ebx
  int v32; // edx
  int v33; // eax
  unsigned int v35; // ebp
  FaceGenMatrix *v36; // esi
  float *begin; // eax
  int v38; // edx
  int v39; // esi
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // esi
  int v44; // edx
  __int16 *v45; // esi
  int v46; // ebp
  _DWORD *v47; // ebx
  _DWORD *v48; // eax
  int v49; // ebx
  unsigned int v50; // ebx
  bool v51; // cf
  float v52; // edx
  float *v53; // eax
  float v54; // ecx
  _DWORD *v55; // ebx
  _DWORD *v56; // eax
  int v57; // ebx
  float *v58; // eax
  float v59; // ecx
  float v60; // edx
  float *v61; // eax
  float v62; // edx
  NiGeometryData *v63; // eax
  unsigned int v64; // [esp+14h] [ebp-74h]
  float v65; // [esp+14h] [ebp-74h]
  const FaceGenHeadParameters *v66; // [esp+18h] [ebp-70h]
  unsigned int v67; // [esp+18h] [ebp-70h]
  unsigned int v68; // [esp+18h] [ebp-70h]
  unsigned int m_usVertices; // [esp+1Ch] [ebp-6Ch]
  int v71; // [esp+24h] [ebp-64h]
  volatile LONG *Destination; // [esp+28h] [ebp-60h]
  int v73; // [esp+2Ch] [ebp-5Ch]
  unsigned int v74; // [esp+2Ch] [ebp-5Ch]
  unsigned int v75; // [esp+30h] [ebp-58h]
  unsigned int v76; // [esp+34h] [ebp-54h]
  unsigned int v77; // [esp+38h] [ebp-50h]
  FaceGenMatrix *v78; // [esp+3Ch] [ebp-4Ch]
  int v79; // [esp+40h] [ebp-48h]
  int v80; // [esp+44h] [ebp-44h]
  NiStridedVertexStream outVertices; // [esp+58h] [ebp-30h] BYREF
  float v82; // [esp+64h] [ebp-24h]
  float v83; // [esp+68h] [ebp-20h]
  float v84; // [esp+6Ch] [ebp-1Ch]
  float v85; // [esp+70h] [ebp-18h]
  float v86; // [esp+74h] [ebp-14h]
  float v87; // [esp+78h] [ebp-10h]
  int v88; // [esp+84h] [ebp-4h]

  p_z = (unsigned int)this; /*0x558867*/
  FaceGenBaseVertexData = NiObjectNET_FindFaceGenBaseVertexData((NiObjectNET *)geometry); /*0x558882*/
  if ( !*(_DWORD *)(p_z + 8) ) /*0x55887f*/
    return 0; /*0x55887f*/
  if ( !parameters ) /*0x558891*/
  {
    parameters = FaceGenManager_GetDefaultHeadParameters(); /*0x55889a*/
    if ( !parameters ) /*0x5588a1*/
      return 0; /*0x5588a1*/
  }
  memset(&outVertices, 0, 9); /*0x5588a9*/
  if ( geometry ) /*0x5588b6*/
  {
    geomData = geometry->member.geomData; /*0x5588b8*/
    if ( geomData ) /*0x5588c0*/
    {
      if ( NiGeometryData_LockVertexStream(geomData, 1) ) /*0x5588c4*/
        NiGeometryData_GetLockedVertexStream(geometry->member.geomData, &outVertices); /*0x5588d8*/
    }
  }
  if ( FaceGenBaseVertexData && FaceGenBaseVertexData->__vftable[1].Unk_02(FaceGenBaseVertexData) ) /*0x5588e8*/
  {
    v71 = (int)FaceGenBaseVertexData->__vftable[1].Unk_02(FaceGenBaseVertexData); /*0x5588f9*/
    m_usVertices = ((int (__thiscall *)(NiObject *, _DWORD))FaceGenBaseVertexData->__vftable[1].Unk_03)( /*0x558905*/
                     FaceGenBaseVertexData,
                     0);
  }
  else
  {
    if ( !outVertices.data ) /*0x55890f*/
      return 0; /*0x55890f*/
    m_usVertices = geometry->member.geomData->member.m_usVertices; /*0x558922*/
    v71 = 0; /*0x558926*/
    unk_B39D84 = 1; /*0x55892a*/
  }
  if ( !sub_551930((unsigned int **)p_z) ) /*0x558932*/
  {
    v8 = *(BSStringT **)(p_z + 8); /*0x55893e*/
    if ( !v8[1].m_data ) /*0x558941*/
    {
      if ( !BSStringT_GetLen(v8) ) /*0x55894d*/
        return 0; /*0x55894d*/
      v9 = (_DWORD *)FormHeapAlloc(0x24u); /*0x558955*/
      v88 = 0; /*0x558963*/
      if ( v9 ) /*0x55896a*/
        v10 = sub_558770(v9, **(char ***)(p_z + 8)); /*0x558974*/
      else
        v10 = 0; /*0x55897b*/
      v11 = *(_DWORD *)(p_z + 8); /*0x55897d*/
      v88 = 0xFFFFFFFF; /*0x558980*/
      *(_DWORD *)(v11 + 8) = v10; /*0x55898b*/
    }
    if ( !*(_DWORD *)(*(_DWORD *)(p_z + 8) + 8) ) /*0x558994*/
      return 0; /*0x558994*/
  }
  v12 = (volatile LONG *)(p_z + 0x14); /*0x55899c*/
  Destination = (volatile LONG *)(p_z + 0x14); /*0x5589a2*/
  v13 = InterlockedCompareExchange((volatile LONG *)(p_z + 0x14), 1, 0); /*0x5589aa*/
  v88 = 1; /*0x5589bb*/
  if ( !v13 )
  {
    v14 = 0; /*0x5589d3*/
    v64 = 0; /*0x5589d5*/
    v66 = parameters; /*0x5589d9*/
    while ( 1 ) /*0x5589e7*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)(p_z + 8) + 8); /*0x5589e7*/
      v16 = *(_DWORD *)(v15 + v14 + 8); /*0x5589ea*/
      v17 = v15 + v14 + 4; /*0x5589f0*/
      if ( v16 ) /*0x5589f4*/
      {
        v19 = (int)((unsigned __int64)(0x66666667LL * (*(_DWORD *)(v17 + 8) - v16)) >> 0x20) >> 3; /*0x558a0a*/
        v18 = v19 + (v19 >> 0x1F); /*0x558a12*/
        if ( v66->matrices[0].rows < v18 ) /*0x558a16*/
        {
          PrintError("FaceGen - Tried to apply a coordinate that did not match the EGM basis."); /*0x558ae8*/
          InterlockedCompareExchange(v12, 0, 1); /*0x558af5*/
          return 0; /*0x558af5*/
        }
      }
      else
      {
        v18 = 0; /*0x5589f6*/
      }
      v20 = 0; /*0x558a1c*/
      if ( v18 ) /*0x558a20*/
        break; /*0x558a20*/
LABEL_38:
      v66 = (const FaceGenHeadParameters *)((char *)v66 + 0x18); /*0x558aa3*/
      v14 += 0x10; /*0x558aa8*/
      v64 = v14; /*0x558aae*/
      if ( v14 >= 0x20 ) /*0x558ab2*/
      {
        v29 = 0; /*0x558ab8*/
        v77 = 0; /*0x558aba*/
        do /*0x559145*/
        {
          v30 = *(_DWORD *)(*((_DWORD *)this + 2) + 8); /*0x558ac7*/
          v31 = 0x10 * v29; /*0x558acc*/
          v32 = *(_DWORD *)(v30 + 0x10 * v29 + 8); /*0x558acf*/
          v79 = 0x10 * v29; /*0x558ad9*/
          if ( v32 ) /*0x558add*/
            v33 = (*(_DWORD *)(v30 + 0x10 * v29 + 0xC) - v32) / 0x14; /*0x558b3f*/
          else
            v33 = 0; /*0x558adf*/
          v35 = 0; /*0x558b41*/
          v76 = v33; /*0x558b45*/
          v75 = 0; /*0x558b49*/
          if ( v33 ) /*0x558b4d*/
          {
            v36 = &parameters->matrices[v29]; /*0x558b5d*/
            v78 = v36; /*0x558b60*/
            while ( 1 ) /*0x558b78*/
            {
              begin = v36->begin; /*0x558b78*/
              if ( !begin || !(v36->end - begin) ) /*0x558b84*/
                _invalid_parameter_noinfo(v31, p_z, (int)v36); /*0x558b89*/
              p_z = (unsigned int)&v36->begin[v35 * v36->columns]; /*0x558b9b*/
              v38 = *((_DWORD *)this + 2); /*0x558b9e*/
              v39 = *(_DWORD *)(v38 + 8) + v31 + 4; /*0x558ba4*/
              v40 = *(_DWORD *)(*(_DWORD *)(v38 + 8) + v31 + 8); /*0x558ba8*/
              if ( !v40 || v35 >= (*(_DWORD *)(*(_DWORD *)(v38 + 8) + v31 + 0xC) - v40) / 0x14 ) /*0x558bc7*/
                _invalid_parameter_noinfo(v31, p_z, v39); /*0x558bc9*/
              v73 = 0x14 * v35; /*0x558be5*/
              v65 = *(float *)p_z * morphScale * *(float *)(*(_DWORD *)(v39 + 4) + 0x14 * v35); /*0x558be9*/
              if ( 0.0 != v65 ) /*0x558bf8*/
              {
                v41 = *(_DWORD *)(*((_DWORD *)this + 2) + 8); /*0x558c05*/
                v42 = *(_DWORD *)(v41 + v31 + 8); /*0x558c08*/
                p_z = v71; /*0x558c0e*/
                v43 = v41 + v31 + 4; /*0x558c12*/
                if ( !v42 || v35 >= (*(_DWORD *)(v41 + v31 + 0xC) - v42) / 0x14 ) /*0x558c30*/
                  _invalid_parameter_noinfo(v31, v71, v43); /*0x558c32*/
                v44 = *(_DWORD *)(v43 + 4); /*0x558c37*/
                v45 = *(__int16 **)(v44 + v73 + 8); /*0x558c3e*/
                v46 = v44 + v73 + 4; /*0x558c46*/
                if ( (unsigned int)v45 > *(_DWORD *)(v44 + v73 + 0xC) ) /*0x558c4a*/
                  _invalid_parameter_noinfo(v31, v71, (int)v45); /*0x558c4c*/
                v74 = geometry->member.geomData->member.m_usVertices; /*0x558c6f*/
                if ( basePositions ) /*0x558c73*/
                {
                  if ( v71 ) /*0x558c7d*/
                  {
                    v67 = 0; /*0x558c85*/
                    if ( geometry->member.geomData->member.m_usVertices ) /*0x558c5e*/
                    {
                      v47 = (_DWORD *)v71; /*0x558c8f*/
                      do /*0x558d50*/
                      {
                        if ( !v46 ) /*0x558c98*/
                          _invalid_parameter_noinfo((int)v47, p_z, (int)v45); /*0x558c9a*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558ca2*/
                          _invalid_parameter_noinfo((int)v47, p_z, (int)v45); /*0x558ca4*/
                        *(float *)p_z = (double)*v45 * v65 + basePositions->x; /*0x558cc1*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558cc6*/
                          _invalid_parameter_noinfo((int)v47, p_z, (int)v45); /*0x558cc8*/
                        *(float *)(p_z + 4) = (double)v45[1] * v65 + basePositions->y; /*0x558ce7*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558ced*/
                          _invalid_parameter_noinfo((int)v47, p_z, (int)v45); /*0x558cef*/
                        p_z += 0xC; /*0x558d03*/
                        *(float *)(p_z - 4) = (double)v45[2] * v65 + basePositions->z; /*0x558d11*/
                        v48 = (char *)outVertices.data + v67 * outVertices.stride; /*0x558d1d*/
                        *v48 = *v47; /*0x558d23*/
                        v48[1] = v47[1]; /*0x558d28*/
                        v48[2] = v47[2]; /*0x558d2e*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558d34*/
                          _invalid_parameter_noinfo((int)v47, p_z, (int)v45); /*0x558d36*/
                        v45 += 3; /*0x558d42*/
                        v47 += 3; /*0x558d45*/
                        ++v67; /*0x558d4c*/
                      }
                      while ( v67 < v74 ); /*0x558d50*/
                    }
                    if ( v67 < m_usVertices ) /*0x558d5e*/
                    {
                      v49 = m_usVertices - v67; /*0x558d68*/
                      do /*0x558e0b*/
                      {
                        if ( !v46 ) /*0x558d6f*/
                          _invalid_parameter_noinfo(v49, p_z, (int)v45); /*0x558d71*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558d7d*/
                          _invalid_parameter_noinfo(v49, p_z, (int)v45); /*0x558d7f*/
                        *(float *)p_z = (double)*v45 * v65 + basePositions->x; /*0x558da0*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558da5*/
                          _invalid_parameter_noinfo(v49, p_z, (int)v45); /*0x558da7*/
                        *(float *)(p_z + 4) = (double)v45[1] * v65 + basePositions->y; /*0x558dca*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558dd0*/
                          _invalid_parameter_noinfo(v49, p_z, (int)v45); /*0x558dd2*/
                        p_z += 0xC; /*0x558dea*/
                        *(float *)(p_z - 4) = (double)v45[2] * v65 + basePositions->z; /*0x558df8*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558dfe*/
                          _invalid_parameter_noinfo(v49, p_z, (int)v45); /*0x558e00*/
                        v45 += 3; /*0x558e05*/
                        --v49; /*0x558e08*/
                      }
                      while ( v49 ); /*0x558e0b*/
                    }
                  }
                  else
                  {
                    v50 = 0; /*0x558e16*/
                    if ( m_usVertices ) /*0x558e1c*/
                    {
                      p_z = (unsigned int)&basePositions->z; /*0x558e29*/
                      do /*0x558ecf*/
                      {
                        if ( !v46 ) /*0x558e31*/
                          _invalid_parameter_noinfo(v50, p_z, (int)v45); /*0x558e33*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558e3b*/
                          _invalid_parameter_noinfo(v50, p_z, (int)v45); /*0x558e3d*/
                        v51 = (unsigned int)v45 < *(_DWORD *)(v46 + 8); /*0x558e42*/
                        v85 = (double)*v45 * v65 + *(float *)(p_z - 8); /*0x558e57*/
                        if ( !v51 ) /*0x558e5b*/
                          _invalid_parameter_noinfo(v50, p_z, (int)v45); /*0x558e5d*/
                        v51 = (unsigned int)v45 < *(_DWORD *)(v46 + 8); /*0x558e62*/
                        v86 = (double)v45[1] * v65 + *(float *)(p_z - 4); /*0x558e78*/
                        if ( !v51 ) /*0x558e7c*/
                          _invalid_parameter_noinfo(v50, p_z, (int)v45); /*0x558e7e*/
                        v52 = v86; /*0x558e8b*/
                        v87 = (double)v45[2] * v65 + *(float *)p_z; /*0x558ea4*/
                        v53 = (float *)((char *)outVertices.data + v50 * outVertices.stride); /*0x558ea8*/
                        *v53 = v85; /*0x558eac*/
                        v54 = v87; /*0x558eae*/
                        v53[1] = v52; /*0x558eb2*/
                        v53[2] = v54; /*0x558eb5*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558ebb*/
                          _invalid_parameter_noinfo(v50, p_z, (int)v45); /*0x558ebd*/
                        ++v50; /*0x558ec2*/
                        v45 += 3; /*0x558ec5*/
                        p_z += 0xC; /*0x558ec8*/
                      }
                      while ( v50 < m_usVertices ); /*0x558ecf*/
                    }
                  }
                }
                else
                {
                  v55 = (_DWORD *)v71; /*0x558eda*/
                  if ( v71 ) /*0x558ee0*/
                  {
                    v68 = 0; /*0x558ee8*/
                    if ( geometry->member.geomData->member.m_usVertices ) /*0x558c5e*/
                    {
                      do /*0x558f9a*/
                      {
                        if ( !v46 ) /*0x558ef7*/
                          _invalid_parameter_noinfo((int)v55, p_z, (int)v45); /*0x558ef9*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558f01*/
                          _invalid_parameter_noinfo((int)v55, p_z, (int)v45); /*0x558f03*/
                        *(float *)p_z = (double)*v45 * v65 + *(float *)p_z; /*0x558f19*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558f1e*/
                          _invalid_parameter_noinfo((int)v55, p_z, (int)v45); /*0x558f20*/
                        *(float *)(p_z + 4) = (double)v45[1] * v65 + *(float *)(p_z + 4); /*0x558f38*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558f3e*/
                          _invalid_parameter_noinfo((int)v55, p_z, (int)v45); /*0x558f40*/
                        p_z += 0xC; /*0x558f4d*/
                        *(float *)(p_z - 4) = (double)v45[2] * v65 + *(float *)(p_z - 4); /*0x558f5b*/
                        v56 = (char *)outVertices.data + v68 * outVertices.stride; /*0x558f67*/
                        *v56 = *v55; /*0x558f6d*/
                        v56[1] = v55[1]; /*0x558f72*/
                        v56[2] = v55[2]; /*0x558f78*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558f7e*/
                          _invalid_parameter_noinfo((int)v55, p_z, (int)v45); /*0x558f80*/
                        v45 += 3; /*0x558f8c*/
                        v55 += 3; /*0x558f8f*/
                        ++v68; /*0x558f96*/
                      }
                      while ( v68 < v74 ); /*0x558f9a*/
                    }
                    if ( v68 < m_usVertices ) /*0x558fa8*/
                    {
                      v57 = m_usVertices - v68; /*0x558fb2*/
                      do /*0x559040*/
                      {
                        if ( !v46 ) /*0x558fb9*/
                          _invalid_parameter_noinfo(v57, p_z, (int)v45); /*0x558fbb*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558fc7*/
                          _invalid_parameter_noinfo(v57, p_z, (int)v45); /*0x558fc9*/
                        *(float *)p_z = (double)*v45 * v65 + *(float *)p_z; /*0x558fe3*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x558fe8*/
                          _invalid_parameter_noinfo(v57, p_z, (int)v45); /*0x558fea*/
                        *(float *)(p_z + 4) = (double)v45[1] * v65 + *(float *)(p_z + 4); /*0x559006*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x55900c*/
                          _invalid_parameter_noinfo(v57, p_z, (int)v45); /*0x55900e*/
                        p_z += 0xC; /*0x55901f*/
                        *(float *)(p_z - 4) = (double)v45[2] * v65 + *(float *)(p_z - 4); /*0x55902d*/
                        if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x559033*/
                          _invalid_parameter_noinfo(v57, p_z, (int)v45); /*0x559035*/
                        v45 += 3; /*0x55903a*/
                        --v57; /*0x55903d*/
                      }
                      while ( v57 ); /*0x559040*/
                    }
                  }
                  else
                  {
                    for ( p_z = 0; p_z < m_usVertices; v45 += 3 ) /*0x559051*/
                    {
                      v58 = (float *)((char *)outVertices.data + p_z * outVertices.stride); /*0x559062*/
                      v59 = v58[1]; /*0x55906d*/
                      v82 = *v58; /*0x559070*/
                      v60 = v58[2]; /*0x559074*/
                      v83 = v59; /*0x559077*/
                      v84 = v60; /*0x55907b*/
                      if ( !v46 ) /*0x55907f*/
                        _invalid_parameter_noinfo(m_usVertices, p_z, (int)v45); /*0x559081*/
                      if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x559089*/
                        _invalid_parameter_noinfo(m_usVertices, p_z, (int)v45); /*0x55908b*/
                      v51 = (unsigned int)v45 < *(_DWORD *)(v46 + 8); /*0x559090*/
                      v82 = (double)*v45 * v65 + v82; /*0x5590a6*/
                      if ( !v51 ) /*0x5590aa*/
                        _invalid_parameter_noinfo(m_usVertices, p_z, (int)v45); /*0x5590ac*/
                      v51 = (unsigned int)v45 < *(_DWORD *)(v46 + 8); /*0x5590b1*/
                      v83 = (double)v45[1] * v65 + v83; /*0x5590c8*/
                      if ( !v51 ) /*0x5590cc*/
                        _invalid_parameter_noinfo(m_usVertices, p_z, (int)v45); /*0x5590ce*/
                      v61 = (float *)((char *)outVertices.data + p_z * outVertices.stride); /*0x5590e2*/
                      v80 = v45[2]; /*0x5590e6*/
                      v62 = v83; /*0x5590ea*/
                      *v61 = v82; /*0x5590f2*/
                      v61[1] = v62; /*0x5590f4*/
                      v84 = (double)v80 * v65 + v84; /*0x5590ff*/
                      v61[2] = v84; /*0x559107*/
                      if ( (unsigned int)v45 >= *(_DWORD *)(v46 + 8) ) /*0x55910d*/
                        _invalid_parameter_noinfo(m_usVertices, p_z, (int)v45); /*0x55910f*/
                      ++p_z; /*0x559114*/
                    }
                  }
                }
              }
              v35 = ++v75; /*0x559126*/
              if ( v75 >= v76 ) /*0x559131*/
                break; /*0x559131*/
              v36 = v78; /*0x558b70*/
              v31 = v79; /*0x558b74*/
            }
            v29 = v77; /*0x559137*/
          }
          v77 = ++v29; /*0x559141*/
        }
        while ( v29 < 2 );                      // EGM geometry deformation consumes exactly FaceGen matrices 0 and 1; matrices 2 and 3 are never vertex inputs. /*0x559145*/
        v63 = geometry->member.geomData; /*0x559152*/
        if ( v63->member.m_pkVertex ) /*0x559158*/
          v63->member.m_usDirtyFlags |= 1u; /*0x55915e*/
        NiGeometryData_UnlockVertexStream(geometry->member.geomData); /*0x559169*/
        InterlockedCompareExchange(Destination, 0, 1); /*0x559177*/
        return 1; /*0x55917d*/
      }
      v12 = Destination; /*0x5589e0*/
    }
    v21 = 0; /*0x558a26*/
    while ( 1 )
    {
      v22 = *(_DWORD *)(*((_DWORD *)this + 2) + 8); /*0x558a2f*/
      v23 = *(_DWORD *)(v22 + v64 + 8); /*0x558a36*/
      v24 = v22 + v64 + 4; /*0x558a3c*/
      if ( !v23 || v20 >= (*(_DWORD *)(v22 + v64 + 0xC) - v23) / 0x14 ) /*0x558a5a*/
        _invalid_parameter_noinfo(v18, v21, v24); /*0x558a5c*/
      v25 = *(_DWORD *)(v24 + 4); /*0x558a61*/
      v26 = *(_DWORD *)(v21 + v25 + 8); /*0x558a64*/
      v27 = v21 + v25 + 4; /*0x558a6a*/
      v28 = v26 ? (*(_DWORD *)(v27 + 8) - v26) / 6 : 0;
      if ( v28 < m_usVertices ) /*0x558a8b*/
        break; /*0x558a8b*/
      ++v20; /*0x558a91*/
      v21 += 0x14; /*0x558a94*/
      if ( v20 >= v18 ) /*0x558a99*/
      {
        p_z = (unsigned int)this; /*0x558a9b*/
        v14 = v64; /*0x558a9f*/
        goto LABEL_38; /*0x558a9f*/
      }
    }
    PrintError("FaceGen - EGM basis did not match the provided model data."); /*0x558b18*/
    InterlockedCompareExchange(Destination, 0, 1); /*0x558b29*/
  }
  return 0; /*0x558afd*/
}
