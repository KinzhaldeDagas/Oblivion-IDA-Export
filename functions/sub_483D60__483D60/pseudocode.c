// Verified mode routing: WorldSpace mask bit 0x1 is the tree channel and is gated by bDisplayLODTrees; bit 0x2 is the building/object channel and is gated by bDisplayLODBuildings plus the per-cell LOD map. Local state value 4 is an internal combined-update state that can downgrade to 1 or 2; it is not the .cmp LandLOD mask bit.
void __thiscall DistantLOD_UpdateExteriorGrid(void *gridDistantArray, TESWorldSpace *worldspace)
{
  int v3; // eax
  bool v4; // zf
  NiAVObject *ChildAtIndex; // eax
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  Ni2DBuffer **v13; // ebx
  bool v14; // al
  char v15; // dl
  int v16; // ebp
  TESObjectCELL *v17; // eax
  TESObjectCELL *v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  NiNode *v22; // eax
  NiNode *v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // edi
  NiObject *NiPropertyByID; // eax
  NiObject *v30; // eax
  double v31; // st7
  double v32; // st6
  Ni2DBuffer *v33; // [esp+Ch] [ebp-44h]
  unsigned int v34; // [esp+24h] [ebp-2Ch]
  int v35; // [esp+28h] [ebp-28h]
  int v36; // [esp+2Ch] [ebp-24h]
  unsigned int v38; // [esp+34h] [ebp-1Ch]
  unsigned int v39; // [esp+38h] [ebp-18h]
  int v40; // [esp+3Ch] [ebp-14h]
  float v41; // [esp+3Ch] [ebp-14h]
  float worldspacea; // [esp+54h] [ebp+4h]

  if ( MEMORY[0xB33E90][0x590] ) /*0x483d8d*/
  {
    v3 = dword_B06AA0; /*0x483d9c*/
    *(_DWORD *)&MEMORY[0xB33E90][0x58C] = dword_B06AA8; /*0x483da1*/
  }
  else
  {
    v3 = GridDistantCount; /*0x483daf*/
    *(_DWORD *)&MEMORY[0xB33E90][0x58C] = dword_B06A98; /*0x483db4*/
  }
  v4 = OB_RendererGlobalState_010201A0[0x1DE] == 0; /*0x483dba*/
  *(_DWORD *)&MEMORY[0xB33E90][0x588] = v3; /*0x483dc1*/
  if ( !v4 && v3 && (bDisplayLODBuildings || bDisplayLODTrees) && worldspace )
  {
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)gridDistantArray + 0x10))( /*0x483e09*/
      gridDistantArray,
      MEMORY[0xB333A0]->extXCoord,
      MEMORY[0xB333A0]->extYCoord);
    sub_483750(gridDistantArray); /*0x483e0d*/
    if ( !*(_DWORD *)&MEMORY[0xB33E90][0x594] ) /*0x483e12*/
    {
      ChildAtIndex = NiNode_GetChildAtIndex(MEMORY[0xB333A0]->LandLOD->members.super.m_parent, 1u); /*0x483e2b*/
      if ( ChildAtIndex ) /*0x483e32*/
      {
        v33 = (Ni2DBuffer *)ChildAtIndex->vtbl->super.Unk_02((NiObject *)ChildAtIndex); /*0x483e3d*/
        NiSmartPointer_Set__((Ni2DBuffer **)&MEMORY[0xB33E90][0x594], v33); /*0x483e3e*/
      }
      else
      {
        NiSmartPointer_Set__((Ni2DBuffer **)&MEMORY[0xB33E90][0x594], 0); /*0x483e47*/
      }
    }
    v38 = (unsigned int)uGridsToLoad >> 1; /*0x483e5b*/
    v6 = *((_DWORD *)gridDistantArray + 3); /*0x483e5f*/
    v7 = 0; /*0x483e62*/
    v40 = v38 + *(_DWORD *)&MEMORY[0xB33E90][0x588]; /*0x483e66*/
    v39 = 0; /*0x483e6a*/
    if ( v6 )
    {
      v36 = ((unsigned int)uGridsToLoad >> 1) + *(_DWORD *)&MEMORY[0xB33E90][0x588]; /*0x483e74*/
      while ( 1 ) /*0x483e82*/
      {
        v34 = 0; /*0x483e82*/
        if ( v6 ) /*0x483e8a*/
          break; /*0x483e8a*/
LABEL_90:
        v6 = *((_DWORD *)gridDistantArray + 3); /*0x4841d3*/
        --v36; /*0x4841da*/
        v39 = ++v7; /*0x4841e4*/
        if ( v7 >= v6 ) /*0x4841e8*/
          goto LABEL_91; /*0x4841e8*/
      }
      v35 = v40; /*0x483e94*/
      while ( 1 ) /*0x483eab*/
      {
        v8 = GridDistantCount; /*0x483eab*/
        v9 = *((_DWORD *)gridDistantArray + 4) + 0x10 * (v34 + v7 * v6); /*0x483ebb*/
        if ( v7 >= GridDistantCount ) /*0x483ebd*/
        {
          v10 = v8 + uGridsToLoad; /*0x483ec4*/
          if ( v7 < v10 && v34 >= v8 && v34 < v10 && *(_BYTE *)v9 ) /*0x483ed2*/
          {
            v11 = *(_DWORD *)(v9 + 4); /*0x483ed7*/
            if ( v11 ) /*0x483edc*/
              *(_WORD *)(v11 + 0x18) |= 1u; /*0x483ede*/
LABEL_45:
            v17 = (TESObjectCELL *)TESObjectCELL_PackExteriorGroupLabel(*(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)); /*0x483fde*/
            sub_7B3A40(v17); /*0x483fdf*/
            *(_BYTE *)(v9 + 1) = 0; /*0x483fe7*/
            goto LABEL_89; /*0x483feb*/
          }
        }
        v12 = *(_DWORD *)(v9 + 4); /*0x483ef2*/
        v13 = (Ni2DBuffer **)(v9 + 4); /*0x483ef7*/
        if ( v12 ) /*0x483efa*/
          *(_WORD *)(v12 + 0x18) &= ~1u; /*0x483efc*/
        v14 = sub_4837C0(gridDistantArray, v7, v34); /*0x483f04*/
        if ( !*v13 ) /*0x483f09*/
          break; /*0x483f09*/
        v15 = *(_BYTE *)(v9 + 1); /*0x483f13*/
        if ( v15 ) /*0x483f18*/
        {
          if ( v14 ) /*0x483fc1*/
            goto LABEL_89; /*0x483fc1*/
        }
        else if ( v14 ) /*0x483f20*/
        {
          goto LABEL_30; /*0x483f20*/
        }
        if ( v15 ) /*0x483fc9*/
          goto LABEL_45; /*0x483fc9*/
LABEL_89:
        v6 = *((_DWORD *)gridDistantArray + 3); /*0x4841b4*/
        --v35; /*0x4841bf*/
        if ( ++v34 >= v6 ) /*0x4841cd*/
          goto LABEL_90; /*0x4841cd*/
      }
      if ( v14 )
      {
LABEL_30:
        v16 = *v13 != 0 ? 1 : 4;
        *(_BYTE *)(v9 + 1) = 1; /*0x483f32*/
      }
      else
      {
        if ( *(_BYTE *)(v9 + 1) ) /*0x483ff8*/
        {
          v18 = (TESObjectCELL *)TESObjectCELL_PackExteriorGroupLabel(*(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)); /*0x484007*/
          sub_7B3A40(v18); /*0x48400d*/
          *(_BYTE *)(v9 + 1) = 0; /*0x484015*/
        }
        v16 = 2; /*0x484019*/
      }
      if ( !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 1u) /*0x483f82*/
        && !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 2u)
        || !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 1u) && v16 == 1
        || !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 2u) && v16 == 2 )
      {
        goto LABEL_89; /*0x483f82*/
      }
      if ( !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 1u) && v16 == 4 ) /*0x483f9a*/
        v16 = 2; /*0x483f9c*/
      if ( !TESWorldSpace_IsDistantLODModeEnabled(worldspace, 2u) && v16 == 4 ) /*0x483fb3*/
      {
        v16 = 1; /*0x483fb5*/
        goto LABEL_55; /*0x483fba*/
      }
      if ( v16 == 2 ) /*0x484026*/
      {                                         // Verified DistantLOD grid update gate: in mode 2 it checks TESWorldSpace_PassesCellLODFilter for the cell before scheduling/updating DistantLOD data; independently consults WorldSpace mode-mask bits via TESWorldSpace_IsDistantLODModeEnabled.
        if ( !TESWorldSpace_PassesCellLODFilter(worldspace, *(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)) /*0x484043*/
          || !bDisplayLODBuildings )
        {
          goto LABEL_89; /*0x48404a*/
        }
      }
      else
      {
        if ( v16 == 1 ) /*0x484055*/
        {
LABEL_55:
          if ( !bDisplayLODTrees ) /*0x48405e*/
            goto LABEL_89; /*0x48405e*/
          goto LABEL_61; /*0x48405e*/
        }
        if ( bDisplayLODBuildings ) /*0x48406b*/
        {
          if ( !bDisplayLODTrees ) /*0x48407b*/
            v16 = 2; /*0x484084*/
        }
        else
        {
          v16 = 1; /*0x484074*/
        }
      }
