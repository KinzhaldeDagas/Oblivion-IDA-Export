//
//
// [2026-10-02 Fallout comparative pass]
// Verified comparison 2026-10-02: Fallout CreateLeafGeometry 0x8246B110 corroborates STLSPData lifecycle and scalar wiring. Oblivion allocates 0x20 bytes, retains at BSTreeModel+0x20, sets payload+0x0C from model+0x44 (Fallout model+0x3C), +0x10/+0x14 from wind engine+0x3C/+0x40, +0x18/+0x1C from treeObject virtual +0x164/+0x16C. Speed writes require tree, wind engine, and treeObject. Constructor leaves those speed fields uninitialized; runtime reachability of missing-input paths remains Unknown.
// [Mesh leaves v126, 2026-10-05] Native builder allocates leaf geometry/properties only when Src.primaryLeaves.leafCount is nonzero (0x56275A). Runtime v125 Cattail reports zero leaf counts for both LODs and null properties; it cannot be converted from native cards. Palmetto reaches conversion but a late CPU array read rejects. Which array was unavailable is UNKNOWN from v125 logs. Plugin v126 captures owned per-LOD map indices, native card positions/normals/UVs/indices/STSP and dimensions at the post-builder 0x563741 boundary AFTER atlas transaction, before CreateArt pre-cache. Conversion consumes these copies; count/data identity guards preserve fallback. End-to-end pixels remain UNVERIFIED.
// [v128 correction 2026-10-06] CONFIRMED: 0x562DA0 invokes CSpeedTreeRT__FreeLeafLODDataArrays before returning. 0x787217 reaches0x798690; 0x7986C8 frees map bytes and0x798752 clears SLodGeometry+10. Thus post-builder map capture in v126/v127 necessarily reads null. v127 logs map indices: native array bounds for Cattail and Palmetto, no MeshLeaves:attached. v128 preserves exact texture*2+mirror bytes at existing0x562744 GetGeometry hook, then forwards owned map vectors to post-builder vertex/UV capture. Native geometry remains fallback when capture fails. User sees upside-down Cattail foliage under v127; mesh orientation was not exercised in that run.
// [Palmetto mesh material v134, 2026-10-06] CONFIRMED native v91 set by differing leaf texture filenames; UV copy0x5629A2 uses V indices7,5,3,1 rather than1,3,5,7. Palmetto_RT authored maps PalmettoLeaf_1/PalmettoLeaf_2 differ; its installed SampleCompositeMap_Diffuse.dds matches supplied SDK pixels/file hash. v134 captures first source card UV before array cleanup, compares with native built card before atlas rebasing, and undoes proved native V reversal only in owned mesh UV interpolation. Unknown order retains stock cards. Cattail direct-order and signed-zero handling remain tested. Live visual correction remains UNVERIFIED.
// [RT4.1 parity v146 2026-10-07] Native fills same normal into all four NiTriShapeData vertices5628DC..562927. STSP third float has integer corner+4*leafCardIndex, fractional green dimming; loop starts corner2 at562985 and advances modulo4. Post-builder v146 smoothing uses actual STSP corner integer, excludes authored mesh maps, validates all LODs before writing native-owned normal arrays, then captures mesh sources. No new scene object ownership. Static/manual lighting still needs four-corner colors and is explicitly deferred.
// [Leaf RGB v148 2026-10-08] Native builder calls property virtual94 at562D4A and assigns returned additional-data at562D4F BEFORE returning; data+34 is already nonnull. v148 replaces it with a validated owned-copy one-stream block while replacing STSP with a tagged owner retaining an isolated shader. This avoids leaving the old additional stream borrowing a freed STSP array. All allocation/preflight completes before publication; no already-uploaded data accepted.
void __thiscall BSTreeModel_CreateLeafGeometry(
        BSTreeModel_OblivionLayout_058 *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  BSTreeModel_OblivionLayout_058 *v2; // esi
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx
  char *leafGeometryDataByLOD; // eax
  unsigned int v5; // edi
  char *leafShaderPropertiesByLOD; // eax
  unsigned int v7; // edi
  const OB_CSpeedTreeRT_010201A0 *v8; // ecx
  unsigned __int16 NumLeafLodLevels; // ax
  unsigned __int16 v10; // bp
  const char **v11; // edi
  int v12; // ebx
  int v13; // edi
  unsigned int v14; // ecx
  int v15; // eax
  NiTriShapeData **v16; // ebp
  unsigned int v17; // ecx
  int v18; // eax
  BSShaderProperty **v19; // ebp
  unsigned int v20; // ecx
  int v21; // eax
  BSShaderProperty **v22; // ebp
  bool v23; // zf
  int v24; // ebx
  NiTriShapeData **v25; // ebp
  NiTriShapeData *v26; // edi
  NiTriShapeData **v27; // ebp
  BSShaderProperty **v28; // ebp
  BSShaderProperty *v29; // edi
  BSShaderProperty **v30; // ebp
  BSShaderProperty **leafCachedPropertiesByLOD; // ebp
  BSShaderProperty *v32; // edi
  BSShaderProperty **v33; // ebp
  OB_STLSPData_010201A0 *v34; // eax
  OB_STLSPData_010201A0 *v35; // ebp
  OB_STLSPData_010201A0 *leafShaderStreamData; // edi
  OB_CSpeedTreeRT_010201A0 *v37; // eax
  OB_CWindEngine_010201A0 *windEngine; // eax
  OB_STLSPData_010201A0 *v39; // ebx
  double (__thiscall *v40)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *); // eax
  OB_STLSPData_010201A0 *v41; // ebx
  int v42; // ebx
  int v43; // edi
  unsigned __int16 leafCount; // bp
  unsigned __int16 v45; // cx
  unsigned int v46; // esi
  NiPoint3 *v47; // edi
  const float *v48; // esi
  int v49; // ecx
  int v50; // ebp
  int v51; // eax
  NiPoint3 *v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // edx
  int v57; // edi
  float v58; // ecx
  float v59; // edx
  float *v60; // eax
  int v61; // edx
  double v62; // st7
  float v63; // edx
  int v64; // ecx
  int v65; // eax
  UInt16 *v66; // edx
  NiTriShapeData *v67; // eax
  NiTriShapeData *v68; // eax
  NiTriShapeData **v69; // ebx
  NiTriShapeData *v70; // ebp
  NiTriShapeData **v71; // ebx
  OB_STSPData_010201A0 *v72; // eax
  OB_STSPData_010201A0 *v73; // ebp
  OB_STSPData_010201A0 *v74; // ebx
  __int16 v75; // dx
  OB_SpeedTreeLeafShaderProperty_010201A0 *v76; // eax
  BSShaderProperty **v77; // ebx
  int v78; // ebp
  OB_SpeedTreeLeafShaderProperty_010201A0 **v79; // ebx
  _DWORD *v80; // ebx
  int v81; // eax
  rsize_t v82; // [esp+4h] [ebp-1FCh]
  int v83; // [esp+Ch] [ebp-1F4h]
  const char **leafTextureFilenames; // [esp+1Ch] [ebp-1E4h]
  int v85; // [esp+1Ch] [ebp-1E4h]
  NiTriShapeData *v86; // [esp+1Ch] [ebp-1E4h]
  OB_SpeedTreeLeafShaderProperty_010201A0 *v87; // [esp+1Ch] [ebp-1E4h]
  float v88; // [esp+20h] [ebp-1E0h]
  float v89; // [esp+20h] [ebp-1E0h]
  int v90; // [esp+20h] [ebp-1E0h]
  char v91; // [esp+27h] [ebp-1D9h]
  int leafTextureCount_low; // [esp+28h] [ebp-1D8h]
  int v93; // [esp+28h] [ebp-1D8h]
  int v94; // [esp+28h] [ebp-1D8h]
  float v95; // [esp+2Ch] [ebp-1D4h]
  float v96; // [esp+2Ch] [ebp-1D4h]
  float v97; // [esp+2Ch] [ebp-1D4h]
  const float *v98; // [esp+30h] [ebp-1D0h]
  int v99; // [esp+30h] [ebp-1D0h]
  unsigned __int16 v100; // [esp+34h] [ebp-1CCh]
  const float *normals; // [esp+38h] [ebp-1C8h]
  int v102; // [esp+38h] [ebp-1C8h]
  OB_STSPData_010201A0 *stspData; // [esp+3Ch] [ebp-1C4h] BYREF
  float v104; // [esp+40h] [ebp-1C0h]
  const float *centerCoords; // [esp+44h] [ebp-1BCh]
  const float *v106; // [esp+48h] [ebp-1B8h]
  float *v107; // [esp+4Ch] [ebp-1B4h]
  int v108; // [esp+50h] [ebp-1B0h]
  float *v109; // [esp+54h] [ebp-1ACh]
  unsigned __int16 leafLodIndex[2]; // [esp+58h] [ebp-1A8h]
  int v111; // [esp+5Ch] [ebp-1A4h]
  float v112; // [esp+60h] [ebp-1A0h]
  int v113; // [esp+64h] [ebp-19Ch]
  int v114; // [esp+68h] [ebp-198h]
  int v115; // [esp+6Ch] [ebp-194h]
  BSTreeModel_OblivionLayout_058 *v116; // [esp+70h] [ebp-190h]
  NiPoint3 *v117; // [esp+74h] [ebp-18Ch]
  char *v118; // [esp+78h] [ebp-188h]
  UInt16 *v119; // [esp+7Ch] [ebp-184h]
  float v120; // [esp+80h] [ebp-180h]
  float v121; // [esp+84h] [ebp-17Ch]
  float v122; // [esp+88h] [ebp-178h]
  float v123; // [esp+8Ch] [ebp-174h]
  float v124; // [esp+90h] [ebp-170h]
  float v125; // [esp+94h] [ebp-16Ch]
  float v126; // [esp+98h] [ebp-168h]
  float v127; // [esp+9Ch] [ebp-164h]
  float v128; // [esp+A0h] [ebp-160h]
  float v129; // [esp+A4h] [ebp-15Ch]
  int v130; // [esp+A8h] [ebp-158h]
  OB_CSpeedTreeRT_STextures texturesOut; // [esp+ACh] [ebp-154h] BYREF
  OB_SpeedTreeGeometryOutput_010201A0 Src; // [esp+C8h] [ebp-138h] BYREF
  unsigned int v133; // [esp+1FCh] [ebp-4h]

  v2 = this; /*0x5622dd*/
  v116 = this; /*0x5622df*/
  OB_SpeedTreeGeometryOutput_init_010201A0(&Src); /*0x5622ea*/
  v133 = 0; /*0x5622f8*/
  CSpeedTreeRT__STextures_ctor(&texturesOut); /*0x5622ff*/
  stspData = 0; /*0x562304*/
  speedTree = v2->speedTree; /*0x562308*/
  LOBYTE(v133) = 2; /*0x56230d*/
  v91 = 0;                                      // Initialize multi-leaf-texture-name flag false. /*0x562315*/
  if ( speedTree )
  {
    if ( CSpeedTreeRT__GetLeafLodSizeAdjustments(speedTree) )
    {
      if ( v2->modelState_0_uninit_1_base_2_instance != 2 )
      {
        leafGeometryDataByLOD = (char *)v2->leafGeometryDataByLOD; /*0x562336*/
        if ( leafGeometryDataByLOD ) /*0x56233b*/
        {
          v5 = (unsigned int)(leafGeometryDataByLOD + 0xFFFFFFFC); /*0x562340*/
          _LN21( /*0x56234c*/
            leafGeometryDataByLOD,
            4u,
            *((_DWORD *)leafGeometryDataByLOD + 0xFFFFFFFF),
            (void (__thiscall *)(void *))NiPointerSlot_Release);
          FormHeapFree(v5); /*0x562352*/
          v2->leafGeometryDataByLOD = 0; /*0x56235a*/
        }
        leafShaderPropertiesByLOD = (char *)v2->leafShaderPropertiesByLOD; /*0x56235d*/
        if ( leafShaderPropertiesByLOD ) /*0x562362*/
        {
          v7 = (unsigned int)(leafShaderPropertiesByLOD + 0xFFFFFFFC); /*0x562367*/
          _LN21( /*0x562373*/
            leafShaderPropertiesByLOD,
            4u,
            *((_DWORD *)leafShaderPropertiesByLOD + 0xFFFFFFFF),
            (void (__thiscall *)(void *))NiPointerSlot_Release);
          FormHeapFree(v7); /*0x562379*/
          v2->leafShaderPropertiesByLOD = 0; /*0x562381*/
        }
        v8 = v2->speedTree; /*0x562384*/
        if ( v8
          && (NumLeafLodLevels = CSpeedTreeRT__GetNumLeafLodLevels(v8), (v108 = NumLeafLodLevels) != 0)
          && (CSpeedTreeRT__GetTextures(v2->speedTree, &texturesOut), LOWORD(texturesOut.leafTextureCount)) )
        {
          v10 = 1; /*0x5623d8*/
          leafTextureFilenames = texturesOut.leafTextureFilenames; /*0x5623dd*/
          leafTextureCount_low = LOWORD(texturesOut.leafTextureCount); /*0x5623e1*/
          do /*0x56245b*/
          {
            if ( v10 < LOWORD(texturesOut.leafTextureCount) ) /*0x5623ed*/
            {
              v11 = &texturesOut.leafTextureFilenames[v10]; /*0x56240c*/
              v12 = (unsigned __int16)(LOWORD(texturesOut.leafTextureCount) - v10); /*0x56240f*/
              do /*0x56244c*/
              {
                if ( strcmp(*leafTextureFilenames, *v11) ) /*0x56241c*/
                  v91 = 1;                      // Set multi-name flag when any two reported leaf texture filenames differ; this selects the alternate UV V-order below. /*0x562441*/
                ++v11; /*0x562446*/
                --v12; /*0x562449*/
              }
              while ( v12 ); /*0x56244c*/
            }
            ++leafTextureFilenames; /*0x56244e*/
            ++v10; /*0x562453*/
            --leafTextureCount_low; /*0x562456*/
          }
          while ( leafTextureCount_low ); /*0x56245b*/
          v13 = (unsigned __int16)v108; /*0x56245d*/
          v14 = (unsigned __int64)(unsigned __int16)v108 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v108;
          v15 = FormHeapAlloc(__CFADD__(v14, 4) ? 0xFFFFFFFF : v14 + 4);
          LOBYTE(v133) = 3; /*0x562491*/
          if ( v15 ) /*0x562499*/
          {
            v16 = (NiTriShapeData **)(v15 + 4); /*0x5624a6*/
            *(_DWORD *)v15 = (unsigned __int16)v108; /*0x5624ac*/
            ArrayConstructor( /*0x5624ae*/
              (char *)(v15 + 4),
              4u,
              v13,
              (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))NiPointerSlot_Release);
          }
          else
          {
            v16 = 0; /*0x5624b5*/
          }
          LOBYTE(v133) = 2; /*0x5624c5*/
          v2->leafGeometryDataByLOD = v16; /*0x5624cd*/
          v17 = (unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13;
          v18 = FormHeapAlloc(__CFADD__(v17, 4) ? 0xFFFFFFFF : v17 + 4);
          LOBYTE(v133) = 4; /*0x5624ef*/
          if ( v18 ) /*0x5624f7*/
          {
            v19 = (BSShaderProperty **)(v18 + 4); /*0x562504*/
            *(_DWORD *)v18 = v13; /*0x56250a*/
            ArrayConstructor( /*0x56250c*/
              (char *)(v18 + 4),
              4u,
              v13,
              (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))NiPointerSlot_Release);
          }
          else
          {
            v19 = 0; /*0x562513*/
          }
          LOBYTE(v133) = 2; /*0x562523*/
          v2->leafShaderPropertiesByLOD = v19; /*0x56252b*/
          v20 = (unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13;
          v21 = FormHeapAlloc(__CFADD__(v20, 4) ? 0xFFFFFFFF : v20 + 4);
          LOBYTE(v133) = 5; /*0x56254d*/
          if ( v21 ) /*0x562555*/
          {
            v22 = (BSShaderProperty **)(v21 + 4); /*0x562562*/
            *(_DWORD *)v21 = v13; /*0x562568*/
            ArrayConstructor( /*0x56256a*/
              (char *)(v21 + 4),
              4u,
              v13,
              (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))NiPointerSlot_Release);
          }
          else
          {
            v22 = 0; /*0x562571*/
          }
          v23 = (_WORD)v108 == 0; /*0x562573*/
          LOBYTE(v133) = 2; /*0x562578*/
          v2->leafCachedPropertiesByLOD = v22; /*0x562580*/
          if ( !v23 ) /*0x562583*/
          {
            v24 = 0; /*0x562589*/
            v93 = v13; /*0x56258b*/
            do /*0x562628*/
            {
              v25 = v2->leafGeometryDataByLOD; /*0x562590*/
              v26 = v25[v24]; /*0x562593*/
              v27 = &v25[v24]; /*0x562597*/
              if ( v26 ) /*0x56259b*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v26->member) ) /*0x5625a1*/
                  v26->__vftable->super.super.super.Destructor((NiRefObject *)v26, 1); /*0x5625b7*/
                *v27 = 0; /*0x5625b9*/
              }
              v28 = v2->leafShaderPropertiesByLOD; /*0x5625c0*/
              v29 = v28[v24]; /*0x5625c3*/
              v30 = &v28[v24]; /*0x5625c7*/
              if ( v29 ) /*0x5625cb*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v29->member) ) /*0x5625d1*/
                  (*(void (__thiscall **)(BSShaderProperty *, int))v29->vtbl)(v29, 1); /*0x5625e7*/
                *v30 = 0; /*0x5625e9*/
              }
              leafCachedPropertiesByLOD = v2->leafCachedPropertiesByLOD; /*0x5625f0*/
              v32 = leafCachedPropertiesByLOD[v24]; /*0x5625f3*/
              v33 = &leafCachedPropertiesByLOD[v24]; /*0x5625f7*/
              if ( v32 ) /*0x5625fb*/
              {
                if ( !InterlockedDecrement((volatile LONG *)&v32->member) ) /*0x562601*/
                  (*(void (__thiscall **)(BSShaderProperty *, int))v32->vtbl)(v32, 1); /*0x562617*/
                *v33 = 0; /*0x562619*/
              }
              ++v24; /*0x562620*/
              --v93; /*0x562623*/
            }
            while ( v93 ); /*0x562628*/
          }
          v34 = (OB_STLSPData_010201A0 *)FormHeapAlloc(0x20u); /*0x562630*/
          LOBYTE(v133) = 6; /*0x56263e*/
          if ( v34 ) /*0x562646*/
            v35 = OB_STLSPData_ctor_010201A0(v34); /*0x56264f*/
          else
            v35 = 0; /*0x562653*/
          leafShaderStreamData = v2->leafShaderStreamData; /*0x562655*/
          LOBYTE(v133) = 2; /*0x56265a*/
          if ( leafShaderStreamData != v35 ) /*0x562662*/
          {
            if ( leafShaderStreamData ) /*0x562666*/
            {
              if ( !InterlockedDecrement(&leafShaderStreamData->refCount) ) /*0x56266c*/
                (*(void (__thiscall **)(OB_STLSPData_010201A0 *, int))leafShaderStreamData->vtbl)( /*0x562682*/
                  leafShaderStreamData,
                  1);
            }
            v2->leafShaderStreamData = v35; /*0x562686*/
            if ( v35 ) /*0x562689*/
              InterlockedIncrement(&v35->refCount); /*0x56268f*/
          }
          v2->leafShaderStreamData->curveScalar = v2->curveScalar; /*0x5626a3*/
          v37 = v2->speedTree; /*0x5626a6*/
          if ( v37 ) /*0x5626ab*/
          {
            windEngine = v37->windEngine; /*0x5626ad*/
            if ( windEngine ) /*0x5626b2*/
            {
              v2->leafShaderStreamData->rockScalar = windEngine->speedWindRockScalar; /*0x5626cb*/
              v2->leafShaderStreamData->rustleScalar = v2->speedTree->windEngine->speedWindRustleScalar; /*0x5626e2*/
              if ( tree ) /*0x5626e5*/
              {
                v39 = v2->leafShaderStreamData; /*0x5626ef*/
                v88 = ((double (__thiscall *)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))*(_DWORD *)(*(_DWORD *)tree->prefix_000_047 + 0x164))(tree); /*0x5626f6*/
                v40 = *(double (__thiscall **)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))(*(_DWORD *)tree->prefix_000_047 + 0x16C); /*0x562700*/
                v39->rockSpeed = v88; /*0x562706*/
                v41 = v2->leafShaderStreamData; /*0x562709*/
                v89 = v40(tree); /*0x562710*/
                v41->rustleSpeed = v89; /*0x562718*/
              }
            }
          }
          v42 = 0; /*0x56271b*/
          *(_DWORD *)leafLodIndex = 0; /*0x562722*/
          if ( (_WORD)v108 )
          {
            v43 = 0; /*0x56272c*/
            v94 = 0; /*0x56272e*/
            do
            {
              LODWORD(v82) = v42; /*0x562732*/
              CSpeedTreeRT__GetGeometry(v2->speedTree, &Src, 4u, 0xFFFFFFFFFFFFFFFFuLL, v82, v83);// Builder loops each explicit leaf LOD index 0..GetNumLeafLodLevels()-1 and fetches that LOD's own persistent record. Both/all LODs use the same v3 packing recipe but retain per-LOD packedColor arrays. /*0x562744*/
              leafCount = Src.primaryLeaves.leafCount; /*0x56275a*/
              v45 = 4 * Src.primaryLeaves.leafCount; /*0x56275d*/
              v100 = Src.primaryLeaves.leafCount; /*0x562760*/
              v113 = (unsigned __int16)(4 * Src.primaryLeaves.leafCount); /*0x562764*/
              if ( Src.primaryLeaves.leafCount )
              {
                v46 = v45; /*0x56277c*/
                centerCoords = Src.primaryLeaves.centerCoords; /*0x56277f*/
                normals = Src.primaryLeaves.normals; /*0x562783*/
                v47 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
                v117 = v47; /*0x5627af*/
                v130 = FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
                v118 = (char *)FormHeapAlloc((unsigned __int64)v46 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v46);
                v90 = FormHeapAlloc((unsigned __int64)v46 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v46);
                v98 = (const float *)leafCount; /*0x562801*/
                v119 = (UInt16 *)FormHeapAlloc(
                                   (unsigned __int64)(6 * (unsigned int)leafCount) >> 0x1F != 0
                                 ? 0xFFFFFFFF
                                 : 0xC * leafCount);
                v48 = normals; /*0x562834*/
                LOWORD(v49) = 0; /*0x56283c*/
                v114 = 0; /*0x56283e*/
                v111 = 0; /*0x562842*/
                v115 = 0; /*0x562846*/
                v85 = 0; /*0x56284a*/
                v50 = (char *)centerCoords - (char *)normals; /*0x56284e*/
                centerCoords = v98; /*0x562850*/
                do /*0x562b6c*/
                {
                  v51 = 4 * (3 * (unsigned __int16)v49 + 9); /*0x562860*/
                  *(float *)((char *)&v47->x + v51) = *(const float *)((char *)v48 + v50); /*0x562862*/
                  *(float *)((char *)&v47->y + v51) = *(const float *)((char *)v48 + v50 + 4); /*0x562869*/
                  *(float *)((char *)&v47->z + v51) = *(const float *)((char *)v48 + v50 + 8); /*0x562871*/
                  v52 = (NiPoint3 *)v130; /*0x56287c*/
                  v53 = 4 * (3 * (unsigned __int16)v49 + 6); /*0x562889*/
                  *(float *)((char *)&v47->x + v53) = *(const float *)((char *)v48 + v50); /*0x56288b*/
                  *(float *)((char *)&v47->y + v53) = *(const float *)((char *)v48 + v50 + 4); /*0x562892*/
                  *(float *)((char *)&v47->z + v53) = *(const float *)((char *)v48 + v50 + 8); /*0x56289a*/
                  v54 = (unsigned __int16)v49; /*0x5628aa*/
                  v47[v54 + 1].x = *(const float *)((char *)v48 + v50); /*0x5628ac*/
                  v47[v54 + 1].y = *(const float *)((char *)v48 + v50 + 4); /*0x5628b4*/
                  v47[v54 + 1].z = *(const float *)((char *)v48 + v50 + 8); /*0x5628bc*/
                  v47[v54].x = *(const float *)((char *)v48 + v50); /*0x5628c3*/
                  v47[v54].y = *(const float *)((char *)v48 + v50 + 4); /*0x5628ca*/
                  v47[v54].z = *(const float *)((char *)v48 + v50 + 8); /*0x5628d2*/
                  v55 = 4 * (3 * (unsigned __int16)v49 + 9); /*0x5628d8*/
                  *(float *)((char *)&v52->x + v55) = *v48; /*0x5628dc*/
                  *(float *)((char *)&v52->y + v55) = v48[1]; /*0x5628e2*/
                  *(float *)((char *)&v52->z + v55) = v48[2]; /*0x5628e9*/
                  v56 = 4 * (3 * (unsigned __int16)v49 + 6); /*0x5628ef*/
                  *(float *)((char *)&v52->x + v56) = *v48; /*0x5628f3*/
                  *(float *)((char *)&v52->y + v56) = v48[1]; /*0x5628f9*/
                  *(float *)((char *)&v52->z + v56) = v48[2]; /*0x562900*/
                  v52[v54 + 1].x = *v48; /*0x562906*/
                  v52[v54 + 1].y = v48[1]; /*0x56290d*/
                  v52[v54 + 1].z = v48[2]; /*0x562914*/
                  v52[v54].x = *v48; /*0x56291a*/
                  v52[v54].y = v48[1]; /*0x562920*/
                  v52[v54].z = v48[2]; /*0x562927*/
                  v112 = (double)BYTE1(Src.primaryLeaves.packedColors[v85]) / dbl_A3DDD8;// OBLIVION AUTHORITY (2026-08-24): Reads byte +1 of packedColors[leaf] (green channel of the per-leaf packed DWORD at SLodGeometry+0x24), then divides by 255.0. This byte is not the CBillboardLeaf colorScaleByte itself; generated leaves may already have colorScale applied when their packed color was produced. /*0x562949*/
                  if ( v112 >= 1.0 )            // If green/255 reaches 1.0 (green=255), replace with 0.99f so the fractional field does not carry into the integer LeafBase selector. Green=0 remains exactly 0. /*0x562958*/
                    v112 = flt_A65520; /*0x562960*/
                  v57 = v90 + 0x10 * (unsigned __int16)v49; /*0x562977*/
                  v106 = Src.primaryLeaves.diffuseTexcoords[v85];// Leaf-card builder consumes the already prepared direct/mirrored texcoord pointer. It reorders pairs for the multi-filename case but applies no further sign, half-texel, scale, or bias transform. /*0x56297b*/
                  v102 = 2; /*0x562985*/
                  v107 = (float *)&v118[8 * (unsigned __int16)v49]; /*0x56298d*/
                  v109 = (float *)(v106 + 7); /*0x562991*/
                  v99 = 4; /*0x562995*/
                  do /*0x562b08*/
                  {                             // If any leaf texture filenames differ, copy four output pairs as (src0,src7),(src2,src5),(src4,src3),(src6,src1), reversing the conventional quad V order without numeric offsets.
                    if ( v91 ) /*0x5629a2*/
                    {
                      v104 = *v106; /*0x5629ae*/
                      v95 = *v109; /*0x5629b4*/
                      v128 = v104; /*0x5629bc*/
                      v58 = v104; /*0x5629c3*/
                      v129 = v95; /*0x5629ce*/
                      v59 = v95; /*0x5629d5*/
                    }
                    else
                    {
                      v96 = *v106;              // If all leaf texture filenames are equal, copy authored pairs verbatim: (src0,src1),(src2,src3),(src4,src5),(src6,src7). /*0x5629e4*/
                      v104 = v106[1]; /*0x5629eb*/
                      v121 = v96; /*0x5629f3*/
                      v58 = v96; /*0x5629f7*/
                      v122 = v104; /*0x5629ff*/
                      v59 = v104; /*0x562a06*/
                    }
                    v60 = v107; /*0x562a0d*/
                    *v107 = v58;                // Store selected authored U/V floats directly. No scale, bias, atlas half-texel inset, or runtime LOD adjustment is applied. /*0x562a11*/
                    v60[1] = v59; /*0x562a13*/
                    v120 = (double)(v102 % 4 + 4 * (unsigned __int8)Src.primaryLeaves.leafCardIndices[v114]) + v112;// OBLIVION AUTHORITY (2026-08-24): Packs STSP v3.z = cornerIndex + 4*unsigned leafCardIndex + greenFraction. Integer component drives LeafBase relative-addressing; VS1.1 EXPP.y recovers the fractional dimming term. Zero fraction removes ambient+directional RGB; point-program contribution is added separately. /*0x562a50*/
                    v61 = Src.primaryLeaves.windMatrixIndices[v114]; /*0x562a5e*/
                    v104 = Src.primaryLeaves.windWeights[v85]; /*0x562a62*/
                    v97 = (float)(4 * v61); /*0x562a79*/
                    v57 += 0x10; /*0x562a89*/
                    v123 = *(const float *)((char *)CSpeedTreeRT__GetLeafLodSizeAdjustments(v116->speedTree) + v94); /*0x562a8c*/
                    v124 = v104; /*0x562a97*/
                    *(float *)(v57 - 0x10) = v104; /*0x562aa9*/
                    v125 = v97; /*0x562aac*/
                    v62 = v120; /*0x562aba*/
                    *(float *)(v57 - 0xC) = v97; /*0x562abe*/
                    v126 = v62; /*0x562ac1*/
                    v109 += 0xFFFFFFFE; /*0x562adb*/
                    v127 = v123; /*0x562adf*/
                    v106 += 2; /*0x562ae6*/
                    v107 += 2; /*0x562aea*/
                    v63 = v123; /*0x562aee*/
                    *(float *)(v57 - 8) = v126; // Store packed selector+dimmer into the third float of the 16-byte STSP vertex record, consumed as BLENDINDICES v3.z by every leaf VS variant. /*0x562af5*/
                    ++v102; /*0x562afd*/
                    v23 = v99-- == 1; /*0x562b01*/
                    *(float *)(v57 - 4) = v63; /*0x562b05*/
                  }
                  while ( !v23 ); /*0x562b08*/
                  v64 = v115; /*0x562b0e*/
                  v65 = (unsigned __int16)v111; /*0x562b12*/
                  v66 = v119; /*0x562b17*/
                  v111 += 6; /*0x562b1b*/
                  ++v85; /*0x562b20*/
                  v119[v65] = v115 + 3;         // First leaf-card triangle indices: (base+3, base+1, base+2). /*0x562b28*/
                  v66[v65 + 1] = v64 + 1; /*0x562b2f*/
                  v66[v65 + 2] = v64 + 2; /*0x562b37*/
                  v66[v65 + 4] = v64 + 1; /*0x562b3f*/
                  v66[v65 + 3] = v64;           // Second leaf-card triangle indices: (base+0, base+1, base+3). /*0x562b47*/
                  v66[v65 + 5] = v64 + 3; /*0x562b4c*/
                  v47 = v117; /*0x562b51*/
                  ++v114; /*0x562b5a*/
                  v49 = v64 + 4; /*0x562b5e*/
                  v48 += 3; /*0x562b61*/
                  v23 = centerCoords == (const float *)1; /*0x562b64*/
                  centerCoords = (const float *)((char *)centerCoords + 0xFFFFFFFF); /*0x562b64*/
                  v115 = v49; /*0x562b68*/
                }
                while ( !v23 ); /*0x562b6c*/
                v67 = (NiTriShapeData *)FormHeapAlloc(0x58u); /*0x562b78*/
                LOBYTE(v133) = 7; /*0x562b86*/
                if ( v67 ) /*0x562b8e*/
                {
                  v68 = NiTriShapeData_ConstructWithData(v67, v113, v117, v52, 0, v118, 1, 0, 2 * v100, v119);// Build NiTriShapeData with 4 vertices/card, the directly copied UV array, and 6 indices/card. Geometry was captured from this explicit leaf LOD. /*0x562bae*/
                  v86 = v68; /*0x562bb3*/
                }
                else
                {
                  v86 = 0; /*0x562bb9*/
                  v68 = 0; /*0x562bc1*/
                }
                v2 = v116; /*0x562bc5*/
                v69 = v116->leafGeometryDataByLOD; /*0x562bc9*/
                v43 = v94; /*0x562bcc*/
                v70 = *(NiTriShapeData **)((char *)v69 + v94); /*0x562bd0*/
                v71 = (NiTriShapeData **)((char *)v69 + v94); /*0x562bd3*/
                LOBYTE(v133) = 2; /*0x562bd7*/
                if ( v70 != v68 ) /*0x562bdf*/
                {
                  if ( v70 ) /*0x562be3*/
                  {
                    if ( !InterlockedDecrement((volatile LONG *)&v70->member) ) /*0x562be9*/
                      v70->__vftable->super.super.super.Destructor((NiRefObject *)v70, 1); /*0x562c00*/
                    v68 = v86; /*0x562c02*/
                  }
                  *v71 = v68; /*0x562c08*/
                  if ( v68 ) /*0x562c0a*/
                    InterlockedIncrement((volatile LONG *)&v68->member); /*0x562c10*/
                }
                v72 = (OB_STSPData_010201A0 *)FormHeapAlloc(0x10u); /*0x562c18*/
                LOBYTE(v133) = 8; /*0x562c26*/
                if ( v72 ) /*0x562c2e*/
                  v73 = OB_STSPData_ctor_010201A0(v72); /*0x562c37*/
                else
                  v73 = 0; /*0x562c3b*/
                v74 = stspData; /*0x562c3d*/
                LOBYTE(v133) = 2; /*0x562c43*/
                if ( stspData != v73 ) /*0x562c4b*/
                {
                  if ( stspData ) /*0x562c4f*/
                  {
                    if ( !InterlockedDecrement(&stspData->refCount) ) /*0x562c55*/
                      (*(void (__thiscall **)(OB_STSPData_010201A0 *, int))stspData->vtbl)(stspData, 1); /*0x562c67*/
                  }
                  v74 = v73; /*0x562c6b*/
                  stspData = v73; /*0x562c6d*/
                  if ( v73 ) /*0x562c71*/
                    InterlockedIncrement(&v73->refCount); /*0x562c77*/
                }
                v75 = v113; /*0x562c81*/
                v74->streamData = v90;          // Attach the freshly built 16-byte-per-vertex STSP float4 array to this leaf LOD property. Texture replacement does not rewrite this stream. /*0x562c8b*/
                v74->vertexCountOrOwnershipGate = v75; /*0x562c8e*/
                v76 = (OB_SpeedTreeLeafShaderProperty_010201A0 *)FormHeapAlloc(0xB0u); /*0x562c92*/
                LOBYTE(v133) = 9; /*0x562ca0*/
                if ( v76 ) /*0x562ca8*/
                  v87 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty( /*0x562cbb*/
                          v76,
                          leafLodIndex[0],
                          v74,
                          v2->leafShaderStreamData);
                else
                  v87 = 0; /*0x562cc1*/
                v77 = v2->leafShaderPropertiesByLOD; /*0x562cc9*/
                v78 = *(int *)((char *)v77 + v94); /*0x562ccc*/
                v79 = (OB_SpeedTreeLeafShaderProperty_010201A0 **)((char *)v77 + v94); /*0x562ccf*/
                LOBYTE(v133) = 2; /*0x562cd5*/
                if ( (OB_SpeedTreeLeafShaderProperty_010201A0 *)v78 != v87 ) /*0x562cdd*/
                {
                  if ( v78 ) /*0x562ce1*/
                  {
                    if ( !InterlockedDecrement((volatile LONG *)(v78 + 4)) ) /*0x562ce7*/
                      (**(void (__thiscall ***)(int, int))v78)(v78, 1); /*0x562cfe*/
                  }
                  *v79 = v87; /*0x562d06*/
                  if ( v87 ) /*0x562d08*/
                    InterlockedIncrement((volatile LONG *)&v87->gap0[4]); /*0x562d0e*/
                }
                (*(void (__thiscall **)(_DWORD, NiSourceTexture *))(**(_DWORD **)((char *)v2->leafShaderPropertiesByLOD /*0x562d23*/
                                                                                + v94)
                                                                  + 0x7C))(
                  *(BSShaderProperty **)((char *)v2->leafShaderPropertiesByLOD + v94),
                  v2->leafTexture);             // Assign the same BSTreeModel leaf texture (+0x38) to every leaf-LOD shader property.
                (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)((char *)v2->leafShaderPropertiesByLOD + v94) /*0x562d32*/
                                                       + 0x58))(
                  *(BSShaderProperty **)((char *)v2->leafShaderPropertiesByLOD + v94),
                  0);
                v80 = *(NiTriShapeData **)((char *)v2->leafGeometryDataByLOD + v94); /*0x562d3f*/
                v81 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)((char *)v2->leafShaderPropertiesByLOD + v94) /*0x562d4a*/
                                                            + 0x94))(
                        *(BSShaderProperty **)((char *)v2->leafShaderPropertiesByLOD + v94),
                        0);
                sub_6C61E0(v80, v81); /*0x562d4f*/
                v42 = *(_DWORD *)leafLodIndex; /*0x562d5e*/
                (*(NiTriShapeData **)((char *)v2->leafGeometryDataByLOD + v94))->member.super.super.m_usDirtyFlags = (*(NiTriShapeData **)((char *)v2->leafGeometryDataByLOD + v94))->member.super.super.m_usDirtyFlags & 0xFFF | 0x4000; /*0x562d6c*/
                (*(NiTriShapeData **)((char *)v2->leafGeometryDataByLOD + v94))->member.super.super.m_ucKeepFlags = 0x11; /*0x562d76*/
                (*(NiTriShapeData **)((char *)v2->leafGeometryDataByLOD + v94))->member.super.super.m_ucCompressFlags = 0x1F; /*0x562d80*/
              }
              ++v42;                            // OBLIVION AUTHORITY (2026-08-24): End of explicit leaf-LOD loop. Loop bound is CSpeedTreeRT::GetNumLeafLodLevels; therefore each persistent SLodGeometry LOD gets its own packedColors-derived STSP stream. /*0x562d84*/
              v43 += 4; /*0x562d87*/
              *(_DWORD *)leafLodIndex = v42; /*0x562d8f*/
              v94 = v43; /*0x562d93*/
            }
            while ( (unsigned __int16)v42 < (unsigned __int16)v108 );
          }
          CSpeedTreeRT__FreeLeafLODDataArrays(v2->speedTree); /*0x562da0*/
          LOBYTE(v133) = 1; /*0x562dab*/
          if ( stspData ) /*0x562db3*/
          {
            if ( !InterlockedDecrement(&stspData->refCount) ) /*0x562db9*/
              (*(void (__thiscall **)(OB_STSPData_010201A0 *, int))stspData->vtbl)(stspData, 1); /*0x562dcb*/
          }
        }
        else
        {
          LOBYTE(v133) = 1; /*0x5623a0*/
          NiPointerSlot_Release((void **)&stspData); /*0x5623a8*/
        }
      }
    }
  }
  LOBYTE(v133) = 0; /*0x562dd4*/
  CSpeedTreeRT__STextures_dtor(&texturesOut); /*0x562ddc*/
  v133 = 0xFFFFFFFF; /*0x562de8*/
  OB_SpeedTreeGeometryOutput_Dtor_010201A0(&Src); /*0x562df3*/
}
