int __thiscall sub_854380(
        _DWORD *this,
        NiNode *vtable,
        RenderPass_DecodedLayout *a3,
        NiTPointerList_Node_void *a4,
        char a5,
        char *a6,
        RenderPass_DecodedLayout *a7)
{
  NiProperty *NiPropertyByID; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  unsigned __int8 *v13; // ebp
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // eax
  int v16; // ebx
  RenderPass_DecodedLayout *v17; // eax
  RenderPass_DecodedLayout *v18; // edi
  BSShaderLightingProperty *v19; // esi
  int (__thiscall *v20)(_DWORD *); // eax
  _DWORD *v21; // esi
  _DWORD *v22; // ecx
  RenderPass_DecodedLayout *v23; // eax
  RenderPass_DecodedLayout *v24; // eax
  RenderPass_DecodedLayout *v25; // eax
  RenderPass_DecodedLayout *v26; // eax
  RenderPass_DecodedLayout *v27; // eax
  _DWORD *v28; // edi
  BSShaderLightingProperty *v29; // ebp
  _DWORD *LightRef; // eax
  int v31; // ecx
  double v32; // st7
  bool v33; // bl
  volatile LONG *v34; // esi
  RenderPass_DecodedLayout *v35; // eax
  RenderPass_DecodedLayout *v36; // edi
  int (__thiscall *v37)(char *); // eax
  _DWORD *v38; // eax
  _DWORD *v39; // ecx
  int v40; // ebx
  unsigned __int8 *v41; // edi
  int v42; // ebp
  RenderPass_DecodedLayout *v43; // eax
  RenderPass_DecodedLayout *v44; // eax
  RenderPass_DecodedLayout *v45; // eax
  BSShaderLightingProperty *v46; // ebp
  char v47; // bl
  RenderPass_DecodedLayout *v48; // eax
  RenderPass_DecodedLayout *v49; // edi
  int (__thiscall *v50)(char *); // eax
  _DWORD *v51; // eax
  _DWORD *v52; // ecx
  ShadowSceneLight *i; // edi
  _DWORD *v54; // eax
  int v55; // ecx
  double v56; // st7
  bool v57; // bl
  RenderPass_DecodedLayout *v58; // esi
  RenderPass_DecodedLayout *v59; // eax
  RenderPass_DecodedLayout *v60; // edi
  int (__thiscall *v61)(char *); // edx
  _DWORD *v62; // eax
  _DWORD *v63; // ecx
  bool v64; // [esp+17h] [ebp-25h]
  volatile LONG *v65; // [esp+18h] [ebp-24h] BYREF
  int v66; // [esp+1Ch] [ebp-20h]
  BSShaderLightingProperty *v67; // [esp+20h] [ebp-1Ch]
  int v68; // [esp+24h] [ebp-18h]
  NiProperty *v69; // [esp+28h] [ebp-14h]
  RenderPass_DecodedLayout *v70; // [esp+2Ch] [ebp-10h]
  int v71; // [esp+38h] [ebp-4h]

  v67 = (BSShaderLightingProperty *)this; /*0x8543a9*/
  v66 = 0; /*0x8543b5*/
  NiPropertyByID = NiNode_GetNiPropertyByID(vtable, 4); /*0x8543cf*/
  v9 = *((unsigned __int16 *)this + 0x66); /*0x8543d1*/
  v64 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le <= 1; /*0x8543d8*/
  v10 = dword_B2C674 - 1; /*0x8543dd*/
  v69 = NiPropertyByID; /*0x8543e2*/
  if ( v9 >= v10 ) /*0x8543e6*/
  {
    v11 = v10; /*0x8543f0*/
    v68 = v10; /*0x8543f2*/
  }
  else
  {
    v11 = v9; /*0x8543e8*/
    v68 = v9; /*0x8543ea*/
  }
  result = (int)a4; /*0x8543fd*/
  if ( OB_ShaderPassControl_010201A0.bFullBrightLighting ) /*0x8543f6*/
  {
    v13 = (unsigned __int8 *)a6; /*0x85440c*/
    if ( a5 == 1 ) /*0x854410*/
    {
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854414*/
      a7 = v14; /*0x85441c*/
      v71 = 0; /*0x854422*/
      if ( v14 ) /*0x85442a*/
        v15 = RenderPass_Construct(v14, vtable, 0x48u, *v13, 0, 0); /*0x854439*/
      else
        v15 = 0; /*0x854443*/
      v71 = 0xFFFFFFFF; /*0x85444d*/
      v65 = (volatile LONG *)v15; /*0x854455*/
      result = (int)NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&v65); /*0x854459*/
    }
    else
    {
      ++LOWORD(a4->next); /*0x854460*/
    }
    v16 = 0; /*0x854464*/
    *v13 = 0; /*0x854468*/
    if ( v11 > 0 ) /*0x85446c*/
    {
      do /*0x85452d*/
      {
        result = (unsigned __int16)v16; /*0x85447c*/
        if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)v16 + 4) ) /*0x85447f*/
        {
          if ( a5 == 1 ) /*0x85448f*/
          {
            v17 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854497*/
            a7 = v17; /*0x85449f*/
            v71 = 1; /*0x8544a5*/
            if ( v17 ) /*0x8544ad*/
              v18 = RenderPass_Construct(v17, vtable, 0x16Eu, *v13, 0, 0); /*0x8544cb*/
            else
              v18 = 0; /*0x8544cf*/
            v19 = v67; /*0x8544d1*/
            v18->pad_09[0] = v16 + 1; /*0x8544d9*/
            v20 = *(int (__thiscall **)(_DWORD *))(*((_DWORD *)v19 + 0xA) + 4); /*0x8544df*/
            v21 = (_DWORD *)((char *)v19 + 0x28); /*0x8544e2*/
            v71 = 0xFFFFFFFF; /*0x8544e7*/
            result = v20(v21); /*0x8544ef*/
            *(_DWORD *)(result + 8) = v18; /*0x8544f1*/
            *(_DWORD *)result = 0; /*0x8544f4*/
            *(_DWORD *)(result + 4) = v21[2]; /*0x8544fd*/
            v22 = (_DWORD *)v21[2]; /*0x854500*/
            if ( v22 ) /*0x854505*/
            {
              *v22 = result; /*0x854507*/
              ++v21[3]; /*0x854509*/
            }
            else
            {
              ++v21[3]; /*0x854512*/
              v21[1] = result; /*0x854516*/
            }
            v21[2] = result; /*0x85450d*/
          }
          else
          {
            result = (int)a4; /*0x85451e*/
            ++LOWORD(a4->next); /*0x854522*/
          }
        }
        ++v16; /*0x854526*/
      }
      while ( v16 < v68 ); /*0x85452d*/
    }
    return result; /*0x85452d*/
  }
  if ( !(_BYTE)a7 ) /*0x854540*/
  {
    if ( a5 == 1 ) /*0x854547*/
    {
      v23 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85454f*/
      v65 = (volatile LONG *)v23; /*0x854557*/
      v71 = 2; /*0x85455d*/
      if ( v23 ) /*0x854565*/
        v65 = (volatile LONG *)RenderPass_Construct(v23, vtable, 0x48u, *a6, 1u, a3); /*0x85457f*/
      else
        v65 = 0; /*0x85459b*/
      v71 = 0xFFFFFFFF; /*0x85458e*/
      NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&v65); /*0x854592*/
      goto LABEL_36; /*0x854597*/
    }