LABEL_61:
      v19 = GridDistantCount; /*0x484089*/
      if ( v7 < GridDistantCount || (v20 = v19 + uGridsToLoad, v7 >= v20) ) /*0x48409c*/
      {
        v21 = v34; /*0x4840b5*/
      }
      else
      {
        v21 = v34; /*0x48409e*/
        if ( v34 >= v19 && v34 < v20 && v16 == 1 ) /*0x4840ad*/
          goto LABEL_89; /*0x4840ad*/
      }
      if ( *v13 ) /*0x4840b9*/
      {
        LOWORD((*v13)[1].members.super.m_uiRefCount) &= ~1u; /*0x4840ff*/
      }
      else
      {
        v22 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4840c4*/
        if ( v22 ) /*0x4840da*/
          v23 = NiNode::NiNode(v22, 0); /*0x4840e0*/
        else
          v23 = 0; /*0x4840e7*/
        NiSmartPointer_Set__((Ni2DBuffer **)(v9 + 4), (Ni2DBuffer *)v23); /*0x4840f4*/
        v21 = v34; /*0x4840f9*/
      }
      v24 = GridDistantCount; /*0x484105*/
      if ( v7 >= GridDistantCount ) /*0x48410d*/
      {
        v25 = v24 + uGridsToLoad; /*0x484114*/
        if ( v7 < v25 && v21 >= v24 && v21 < v25 ) /*0x484120*/
        {
          LOWORD((*v13)[1].members.super.m_uiRefCount) |= 1u; /*0x484124*/
          v16 = 2; /*0x484129*/
        }
      }
      v26 = abs32(v36); /*0x48413b*/
      v27 = abs32(v35); /*0x484140*/
      if ( v26 > v27 ) /*0x484144*/
        v27 = v26; /*0x484146*/
      if ( v27 > v38 + 2 ) /*0x484151*/
        v28 = (v38 + 4 < v27) + 1; /*0x484164*/
      else
        v28 = 0; /*0x484153*/
      if ( v16 == 2 /*0x48417f*/
        || v16 == 4 && TESWorldSpace_PassesCellLODFilter(worldspace, *(_WORD *)(v9 + 8), *(_WORD *)(v9 + 0xC)) )
      {
        v28 = 0; /*0x484188*/
      }
      DistantLOD_QueueCellLoadTask( /*0x4841a8*/
        (void *)g_DistantLODLoaderTasksByCell,
        worldspace,
        *(_DWORD *)(v9 + 8),
        *(_DWORD *)(v9 + 0xC),
        *(Ni2DBuffer **)&MEMORY[0xB33E90][0x594],
        *v13,
        v28,
        v16);                                   // Verified update loop queues each eligible exterior-grid cell through g_DistantLODLoaderTasksByCell; duplicate packed-cell tasks are suppressed before registration, then IOManager executes the worker.
      v7 = v39; /*0x4841ad*/
      *(_BYTE *)v9 = 1; /*0x4841b1*/
      goto LABEL_89; /*0x4841b1*/
    }
