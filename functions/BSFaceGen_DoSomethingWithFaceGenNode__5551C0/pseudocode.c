// Apply appearance resources to an already-built BSFaceGenNiNode: project/floor age, generate or bind EGT textures, update sex-specific head-part properties, eyes and hair, initialize property state, and update the node. It does not reapply EGM vertex deformation, so construction-time seam normals remain intact.
void __cdecl BSFaceGen_ApplyHeadParametersToNode(BSFaceGenNiNode *faceNode, const FaceGenRenderState *state)
{
  const FaceGenRenderState *v2; // ebp
  double v3; // st7
  unsigned int v4; // esi
  unsigned int v5; // edi
  NiAVObject *v6; // eax
  int v7; // eax
  NiObject *v8; // ebp
  NiAVObject *v9; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v11; // esi
  BOOL v12; // eax
  _DWORD *v13; // esi
  const FaceGenRenderState *v14; // eax
  const char *v15; // eax
  const FaceGenRenderState *v16; // edi
  char *m_data; // ebp
  int *SourceTexture_010201A0; // eax
  Ni2DBuffer *v19; // ebp
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  NiAVObject *v24; // ecx
  NiProperty *v25; // eax
  double v26; // st7
  int *v27; // eax
  NiAVObject *v28; // edi
  NiNode *v29; // eax
  NiAVObject *v30; // esi
  NiProperty *v31; // eax
  NiNode *v32; // eax
  NiAVObject *v33; // esi
  NiProperty *v34; // eax
  NiAVObject *v35; // eax
  NiNode *v36; // esi
  NiProperty *v37; // esi
  BOOL v38; // eax
  float *v39; // eax
  unsigned int hairColorRGB; // ecx
  double v41; // rt0
  BOOL v42; // eax
  float *v43; // eax
  unsigned int v44; // ecx
  double v45; // rt1
  LONG (__stdcall *v46)(volatile LONG *); // edi
  Ni2DBuffer *v47; // esi
  NiTexture *v48; // esi
  Ni2DBuffer *v49; // esi
  char *a2; // [esp+0h] [ebp-A0h]
  Ni2DBuffer *a2_4; // [esp+4h] [ebp-9Ch]
  unsigned int v52; // [esp+24h] [ebp-7Ch]
  NiTexture *outTexture; // [esp+28h] [ebp-78h] BYREF
  BSStringT v54; // [esp+2Ch] [ebp-74h] BYREF
  UInt32 v55; // [esp+34h] [ebp-6Ch]
  Ni2DBuffer *v56; // [esp+38h] [ebp-68h] BYREF
  Ni2DBuffer *v57; // [esp+3Ch] [ebp-64h] BYREF
  unsigned int v58; // [esp+40h] [ebp-60h]
  NiAVObject *root; // [esp+44h] [ebp-5Ch]
  NiAVObject *v60; // [esp+48h] [ebp-58h]
  float v61; // [esp+4Ch] [ebp-54h]
  float v62; // [esp+50h] [ebp-50h]
  float v63; // [esp+54h] [ebp-4Ch]
  char ArgList[4]; // [esp+58h] [ebp-48h]
  BSStringT outPath; // [esp+5Ch] [ebp-44h] BYREF
  NiAVObject *v66; // [esp+64h] [ebp-3Ch]
  unsigned __int8 age[4]; // [esp+68h] [ebp-38h]
  UInt32 v68; // [esp+6Ch] [ebp-34h] BYREF
  UInt32 v69; // [esp+70h] [ebp-30h] BYREF
  _DWORD v70[2]; // [esp+74h] [ebp-2Ch] BYREF
  __int16 v71; // [esp+7Ch] [ebp-24h]
  __int16 v72; // [esp+7Eh] [ebp-22h]
  int v73; // [esp+80h] [ebp-20h]
  __int16 v74; // [esp+84h] [ebp-1Ch]
  __int16 v75; // [esp+86h] [ebp-1Ah]
  int v76; // [esp+88h] [ebp-18h]
  int v77; // [esp+8Ch] [ebp-14h]
  int v78; // [esp+9Ch] [ebp-4h]

  v2 = state; /*0x5551fc*/
  v55 = 0; /*0x555205*/
  v66 = (NiAVObject *)faceNode; /*0x555209*/
  v70[1] = 0; /*0x555211*/
  v71 = 0; /*0x555215*/
  v72 = 0; /*0x55521a*/
  v78 = 7; /*0x55521f*/
  v76 = 0; /*0x555226*/
  v77 = 0; /*0x55522d*/
  v73 = 0; /*0x55523d*/
  v74 = 0; /*0x555241*/
  v75 = 0; /*0x555246*/
  outPath.m_data = 0; /*0x55524b*/
  outPath.m_dataLen = 0; /*0x55524f*/
  outPath.m_bufLen = 0; /*0x555254*/
  v54.m_data = 0; /*0x555259*/
  v54.m_dataLen = 0; /*0x55525d*/
  v54.m_bufLen = 0; /*0x555262*/
  v57 = 0; /*0x555267*/
  outTexture = 0; /*0x55526b*/
  v56 = 0; /*0x55526f*/
  v52 = 0; /*0x55527d*/
  if ( !faceNode || !state ) /*0x555289*/
  {
    FormHeapFree(0); /*0x5559a8*/
    a2 = 0; /*0x5559ad*/
    goto LABEL_100; /*0x5559ad*/
  }
  if ( !g_faceGenManager ) /*0x55528f*/
    FaceGenManager_EnsureInitialized(); /*0x555297*/
  *(float *)&root = FaceGenFanControls_GetControlValue((char *)g_faceGenManager + 0xC8, 0, 0, 0, &state->parameters); /*0x5552b1*/
  v3 = floor(*(float *)&root); /*0x5552bf*/
  v4 = 0; /*0x5552cc*/
  age[0] = Double_To_SInt32(v3); /*0x5552ce*/
  v58 = 0; /*0x5552d2*/
  do
  {
    BSStringT_Set(&outPath, EmptyString, 0); /*0x5552ea*/
    if ( v4 == 2 ) /*0x5552f2*/
    {
      if ( !v2->isFemale ) /*0x5552f7*/
      {
LABEL_65:
        v2 = state; /*0x5556de*/
        v4 = v58; /*0x5556e2*/
        goto LABEL_66; /*0x5556e2*/
      }
      goto LABEL_15; /*0x5552f7*/
    }
    if ( v4 != 1 )
    {
      if ( v4 == 7 || v4 == 8 ) /*0x555319*/
        goto LABEL_65; /*0x555319*/
      v52 = 1; /*0x555321*/
      if ( v4 )
      {
LABEL_16:
        v5 = v4; /*0x55532f*/
        if ( !v2->headModels.data[v4] ) /*0x555339*/
          goto LABEL_65; /*0x555339*/
        if ( !v2->headTextures.data[v5] ) /*0x555348*/
          goto LABEL_65; /*0x555348*/
        v6 = v66->vtbl->GetObjectByName(v66, v2->nodeNames.data[v5]); /*0x555365*/
        v60 = v6; /*0x555369*/
        if ( !v6 ) /*0x55536d*/
          goto LABEL_65; /*0x55536d*/
        v7 = v6->vtbl->super.Unk_04((NiObject *)v6); /*0x55537a*/
        if ( !v7 ) /*0x55537e*/
          goto LABEL_65; /*0x55537e*/
        v8 = sub_5507E0(v7); /*0x55538a*/
        if ( !v8 ) /*0x555391*/
          goto LABEL_65; /*0x555391*/
        v9 = v60; /*0x55539b*/
        BSShaderManager_AssignShadersRecursive(v60, v52, 1, 1); /*0x5553a5*/
        NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v9, 4); /*0x5553b1*/
        v11 = NiPropertyByID; /*0x5553b6*/
        v12 = NiPropertyByID /*0x5553d8*/
           && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
           && (*((int (__thiscall **)(NiProperty *))v11->vtbl + 0x15))(v11) <= 0xA;
        v13 = v12 ? (_DWORD *)v11 : 0;
        if ( !v13 ) /*0x5553e9*/
          goto LABEL_65; /*0x5553e9*/
        v14 = state; /*0x5553ef*/
        if ( state->textureOverrides.firstFree ) /*0x5553f3*/
        {
          if ( state->useTextureOverrides ) /*0x5553fc*/
          {
            OB_NiSmartPointer_Assign_010201A0((int *)&outTexture, (int *)&state->textureOverrides.data[v5]); /*0x555413*/
            v14 = state; /*0x555418*/
          }
        }
        if ( !v58 && (char)age[0] >= 0 ) /*0x55542a*/
        {
          v15 = *((const char **)*v14->headTextures.data + 1); /*0x555438*/
          if ( !v15 ) /*0x55543d*/
            v15 = EmptyString; /*0x55543f*/
          if ( FaceGen_BuildAgeTexturePath(&outPath, state->isFemale, age[0], v15) )// Native CALL FaceGen_BuildAgeTexturePath followed at +5 by add esp,0x10. Blockhead c4e73ac1 installs JMP to its stdcall wrapper and resumes +8. Prettier Faces 1.19.10 compatibility: accepts E9 only when destination maps to committed MEM_IMAGE allocation owned by loaded Blockhead.dll, preserves site and skips PF age hook; validates other core sites normally before any writes. Native E8/target installs PF age hook. Unknown replacement fails closed. PF nearest-age lookup/path guard do not run when Blockhead owns this site. Combined in-game verification pending. /*0x555457*/
          {
            v16 = state; /*0x555467*/
            if ( !state->textureOverrides.firstFree || !*state->textureOverrides.data ) /*0x55547a*/
            {
              sub_43F2E0(&unk_B39C00); /*0x555483*/
              BSFaceGenModel_GenerateMorphTexture(v8, &state->parameters, &outTexture, 0); /*0x555491*/
              sub_43F300(&unk_B39C00); /*0x55549b*/
            }
            m_data = outPath.m_data; /*0x5554a0*/
            a2_4 = (Ni2DBuffer *)*OB_TES_LoadOrFindSourceTexture_010201A0(&v68, outPath.m_data, 0, 0); /*0x5554b9*/
            LOBYTE(v78) = 8; /*0x5554be*/
            NiSmartPointer_Set__(&v56, a2_4); /*0x5554c6*/
            LOBYTE(v78) = 7; /*0x5554cf*/
            NiPointerSlot_Release((NiD3DVertexShader *)&v68); /*0x5554d7*/
            sub_46FF20(&v54, m_data); /*0x5554e2*/
LABEL_44:
            if ( v54.m_data ) /*0x55554d*/
            {
              SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&v69, v54.m_data, 1, 0); /*0x55555e*/
              LOBYTE(v78) = 9; /*0x555568*/
              OB_NiSmartPointer_Assign_010201A0((int *)&v57, SourceTexture_010201A0); /*0x555570*/
              LOBYTE(v78) = 7; /*0x555579*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v69); /*0x555581*/
            }
            v19 = v57; /*0x555586*/
            v20 = *v13; /*0x55558c*/
            if ( v57 ) /*0x555590*/
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, Ni2DBuffer *))(v20 + 0x84))(v13, 0, v57); /*0x55559a*/
              v21 = *(_DWORD *)(sub_54F7D0(v19) + 4); /*0x5555a3*/
              if ( v21 == 5 || v21 == 6 || (LOBYTE(root) = 0, v21 == 1) ) /*0x5555b7*/
                LOBYTE(root) = 1; /*0x5555b9*/
              sub_434980(v13, 1, (char)root); /*0x5555c7*/
            }
            else if ( !(*(int (__thiscall **)(_DWORD *, _DWORD))(v20 + 0x8C))(v13, 0) ) /*0x5555d5*/
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v13 + 0x84))(v13, 0, LODWORD(flt_B430DC[0])); /*0x5555ec*/
            }
            if ( v16->useTextureOverrides ) /*0x5555ee*/
            {
              if ( v52 == 0xE ) /*0x5555ff*/
              {
                (*(void (__thiscall **)(_DWORD *, int, NiTexture *))(*v13 + 0x80))(v13, 1, outTexture); /*0x55561a*/
                if ( v56 ) /*0x555620*/
                {
                  v22 = &v56; /*0x555622*/
                }
                else
                {
                  v23 = sub_4783A0(); /*0x555628*/
                  v22 = sub_405070(v70, v23); /*0x555632*/
                  v55 |= 1u; /*0x555637*/
                  LOBYTE(v78) = 0xA; /*0x55563b*/
                }
                (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v13 + 0x84))(v13, 1, *v22); /*0x555651*/
                v78 = 7; /*0x555658*/
                if ( (v55 & 1) != 0 ) /*0x555663*/
                {
                  v55 &= ~1u; /*0x555665*/
                  NiPointerSlot_Release((NiD3DVertexShader *)v70); /*0x55566e*/
                }
                v24 = v60; /*0x555673*/
                v13[7] |= 0x400u; /*0x555677*/
                v13[9] = 0; /*0x555680*/
                v25 = NiNode_GetNiPropertyByID((NiNode *)v24, 2); /*0x555683*/
                if ( v25 ) /*0x55568c*/
                {
                  if ( *(float *)&v25[3].members.super.m_uiRefCount < 1.0 ) /*0x5556a0*/
                  {
                    v26 = flt_A46B10; /*0x5556a2*/
                    ++v25[3].members.m_controller; /*0x5556a8*/
                    *(float *)&v25[3].members.super.m_uiRefCount = v26; /*0x5556ab*/
                  }
                }
              }
            }
            v27 = NiSmartPointer_Set__(&v56, 0); /*0x5556b3*/
            OB_NiSmartPointer_Assign_010201A0((int *)&outTexture, v27); /*0x5556bd*/
            NiSmartPointer_Set__(&v57, 0); /*0x5556c7*/
            sub_551140((int)v60, v52); /*0x5556d6*/
            goto LABEL_65; /*0x5556d6*/
          }
          v14 = state; /*0x5554ec*/
        }
        if ( !v14->textureOverrides.firstFree || !v14->textureOverrides.data[v5] ) /*0x5554ff*/
        {
          sub_43F2E0(&unk_B39C00); /*0x555509*/
          BSFaceGenModel_GenerateMorphTexture(v8, &state->parameters, &outTexture, 0); /*0x55551b*/
          sub_43F300(&unk_B39C00); /*0x555525*/
        }
        (*(void (__thiscall **)(void *, BSStringT *))(*(_DWORD *)state->headTextures.data[v5] + 0x10))( /*0x555541*/
          state->headTextures.data[v5],
          &v54);
        v16 = state; /*0x555543*/
        goto LABEL_44; /*0x555543*/
      }
