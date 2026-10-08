// Refresh an NPC's FaceGen state after actor 3D generation/rebuild. With bFixFaceNormals enabled, locates the named head geometry and stitches it to the first UpperBody geometry whose material name begins Skin using a 0.50-unit radius, then reapplies the absolute FaceGen render state to both cached nodes.
void __fastcall TESNPC_RefreshFaceGenForActor3D(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // edi
  int (__thiscall *v5)(int, _DWORD); // edx
  Ni2DBuffer *v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  NiNode *v10; // eax
  NiNode *v11; // ebp
  NiAVObject *ChildAtIndex; // eax
  int v13; // eax
  NiNode *v14; // ebp
  int v15; // eax
  unsigned int v16; // edi
  NiAVObject *v17; // eax
  NiNode *v18; // eax
  NiGeometry *v19; // esi
  NiObject *NiPropertyByID; // eax
  NiObject *v21; // eax
  const char *vftable; // eax
  unsigned int v23; // ebx
  unsigned int v24; // edi
  NiAVObject *v25; // eax
  NiNode *v26; // eax
  NiGeometry *v27; // esi
  NiObject *v28; // eax
  NiObject *v29; // eax
  const char *v30; // eax
  void *v31; // ecx
  void *v32; // edx
  BSSimpleList_VoidPtr *v33; // esi
  LONG (__stdcall *v34)(volatile LONG *); // ebp
  int i; // esi
  unsigned int v36; // eax
  unsigned int firstFree; // edi
  unsigned int v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // edi
  int *v41; // eax
  NiGeometry *v42; // edi
  size_t v43; // [esp+Ch] [ebp-F8h]
  char *v44; // [esp+Ch] [ebp-F8h]
  unsigned int v45; // [esp+24h] [ebp-E0h] BYREF
  unsigned int numObjs; // [esp+28h] [ebp-DCh]
  NiGeometry *targetGeometry; // [esp+2Ch] [ebp-D8h] BYREF
  BSFaceGenNiNode **v48; // [esp+30h] [ebp-D4h]
  FaceGenRenderState outAbsolute; // [esp+34h] [ebp-D0h] BYREF
  unsigned int v50; // [esp+100h] [ebp-4h]

  v3 = a1; /*0x52857d*/
  numObjs = a1; /*0x52857f*/
  if ( a3 ) /*0x52858c*/
  {
    if ( bFixFaceNormals ) /*0x528592*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x154))(a3); /*0x5285ab*/
      v5 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x138); /*0x5285af*/
      v48 = (BSFaceGenNiNode **)(v3 + 0x1D8); /*0x5285bf*/
      v6 = (Ni2DBuffer *)v5(a3, 0); /*0x5285c3*/
      v7 = *NiSmartPointer_Set__((Ni2DBuffer **)(v3 + 0x1D8), v6); /*0x5285cd*/
      v44 = g_FaceGenHeadPartNodeNames[0]; /*0x5285d4*/
      v45 = v7; /*0x5285d6*/
      v8 = NiObjectNET_LookupObjectByName(v4, v44); /*0x5285da*/
      if ( v8 ) /*0x5285e4*/
      {
        targetGeometry = (NiGeometry *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x10))(v8); /*0x5285f5*/
        if ( targetGeometry ) /*0x5285f9*/
        {
          if ( v7 ) /*0x528601*/
          {
            if ( !(*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)v7 + 0xBC))(v7) ) /*0x528611*/
            {
              v9 = NiObjectNET_LookupObjectByName(v4, "UpperBody"); /*0x528621*/
              if ( v9 ) /*0x52862b*/
              {
                v10 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x528638*/
                v11 = v10; /*0x52863a*/
                if ( v10 ) /*0x52863e*/
                {
                  ChildAtIndex = NiNode_GetChildAtIndex(v10, 0); /*0x528648*/
                  if ( ChildAtIndex ) /*0x52864f*/
                  {
                    v13 = (int)ChildAtIndex->vtbl->super.Unk_02((NiObject *)ChildAtIndex); /*0x52865c*/
                    v14 = (NiNode *)v13; /*0x52865e*/
                    if ( v13 ) /*0x528662*/
                    {
                      v15 = *(unsigned __int16 *)(v13 + 0xB8); /*0x528668*/
                      v16 = 0; /*0x52866f*/
                      numObjs = v14->members.children.numObjs; /*0x528673*/
                      if ( v15 ) /*0x528677*/
                      {
                        while ( 1 ) /*0x528683*/
                        {
                          v17 = NiNode_GetChildAtIndex(v14, v16); /*0x528683*/
                          if ( v17 ) /*0x52868a*/
                          {
                            v18 = (NiNode *)v17->vtbl->super.Unk_04((NiObject *)v17); /*0x528693*/
                            v19 = (NiGeometry *)v18; /*0x528695*/
                            if ( v18 ) /*0x528699*/
                            {
                              NiPropertyByID = (NiObject *)NiNode_GetNiPropertyByID(v18, 2); /*0x52869f*/
                              v21 = NiRTTI_Cast((BSStringT *)&stru_B3FA9C, NiPropertyByID); /*0x5286aa*/
                              if ( v21 ) /*0x5286b4*/
                              {
                                vftable = (const char *)v21[1].__vftable; /*0x5286b6*/
                                if ( vftable ) /*0x5286bb*/
                                {
                                  LODWORD(v43) = 4; /*0x5286bd*/
                                  if ( !_strnicmp(vftable, "Skin", v43) /*0x5286e4*/
                                    && NiGeometry_CopyNearestVertexNormals(
                                         v19,
                                         targetGeometry,
                                         kHeadBodyNormalMatchRadius,
                                         1,
                                         0) )
                                  {
                                    break;      // Actor-3D seam repair variant: copy normals from an UpperBody geometry whose material name starts with Skin to the named head geometry, using Oblivion's wider 0.50-unit radius. /*0x5286e4*/
                                  }
                                }
                              }
                            }
                          }
                          if ( ++v16 >= numObjs ) /*0x5286f7*/
                            goto LABEL_32; /*0x5286f7*/
                        }
                        (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)v45 + 0xC0))(v45, 1); /*0x52870c*/
                      }
                    }
                  }
                  else
                  {
                    v23 = v11->members.children.numObjs; /*0x528713*/
                    v24 = 0; /*0x52871a*/
                    if ( v11->members.children.numObjs ) /*0x528713*/
                    {
                      while ( 1 ) /*0x528727*/
                      {
                        v25 = NiNode_GetChildAtIndex(v11, v24); /*0x528727*/
                        if ( v25 ) /*0x52872e*/
                        {
                          v26 = (NiNode *)v25->vtbl->super.Unk_04((NiObject *)v25); /*0x528737*/
                          v27 = (NiGeometry *)v26; /*0x528739*/
                          if ( v26 ) /*0x52873d*/
                          {
                            v28 = (NiObject *)NiNode_GetNiPropertyByID(v26, 2); /*0x528743*/
                            v29 = NiRTTI_Cast((BSStringT *)&stru_B3FA9C, v28); /*0x52874e*/
                            if ( v29 ) /*0x528758*/
                            {
                              v30 = (const char *)v29[1].__vftable; /*0x52875a*/
                              if ( v30 ) /*0x52875f*/
                              {
                                LODWORD(v43) = 4; /*0x528761*/
                                if ( !_strnicmp(v30, "Skin", v43) /*0x528788*/
                                  && NiGeometry_CopyNearestVertexNormals(
                                       v27,
                                       targetGeometry,
                                       kHeadBodyNormalMatchRadius,
                                       1,
                                       0) )
                                {
                                  break;        // Fallback UpperBody traversal performs the same Skin-to-head normal copy at 0.50 units when the nested child layout is absent. /*0x528788*/
                                }
                              }
                            }
                          }
                        }
                        if ( ++v24 >= v23 ) /*0x528799*/
                          goto LABEL_31; /*0x528799*/
                      }
                      (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)v45 + 0xC0))(v45, 1); /*0x5287ab*/
                    }
LABEL_31:
                    v3 = numObjs; /*0x5287ad*/
                  }
                }
              }
            }