LABEL_91:
    NiAVObject_UpdateNiAVObject(*(NiAVObject **)&MEMORY[0xB33E90][0x594], 0.0, 1); /*0x4841ee*/
    NiAVObject_InitializePropertyState(*(NiAVObject **)&MEMORY[0xB33E90][0x594]); /*0x484207*/
    NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID(*(NiNode **)(*(_DWORD *)&MEMORY[0xB33E90][0x594] + 0x1C), 1); /*0x484217*/
    v30 = NiRTTI_Cast((BSStringT *)&stru_B43484, NiPropertyByID); /*0x484222*/
    if ( v30 ) /*0x48422c*/
    {
      v31 = *(float *)&v30[6].__vftable; /*0x48423c*/
      v32 = *(float *)&v30[5].members.m_uiRefCount + (v31 - *(float *)&v30[5].members.m_uiRefCount) * dbl_A2FAA0; /*0x484252*/
      if ( *(float *)&MEMORY[0xB33E90][0x580] < v32 ) /*0x484261*/
        v32 = *(float *)&MEMORY[0xB33E90][0x580]; /*0x484263*/
      v41 = v32; /*0x484269*/
      if ( *(float *)&MEMORY[0xB33E90][0x584] < v31 ) /*0x48427a*/
        v31 = *(float *)&MEMORY[0xB33E90][0x584]; /*0x48427c*/
      worldspacea = v31; /*0x484282*/
      flt_B2C334 = v41; /*0x48428a*/
      flt_B2C338 = worldspacea - v41; /*0x484294*/
    }
  }
}