LABEL_35:
    ++LOWORD(a4->next); /*0x854609*/
    goto LABEL_36; /*0x854609*/
  }
  if ( a5 != 1 ) /*0x8545b7*/
    goto LABEL_35; /*0x8545b7*/
  v24 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x8545bb*/
  v65 = (volatile LONG *)v24; /*0x8545c3*/
  v71 = 3; /*0x8545c9*/
  if ( v24 ) /*0x8545d1*/
    v25 = RenderPass_Construct(v24, vtable, 0x49u, *a6, 1u, a3); /*0x8545e6*/
  else
    v25 = 0; /*0x8545f0*/
  v65 = (volatile LONG *)v25; /*0x8545fa*/
  v71 = 0xFFFFFFFF; /*0x8545fe*/
  NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&v65); /*0x854602*/
LABEL_36:
  *a6 = 0; /*0x85460d*/
  result = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x24))(NiPropertyByID, 0); /*0x854621*/
  if ( result ) /*0x854625*/
  {
    if ( a5 == 1 ) /*0x85462c*/
    {
      v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854630*/
      v65 = (volatile LONG *)v26; /*0x854638*/
      v71 = 4; /*0x85463e*/
      if ( v26 ) /*0x854646*/
        v27 = RenderPass_Construct(v26, vtable, 0x16Du, *a6, 0, 0); /*0x85465b*/
      else
        v27 = 0; /*0x854665*/
      v65 = (volatile LONG *)v27; /*0x854667*/
      v71 = 0xFFFFFFFF; /*0x854673*/
      result = (int)NiTPointerList__AddTail((BSTextureManager *)(this + 0xA), (void **)&v65); /*0x854677*/
    }
    else
    {
      result = (int)a4; /*0x85467e*/
      ++LOWORD(a4->next); /*0x854682*/
    }
  }
  if ( v64 ) /*0x85468b*/
  {
    result = (int)BSShaderLightingProperty__GetFirstActiveLight(v67); /*0x854695*/
    v28 = (_DWORD *)result; /*0x85469a*/
    if ( result ) /*0x85469e*/
    {
      v29 = v67; /*0x8546a4*/
      do /*0x8547d9*/
      {
        LightRef = ShadowSceneLight_GetLightRef(v28, &v65); /*0x8546af*/
        v31 = *LightRef; /*0x8546b4*/
        v32 = *(float *)(*LightRef + 0xEC); /*0x8546b6*/
        v66 |= 1u; /*0x8546bc*/
        v33 = stru_B3FA90.x != v32 || stru_B3FA90.y != *(float *)(v31 + 0xF0) || stru_B3FA90.z != *(float *)(v31 + 0xF4); /*0x8546fe*/
        if ( (v66 & 1) != 0 ) /*0x854705*/
        {
          v66 &= ~1u; /*0x854707*/
          if ( v65 ) /*0x854711*/
          {
            v34 = v65; /*0x854713*/
            if ( !InterlockedDecrement(v65 + 1) ) /*0x85471b*/
              (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1); /*0x854731*/
          }
        }
        if ( v33 ) /*0x854735*/
        {
          if ( a5 == 1 ) /*0x854740*/
          {
            v35 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854748*/
            v70 = v35; /*0x854750*/
            v71 = 5; /*0x854756*/
            if ( v35 ) /*0x85475e*/
              v36 = RenderPass_Construct(v35, vtable, 0x168u, *a6, 1u, v28); /*0x85477e*/
            else
              v36 = 0; /*0x854782*/
            v37 = *(int (__thiscall **)(char *))(*((_DWORD *)v29 + 0xA) + 4); /*0x854787*/
            v71 = 0xFFFFFFFF; /*0x85478f*/
            v38 = (_DWORD *)v37((char *)v29 + 0x28); /*0x854797*/
            v38[2] = v36; /*0x854799*/
            *v38 = 0; /*0x85479c*/
            v38[1] = *((_DWORD *)v29 + 0xC); /*0x8547a5*/
            v39 = *((_DWORD **)v29 + 0xC); /*0x8547a8*/
            if ( v39 ) /*0x8547ad*/
            {
              *v39 = v38; /*0x8547af*/
              ++*((_DWORD *)v29 + 0xD); /*0x8547b1*/
            }
            else
            {
              ++*((_DWORD *)v29 + 0xD); /*0x8547ba*/
              *((_DWORD *)v29 + 0xB) = v38; /*0x8547be*/
            }
            *((_DWORD *)v29 + 0xC) = v38; /*0x8547b5*/
          }
          else
          {
            ++LOWORD(a4->next); /*0x8547ca*/
          }
        }
        result = (int)BSShaderLightingProperty__GetNextActiveLight(v29); /*0x8547d0*/
        v28 = (_DWORD *)result; /*0x8547d5*/
      }
      while ( result ); /*0x8547d9*/
    }
  }
  v40 = 0; /*0x8547df*/
  if ( v68 > 0 ) /*0x8547e5*/
  {
    result = (int)a4; /*0x8547ef*/
    v41 = (unsigned __int8 *)a6; /*0x8547f3*/
    v42 = (int)a3; /*0x8547f7*/
    do /*0x854800*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)v40 + 4) ) /*0x85480d*/
      {
        if ( (_BYTE)a7 ) /*0x85481d*/
        {
          if ( a5 != 1 ) /*0x854887*/
          {
LABEL_80:
            ++*(_WORD *)result; /*0x8548e8*/
            goto LABEL_81; /*0x8548e8*/
          }
          v44 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85488b*/
          a3 = v44; /*0x854893*/
          v71 = 7; /*0x854899*/
          if ( v44 ) /*0x8548a1*/
            v45 = RenderPass_Construct(v44, vtable, 0x16Fu, *v41, 1u, v42); /*0x8548b1*/
          else
            v45 = 0; /*0x8548bb*/
          v65 = (volatile LONG *)v45; /*0x8548c2*/
          v45->pad_09[0] = v40 + 1; /*0x8548c6*/
        }
        else
        {
          if ( a5 != 1 ) /*0x854824*/
            goto LABEL_80; /*0x854824*/
          v43 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85482c*/
          a3 = v43; /*0x854834*/
          v71 = 6; /*0x85483a*/
          if ( v43 ) /*0x854842*/
          {
            v65 = (volatile LONG *)RenderPass_Construct(v43, vtable, 0x16Eu, *v41, 1u, v42); /*0x854863*/
            *((_BYTE *)v65 + 9) = v40 + 1; /*0x854867*/
          }
          else
          {
            v65 = 0; /*0x854878*/
            *(_BYTE *)9 = v40 + 1; /*0x85487c*/
          }
        }
        v71 = 0xFFFFFFFF; /*0x8548d5*/
        NiTPointerList__AddTail((BSTextureManager *)((char *)v67 + 0x28), (void **)&v65); /*0x8548dd*/
        result = (int)a4; /*0x8548e2*/
      }
LABEL_81:
      ++v40; /*0x8548ec*/
    }
    while ( v40 < v68 ); /*0x854800*/
  }
  a7 = 0; /*0x8548f9*/
  if ( v68 > 0 ) /*0x854906*/
  {
    v46 = v67; /*0x85490c*/
    do /*0x854b4b*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&v69[7].members.m_extraDataListLen + 4 * (unsigned __int16)a7 + 4) ) /*0x85491f*/
      {
        v47 = (char)a7; /*0x85492a*/
        if ( (*((int (__thiscall **)(NiProperty *, int))v69->vtbl + 0x24))(v69, (int)&a7->geometry_00 + 1) ) /*0x85493c*/
        {
          if ( a5 == 1 ) /*0x85494b*/
          {
            v48 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854953*/
            v70 = v48; /*0x85495b*/
            v71 = 8; /*0x854961*/
            if ( v48 ) /*0x854969*/
              v49 = RenderPass_Construct(v48, vtable, 0x170u, *a6, 0, 0); /*0x85498a*/
            else
              v49 = 0; /*0x85498e*/
            v49->pad_09[0] = v47 + 1; /*0x854996*/
            v50 = *(int (__thiscall **)(char *))(*((_DWORD *)v46 + 0xA) + 4); /*0x85499b*/
            v71 = 0xFFFFFFFF; /*0x8549a0*/
            v51 = (_DWORD *)v50((char *)v46 + 0x28); /*0x8549a8*/
            v51[2] = v49; /*0x8549aa*/
            *v51 = 0; /*0x8549ad*/
            v51[1] = *((_DWORD *)v46 + 0xC); /*0x8549b6*/
            v52 = *((_DWORD **)v46 + 0xC); /*0x8549b9*/
            if ( v52 ) /*0x8549be*/
            {
              *v52 = v51; /*0x8549c0*/
              ++*((_DWORD *)v46 + 0xD); /*0x8549c2*/
            }
            else
            {
              ++*((_DWORD *)v46 + 0xD); /*0x8549cb*/
              *((_DWORD *)v46 + 0xB) = v51; /*0x8549cf*/
            }
            *((_DWORD *)v46 + 0xC) = v51; /*0x8549c6*/
          }
          else
          {
            ++LOWORD(a4->next); /*0x8549db*/
          }
        }
        if ( v64 ) /*0x8549e4*/
        {
          for ( i = BSShaderLightingProperty__GetFirstActiveLight(v46); /*0x8549f5*/
                i;
                i = BSShaderLightingProperty__GetNextActiveLight(v46) )
          {
            v54 = ShadowSceneLight_GetLightRef(i, &a3); /*0x854a02*/
            v55 = *v54; /*0x854a07*/
            v56 = *(float *)(*v54 + 0xEC); /*0x854a09*/
            v66 |= 2u; /*0x854a0f*/
            v57 = stru_B3FA90.x != v56 /*0x854a51*/
               || stru_B3FA90.y != *(float *)(v55 + 0xF0)
               || stru_B3FA90.z != *(float *)(v55 + 0xF4);
            if ( (v66 & 2) != 0 ) /*0x854a58*/
            {
              v66 &= ~2u; /*0x854a5a*/
              if ( a3 ) /*0x854a64*/
              {
                v58 = a3; /*0x854a66*/
                if ( !InterlockedDecrement((volatile LONG *)&a3->selector_04) ) /*0x854a6e*/
                  (*(void (__thiscall **)(RenderPass_DecodedLayout *, int))v58->geometry_00)(v58, 1); /*0x854a84*/
              }
            }
            if ( v57 ) /*0x854a88*/
            {
              if ( a5 == 1 ) /*0x854a93*/
              {
                v59 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x854a9b*/
                v70 = v59; /*0x854aa3*/
                v71 = 9; /*0x854aa9*/
                if ( v59 ) /*0x854ab1*/
                  v60 = RenderPass_Construct(v59, vtable, 0x171u, *a6, 1u, i); /*0x854ad1*/
                else
                  v60 = 0; /*0x854ad5*/
                v60->pad_09[0] = (_BYTE)a7 + 1; /*0x854ade*/
                v61 = *(int (__thiscall **)(char *))(*((_DWORD *)v46 + 0xA) + 4); /*0x854ae4*/
                v71 = 0xFFFFFFFF; /*0x854aec*/
                v62 = (_DWORD *)v61((char *)v46 + 0x28); /*0x854af4*/
                v62[2] = v60; /*0x854af6*/
                *v62 = 0; /*0x854af9*/
                v62[1] = *((_DWORD *)v46 + 0xC); /*0x854b02*/
                v63 = *((_DWORD **)v46 + 0xC); /*0x854b05*/
                if ( v63 ) /*0x854b0a*/
                {
                  *v63 = v62; /*0x854b0c*/
                  ++*((_DWORD *)v46 + 0xD); /*0x854b0e*/
                }
                else
                {
                  ++*((_DWORD *)v46 + 0xD); /*0x854b17*/
                  *((_DWORD *)v46 + 0xB) = v62; /*0x854b1b*/
                }
                *((_DWORD *)v46 + 0xC) = v62; /*0x854b12*/
              }
              else
              {
                ++LOWORD(a4->next); /*0x854b27*/
              }
            }
          }
        }
      }
      result = (int)&a7->geometry_00 + 1; /*0x854b40*/
      a7 = (RenderPass_DecodedLayout *)((char *)a7 + 1); /*0x854b47*/
    }
    while ( (int)a7 < v68 ); /*0x854b4b*/
  }
  return result; /*0x854b51*/
}