LABEL_15:
      v52 = 0xE; /*0x555327*/
      goto LABEL_16; /*0x555327*/
    }
    if ( v2->isFemale != 1 ) /*0x555306*/
      goto LABEL_15; /*0x555306*/
LABEL_66:
    v58 = ++v4; /*0x5556f0*/
  }
  while ( v4 < 9 );
  v28 = v66; /*0x5556fa*/
  v29 = (NiNode *)v66->vtbl->GetObjectByName(v66, "FaceGenEyeLeft"); /*0x55570a*/
  v30 = (NiAVObject *)v29; /*0x55570c*/
  if ( v29 ) /*0x555710*/
  {
    v31 = NiNode_GetNiPropertyByID(v29, 6); /*0x555716*/
    if ( v31 ) /*0x55571d*/
    {
      if ( byte_B120E4 ) /*0x55571f*/
        LOWORD(v31[1].vtbl) = (int)v31[1].vtbl & 0xFFF1 | 6; /*0x555734*/
    }
    BSShaderManager_AssignShadersRecursive(v30, 1u, 1, 1); /*0x55573f*/
    sub_551140((int)v30, v52); /*0x55574a*/
  }
  v32 = (NiNode *)v28->vtbl->GetObjectByName(v28, "FaceGenEyeRight"); /*0x55575e*/
  v33 = (NiAVObject *)v32; /*0x555760*/
  if ( v32 ) /*0x555764*/
  {
    v34 = NiNode_GetNiPropertyByID(v32, 6); /*0x55576a*/
    if ( v34 ) /*0x555771*/
    {
      if ( byte_B120E4 ) /*0x555773*/
        LOWORD(v34[1].vtbl) = (int)v34[1].vtbl & 0xFFF1 | 6; /*0x555788*/
    }
    BSShaderManager_AssignShadersRecursive(v33, 1u, 1, 1); /*0x555793*/
    sub_551140((int)v33, v52); /*0x55579e*/
  }
  v35 = v28->vtbl->GetObjectByName(v28, "FaceGenHair"); /*0x5557b2*/
  v36 = (NiNode *)v35; /*0x5557b4*/
  if ( v35 )
  {
    BSShaderManager_AssignShadersRecursive(v35, 1u, 1, 1); /*0x5557c5*/
    v37 = NiNode_GetNiPropertyByID(v36, 4); /*0x5557d6*/
    if ( v37 ) /*0x5557da*/
      v38 = (*((int (__thiscall **)(NiProperty *))v37->vtbl + 0x15))(v37) == 5; /*0x5557f1*/
    else
      v38 = 0; /*0x5557dc*/
    v39 = v38 ? (float *)v37 : 0;
    if ( v39 )
    {
      hairColorRGB = state->hairColorRGB; /*0x5557ff*/
      v41 = dbl_A3DDD8; /*0x555822*/
      v61 = (double)(unsigned __int8)hairColorRGB / v41; /*0x555824*/
      v39[0x2A] = v61; /*0x555834*/
      v62 = (double)BYTE1(hairColorRGB) / v41; /*0x55583c*/
      v39[0x2B] = v62; /*0x555844*/
      v63 = (double)BYTE2(hairColorRGB) / v41; /*0x55584e*/
      *(float *)ArgList = 1.0; /*0x555858*/
      v39[0x2C] = v63; /*0x55585c*/
      v39[0x2D] = *(float *)ArgList; /*0x555866*/
    }
    else
    {
      if ( v37 ) /*0x555873*/
        v42 = (*((int (__thiscall **)(NiProperty *))v37->vtbl + 0x15))(v37) == 0xA; /*0x55588a*/
      else
        v42 = 0; /*0x555875*/
      v43 = v42 ? (float *)v37 : 0;
      if ( v43 ) /*0x555892*/
      {
        v44 = state->hairColorRGB; /*0x555898*/
        v45 = dbl_A3DDD8; /*0x5558bb*/
        v61 = (double)(unsigned __int8)v44 / v45; /*0x5558bd*/
        v43[0x3C] = v61; /*0x5558cd*/
        v62 = (double)BYTE1(v44) / v45; /*0x5558d5*/
        v43[0x3D] = v62; /*0x5558dd*/
        v63 = (double)BYTE2(v44) / v45; /*0x5558e7*/
        *(float *)ArgList = 1.0; /*0x5558f1*/
        v43[0x3E] = v63; /*0x5558f5*/
        v43[0x3F] = *(float *)ArgList; /*0x5558ff*/
      }
    }
  }
  NiAVObject_InitializePropertyState(v28); /*0x555907*/
  NiAVObject_UpdateNiAVObject(v28, 0.0, 0); /*0x555915*/
  v46 = InterlockedDecrement; /*0x555920*/
  LOBYTE(v78) = 6; /*0x555926*/
  if ( v56 ) /*0x55592e*/
  {
    v47 = v56; /*0x555930*/
    if ( !v46((volatile LONG *)&v56->members) ) /*0x555936*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v47->__vftable)(v47, 1); /*0x555948*/
  }
  v48 = outTexture; /*0x55594a*/
  LOBYTE(v78) = 5; /*0x555950*/
  if ( outTexture ) /*0x555958*/
  {
    if ( !v46((volatile LONG *)&outTexture->members) ) /*0x55595e*/
    {
      if ( v48 ) /*0x555966*/
        v48->__vftable->super.super.Destructor((NiRefObject *)v48, 1); /*0x555970*/
    }
  }
  v49 = v57; /*0x555972*/
  LOBYTE(v78) = 4; /*0x555978*/
  if ( v57 ) /*0x555980*/
  {
    if ( !v46((volatile LONG *)&v57->members) ) /*0x555986*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v49->__vftable)(v49, 1); /*0x555994*/
  }
  FormHeapFree((unsigned int)v54.m_data); /*0x55599b*/
  a2 = outPath.m_data; /*0x5559a4*/
LABEL_100:
  v54.m_data = 0; /*0x5559ae*/
  v54.m_bufLen = 0; /*0x5559b2*/
  v54.m_dataLen = 0; /*0x5559b7*/
  FormHeapFree((unsigned int)a2); /*0x5559bc*/
  FormHeapFree(0); /*0x5559c2*/
  FormHeapFree(0); /*0x5559c8*/
  FormHeapFree(0); /*0x5559ce*/
}
