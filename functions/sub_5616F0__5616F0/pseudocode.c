//
//
// [2026-10-02 tangent preservation pass] Verified stock branch builder copies exported tangent/binormal XYZ using the compacted vertex mapping and attaches owning TangentSpaceData to property+0xD4. Fallout BSTreeModel::CreateBranchGeometry 0x8246BD48 corroborates preservation of both vectors. A basis synthesized only from normals loses original direction/handedness. SpeedTreeOBSE branch-shader frond path now preserves exported frond tangents (+0x5C) and binormals (+0x58) through capture/cache/clone and supplies separate property-owned copies. Normal-derived fallback remains only for absent pairs.
//
// [2026-10-02 branch dimming correction] Verified branch STSP per-vertex packing: x=exported windWeight, y=4*matrixByte, z=BYTE1(packedColor)/255.0, w=0. Divisor at 0xA3DDD8 has double bits 0x406FE00000000000. Fallout CreateBranchGeometry 0x8246BD48 corroborates color-derived z and 1/255 scale, but byte addressing differs on PPC; use Oblivion byte selection. RT4.1 IndexedGeometry.cpp:596 explicitly separates little/big-endian packing. SpeedTreeOBSE now retains Oblivion packed-green scalar in owned cache buffers and applies it ONLY to branch-shader property creation. The frond layout keeps z=0; eliminating fake secondary wind does not mean branch z is unused. Missing packed-color data rejects branch property creation instead of inventing a dimmer.
void __thiscall BSTreeModel_CreateBranchGeometry(BSTreeModel_OblivionLayout_058 *this)
{
  BSTreeModel_OblivionLayout_058 *v1; // esi
  bool v2; // zf
  char *branchGeometryDataByLOD; // eax
  unsigned int v4; // edi
  char *branchShaderPropertiesByLOD; // eax
  unsigned int v6; // edi
  const OB_CSpeedTreeRT_010201A0 *speedTree; // ecx
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  NiScreenElementsData **v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  BSShaderProperty **v14; // ebx
  unsigned int v15; // ecx
  int v16; // eax
  NiProperty **v17; // ebx
  int v18; // ebx
  int v19; // ebx
  float *normals; // edi
  float v21; // edx
  float v22; // eax
  int v23; // edi
  unsigned __int16 *v24; // esi
  unsigned __int16 v25; // ax
  unsigned __int16 *v26; // edi
  int v27; // ebx
  unsigned int j; // eax
  unsigned __int16 v29; // di
  unsigned __int16 v30; // bp
  unsigned __int16 v31; // cx
  OB_STSPData_010201A0 *v32; // edi
  int vtbl; // edx
  unsigned int k; // eax
  int v35; // ebx
  int v36; // esi
  BSShaderPPLightingProperty::TangentSpaceData *v37; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v38; // eax
  NiPoint3 *v39; // eax
  float *v40; // ebp
  int v41; // esi
  int v42; // ecx
  int v43; // edx
  float v44; // edx
  int v45; // eax
  int v46; // edi
  OB_STSPData_010201A0 *v47; // edx
  int v48; // esi
  double v49; // st7
  int v50; // ecx
  OB_STSPData_010201A0 *v51; // eax
  OB_STSPData_010201A0 *v52; // esi
  NiTriBasedGeomData *v53; // eax
  NiTriBasedGeomData *v54; // ebp
  NiScreenElementsData **v55; // edi
  int v56; // esi
  NiTriBasedGeomData *v57; // ebx
  NiTriBasedGeomData **v58; // edi
  BSTreeModel_OblivionLayout_058 *v59; // ebp
  OB_SpeedTreeBranchShaderProperty_010201A0 *v60; // eax
  BSShaderProperty **v61; // edi
  BSShaderProperty *v62; // ebx
  OB_SpeedTreeBranchShaderProperty_010201A0 **v63; // edi
  BSShaderPPLightingProperty::TangentSpaceData *v64; // ebx
  BSShaderProperty *v65; // esi
  volatile LONG *unk068; // edi
  OB_CSpeedTreeRT_010201A0 *v67; // ecx
  const unsigned __int16 *v68; // [esp-8h] [ebp-254h]
  __int128 v69; // [esp-4h] [ebp-250h]
  __int128 v70; // [esp-4h] [ebp-250h]
  unsigned int v71; // [esp-4h] [ebp-250h]
  int v72; // [esp+Ch] [ebp-240h]
  int v73; // [esp+Ch] [ebp-240h]
  float v74; // [esp+38h] [ebp-214h]
  float v75; // [esp+38h] [ebp-214h]
  float v76; // [esp+38h] [ebp-214h]
  float v77; // [esp+38h] [ebp-214h]
  float v78; // [esp+38h] [ebp-214h]
  int v79; // [esp+38h] [ebp-214h]
  float v80; // [esp+3Ch] [ebp-210h]
  float v81; // [esp+3Ch] [ebp-210h]
  int v82; // [esp+40h] [ebp-20Ch]
  int v83; // [esp+40h] [ebp-20Ch]
  float v84; // [esp+40h] [ebp-20Ch]
  int v85; // [esp+44h] [ebp-208h]
  OB_SpeedTreeBranchShaderProperty_010201A0 *v86; // [esp+44h] [ebp-208h]
  float v87; // [esp+48h] [ebp-204h]
  float v88; // [esp+48h] [ebp-204h]
  float v89; // [esp+48h] [ebp-204h]
  OB_STSPData_010201A0 *stspData; // [esp+4Ch] [ebp-200h]
  OB_STSPData_010201A0 *stspDataa; // [esp+4Ch] [ebp-200h]
  BSShaderPPLightingProperty::TangentSpaceData *vertexCount; // [esp+50h] [ebp-1FCh] BYREF
  OB_SpeedTreeBranchShaderProperty_010201A0 *v93; // [esp+54h] [ebp-1F8h]
  float v94; // [esp+58h] [ebp-1F4h]
  BSTreeModel_OblivionLayout_058 *v95; // [esp+5Ch] [ebp-1F0h]
  int v96; // [esp+60h] [ebp-1ECh]
  int v97; // [esp+64h] [ebp-1E8h]
  int i; // [esp+68h] [ebp-1E4h]
  void **v99; // [esp+6Ch] [ebp-1E0h] BYREF
  OB_STSPData_010201A0 *v100; // [esp+70h] [ebp-1DCh]
  __int16 v101; // [esp+74h] [ebp-1D8h]
  unsigned __int16 v102; // [esp+76h] [ebp-1D6h]
  __int16 v103; // [esp+78h] [ebp-1D4h]
  __int16 v104; // [esp+7Ah] [ebp-1D2h]
  float v105; // [esp+7Ch] [ebp-1D0h]
  float v106; // [esp+80h] [ebp-1CCh]
  float v107; // [esp+84h] [ebp-1C8h]
  float *v108; // [esp+88h] [ebp-1C4h]
  NiPoint3 *v109; // [esp+8Ch] [ebp-1C0h]
  int v110; // [esp+90h] [ebp-1BCh]
  NiPoint3 *v111; // [esp+94h] [ebp-1B8h]
  _WORD *v112; // [esp+98h] [ebp-1B4h]
  float v113; // [esp+9Ch] [ebp-1B0h]
  float v114; // [esp+A0h] [ebp-1ACh]
  float v115; // [esp+A4h] [ebp-1A8h]
  float v116; // [esp+A8h] [ebp-1A4h]
  float v117; // [esp+ACh] [ebp-1A0h]
  float v118; // [esp+B0h] [ebp-19Ch]
  float v119; // [esp+B4h] [ebp-198h]
  float v120; // [esp+B8h] [ebp-194h]
  float v121; // [esp+BCh] [ebp-190h]
  float v122; // [esp+C0h] [ebp-18Ch]
  float v123; // [esp+C4h] [ebp-188h]
  float v124; // [esp+C8h] [ebp-184h]
  float v125; // [esp+CCh] [ebp-180h]
  float v126; // [esp+D0h] [ebp-17Ch]
  float v127; // [esp+D4h] [ebp-178h]
  float v128; // [esp+D8h] [ebp-174h]
  OB_SpeedTreeGeometryOutput_010201A0 Src; // [esp+DCh] [ebp-170h] BYREF
  unsigned int v130; // [esp+248h] [ebp-4h]

  v1 = this; /*0x561723*/
  v95 = this; /*0x561725*/
  OB_SpeedTreeGeometryOutput_init_010201A0(&Src); /*0x561730*/
  v2 = v1->speedTree == 0; /*0x561737*/
  v130 = 0; /*0x56173a*/
  if ( v2 ) /*0x561741*/
    goto LABEL_106; /*0x561741*/
  if ( v1->modelState_0_uninit_1_base_2_instance == 2 ) /*0x56174b*/
    goto LABEL_106; /*0x56174b*/
  branchGeometryDataByLOD = (char *)v1->branchGeometryDataByLOD; /*0x561751*/
  if ( branchGeometryDataByLOD ) /*0x561756*/
  {
    v4 = (unsigned int)(branchGeometryDataByLOD + 0xFFFFFFFC); /*0x56175b*/
    _LN21( /*0x561767*/
      branchGeometryDataByLOD,
      4u,
      *((_DWORD *)branchGeometryDataByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v4); /*0x56176d*/
    v1->branchGeometryDataByLOD = 0; /*0x561775*/
  }
  branchShaderPropertiesByLOD = (char *)v1->branchShaderPropertiesByLOD; /*0x561778*/
  if ( branchShaderPropertiesByLOD ) /*0x56177d*/
  {
    v6 = (unsigned int)(branchShaderPropertiesByLOD + 0xFFFFFFFC); /*0x561782*/
    _LN21( /*0x56178e*/
      branchShaderPropertiesByLOD,
      4u,
      *((_DWORD *)branchShaderPropertiesByLOD + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree(v6); /*0x561794*/
    v1->branchShaderPropertiesByLOD = 0; /*0x56179c*/
  }
  speedTree = v1->speedTree; /*0x56179f*/
  if ( !speedTree ) /*0x5617a4*/
    goto LABEL_106; /*0x5617a4*/
  LOWORD(v8) = CSpeedTreeRT__GetNumBranchLodLevels(speedTree); /*0x5617af*/
  v96 = (unsigned __int16)v8; /*0x5617b5*/
  if ( !(_WORD)v8 ) /*0x5617b9*/
    goto LABEL_106; /*0x5617b9*/
  *(_QWORD *)((char *)&v69 + 4) = 0xFFFFFFFFFFFFFFFFuLL; /*0x5617c6*/
  LODWORD(v69) = 0xFFFFFFFF; /*0x5617c7*/
  CSpeedTreeRT__GetGeometry(v1->speedTree, &Src, 1u, v69, *((rsize_t *)&v69 + 1), v72);// 2026-05-25 render dispatch recheck: first stock CSpeedTreeRT::GetGeometry call from branch/base builder passes geometry flag 0x01 only (branch). This is not a frond or 360 billboard consumer. /*0x5617d2*/
  if ( Src.branches.coords )
  {
    if ( Src.branches.normals )
    {
      if ( Src.branches.diffuseTexcoords )
      {
        if ( Src.branches.packedColors )
        {
          if ( Src.branches.windWeights )
          {
            if ( Src.branches.windMatrixIndices )
            {
              vertexCount = (BSShaderPPLightingProperty::TangentSpaceData *)Src.branches.vertexCount; /*0x56181b*/
              if ( Src.branches.vertexCount )
              {
                v8 = (unsigned __int16)v8; /*0x56182d*/
                v9 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v10 = FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4);
                v93 = (OB_SpeedTreeBranchShaderProperty_010201A0 *)v10; /*0x561857*/
                LOBYTE(v130) = 1; /*0x56185d*/
                if ( v10 ) /*0x561865*/
                {
                  v11 = (NiScreenElementsData **)(v10 + 4); /*0x561872*/
                  *(_DWORD *)v10 = (unsigned __int16)v8; /*0x561878*/
                  ArrayConstructor( /*0x56187a*/
                    (char *)(v10 + 4),
                    4u,
                    (unsigned __int16)v8,
                    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))NiPointerSlot_Release);
                }
                else
                {
                  v11 = 0; /*0x561881*/
                }
                LOBYTE(v130) = 0; /*0x561891*/
                v1->branchGeometryDataByLOD = v11; /*0x561899*/
                v12 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v13 = FormHeapAlloc(__CFADD__(v12, 4) ? 0xFFFFFFFF : v12 + 4);
                v93 = (OB_SpeedTreeBranchShaderProperty_010201A0 *)v13; /*0x5618b5*/
                LOBYTE(v130) = 2; /*0x5618bb*/
                if ( v13 ) /*0x5618c3*/
                {
                  v14 = (BSShaderProperty **)(v13 + 4); /*0x5618d0*/
                  *(_DWORD *)v13 = (unsigned __int16)v8; /*0x5618d6*/
                  ArrayConstructor( /*0x5618d8*/
                    (char *)(v13 + 4),
                    4u,
                    (unsigned __int16)v8,
                    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))NiPointerSlot_Release);
                }
                else
                {
                  v14 = 0; /*0x5618df*/
                }
                LOBYTE(v130) = 0; /*0x5618ef*/
                v1->branchShaderPropertiesByLOD = v14; /*0x5618f7*/
                v15 = (unsigned __int64)(unsigned __int16)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v8;
                v16 = FormHeapAlloc(__CFADD__(v15, 4) ? 0xFFFFFFFF : v15 + 4);
                v93 = (OB_SpeedTreeBranchShaderProperty_010201A0 *)v16; /*0x561913*/
                LOBYTE(v130) = 3; /*0x561919*/
                if ( v16 ) /*0x561921*/
                {
                  v17 = (NiProperty **)(v16 + 4); /*0x56192e*/
                  *(_DWORD *)v16 = (unsigned __int16)v8; /*0x561934*/
                  ArrayConstructor( /*0x561936*/
                    (char *)(v16 + 4),
                    4u,
                    (unsigned __int16)v8,
                    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                    (void (__thiscall *)(void *))NiPointerSlot_Release);
                }
                else
                {
                  v17 = 0; /*0x56193d*/
                }
                v2 = (_WORD)v96 == 0; /*0x56193f*/
                LOBYTE(v130) = 0; /*0x561944*/
                v1->branchCachedPropertiesByLOD = v17; /*0x56194c*/
                if ( !v2 ) /*0x56194f*/
                {
                  v18 = 0; /*0x561951*/
                  do /*0x56197a*/
                  {
                    NiSmartPointer_Set__((Ni2DBuffer **)&v1->branchGeometryDataByLOD[v18], 0); /*0x561959*/
                    NiSmartPointer_Set__((Ni2DBuffer **)&v1->branchShaderPropertiesByLOD[v18], 0); /*0x561964*/
                    NiSmartPointer_Set__((Ni2DBuffer **)&v1->branchCachedPropertiesByLOD[v18++], 0); /*0x56196f*/
                    --v8; /*0x561977*/
                  }
                  while ( v8 ); /*0x56197a*/
                }
                if ( Src.branches.tangents ) /*0x561983*/
                {
                  if ( Src.branches.binormals ) /*0x561990*/
                  {
                    v19 = (unsigned __int16)vertexCount; /*0x561996*/
                    if ( (_WORD)vertexCount ) /*0x56199d*/
                    {
                      normals = (float *)Src.branches.normals; /*0x5619a3*/
                      do /*0x561a2b*/
                      {
                        v21 = normals[1]; /*0x5619b2*/
                        v22 = normals[2]; /*0x5619b5*/
                        v105 = *normals; /*0x5619b8*/
                        v106 = v21; /*0x5619c6*/
                        v107 = v22; /*0x5619cd*/
                        if ( _isnan(v105) || _isnan(v106) || _isnan(v107) ) /*0x561a00*/
                        {
                          *normals = rhs.x; /*0x561a12*/
                          normals[1] = rhs.y; /*0x561a1a*/
                          normals[2] = rhs.z; /*0x561a22*/
                        }
                        normals += 3; /*0x561a25*/
                        --v19; /*0x561a28*/
                      }
                      while ( v19 ); /*0x561a2b*/
                    }
                  }
                }
                v23 = 0; /*0x561a2d*/
                for ( i = 0; (unsigned __int16)v23 < (unsigned __int16)v96; i = v23 )
                {
                  *(_QWORD *)((char *)&v70 + 4) = 0xFFFFFFFFFFFFFFFFuLL; /*0x561a42*/
                  LODWORD(v70) = v23; /*0x561a44*/
                  CSpeedTreeRT__GetGeometry(v1->speedTree, &Src, 1u, v70, *((rsize_t *)&v70 + 1), v73);// 2026-05-25 render dispatch recheck: branch/base builder repeats CSpeedTreeRT::GetGeometry with geometry flag 0x01 only for branch LOD output. No later-family sidecar consumption observed. /*0x561a52*/
                  if ( Src.branches.vertexCount )
                  {
                    if ( Src.branches.stripLengths )
                    {
                      if ( Src.branches.strips )
                      {
                        v24 = (unsigned __int16 *)FormHeapAlloc(2u); /*0x561a8d*/
                        v25 = *Src.branches.stripLengths; /*0x561a8f*/
                        *v24 = *Src.branches.stripLengths; /*0x561a92*/
                        v93 = (OB_SpeedTreeBranchShaderProperty_010201A0 *)v24; /*0x561aa4*/
                        v26 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)v25 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v25);
                        v71 = 2 * *v24; /*0x561ac2*/
                        v68 = *Src.branches.strips; /*0x561ac3*/
                        v112 = v26; /*0x561ac5*/
                        memcpy(v26, v68, v71); /*0x561acc*/
                        v27 = FormHeapAlloc(Src.branches.vertexCount); /*0x561ae8*/
                        _memset(v27, 0, Src.branches.vertexCount); /*0x561aec*/
                        for ( j = 0; j < *v24; *(_BYTE *)(v26[j++] + v27) = 1 ) /*0x561af6*/
                          ; /*0x561b04*/
                        v29 = 0; /*0x561b12*/
                        v30 = 0; /*0x561b14*/
                        v99 = &NiTArray<unsigned int>::`vftable'; /*0x561b17*/
                        v101 = 0; /*0x561b1f*/
                        v104 = 1; /*0x561b24*/
                        v102 = 0; /*0x561b2b*/
                        v103 = 0; /*0x561b30*/
                        v100 = 0; /*0x561b35*/
                        LOBYTE(v130) = 4; /*0x561b41*/
                        if ( Src.branches.vertexCount ) /*0x561b49*/
                        {
                          do /*0x561b76*/
                          {
                            if ( *(_BYTE *)(v29 + v27) ) /*0x561b53*/
                            {
                              vertexCount = (BSShaderPPLightingProperty::TangentSpaceData *)v29; /*0x561b62*/
                              NiTArray_Add((unsigned __int16 *)&v99, &vertexCount); /*0x561b66*/
                            }
                            ++v29; /*0x561b6b*/
                          }
                          while ( v29 < Src.branches.vertexCount ); /*0x561b76*/
                          v30 = v102; /*0x561b78*/
                        }
                        FormHeapFree(v27); /*0x561b7e*/
                        v31 = 0; /*0x561b86*/
                        if ( v30 ) /*0x561b8b*/
                        {
                          v32 = v100; /*0x561b8d*/
                          do /*0x561bcf*/
                          {
                            vtbl = v32->vtbl; /*0x561b91*/
                            for ( k = 0; k < *v24; ++k ) /*0x561b95*/
                            {
                              if ( (unsigned __int16)(*Src.branches.strips)[k] == vtbl ) /*0x561baf*/
                                v112[k] = v31; /*0x561bb8*/
                            }
                            ++v31; /*0x561bc6*/
                            v32 = (OB_STSPData_010201A0 *)((char *)v32 + 4); /*0x561bc9*/
                          }
                          while ( v31 < v30 ); /*0x561bcf*/
                        }
                        v35 = v30; /*0x561bd1*/
                        v111 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                        v109 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                        v108 = (float *)FormHeapAlloc((unsigned __int64)v30 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v30);
                        v85 = 0; /*0x561c3d*/
                        v97 = 0; /*0x561c41*/
                        vertexCount = 0; /*0x561c45*/
                        if ( Src.branches.tangents )
                        {
                          if ( Src.branches.binormals )
                          {
                            v85 = FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                            v36 = FormHeapAlloc((0xC * (unsigned __int64)v30) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v30);
                            v97 = v36; /*0x561c90*/
                            v37 = (BSShaderPPLightingProperty::TangentSpaceData *)FormHeapAlloc(0x14u); /*0x561c94*/
                            LOBYTE(v130) = 5; /*0x561ca2*/
                            if ( v37 ) /*0x561caa*/
                              v38 = BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(v37, 1); /*0x561cb0*/
                            else
                              v38 = 0; /*0x561cb7*/
                            LOBYTE(v130) = 4; /*0x561cbd*/
                            vertexCount = v38; /*0x561cc5*/
                            *((_DWORD *)v38 + 3) = v85; /*0x561cc9*/
                            *((_DWORD *)v38 + 4) = v36; /*0x561ccc*/
                          }
                        }
                        if ( v102 ) /*0x561cd4*/
                        {
                          v39 = v109; /*0x561cda*/
                          v40 = v108; /*0x561cf0*/
                          LODWORD(v94) = v85 - (_DWORD)v109; /*0x561cf9*/
                          v41 = (char *)v111 - (char *)v109; /*0x561d01*/
                          stspData = v100; /*0x561d05*/
                          v82 = v97 - (_DWORD)v109; /*0x561d09*/
                          v110 = v35; /*0x561d0d*/
                          do /*0x561f09*/
                          {
                            v42 = 3 * stspData->vtbl; /*0x561d2d*/
                            v43 = 2 * stspData->vtbl; /*0x561d33*/
                            v74 = Src.branches.coords[3 * stspData->vtbl + 1]; /*0x561d42*/
                            v80 = Src.branches.coords[3 * stspData->vtbl + 2]; /*0x561d4a*/
                            v116 = Src.branches.coords[3 * stspData->vtbl]; /*0x561d52*/
                            *(float *)((char *)&v39->x + v41) = v116; /*0x561d64*/
                            v117 = v74; /*0x561d67*/
                            *(float *)((char *)&v39->y + v41) = v74; /*0x561d79*/
                            v118 = v80; /*0x561d7d*/
                            *(float *)((char *)&v39->z + v41) = v80; /*0x561d8b*/
                            v75 = Src.branches.normals[v42 + 1]; /*0x561da1*/
                            v87 = Src.branches.normals[v42 + 2]; /*0x561da9*/
                            v113 = Src.branches.normals[v42]; /*0x561db1*/
                            v39->x = v113; /*0x561dc3*/
                            v114 = v75; /*0x561dc5*/
                            v39->y = v75; /*0x561dd7*/
                            v115 = v87; /*0x561dda*/
                            v39->z = v87; /*0x561de8*/
                            v76 = Src.branches.diffuseTexcoords[v43 + 1]; /*0x561dfd*/
                            v105 = Src.branches.diffuseTexcoords[v43]; /*0x561e05*/
                            *v40 = v105; /*0x561e11*/
                            v106 = v76; /*0x561e14*/
                            v40[1] = v76; /*0x561e1c*/
                            if ( v85 ) /*0x561e1f*/
                            {
                              if ( v97 ) /*0x561e2a*/
                              {
                                v77 = Src.branches.tangents[v42 + 1]; /*0x561e42*/
                                v44 = v94; /*0x561e4a*/
                                v88 = Src.branches.tangents[v42 + 2]; /*0x561e4e*/
                                v119 = Src.branches.tangents[v42]; /*0x561e56*/
                                *(float *)((char *)&v39->x + LODWORD(v94)) = v119; /*0x561e68*/
                                v120 = v77; /*0x561e6b*/
                                *(float *)((char *)&v39->y + LODWORD(v44)) = v77; /*0x561e7d*/
                                v121 = v88; /*0x561e81*/
                                *(float *)((char *)&v39->z + LODWORD(v44)) = v88; /*0x561e8f*/
                                v78 = Src.branches.binormals[v42 + 1]; /*0x561ea5*/
                                v89 = Src.branches.binormals[v42 + 2]; /*0x561eb1*/
                                v126 = Src.branches.binormals[v42]; /*0x561eb9*/
                                *(float *)((char *)&v39->x + v82) = v126; /*0x561ecb*/
                                v127 = v78; /*0x561ece*/
                                *(float *)((char *)&v39->y + v82) = v78; /*0x561ee0*/
                                v128 = v89; /*0x561ee4*/
                                *(float *)((char *)&v39->z + v82) = v89; /*0x561ef2*/
                              }
                            }
                            stspData = (OB_STSPData_010201A0 *)((char *)stspData + 4); /*0x561ef6*/
                            v40 += 2; /*0x561efb*/
                            ++v39; /*0x561efe*/
                            --v110; /*0x561f01*/
                          }
                          while ( v110 ); /*0x561f09*/
                        }
                        v45 = FormHeapAlloc((unsigned __int64)(unsigned int)v35 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v35);
                        v46 = v45; /*0x561f30*/
                        v79 = v45; /*0x561f32*/
                        if ( v102 ) /*0x561f36*/
                        {
                          v47 = v100; /*0x561f3e*/
                          v125 = 0.0; /*0x561f42*/
                          v48 = v35; /*0x561f49*/
                          v49 = dbl_A3DDD8; /*0x561f52*/
                          do /*0x561fe9*/
                          {
                            v50 = v47->vtbl; /*0x561f58*/
                            v83 = BYTE1(Src.branches.packedColors[v47->vtbl]); /*0x561f66*/
                            v47 = (OB_STSPData_010201A0 *)((char *)v47 + 4); /*0x561f75*/
                            v45 += 0x10; /*0x561f78*/
                            v81 = (double)v83 / v49; /*0x561f7d*/
                            v94 = Src.branches.windWeights[v50]; /*0x561f85*/
                            --v48; /*0x561f98*/
                            v84 = (float)(4 * (unsigned __int8)Src.branches.windMatrixIndices[v50]); /*0x561fa3*/
                            v122 = v94; /*0x561fab*/
                            *(float *)(v45 - 0x10) = v94; /*0x561fbd*/
                            v123 = v84; /*0x561fc0*/
                            *(float *)(v45 - 0xC) = v84; /*0x561fd2*/
                            v124 = v81; /*0x561fd5*/
                            *(float *)(v45 - 8) = v81; /*0x561fe3*/
                            *(float *)(v45 - 4) = 0.0; /*0x561fe6*/
                          }
                          while ( v48 ); /*0x561fe9*/
                          v46 = v79; /*0x561fef*/
                        }
                        v51 = (OB_STSPData_010201A0 *)FormHeapAlloc(0x10u); /*0x561ff7*/
                        LOBYTE(v130) = 6; /*0x562005*/
                        if ( v51 ) /*0x56200d*/
                        {
                          v52 = OB_STSPData_ctor_010201A0(v51); /*0x562016*/
                          stspDataa = v52; /*0x562018*/
                        }
                        else
                        {
                          v52 = 0; /*0x56201e*/
                          stspDataa = 0; /*0x562020*/
                        }
                        if ( v52 ) /*0x56202a*/
                          InterlockedIncrement(&v52->refCount); /*0x562030*/
                        LOBYTE(v130) = 7; /*0x562038*/
                        v52->streamData = v46; /*0x562040*/
                        v52->vertexCountOrOwnershipGate = v35; /*0x562043*/
                        *(float *)&v53 = COERCE_FLOAT(FormHeapAlloc(0x50u)); /*0x562047*/
                        v94 = *(float *)&v53; /*0x56204f*/
                        LOBYTE(v130) = 8; /*0x562055*/
                        if ( *(float *)&v53 == 0.0 ) /*0x56205d*/
                          v54 = 0; /*0x5620a7*/
                        else
                          v54 = sub_719CB0( /*0x5620a3*/
                                  v53,
                                  v35,
                                  v111,
                                  v109,
                                  0,
                                  v108,
                                  1,
                                  0,
                                  *Src.branches.stripLengths - 2,
                                  1,
                                  (int)v93,
                                  (int)v112);
                        v55 = v95->branchGeometryDataByLOD; /*0x5620b2*/
                        v56 = (unsigned __int16)i; /*0x5620b7*/
                        v57 = (NiTriBasedGeomData *)v55[v56]; /*0x5620b9*/
                        v58 = (NiTriBasedGeomData **)&v55[v56]; /*0x5620bc*/
                        LOBYTE(v130) = 7; /*0x5620c0*/
                        if ( v57 != v54 ) /*0x5620c8*/
                        {
                          if ( v57 ) /*0x5620cc*/
                          {
                            if ( !InterlockedDecrement((volatile LONG *)&v57->members) ) /*0x5620d2*/
                              v57->__vftable->super.super.super.Destructor((NiRefObject *)v57, 1); /*0x5620e8*/
                          }
                          *v58 = v54; /*0x5620ec*/
                          if ( v54 ) /*0x5620ee*/
                            InterlockedIncrement((volatile LONG *)&v54->members); /*0x5620f4*/
                        }
                        v59 = v95; /*0x5620fa*/
                        v95->branchGeometryDataByLOD[v56]->member.super.super.super.m_usDirtyFlags = v95->branchGeometryDataByLOD[v56]->member.super.super.super.m_usDirtyFlags & 0xFFF | 0x4000; /*0x562112*/
                        v59->branchGeometryDataByLOD[v56]->member.super.super.super.m_ucKeepFlags = 0x11; /*0x56211c*/
                        v59->branchGeometryDataByLOD[v56]->member.super.super.super.m_ucCompressFlags = 0x1F; /*0x56212b*/
                        v60 = (OB_SpeedTreeBranchShaderProperty_010201A0 *)FormHeapAlloc(0xF4u); /*0x56212f*/
                        v93 = v60; /*0x562137*/
                        LOBYTE(v130) = 9; /*0x56213d*/
                        if ( v60 ) /*0x562145*/
                          v86 = OB_SpeedTreeBranchShaderProperty_ctor_010201A0(v60, stspDataa); /*0x562153*/
                        else
                          v86 = 0; /*0x562159*/
                        v61 = v59->branchShaderPropertiesByLOD; /*0x562161*/
                        v62 = v61[v56]; /*0x562164*/
                        v63 = (OB_SpeedTreeBranchShaderProperty_010201A0 **)&v61[v56]; /*0x562167*/
                        LOBYTE(v130) = 7; /*0x56216d*/
                        if ( v62 != (BSShaderProperty *)v86 ) /*0x562175*/
                        {
                          if ( v62 ) /*0x562179*/
                          {
                            if ( !InterlockedDecrement((volatile LONG *)&v62->member) ) /*0x56217f*/
                              (*(void (__thiscall **)(BSShaderProperty *, int))v62->vtbl)(v62, 1); /*0x562195*/
                          }
                          *v63 = v86; /*0x56219d*/
                          if ( v86 ) /*0x56219f*/
                            InterlockedIncrement((volatile LONG *)&v86->gap0[4]); /*0x5621a7*/
                        }
                        v64 = vertexCount; /*0x5621ad*/
                        if ( vertexCount ) /*0x5621b3*/
                        {
                          v65 = v59->branchShaderPropertiesByLOD[v56]; /*0x5621b8*/
                          unk068 = (volatile LONG *)v65[1].member.unk068; /*0x5621bb*/
                          if ( unk068 != (volatile LONG *)vertexCount ) /*0x5621c3*/
                          {
                            if ( unk068 ) /*0x5621c7*/
                            {
                              if ( !InterlockedDecrement(unk068 + 1) ) /*0x5621cd*/
                                (**(void (__thiscall ***)(volatile LONG *, int))unk068)(unk068, 1); /*0x5621e3*/
                            }
                            v65[1].member.unk068 = (UInt32)v64;// 2026-05-30 SpeedTreeOBSE: branch builder assigns tangent-space data to SpeedTreeBranchShaderProperty+0xD4 when source normal/tangent arrays exist. It does not assign base-diffuse +0xBC or base-normal +0xC0 texture arrays. /*0x5621e5*/
                            InterlockedIncrement((volatile LONG *)v64 + 1); /*0x5621ef*/
                          }
                        }
                        LOBYTE(v130) = 4; /*0x5621fd*/
                        if ( !InterlockedDecrement(&stspDataa->refCount) ) /*0x562205*/
                          (*(void (__thiscall **)(OB_STSPData_010201A0 *, int))stspDataa->vtbl)(stspDataa, 1); /*0x562217*/
                        LOBYTE(v130) = 0; /*0x56221e*/
                        v99 = &NiTArray<unsigned int>::`vftable'; /*0x562226*/
                        FormHeapFree((unsigned int)v100); /*0x56222e*/
                        v23 = i; /*0x562233*/
                        v1 = v95; /*0x562237*/
                      }
                    }
                  }
                  ++v23; /*0x562240*/
                }
                CSpeedTreeRT__ClearBranchPackedColors(v1->speedTree); /*0x562255*/
                v67 = v1->speedTree; /*0x56225a*/
                Src.branches.packedColors = 0; /*0x56225d*/
                CSpeedTreeRT__ClearBranchPrimaryWindData(v67); /*0x562264*/
                Src.branches.windWeights = 0; /*0x562269*/
                Src.branches.windMatrixIndices = 0; /*0x562270*/
LABEL_106:
                v130 = 0xFFFFFFFF; /*0x562277*/
                goto LABEL_107; /*0x562277*/
              }
            }
          }
        }
      }
    }
  }
  v130 = 0xFFFFFFFF; /*0x561821*/
LABEL_107:
  OB_SpeedTreeGeometryOutput_Dtor_010201A0(&Src); /*0x562282*/
}
