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

  v54 = ecx0;
  v2 = 0;
  v3 = byte_B07050 == 0;
  v59 = 0;
  if ( !v3 && ImageSpaceEffectEnabled && useWaterDepth && !TES->currentInteriorCell )
  {
    v4 = uGridsToLoad / (unsigned int)dword_B070E0;
    v57 = 0;
    v56 = 0;
    v60 = (_DWORD *)v4;
    v5 = (double)v4;
    if ( v4 < 0 )
      v5 = v5 + flt_A2FC78;
    v53 = v5;
    v53 = floor(v53);
    v6 = Double_To_SInt32(result);
    v62 = v6;
    for ( i = 0; i < uGridsToLoad; ++i )
    {
      while ( v2 < uGridsToLoad )
      {
        GridEntry = GetGridEntry(TES->gridCellArray, i, v2);
        if ( (int)i >= v6 && (int)v2 >= v6 )
        {
          v9 = uGridsToLoad - v6;
          if ( i < v9
            && v2 < v9
            && GridEntry
            && GridEntry->cell
            && sub_4CE3C0(GridEntry->cell)
            && (GridEntry->cell->members.flags0 & 2) != 0 )
          {
            break;
          }
        }
        ++v2;
      }
      v2 = 0;
    }
    v10 = (Ni2DBuffer **)(LODWORD(v54) + 0x48);
    v3 = *(_DWORD *)(LODWORD(v54) + 0x48) == 0;
    v60 = (_DWORD *)(LODWORD(v54) + 0x48);
    if ( v3 )
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xD);
      NiSmartPointer_Set__(v10, DefaultRenderTarget);
    }
    v55 = LOWORD(dword_B42EAC);
    sub_7B4890(5u);
    *(float *)&v12 = COERCE_FLOAT(FormHeapAlloc(0x124u));
    v53 = *(float *)&v12;
    *(_DWORD *)&v69[0x98] = 0;
    if ( *(float *)&v12 == 0.0 )
    {
      v58 = 0;
      v13 = 0;
    }
    else
    {
      v13 = sub_70D590(v12);
      v58 = v13;
    }
    v67 = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)&v13->members);
    v52 = flt_A3F3E0;
    v14 = flt_A3721C;
    *(_DWORD *)&v69[0x98] = 1;
    v51 = v14;
    v50 = v14;
    sub_711580(v68, v50, v51, v52);
    NiFrustum::SetOrtho(&a2, 0);
    v15 = dword_B070E0;
    a2.Near = flt_A2FAAC;
    LODWORD(v53) = 0xFFFFF800 * v15;
    v16 = TES;
    a2.Ortho = 1;
    v53 = (float)(int)(0xFFFFF800 * v15);
    a2.Left = v53;
    v53 = (float)(v15 << 0xB);
    a2.Right = v53;
    a2.Top = v53;
    a2.Bottom = a2.Left;
    a2.Far = flt_A3F3DC;
    if ( TES_GetCurrentCell(v16) )
    {
      CurrentCell = TES_GetCurrentCell(TES);
      v54 = (float)((TESObjectCELL_GetXCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800);
      v53 = (float)((TESObjectCELL_GetYCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800);
      v63 = v54;
      v18 = v53;
      v13->members.super.m_localTransform.pos.x = v54;
      v64 = v18;
      v19 = flt_A3F3D8;
      v13->members.super.m_localTransform.pos.y = v64;
      v65 = v19;
      v13->members.super.m_localTransform.pos.z = v65;
    }
    qmemcpy(&v13->members.super.m_localTransform, v68, 0x24u);
    Camera_SetFrustum(v13, (int)&a2);
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v69, 0);
    v69[0x98] = 2;
    Camera_SetFrustum(v13, (int)&a2);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v13, 0.0, 1);
    *(_DWORD *)&v69[0xC] = v13;
    NiCullingProcess::SetFrustum((NiCullingProcess *)v69, &v13->members.Frustum);
    nullsub_returnTrue_0arg();
    flt_B44EE4 = (float)dword_B070E8;
    v20 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*v10);
    NiRenderer_BeginScene(kClear_ALL, v20);
    SetCameraViewProj(g_Renderer, v13);
    v21 = g_Renderer;
    inited = InitBSShaderAccumulator();
    accumulator = (volatile LONG *)v21->member.super.accumulator;
    v24 = (volatile LONG *)inited;
    if ( accumulator != (volatile LONG *)inited )
    {
      if ( accumulator )
      {
        if ( !InterlockedDecrement(accumulator + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))accumulator)(accumulator, 1);
      }
      v21->member.super.accumulator = (NiAccumulator *)v24;
      if ( v24 )
        InterlockedIncrement(v24 + 1);
    }
    v25 = InitBSShaderAccumulator();
    (*(void (__thiscall **)(BSShaderAccumulator *, NiCamera *))(*(_DWORD *)v25 + 0x4C))(v25, v13);
    *((_BYTE *)InitBSShaderAccumulator() + 0x21E0) = 1;
    v26 = uGridsToLoad;
    v27 = 0.0;
