// Pass202/205: WaterSurfaceLoop. Native producer for persistent water height/depth target and updater of WaterShaderProperty pass-data fields for water grid cells.
double __usercall WaterSurfaceLoop@<st0>(float ecx0@<ecx>, double result@<st0>)
{
  unsigned int v2; // esi
  bool v3; // zf
  signed int v4; // eax
  double v5; // st6
  int v6; // ebp
  unsigned int i; // ebx
  GridEntry *GridEntry; // edi
  unsigned int v9; // eax
  Ni2DBuffer **v10; // ebx
  Ni2DBuffer *DefaultRenderTarget; // eax
  NiCamera *v12; // eax
  NiCamera *v13; // ebp
  double v14; // st7
  int v15; // eax
  TES *v16; // ecx
  TESForm *CurrentCell; // esi
  double v18; // st7
  double v19; // st7
  NiRenderTargetGroup *v20; // eax
  NiDX9Renderer *v21; // ebx
  BSShaderAccumulator *inited; // eax
  volatile LONG *accumulator; // esi
  volatile LONG *v24; // edi
  BSShaderAccumulator *v25; // eax
  unsigned int v26; // eax
  float v27; // ebp
  unsigned int v28; // edi
  GridEntry *v29; // ebx
  NiProperty *NiPropertyByID; // esi
  unsigned int v31; // eax
  int j; // ebp
  int v33; // eax
  NiAVObject *v34; // edi
  NiNode *v35; // ecx
  NiProperty *v36; // eax
  float *v37; // esi
  int v38; // eax
  void **v39; // edx
  unsigned int v40; // ecx
  BSShaderAccumulator *v41; // eax
  GridEntry *v42; // esi
  int YCoordinate; // eax
  float v44; // esi
  float *v45; // eax
  UInt32 v46; // edi
  UInt32 v47; // esi
  UInt32 *v48; // ebx
  NiCamera *v49; // esi
  float v50; // [esp+0h] [ebp-134h]
  float v51; // [esp+4h] [ebp-130h]
  float v52; // [esp+8h] [ebp-12Ch]
  float v53; // [esp+20h] [ebp-114h] BYREF
  float v54; // [esp+24h] [ebp-110h]
  int v55; // [esp+28h] [ebp-10Ch]
  void **v56; // [esp+2Ch] [ebp-108h]
  int v57; // [esp+30h] [ebp-104h]
  NiCamera *v58; // [esp+34h] [ebp-100h]
  int v59; // [esp+38h] [ebp-FCh]
  _DWORD *v60; // [esp+3Ch] [ebp-F8h]
  NiProperty *v61; // [esp+40h] [ebp-F4h]
  int v62; // [esp+44h] [ebp-F0h]
  float v63; // [esp+48h] [ebp-ECh]
  float v64; // [esp+4Ch] [ebp-E8h]
  float v65; // [esp+50h] [ebp-E4h]
  NiFrustum a2; // [esp+54h] [ebp-E0h] BYREF
  NiCamera *v67; // [esp+70h] [ebp-C4h]
  float v68[9]; // [esp+74h] [ebp-C0h] BYREF
  _BYTE v69[156]; // [esp+98h] [ebp-9Ch] BYREF

  v54 = ecx0; /*0x49a22d*/
  v2 = 0; /*0x49a231*/
  v3 = byte_B07050 == 0; /*0x49a233*/
  v59 = 0; /*0x49a23a*/
  if ( !v3 && OB_RendererGlobalState_010201A0[0xA5] && useWaterDepth && !MEMORY[0xB333A0]->currentInteriorCell ) /*0x49a263*/
  {
    v4 = uGridsToLoad / (unsigned int)dword_B070E0; /*0x49a273*/
    v57 = 0; /*0x49a279*/
    v56 = 0; /*0x49a27d*/
    v60 = (_DWORD *)v4; /*0x49a283*/
    v5 = (double)v4; /*0x49a287*/
    if ( v4 < 0 ) /*0x49a28b*/
      v5 = v5 + flt_A2FC78; /*0x49a28d*/
    v53 = v5; /*0x49a293*/
    v53 = floor(v53); /*0x49a2a6*/
    v6 = Double_To_SInt32(result); /*0x49a2b6*/
    v62 = v6; /*0x49a2b8*/
    for ( i = 0; i < uGridsToLoad; ++i ) /*0x49a2bc*/
    {
      while ( v2 < uGridsToLoad ) /*0x49a2ce*/
      {
        GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, v2); /*0x49a2e2*/
        if ( (int)i >= v6 && (int)v2 >= v6 ) /*0x49a2e8*/
        {
          v9 = uGridsToLoad - v6; /*0x49a2ef*/
          if ( i < v9 /*0x49a316*/
            && v2 < v9
            && GridEntry
            && GridEntry->cell
            && sub_4CE3C0(GridEntry->cell)
            && (GridEntry->cell->members.flags0 & 2) != 0 )
          {
            break; /*0x49a316*/
          }
        }
        ++v2; /*0x49a318*/
      }
      v2 = 0; /*0x49a320*/
    }
    v10 = (Ni2DBuffer **)(LODWORD(v54) + 0x48); /*0x49a328*/
    v3 = *(_DWORD *)(LODWORD(v54) + 0x48) == 0; /*0x49a32b*/
    v60 = (_DWORD *)(LODWORD(v54) + 0x48); /*0x49a32d*/
    if ( v3 ) /*0x49a331*/
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x49a342*/
                                            *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
                                            unk_B43104,
                                            0xD);
      NiSmartPointer_Set__(v10, DefaultRenderTarget); /*0x49a34a*/
    }
    v55 = *(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0x13]; /*0x49a358*/
    BSShader_SetRenderMode(5u); /*0x49a35c*/
    *(float *)&v12 = COERCE_FLOAT(FormHeapAlloc(0x124u)); /*0x49a366*/
    v53 = *(float *)&v12; /*0x49a36e*/
    *(_DWORD *)&v69[0x98] = 0; /*0x49a374*/
    if ( *(float *)&v12 == 0.0 ) /*0x49a37b*/
    {
      v58 = 0; /*0x49a38c*/
      v13 = 0; /*0x49a390*/
    }
    else
    {
      v13 = sub_70D590(v12); /*0x49a384*/
      v58 = v13; /*0x49a386*/
    }
    v67 = v13; /*0x49a394*/
    if ( v13 ) /*0x49a398*/
      InterlockedIncrement((volatile LONG *)&v13->members); /*0x49a39e*/
    v52 = flt_A3F3E0; /*0x49a3ad*/
    v14 = flt_A3721C; /*0x49a3b5*/
    *(_DWORD *)&v69[0x98] = 1; /*0x49a3bb*/
    v51 = v14; /*0x49a3c6*/
    v50 = v14; /*0x49a3ca*/
    sub_711580(v68, v50, v51, v52); /*0x49a3cd*/
    NiFrustum::SetOrtho(&a2, 0); /*0x49a3d7*/
    v15 = dword_B070E0; /*0x49a3e2*/
    a2.Near = kFaceEarNormalMatchRadius; /*0x49a3e7*/
    LODWORD(v53) = 0xFFFFF800 * v15; /*0x49a3f3*/
    v16 = MEMORY[0xB333A0]; /*0x49a3f7*/
    a2.Ortho = 1; /*0x49a404*/
    v53 = (float)(int)(0xFFFFF800 * v15); /*0x49a409*/
    a2.Left = v53; /*0x49a415*/
    v53 = (float)(v15 << 0xB); /*0x49a41d*/
    a2.Right = v53; /*0x49a425*/
    a2.Top = v53; /*0x49a429*/
    a2.Bottom = a2.Left; /*0x49a42d*/
    a2.Far = flt_A3F3DC; /*0x49a437*/
    if ( TES_GetCurrentCell(v16) ) /*0x49a43b*/
    {
      CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x49a44f*/
      v54 = (float)((TESObjectCELL_GetXCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800); /*0x49a46a*/
      v53 = (float)((TESObjectCELL_GetYCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800); /*0x49a483*/
      v63 = v54; /*0x49a48b*/
      v18 = v53; /*0x49a493*/
      v13->members.super.m_localTransform.pos.x = v54; /*0x49a497*/
      v64 = v18; /*0x49a49a*/
      v19 = flt_A3F3D8; /*0x49a4a2*/
      v13->members.super.m_localTransform.pos.y = v64; /*0x49a4a8*/
      v65 = v19; /*0x49a4ab*/
      v13->members.super.m_localTransform.pos.z = v65; /*0x49a4b3*/
    }
    qmemcpy(&v13->members.super.m_localTransform, v68, 0x24u); /*0x49a4c6*/
    Camera_SetFrustum(v13, (int)&a2); /*0x49a4cb*/
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v69, 0); /*0x49a4d9*/
    v69[0x98] = 2; /*0x49a4e5*/
    Camera_SetFrustum(v13, (int)&a2); /*0x49a4ed*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v13, 0.0, 1); /*0x49a4fc*/
    *(_DWORD *)&v69[0xC] = v13; /*0x49a50f*/
    NiCullingProcess::SetFrustum((NiCullingProcess *)v69, &v13->members.Frustum); /*0x49a516*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49a51d*/
    flt_B44EE4 = (float)dword_B070E8; /*0x49a52b*/
    v20 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*v10); /*0x49a533*/
    NiRenderer_BeginScene(kClear_ALL, v20); /*0x49a53b*/
    SetCameraViewProj(renderer, v13); /*0x49a54a*/
    v21 = renderer; /*0x49a54f*/
    inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x49a555*/
    accumulator = (volatile LONG *)v21->member.super.accumulator; /*0x49a55a*/
    v24 = (volatile LONG *)inited; /*0x49a55d*/
    if ( accumulator != (volatile LONG *)inited ) /*0x49a561*/
    {
      if ( accumulator ) /*0x49a565*/
      {
        if ( !InterlockedDecrement(accumulator + 1) ) /*0x49a56b*/
          (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1); /*0x49a581*/
      }
      v21->member.super.accumulator = (NiAccumulator *)v24; /*0x49a585*/
      if ( v24 ) /*0x49a588*/
        InterlockedIncrement(v24 + 1); /*0x49a58e*/
    }
    v25 = BSShaderAccumulator_GetOrCreateGlobal(); /*0x49a594*/
    (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v25 + 0x4C))(v25, v13); /*0x49a5a1*/
    *((_BYTE *)BSShaderAccumulator_GetOrCreateGlobal() + 0x21E0) = 1; /*0x49a5a8*/
    v26 = uGridsToLoad; /*0x49a5af*/
    v27 = 0.0; /*0x49a5b4*/
