char __thiscall Decal_AttachToGeometryRecursive(
        void *this,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        const char *a8,
        NiObject *a9,
        int *a10,
        UInt32 a11,
        float a12,
        int a13)
{
  bool v13; // c0
  int v14; // ecx
  char v15; // dl
  _WORD *v16; // edi
  char v17; // al
  unsigned int v18; // eax
  char *v19; // edi
  int *SourceTexture_010201A0; // eax
  float v22; // esi
  const char *vftable; // esi
  int *v24; // edi
  NiProperty *NiPropertyByID; // esi
  int v26; // eax
  Ni2DBuffer *v27; // esi
  _DWORD *v28; // eax
  int v29; // ebx
  PlayerCharacter *v30; // eax
  UInt32 refID; // eax
  NiObjectVtbl *v32; // eax
  Ni2DBuffer *v33; // esi
  float *v34; // eax
  bool v35; // zf
  NiNode *v36; // ebp
  int v37; // esi
  unsigned int i; // ebp
  const char *v39; // edi
  unsigned int v40; // edx
  NiProperty *v41; // esi
  int v42; // edi
  BOOL v43; // eax
  Ni2DBuffer *v44; // esi
  _DWORD *v45; // eax
  NiObject *v46; // esi
  Ni2DBuffer *v47; // esi
  float *v48; // esi
  float *v49; // eax
  bool v50; // sf
  UInt32 m_uiRefCount_high; // eax
  NiNode *v53; // eax
  float v54; // [esp+4h] [ebp-184h]
  float v55; // [esp+4h] [ebp-184h]
  float v56; // [esp+4h] [ebp-184h]
  float v57; // [esp+4h] [ebp-184h]
  float v58; // [esp+1Ch] [ebp-16Ch]
  float v59; // [esp+20h] [ebp-168h]
  const char *v60; // [esp+24h] [ebp-164h]
  float v61; // [esp+28h] [ebp-160h]
  int v62; // [esp+28h] [ebp-160h]
  size_t v63; // [esp+2Ch] [ebp-15Ch]
  size_t v64; // [esp+2Ch] [ebp-15Ch]
  size_t v65; // [esp+2Ch] [ebp-15Ch]
  float v66; // [esp+44h] [ebp-144h] BYREF
  float v67; // [esp+48h] [ebp-140h]
  UInt32 v68; // [esp+4Ch] [ebp-13Ch] BYREF
  int incoming; // [esp+50h] [ebp-138h] BYREF
  UInt32 v70; // [esp+54h] [ebp-134h] BYREF
  int v71; // [esp+58h] [ebp-130h]
  float v72; // [esp+5Ch] [ebp-12Ch]
  int *v73; // [esp+60h] [ebp-128h]
  void *v74; // [esp+64h] [ebp-124h]
  float v75; // [esp+68h] [ebp-120h]
  float v76; // [esp+6Ch] [ebp-11Ch]
  float v77; // [esp+70h] [ebp-118h] BYREF
  char ArgList[4]; // [esp+74h] [ebp-114h] BYREF
  int v79; // [esp+78h] [ebp-110h]
  char v80; // [esp+7Ch] [ebp-10Ch]
  unsigned int v81; // [esp+184h] [ebp-4h]

  v13 = g_fDecalLifetime_Display > 0.0; /*0x4cf1e4*/
  v73 = a10; /*0x4cf1f8*/
  v71 = (int)this; /*0x4cf1fc*/
  v67 = *(float *)&a8; /*0x4cf209*/
  v72 = *(float *)&a9; /*0x4cf20d*/
  v68 = a11; /*0x4cf214*/
  if ( !v13 ) /*0x4cf218*/
    return 0; /*0x4cf218*/
  if ( unk_B35C04 > g_iMaxDecalsPerFrame_Display ) /*0x4cf22a*/
    return 0;                                   // BloodOnDeath decode 2026-05-30: per-frame decal cap is checked before geometry traversal. Death spills that project many limbs in one frame must raise iMaxDecalsPerFrame:Display or spread calls across frames. /*0x4cf22a*/
  if ( *(float *)&a9 != 0.0 ) /*0x4cf234*/
  {
    if ( a9->__vftable->Unk_04(a9) ) /*0x4cf23e*/
      ++unk_B35C04; /*0x4cf244*/
  }
  incoming = 0; /*0x4cf24b*/
  v81 = 0; /*0x4cf251*/
  if ( *(float *)&a8 == 0.0 ) /*0x4cf258*/
    return 0; /*0x4cf258*/
  v14 = *(_DWORD *)"ures"; /*0x4cf263*/
  v15 = aTextures[8]; /*0x4cf269*/
  *(_DWORD *)ArgList = *(_DWORD *)"Textures"; /*0x4cf273*/
  v79 = v14; /*0x4cf277*/
  v80 = v15; /*0x4cf27b*/
  v16 = (_WORD *)((char *)&v77 + 3); /*0x4cf27f*/
  do /*0x4cf28a*/
  {
    v17 = *((_BYTE *)v16 + 1); /*0x4cf282*/
    v16 = (_WORD *)((char *)v16 + 1); /*0x4cf285*/
  }
  while ( v17 ); /*0x4cf28a*/
  *v16 = *(_WORD *)SubStr; /*0x4cf292*/
  v18 = strlen(a8) + 1; /*0x4cf2a7*/
  v19 = (char *)&v77 + 3; /*0x4cf2b1*/
  while ( *++v19 ) /*0x4cf2bc*/
    ; /*0x4cf2b4*/
  qmemcpy(v19, a8, v18); /*0x4cf2c3*/
  SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0((UInt32 *)&v66, ArgList, 0, 0); /*0x4cf2de*/
  LOBYTE(v81) = 1; /*0x4cf2e8*/
  OB_NiSmartPointer_Assign_010201A0(&incoming, SourceTexture_010201A0); /*0x4cf2f0*/
  LOBYTE(v81) = 0; /*0x4cf2fb*/
  if ( v66 != 0.0 ) /*0x4cf303*/
  {
    v22 = v66; /*0x4cf305*/
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v66) + 4)) ) /*0x4cf30b*/
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v22))(LODWORD(v22), 1); /*0x4cf321*/
  }
  if ( !incoming ) /*0x4cf327*/
    return 0; /*0x4cf327*/
  if ( *(float *)&a9 == 0.0 ) /*0x4cf32f*/
    goto LABEL_90; /*0x4cf32f*/
  vftable = (const char *)a9[1].__vftable; /*0x4cf335*/
  if ( vftable ) /*0x4cf33a*/
  {
    LODWORD(v63) = 5; /*0x4cf33c*/
    if ( !strncmp(vftable, "Decal", v63) ) /*0x4cf344*/
      goto LABEL_90; /*0x4cf344*/
    LODWORD(v64) = 6; /*0x4cf354*/
    if ( !strncmp(vftable, "FaceGen", v64) ) /*0x4cf35c*/
      goto LABEL_90; /*0x4cf35c*/
    LODWORD(v65) = 5; /*0x4cf36c*/
    if ( !strncmp(vftable, "Bip01", v65) ) /*0x4cf374*/
      goto LABEL_90; /*0x4cf37e*/
  }
  if ( a9->__vftable->Unk_04(a9) )
  {
    v24 = v73; /*0x4cf396*/
    if ( *v73 <= 0 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)a9, 4); /*0x4cf3ad*/
      if ( !NiPropertyByID
        || !a9[0x17].members.m_uiRefCount
        || ((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) < 1
         || (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) > 0xA
          ? (v26 = 0)
          : (v26 = 1),
            (v27 = v26 != 0 ? (Ni2DBuffer *)NiPropertyByID : 0) == 0) )
      {
LABEL_86:
        v50 = *v24 < 0; /*0x4cf954*/
        v81 = 0xFFFFFFFF; /*0x4cf956*/
        if ( !v50 ) /*0x4cf965*/
        {
          sub_7016A0((NiD3DVertexShader *)&incoming); /*0x4cf967*/
          return 0; /*0x4cf96e*/
        }
        goto LABEL_91; /*0x4cf965*/
      }
      v28 = (_DWORD *)FormHeapAlloc(0x4Cu); /*0x4cf3fa*/
      if ( v28 ) /*0x4cf404*/
      {
        *v28 = 0; /*0x4cf406*/
        v28[0x12] = 0; /*0x4cf40c*/
        v29 = (int)v28; /*0x4cf413*/
      }
      else
      {
        v29 = 0; /*0x4cf417*/
      }
      *(float *)(v29 + 0x40) = 0.0; /*0x4cf41f*/
      *(_BYTE *)(v29 + 0x44) = 0; /*0x4cf422*/
      *(_DWORD *)(v29 + 4) = 0; /*0x4cf426*/
      NiSmartPointer_Set__((Ni2DBuffer **)(v29 + 0x48), v27); /*0x4cf42d*/
      OB_NiSmartPointer_Assign_010201A0((int *)v29, &incoming); /*0x4cf439*/
      v30 = sub_4DC270((int)a9); /*0x4cf43f*/
      if ( v30 ) /*0x4cf449*/
        refID = v30->super.super.super.super.super.refID; /*0x4cf44b*/
      else
        refID = 0; /*0x4cf450*/
      *(_DWORD *)(v29 + 0x3C) = refID; /*0x4cf452*/
      v70 = 0; /*0x4cf455*/
      v32 = a9[0x17].__vftable; /*0x4cf45d*/
      LOBYTE(v81) = 2; /*0x4cf473*/
      if ( v32 )
      {
        if ( g_bDecalsOnSkinnedGeometry_Display != 1 )
        {
LABEL_47:
          if ( !v68 ) /*0x4cf5e6*/
            goto LABEL_85; /*0x4cf5e6*/
          v35 = *(_WORD *)(v68 + 0xB6) == 0; /*0x4cf5f2*/
          v67 = 0.0; /*0x4cf5f9*/
          v66 = 0.0; /*0x4cf5fd*/
          if ( v35 ) /*0x4cf601*/
            goto LABEL_85; /*0x4cf601*/
          while ( 1 ) /*0x4cf610*/
          {
            v36 = (NiNode *)LODWORD(v67); /*0x4cf610*/
            if ( v67 != 0.0 ) /*0x4cf616*/
              break; /*0x4cf616*/
            *(float *)&v37 = COERCE_FLOAT(NiNode_GetChildAtIndex(v68, LODWORD(v66))); /*0x4cf62a*/
            if ( *(float *)&v37 != 0.0 ) /*0x4cf62e*/
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x10))(v37) ) /*0x4cf637*/
              {
                v67 = *(float *)&v37; /*0x4cf63d*/
              }
              else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 8))(v37) ) /*0x4cf64a*/
              {
                for ( i = 0; i < *(unsigned __int16 *)(v37 + 0xB6); ++i ) /*0x4cf652*/
                {
                  if ( v67 != 0.0 ) /*0x4cf660*/
                    break; /*0x4cf660*/
                  *(float *)&v39 = COERCE_FLOAT(NiNode_GetChildAtIndex(v37, i)); /*0x4cf66a*/
                  if ( *(float *)&v39 != 0.0 ) /*0x4cf66e*/
                  {
                    if ( (*(int (__thiscall **)(const char *))(*(_DWORD *)v39 + 0x10))(v39) ) /*0x4cf677*/
                      v67 = *(float *)&v39; /*0x4cf67d*/
                  }
                }
              }
            }
            v40 = *(unsigned __int16 *)(v68 + 0xB6); /*0x4cf697*/
            if ( ++LODWORD(v66) >= v40 ) /*0x4cf6a7*/
            {
              if ( v67 == 0.0 ) /*0x4cf6b2*/
                goto LABEL_85; /*0x4cf6b2*/
              v36 = (NiNode *)LODWORD(v67); /*0x4cf6b8*/
              break; /*0x4cf6b8*/
            }
          }
          v41 = NiNode_GetNiPropertyByID(v36, 4); /*0x4cf6c5*/
          v42 = 0; /*0x4cf6cd*/
          if ( !v41 ) /*0x4cf6d1*/
            goto LABEL_85; /*0x4cf6d1*/
          if ( !v36->members.effects.vtlb ) /*0x4cf6c7*/
            goto LABEL_85; /*0x4cf6c7*/
          v43 = (*((int (__thiscall **)(NiProperty *))v41->vtbl + 0x15))(v41) >= 1 /*0x4cf6eb*/
             && (*((int (__thiscall **)(NiProperty *))v41->vtbl + 0x15))(v41) <= 0xA;
          v44 = v43 ? (Ni2DBuffer *)v41 : 0;
          if ( !v44 ) /*0x4cf70c*/
            goto LABEL_85; /*0x4cf70c*/
          v45 = (_DWORD *)FormHeapAlloc(0x4Cu); /*0x4cf714*/
          if ( v45 ) /*0x4cf71e*/
          {
            *v45 = 0; /*0x4cf720*/
            v45[0x12] = 0; /*0x4cf722*/
            v42 = (int)v45; /*0x4cf725*/
          }
          *(_BYTE *)(v42 + 0x44) = *(_BYTE *)(v29 + 0x44); /*0x4cf72a*/
          *(float *)(v42 + 0x40) = *(float *)(v29 + 0x40); /*0x4cf730*/
          *(_DWORD *)(v42 + 4) = *(_DWORD *)(v29 + 4); /*0x4cf736*/
          NiSmartPointer_Set__((Ni2DBuffer **)(v42 + 0x48), v44); /*0x4cf73d*/
          OB_NiSmartPointer_Assign_010201A0((int *)v42, (int *)v29); /*0x4cf745*/
          *(_DWORD *)(v42 + 0x3C) = *(_DWORD *)(v29 + 0x3C); /*0x4cf74d*/
          v68 = 0; /*0x4cf750*/
          v35 = *(_DWORD *)(LODWORD(v72) + 0xB8) == 0; /*0x4cf75c*/
          LOBYTE(v81) = 5; /*0x4cf763*/
          if ( v35 ) /*0x4cf76b*/
          {
            v48 = (float *)FormHeapAlloc(0x1Cu); /*0x4cf870*/
            v74 = v48; /*0x4cf875*/
            LOBYTE(v81) = 7; /*0x4cf87b*/
            if ( v48 ) /*0x4cf883*/
            {
              v57 = sub_404E30(&g_fDecalLifetime_Display); /*0x4cf8eb*/
              v49 = BSTempEffectDecal_Ctor( /*0x4cf8f1*/
                      v48,
                      v71,
                      v57,
                      v42,
                      (float *)v36,
                      *(float *)&a2,
                      *(float *)&a3,
                      *(float *)&a4,
                      SLOBYTE(a5),
                      a6,
                      a7,
                      COERCE_INT(1.0),
                      a12);
            }
            else
            {
              v49 = 0; /*0x4cf8f8*/
            }
            LOBYTE(v81) = 5; /*0x4cf8ff*/
            NiSmartPointer_Set__((Ni2DBuffer **)&v68, (Ni2DBuffer *)v49); /*0x4cf907*/
            qmemcpy((void *)(v42 + 8), (const void *)(v29 + 8), 0x34u); /*0x4cf917*/
          }
          else
          {
            if ( g_bDecalsOnSkinnedGeometry_Display != 1 ) /*0x4cf778*/
            {
LABEL_84:
              LOBYTE(v81) = 2; /*0x4cf92c*/
              sub_7016A0((NiD3DVertexShader *)&v68); /*0x4cf938*/
LABEL_85:
              LOBYTE(v81) = 0; /*0x4cf93d*/
              sub_7016A0((NiD3DVertexShader *)&v70); /*0x4cf949*/
              v24 = v73; /*0x4cf94e*/
              goto LABEL_86; /*0x4cf94e*/
            }
            v46 = (NiObject *)FormHeapAlloc(0x54u); /*0x4cf785*/
            v74 = v46; /*0x4cf78a*/
            LOBYTE(v81) = 6; /*0x4cf790*/
            if ( v46 ) /*0x4cf798*/
            {
              v72 = -a5; /*0x4cf7ac*/
              v66 = -*(float *)&a6; /*0x4cf7bc*/
              v67 = -*(float *)&a7; /*0x4cf7c9*/
              v75 = v72; /*0x4cf7d1*/
              v76 = v66; /*0x4cf7dd*/
              v77 = v67; /*0x4cf7e9*/
              v58 = v72; /*0x4cf7fe*/
              v59 = v66; /*0x4cf804*/
              v60 = (const char *)LODWORD(v67); /*0x4cf80e*/
              v56 = sub_404E30(&g_fDecalLifetime_Display); /*0x4cf83a*/
              v47 = (Ni2DBuffer *)BSTempEffectGeometryDecal_Ctor( /*0x4cf845*/
                                    v46,
                                    v71,
                                    v56,
                                    v42,
                                    (int)v36,
                                    a2,
                                    a3,
                                    a4,
                                    v58,
                                    v59,
                                    (int)v60,
                                    1.0,
                                    a12);       // Verified geometry-decal construction branch in Decal_AttachToGeometryRecursive: allocates 0x54 bytes and invokes BSTempEffectGeometryDecal_Ctor with the current cell, effect lifetime, decal/source geometry and projection parameters. Exact meaning of all packed caller arguments remains partly Unknown.
            }
            else
            {
              v47 = 0; /*0x4cf849*/
            }
            LOBYTE(v81) = 5; /*0x4cf850*/
            NiSmartPointer_Set__((Ni2DBuffer **)&v68, v47); /*0x4cf858*/
            BSTempEffectGeometryDecal_StartOrQueueCreateTask((NiTimeController *)v47);// Verified creation lifecycle: immediately after construction, calls BSTempEffectGeometryDecal_StartOrQueueCreateTask. That helper submits a task via g_NiParallelUpdateTaskManager when enabled or activates synchronously when not queued. /*0x4cf85f*/
          }
          if ( v68 ) /*0x4cf91f*/
            ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v68);// Verified manager lifecycle: after create/queue setup, any non-null geometry decal is registered with ActorProcessManager; type ID 1 routes to the active temp-effect list and the usual update/cell-unload/save paths. /*0x4cf927*/
          goto LABEL_84; /*0x4cf927*/
        }
        v66 = COERCE_FLOAT(FormHeapAlloc(0x54u)); /*0x4cf498*/
        LOBYTE(v81) = 3; /*0x4cf49e*/
        if ( v66 == 0.0 ) /*0x4cf4a6*/
        {
          v33 = 0; /*0x4cf515*/
        }
        else
        {
          v61 = flt_A468FC;                     // BloodOnDeath decode 2026-05-30: native geometry-decal footprint constant is flt_A468FC = 15.0; ProjectToSceneGeometry does not expose this as a caller argument. /*0x4cf4cf*/
          v54 = sub_404E30(&g_fDecalLifetime_Display); /*0x4cf508*/
          v33 = (Ni2DBuffer *)BSTempEffectGeometryDecal_Ctor( /*0x4cf511*/
                                (NiObject *)LODWORD(v66),
                                v71,
                                v54,
                                v29,
                                (int)a9,
                                a2,
                                a3,
                                a4,
                                a5,
                                *(float *)&a6,
                                a7,
                                v61,
                                a12);
        }
        LOBYTE(v81) = 2; /*0x4cf51c*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v70, v33); /*0x4cf524*/
        BSTempEffectGeometryDecal_StartOrQueueCreateTask((NiTimeController *)v33); /*0x4cf52b*/
      }
      else
      {
        v66 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x4cf53f*/
        LOBYTE(v81) = 4; /*0x4cf545*/
        if ( v66 == 0.0 ) /*0x4cf54d*/
        {
          v34 = 0; /*0x4cf5ba*/
        }
        else
        {
          *(float *)&v62 = flt_A468FC;          // BloodOnDeath decode 2026-05-30: fallback BSTempEffectDecal also receives flt_A468FC = 15.0 as the fixed native decal footprint. /*0x4cf576*/
          v55 = sub_404E30(&g_fDecalLifetime_Display); /*0x4cf5af*/
          v34 = BSTempEffectDecal_Ctor( /*0x4cf5b3*/
                  (float *)LODWORD(v66),
                  v71,
                  v55,
                  v29,
                  (float *)a9,
                  *(float *)&a2,
                  *(float *)&a3,
                  *(float *)&a4,
                  SLOBYTE(a5),
                  a6,
                  a7,
                  v62,
                  a12);
        }
        LOBYTE(v81) = 2; /*0x4cf5c1*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v70, (Ni2DBuffer *)v34); /*0x4cf5c9*/
      }
      if ( v70 ) /*0x4cf5d4*/
        ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v70); /*0x4cf5dc*/
      goto LABEL_47; /*0x4cf5dc*/
    }
    --*v73; /*0x4cf973*/