LABEL_36:
    v53 = v27;
    if ( LODWORD(v27) < v26 )
    {
      *(float *)&v28 = 0.0;
      while ( 1 )
      {
        v54 = *(float *)&v28;
        if ( v28 >= v26 )
        {
          ++LODWORD(v27);
          goto LABEL_36;
        }
        v29 = GetGridEntry(TES->gridCellArray, SLODWORD(v27), v28);
        NiPropertyByID = NiNode_GetNiPropertyByID(*(NiNode **)v29->info[1].unk00, 4);
        v61 = NiPropertyByID;
        if ( SLODWORD(v27) < v62 )
          break;
        if ( (int)v28 < v62 )
          break;
        v31 = uGridsToLoad - v62;
        if ( LODWORD(v27) >= v31 || v28 >= v31 || !v29->cell || !sub_4CE3C0(v29->cell) )
          break;
        if ( (v29->cell->members.flags0 & 2) != 0 )
        {
          BYTE2(NiPropertyByID[4].members.m_extraDataList) = 1;
          for ( j = 0; j < 4; ++j )
          {
            v33 = sub_441800(v29->cell, j, 0);
            v34 = (NiAVObject *)v33;
            if ( *(_WORD *)(v33 + 0xB6) )
            {
              v35 = **(NiNode ***)(v33 + 0xB0);
              if ( v35 )
              {
                v36 = NiNode_GetNiPropertyByID(v35, 4);
                v37 = (float *)v36;
                if ( v36 )
                {
                  if ( (*((int (__thiscall **)(NiProperty *))v36->vtbl + 0x15))(v36) >= 5
                    && (*(int (__thiscall **)(float *))(*(_DWORD *)v37 + 0x54))(v37) <= 0xA )
                  {
                    v37[0x28] = dbl_A3F3C8 - (TESObjectCELL_GetWaterHeight(v29->cell) + dbl_A3F3D0);
                  }
                }
                NiPropertyByID = v61;
              }
            }
            NiAVObject_Render(v34, (NiCullingProcess *)v69);
          }
          *(float *)&v28 = v54;
          v27 = v53;
        }
        else
        {
          BYTE2(NiPropertyByID[4].members.m_extraDataList) = 0;
        }
        v38 = v57;
        v39 = v56;
        *(_DWORD *)&NiPropertyByID[4].members.m_extraDataListLen = v57;
        NiPropertyByID[5].vtbl = v39;
        v40 = dword_B070E0 - 1;
        v57 = v38 + 1;
        if ( v38 + 1 <= v40 )
        {
LABEL_60:
          v26 = uGridsToLoad;
          ++v28;
        }
        else
        {
          v56 = (void **)((char *)v56 + 1);
          v26 = uGridsToLoad;
          v57 = 0;
          ++v28;
        }
      }
      BYTE2(NiPropertyByID[4].members.m_extraDataList) = 0;
      goto LABEL_60;
    }
    *((_BYTE *)InitBSShaderAccumulator() + 0x21E1) = 1;
    v41 = InitBSShaderAccumulator();
    (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v41 + 0x50))(v41);
    NiRenderer_EndScene();
    sub_7B4890(v55);
    flt_B44EE4 = 0.0;
    nullsub_returnTrue_0arg();
    v42 = GetGridEntry(TES->gridCellArray, 1, 1);
    v55 = TESObjectCELL_GetXCoordinate(v42->cell) << 0xC;
    flt_B45EEC = (float)v55;
    YCoordinate = TESObjectCELL_GetYCoordinate(v42->cell);
    v3 = waterShader == 0;
    v55 = YCoordinate << 0xC;
    result = (double)(YCoordinate << 0xC);
    flt_B45EF0 = result;
    if ( !v3 )
    {
      if ( *v60 )
      {
        v44 = v53;
        v45 = (float *)(*v60 + 0x20);
      }
      else
      {
        v44 = 0.0;
        v53 = 0.0;
        v45 = &v53;
        v59 = 1;
      }
      v46 = *(_DWORD *)v45;
      if ( (v59 & 1) != 0 && v44 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v44) + 4)) )
        (**(void (__thiscall ***)(float, int))LODWORD(v44))(COERCE_FLOAT(LODWORD(v44)), 1);
      v47 = waterShader->Unk104[2];
      v48 = &waterShader->Unk104[2];
      if ( v47 != v46 )
      {
        if ( v47 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) )
            (**(void (__thiscall ***)(UInt32, int))v47)(v47, 1);
        }
        *v48 = v46;
        if ( v46 )
          InterlockedIncrement((volatile LONG *)(v46 + 4));
      }
    }
    v69[0x98] = 1;
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v69);
    v49 = v58;
    *(_DWORD *)&v69[0x98] = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)&v58->members) )
      v49->vtbl->super.super.Destructor((NiRefObject *)v49, 1);
  }
  return result;
}