LABEL_36:
    v53 = v27; /*0x49a5b6*/
    if ( LODWORD(v27) < v26 ) /*0x49a5bc*/
    {
      *(float *)&v28 = 0.0; /*0x49a5c2*/
      while ( 1 ) /*0x49a5c6*/
      {
        v54 = *(float *)&v28; /*0x49a5c6*/
        if ( v28 >= v26 ) /*0x49a5ca*/
        {
          ++LODWORD(v27); /*0x49a72a*/
          goto LABEL_36; /*0x49a72d*/
        }
        v29 = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, SLODWORD(v27), v28); /*0x49a5e0*/
        NiPropertyByID = NiNode_GetNiPropertyByID(*(NiNode **)v29->info[1].unk00, 4); /*0x49a5f7*/
        v61 = NiPropertyByID; /*0x49a5f9*/
        if ( SLODWORD(v27) < v62 ) /*0x49a5fd*/
          break; /*0x49a5fd*/
        if ( (int)v28 < v62 ) /*0x49a605*/
          break; /*0x49a605*/
        v31 = uGridsToLoad - v62; /*0x49a610*/
        if ( LODWORD(v27) >= v31 || v28 >= v31 || !v29->cell || !sub_4CE3C0(v29->cell) ) /*0x49a62c*/
          break; /*0x49a62c*/
        if ( (v29->cell->members.flags0 & 2) != 0 ) /*0x49a644*/
        {
          BYTE2(NiPropertyByID[4].members.m_extraDataList) = 1;// Pass205: WaterSurfaceLoop sets WaterShaderProperty +0x72=1 for cells with cell->flags0 bit 1 set. /*0x49a64a*/
          for ( j = 0; j < 4; ++j ) /*0x49a64e*/
          {
            v33 = sub_441800(v29->cell, j, 0); /*0x49a655*/
            v34 = (NiAVObject *)v33; /*0x49a65a*/
            if ( *(_WORD *)(v33 + 0xB6) ) /*0x49a65c*/
            {
              v35 = **(NiNode ***)(v33 + 0xB0); /*0x49a66c*/
              if ( v35 ) /*0x49a670*/
              {
                v36 = NiNode_GetNiPropertyByID(v35, 4); /*0x49a674*/
                v37 = (float *)v36; /*0x49a679*/
                if ( v36 ) /*0x49a67d*/
                {
                  if ( (*((int (__thiscall **)(NiProperty *))v36->vtbl + 0x15))(v36) >= 5 /*0x49a699*/
                    && (*(int (__thiscall **)(float *))(*(_DWORD *)v37 + 0x54))(v37) <= 0xA )
                  {
                    v37[0x28] = dbl_A3F3C8 - (TESObjectCELL_GetWaterHeight((ExtraDataList *)v29->cell) + dbl_A3F3D0); /*0x49a6ae*/
                  }
                }
                NiPropertyByID = v61; /*0x49a6b4*/
              }
            }
            NiAVObject_Render(v34, (NiCullingProcess *)v69); /*0x49a6c2*/
          }
          *(float *)&v28 = v54; /*0x49a6cf*/
          v27 = v53; /*0x49a6d3*/
        }
        else
        {
          BYTE2(NiPropertyByID[4].members.m_extraDataList) = 0;// Pass205: WaterSurfaceLoop clears WaterShaderProperty +0x72 when current cell flag is not set. /*0x49a6d9*/
        }
        v38 = v57; /*0x49a6dd*/
        v39 = v56; /*0x49a6e1*/
        *(_DWORD *)&NiPropertyByID[4].members.m_extraDataListLen = v57;// Pass205: WaterSurfaceLoop writes WaterShaderProperty +0x74 from rolling cell/grid counter v57. /*0x49a6e5*/
        NiPropertyByID[5].vtbl = v39;           // Pass205: WaterSurfaceLoop writes WaterShaderProperty +0x78 from rolling cell/grid counter v56. /*0x49a6e8*/
        v40 = dword_B070E0 - 1; /*0x49a6f4*/
        v57 = v38 + 1; /*0x49a6f9*/
        if ( v38 + 1 <= v40 ) /*0x49a6fd*/
        {
LABEL_60:
          v26 = uGridsToLoad; /*0x49a71d*/
          ++v28; /*0x49a722*/
        }
        else
        {
          v56 = (void **)((char *)v56 + 1); /*0x49a6ff*/
          v26 = uGridsToLoad; /*0x49a704*/
          v57 = 0; /*0x49a709*/
          ++v28; /*0x49a711*/
        }
      }
      BYTE2(NiPropertyByID[4].members.m_extraDataList) = 0;// Pass205: WaterSurfaceLoop clears WaterShaderProperty +0x72 on out-of-range/break path. /*0x49a719*/
      goto LABEL_60; /*0x49a719*/
    }
    *((_BYTE *)BSShaderAccumulator_GetOrCreateGlobal() + 0x21E1) = 1; /*0x49a737*/
    v41 = BSShaderAccumulator_GetOrCreateGlobal(); /*0x49a73e*/
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v41 + 0x50))(v41); /*0x49a74a*/
    NiRenderer_EndScene(); /*0x49a74c*/
    BSShader_SetRenderMode(v55); /*0x49a756*/
    flt_B44EE4 = 0.0; /*0x49a75f*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x49a765*/
    v42 = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, 1, 1); /*0x49a77f*/
    v55 = TESObjectCELL_GetXCoordinate(v42->cell) << 0xC; /*0x49a78b*/
    OB_ShaderConstantStorage_010201A0[0x36] = (float)v55; /*0x49a793*/
    YCoordinate = TESObjectCELL_GetYCoordinate(v42->cell); /*0x49a79b*/
    v3 = MEMORY[0xB45DCC] == 0; /*0x49a7a3*/
    v55 = YCoordinate << 0xC; /*0x49a7aa*/
    result = (double)(YCoordinate << 0xC); /*0x49a7ae*/
    OB_ShaderConstantStorage_010201A0[0x37] = result; /*0x49a7b2*/
    if ( !v3 ) /*0x49a7b8*/
    {
      if ( *v60 ) /*0x49a7c2*/
      {
        v44 = v53; /*0x49a7c8*/
        v45 = (float *)(*v60 + 0x20); /*0x49a7cc*/
      }
      else
      {
        v44 = 0.0; /*0x49a7d1*/
        v53 = 0.0; /*0x49a7d3*/
        v45 = &v53; /*0x49a7d7*/
        v59 = 1; /*0x49a7db*/
      }
      v46 = *(_DWORD *)v45;                     // Pass202: Begins native copy of rendered water target into WaterShader::Unk104[2] global slot 0x00B45DCC. /*0x49a7e8*/
      if ( (v59 & 1) != 0 && v44 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v44) + 4)) ) /*0x49a7f4*/
        (**(void (__thiscall ***)(float, int))LODWORD(v44))(COERCE_FLOAT(LODWORD(v44)), 1); /*0x49a806*/
      v47 = MEMORY[0xB45DCC]->Unk104[2]; /*0x49a80e*/
      v48 = &MEMORY[0xB45DCC]->Unk104[2]; /*0x49a814*/
      if ( v47 != v46 ) /*0x49a81c*/
      {
        if ( v47 ) /*0x49a820*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) ) /*0x49a826*/
            (**(void (__thiscall ***)(UInt32, int))v47)(v47, 1); /*0x49a83c*/
        }
        *v48 = v46; /*0x49a840*/
        if ( v46 ) /*0x49a842*/
          InterlockedIncrement((volatile LONG *)(v46 + 4));// Pass202: Completes/refcounts native WaterShader::Unk104[2] height/depth texture assignment. /*0x49a848*/
      }
    }
    v69[0x98] = 1; /*0x49a855*/
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v69); /*0x49a85d*/
    v49 = v58; /*0x49a862*/
    *(_DWORD *)&v69[0x98] = 0xFFFFFFFF; /*0x49a86a*/
    if ( !InterlockedDecrement((volatile LONG *)&v58->members) ) /*0x49a875*/
      v49->vtbl->super.super.Destructor((NiRefObject *)v49, 1); /*0x49a887*/
  }
  return result; /*0x49a889*/
}