LABEL_32:
            if ( *(_DWORD *)(v3 + 0xE8) ) /*0x5287b1*/
            {
              FaceGenRenderState_Construct(&outAbsolute); /*0x5287c2*/
              v31 = *(void **)(v3 + 0x1C8); /*0x5287cd*/
              outAbsolute.hairLength = *(float *)(v3 + 0x1CC); /*0x5287d3*/
              v32 = *(void **)(v3 + 0x1D0); /*0x5287da*/
              outAbsolute.hair = v31; /*0x5287e0*/
              v50 = 0; /*0x5287e9*/
              outAbsolute.eyes = v32; /*0x5287f4*/
              outAbsolute.isFemale = TESActorBase_IsFemale((_BYTE *)v3); /*0x528804*/
              outAbsolute.hairColorRGB = *(_DWORD *)(v3 + 0x1E8); /*0x528814*/
              TESNPC_BuildAbsoluteFaceGenParameters((const TESNPC *)v3, &outAbsolute.parameters); /*0x52881b*/
              if ( !outAbsolute.eyes ) /*0x528828*/
              {
                v33 = *(BSSimpleList_VoidPtr **)(v3 + 0xE8); /*0x52882a*/
                if ( v33 != (BSSimpleList_VoidPtr *)0xFFFFFF58 && !BSSimpleList_IsEmpty(v33 + 0x15) ) /*0x528840*/
                  outAbsolute.eyes = v33[0x15].firstNode.data; /*0x52884f*/
              }
              v34 = InterlockedDecrement; /*0x528856*/
              for ( i = 0; i < 9; ++i ) /*0x52885c*/
              {
                v36 = sub_52BC50(*(_DWORD *)(v3 + 0xE8), i); /*0x528867*/
                firstFree = outAbsolute.headModels.firstFree; /*0x52886c*/
                v45 = v36; /*0x52887e*/
                if ( outAbsolute.headModels.firstFree >= (unsigned int)outAbsolute.headModels.capacity ) /*0x528882*/
                  NiTArray_SetSize( /*0x528896*/
                    (unsigned __int16 *)&outAbsolute.headModels,
                    outAbsolute.headModels.firstFree + outAbsolute.headModels.growSize);
                NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&outAbsolute.headModels, firstFree, &v45); /*0x5288a8*/
                v38 = sub_52BD00(*(_DWORD *)(v3 + 0xE8), i); /*0x5288b4*/
                v39 = outAbsolute.headTextures.firstFree; /*0x5288b9*/
                v45 = v38; /*0x5288cb*/
                if ( outAbsolute.headTextures.firstFree >= (unsigned int)outAbsolute.headTextures.capacity ) /*0x5288cf*/
                  NiTArray_SetSize( /*0x5288e3*/
                    (unsigned __int16 *)&outAbsolute.headTextures,
                    outAbsolute.headTextures.firstFree + outAbsolute.headTextures.growSize);
                NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&outAbsolute.headTextures, v39, &v45); /*0x5288f5*/
                v40 = outAbsolute.nodeNames.firstFree; /*0x5288fa*/
                v45 = *(_DWORD *)(4 * i + 0xB10CA8); /*0x528913*/
                if ( outAbsolute.nodeNames.firstFree >= (unsigned int)outAbsolute.nodeNames.capacity ) /*0x528917*/
                  NiTArray_SetSize( /*0x52892b*/
                    (unsigned __int16 *)&outAbsolute.nodeNames,
                    outAbsolute.nodeNames.firstFree + outAbsolute.nodeNames.growSize);
                NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&outAbsolute.nodeNames, v40, &v45); /*0x52893d*/
                if ( byte_B10D3C ) /*0x528942*/
                {
                  v41 = sub_524100((TESForm *)v3, (int *)&targetGeometry, i); /*0x528953*/
                  LOBYTE(v50) = 1; /*0x528960*/
                  sub_526A30((unsigned __int16 *)&outAbsolute.textureOverrides, v41); /*0x528968*/
                  LOBYTE(v50) = 0; /*0x528973*/
                  if ( targetGeometry ) /*0x52897b*/
                  {
                    v42 = targetGeometry; /*0x52897d*/
                    if ( !v34((volatile LONG *)&targetGeometry->member) ) /*0x528983*/
                      v42->__vftable->super.super.super.Destructor((NiRefObject *)v42, 1); /*0x528995*/
                  }
                }
              }
              outAbsolute.useTextureOverrides = byte_B10D3C; /*0x5289ac*/
              BSFaceGen_ApplyHeadParametersToNode(*(BSFaceGenNiNode **)(v3 + 0x1D4), &outAbsolute); /*0x5289bb*/
              BSFaceGen_ApplyHeadParametersToNode(*v48, &outAbsolute); /*0x5289cc*/
              v50 = 0xFFFFFFFF; /*0x5289d8*/
              FaceGenRenderState_Destruct(&outAbsolute); /*0x5289e3*/
            }
          }
        }
      }
    }
  }
}