LABEL_90:
    v81 = 0xFFFFFFFF; /*0x4cf975*/
LABEL_91:
    sub_7016A0((NiD3DVertexShader *)&incoming); /*0x4cf984*/
    return 1; /*0x4cf9b2*/
  }
  if ( !a9->__vftable->Unk_02(a9) ) /*0x4cf9bd*/
    goto LABEL_90; /*0x4cf9bd*/
  m_uiRefCount_high = HIWORD(a9[0x16].members.m_uiRefCount); /*0x4cf9c3*/
  v70 = 0; /*0x4cf9cc*/
  if ( !m_uiRefCount_high ) /*0x4cf9d0*/
    goto LABEL_90; /*0x4cf9d0*/
  while ( 1 ) /*0x4cf9eb*/
  {
    if ( m_uiRefCount_high > v70 ) /*0x4cf9eb*/
    {
      v53 = *((NiNode **)&a9[0x16].__vftable->super.Destructor + v70); /*0x4cf9f7*/
      if ( v53 ) /*0x4cf9fc*/
      {
        if ( !Decal_AttachToGeometryRecursive( /*0x4cfa54*/
                (void *)v71,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                (const char *)LODWORD(v67),
                v53,
                v73,
                v68,
                a12,
                a13) )
          break; /*0x4cfa54*/
      }
    }
    m_uiRefCount_high = HIWORD(a9[0x16].members.m_uiRefCount); /*0x4cfa61*/
    if ( ++v70 >= m_uiRefCount_high ) /*0x4cfa71*/
      goto LABEL_90; /*0x4cfa71*/
  }
  v81 = 0xFFFFFFFF; /*0x4cfa80*/
  sub_7016A0((NiD3DVertexShader *)&incoming); /*0x4cfa8b*/
  return 0; /*0x4cf98b*/
}
