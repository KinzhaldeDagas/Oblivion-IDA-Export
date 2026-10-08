int **__thiscall sub_85A390(
        int ***this,
        NiNode *vtable,
        _DWORD *a3,
        NiTPointerList_Node_void *a4,
        char a5,
        char *a6,
        int a7,
        int a8)
{
  ShadowSceneLight *v9; // esi
  ShadowSceneLight *NextActiveLight; // eax
  LONG (__stdcall *v11)(volatile LONG *); // edi
  ShadowSceneLight *v12; // ebp
  _DWORD *LightRef; // eax
  int v14; // ecx
  bool v15; // bl
  ShadowSceneLight *v16; // esi
  ShadowSceneLight *v17; // edi
  _DWORD *v18; // eax
  int v19; // ecx
  bool v20; // bl
  RenderPass_DecodedLayout *v21; // esi
  _DWORD *v22; // eax
  int v23; // ecx
  bool v24; // bl
  void (__thiscall ***v25)(_DWORD, int); // esi
  RenderPass_DecodedLayout *v26; // eax
  RenderPass_DecodedLayout *v27; // edi
  int *v28; // edx
  int *v29; // eax
  int **v30; // ecx
  NiProperty *NiPropertyByID; // eax
  void **vtbl; // edx
  ShadowSceneLight *v33; // eax
  _DWORD *v34; // eax
  int v35; // ecx
  bool v36; // bl
  void (__thiscall ***v37)(_DWORD, int); // esi
  ShadowSceneLight *v38; // edi
  _DWORD *v39; // eax
  int v40; // ecx
  bool v41; // bl
  void (__thiscall ***v42)(_DWORD, int); // esi
  _DWORD *v43; // eax
  int v44; // ecx
  bool v45; // bl
  void (__thiscall ***v46)(_DWORD, int); // esi
  RenderPass_DecodedLayout *v47; // eax
  RenderPass_DecodedLayout *v48; // edi
  int *v49; // edx
  int *v50; // eax
  int **v51; // ecx
  RenderPass_DecodedLayout *v52; // eax
  RenderPass_DecodedLayout *v53; // edi
  int *v54; // eax
  int **result; // eax
  int ***v56; // ecx
  int v57; // [esp+1Ch] [ebp-34h]
  int v59; // [esp+24h] [ebp-2Ch]
  RenderPass_DecodedLayout *v60; // [esp+28h] [ebp-28h] BYREF
  int v61; // [esp+2Ch] [ebp-24h] BYREF
  int v62; // [esp+30h] [ebp-20h] BYREF
  ShadowSceneLight *v63; // [esp+34h] [ebp-1Ch] BYREF
  int v64; // [esp+38h] [ebp-18h] BYREF
  RenderPass_DecodedLayout *v65; // [esp+3Ch] [ebp-14h]
  RenderPass_DecodedLayout *v66; // [esp+40h] [ebp-10h]
  int v67; // [esp+4Ch] [ebp-4h]
  ShadowSceneLight *i; // [esp+6Ch] [ebp+1Ch]
  ShadowSceneLight *FirstActiveLight; // [esp+6Ch] [ebp+1Ch]

  v57 = 0; /*0x85a3c5*/
  NiNode_GetNiPropertyByID(vtable, 4); /*0x85a3cd*/
  ShadowSceneLight_GetLightRef(a3, &v63); /*0x85a3dd*/
  if ( v63 ) /*0x85a3e8*/
  {
    v9 = v63; /*0x85a3ea*/
    if ( !InterlockedDecrement((volatile LONG *)v63 + 1) ) /*0x85a3f0*/
      (**(void (__thiscall ***)(ShadowSceneLight *, int))v9)(v9, 1); /*0x85a406*/
  }
  sub_854380(this, vtable, (int)a3, a4, a5, a6, a8); /*0x85a420*/
  if ( dword_B2C674 ) /*0x85a425*/
  {
    if ( *((unsigned __int16 *)this + 0x66) >= (unsigned int)(dword_B2C674 - 1) ) /*0x85a43a*/
      v59 = dword_B2C674 - 1; /*0x85a442*/
    else
      v59 = *((unsigned __int16 *)this + 0x66); /*0x85a43c*/
  }
  else
  {
    v59 = *((unsigned __int16 *)this + 0x66); /*0x85a44f*/
  }
  if ( !OB_ShaderPassControl_010201A0[2] ) /*0x85a453*/
  {
    for ( i = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85a46d*/
          i;
          i = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) )
    {
      NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a477*/
      v11 = InterlockedDecrement; /*0x85a47c*/
      do /*0x85a517*/
      {
        v12 = NextActiveLight; /*0x85a482*/
        v15 = 0; /*0x85a4da*/
        if ( NextActiveLight ) /*0x85a486*/
        {
          LightRef = ShadowSceneLight_GetLightRef(NextActiveLight, &v63); /*0x85a48f*/
          v14 = *LightRef; /*0x85a494*/
          v57 |= 1u; /*0x85a49c*/
          if ( stru_B3FA90.x == *(float *)(*LightRef + 0xEC) /*0x85a4d8*/
            && stru_B3FA90.y == *(float *)(v14 + 0xF0)
            && stru_B3FA90.z == *(float *)(v14 + 0xF4) )
          {
            v15 = 1; /*0x85a486*/
          }
        }
        if ( (v57 & 1) != 0 ) /*0x85a4e5*/
        {
          v16 = v63; /*0x85a4e7*/
          v57 &= ~1u; /*0x85a4eb*/
          if ( v63 ) /*0x85a4f2*/
          {
            if ( !v11((volatile LONG *)v63 + 1) ) /*0x85a4f8*/
            {
              if ( v16 ) /*0x85a500*/
                (**(void (__thiscall ***)(ShadowSceneLight *, int))v16)(v16, 1); /*0x85a50a*/
            }
          }
        }
        NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a510*/
      }
      while ( v15 ); /*0x85a517*/
      while ( 1 ) /*0x85a51d*/
      {
        v17 = NextActiveLight; /*0x85a51d*/
        v20 = 0; /*0x85a575*/
        if ( NextActiveLight ) /*0x85a521*/
        {
          v18 = ShadowSceneLight_GetLightRef(NextActiveLight, &v60); /*0x85a52a*/
          v19 = *v18; /*0x85a52f*/
          v57 |= 2u; /*0x85a537*/
          if ( stru_B3FA90.x == *(float *)(*v18 + 0xEC) /*0x85a573*/
            && stru_B3FA90.y == *(float *)(v19 + 0xF0)
            && stru_B3FA90.z == *(float *)(v19 + 0xF4) )
          {
            v20 = 1; /*0x85a521*/
          }
        }
        if ( (v57 & 2) != 0 ) /*0x85a580*/
        {
          v57 &= ~2u; /*0x85a582*/
          if ( v60 ) /*0x85a58c*/
          {
            v21 = v60; /*0x85a58e*/
            if ( !InterlockedDecrement((volatile LONG *)&v60->selector_04) ) /*0x85a596*/
              (*(void (__thiscall **)(RenderPass_DecodedLayout *, int))v21->geometry_00)(v21, 1); /*0x85a5ac*/
          }
        }
        if ( !v20 ) /*0x85a5b0*/
          break; /*0x85a5b0*/
        NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a5b6*/
      }
      v22 = ShadowSceneLight_GetLightRef(i, &v61); /*0x85a5d0*/
      v23 = *v22; /*0x85a5d5*/
      v57 |= 4u; /*0x85a5dd*/
      v24 = stru_B3FA90.x != *(float *)(*v22 + 0xEC) /*0x85a61f*/
         || stru_B3FA90.y != *(float *)(v23 + 0xF0)
         || stru_B3FA90.z != *(float *)(v23 + 0xF4);
      if ( (v57 & 4) != 0 ) /*0x85a626*/
      {
        v57 &= ~4u; /*0x85a628*/
        if ( v61 ) /*0x85a632*/
        {
          v25 = (void (__thiscall ***)(_DWORD, int))v61; /*0x85a634*/
          if ( !InterlockedDecrement((volatile LONG *)(v61 + 4)) ) /*0x85a63c*/
            (**v25)(v25, 1); /*0x85a652*/
        }
      }
      if ( v24 ) /*0x85a656*/
      {
        if ( a5 == 1 ) /*0x85a661*/
        {
          v26 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85a669*/
          v65 = v26; /*0x85a671*/
          v67 = 0; /*0x85a677*/
          if ( v26 ) /*0x85a67f*/
            v27 = RenderPass_Construct(v26, vtable, 0x169u, *a6, 3u, i, v12, v17); /*0x85a6a5*/
          else
            v27 = 0; /*0x85a6a9*/
          v28 = (*(this + 0xA))[1]; /*0x85a6b2*/
          v67 = 0xFFFFFFFF; /*0x85a6ba*/
          v29 = (int *)((int (__thiscall *)(int ***))v28)(this + 0xA); /*0x85a6c2*/
          v29[2] = (int)v27; /*0x85a6c4*/
          *v29 = 0; /*0x85a6c7*/
          v29[1] = (int)*(this + 0xC); /*0x85a6d0*/
          v30 = *(this + 0xC); /*0x85a6d3*/
          if ( v30 ) /*0x85a6d8*/
          {
            *v30 = v29; /*0x85a6da*/
            *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85a6dc*/
          }
          else
          {
            *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85a6e5*/
            *(this + 0xB) = (int **)v29; /*0x85a6e9*/
          }
          *(this + 0xC) = (int **)v29; /*0x85a6e0*/
        }
        else
        {
          ++LOWORD(a4->next); /*0x85a6f5*/
        }
      }
    }
    v60 = 0; /*0x85a713*/
    if ( v59 > 0 ) /*0x85a71b*/
    {
      do /*0x85aa06*/
      {
        NiPropertyByID = NiNode_GetNiPropertyByID(vtable, 4); /*0x85a727*/
        vtbl = NiPropertyByID->vtbl; /*0x85a730*/
        v65 = (RenderPass_DecodedLayout *)((char *)&v60->geometry_00 + 1); /*0x85a735*/
        if ( ((int (__thiscall *)(NiProperty *, int))vtbl[0x22])(NiPropertyByID, (int)&v60->geometry_00 + 1) ) /*0x85a742*/
        {
          FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x85a757*/
          if ( FirstActiveLight ) /*0x85a75b*/
          {
            while ( 1 ) /*0x85a9f4*/
            {
              v33 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a765*/
              v63 = v33; /*0x85a76c*/
              v36 = 0; /*0x85a7c4*/
              if ( v33 ) /*0x85a770*/
              {
                v34 = ShadowSceneLight_GetLightRef(v33, &v64); /*0x85a779*/
                v35 = *v34; /*0x85a77e*/
                v57 |= 8u; /*0x85a786*/
                if ( stru_B3FA90.x == *(float *)(*v34 + 0xEC) /*0x85a7c2*/
                  && stru_B3FA90.y == *(float *)(v35 + 0xF0)
                  && stru_B3FA90.z == *(float *)(v35 + 0xF4) )
                {
                  v36 = 1; /*0x85a770*/
                }
              }
              if ( (v57 & 8) != 0 ) /*0x85a7cf*/
              {
                v37 = (void (__thiscall ***)(_DWORD, int))v64; /*0x85a7d1*/
                v57 &= ~8u; /*0x85a7d5*/
                if ( v64 ) /*0x85a7dc*/
                {
                  if ( !InterlockedDecrement((volatile LONG *)(v64 + 4)) ) /*0x85a7e2*/
                  {
                    if ( v37 ) /*0x85a7ee*/
                      (**v37)(v37, 1); /*0x85a7f8*/
                  }
                }
              }
              if ( !v36 ) /*0x85a7fc*/
              {
                do /*0x85a8a0*/
                {
                  v38 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a80d*/
                  v41 = 0; /*0x85a865*/
                  if ( v38 ) /*0x85a811*/
                  {
                    v39 = ShadowSceneLight_GetLightRef(v38, &v61); /*0x85a81a*/
                    v40 = *v39; /*0x85a81f*/
                    v57 |= 0x10u; /*0x85a827*/
                    if ( stru_B3FA90.x == *(float *)(*v39 + 0xEC) /*0x85a863*/
                      && stru_B3FA90.y == *(float *)(v40 + 0xF0)
                      && stru_B3FA90.z == *(float *)(v40 + 0xF4) )
                    {
                      v41 = 1; /*0x85a811*/
                    }
                  }
                  if ( (v57 & 0x10) != 0 ) /*0x85a870*/
                  {
                    v57 &= ~0x10u; /*0x85a872*/
                    if ( v61 ) /*0x85a87c*/
                    {
                      v42 = (void (__thiscall ***)(_DWORD, int))v61; /*0x85a87e*/
                      if ( !InterlockedDecrement((volatile LONG *)(v61 + 4)) ) /*0x85a886*/
                        (**v42)(v42, 1); /*0x85a89c*/
                    }
                  }
                }
                while ( v41 ); /*0x85a8a0*/
                v43 = ShadowSceneLight_GetLightRef(FirstActiveLight, &v62); /*0x85a8b6*/
                v44 = *v43; /*0x85a8bb*/
                v57 |= 0x20u; /*0x85a8c3*/
                v45 = stru_B3FA90.x != *(float *)(*v43 + 0xEC) /*0x85a905*/
                   || stru_B3FA90.y != *(float *)(v44 + 0xF0)
                   || stru_B3FA90.z != *(float *)(v44 + 0xF4);
                if ( (v57 & 0x20) != 0 ) /*0x85a90c*/
                {
                  v57 &= ~0x20u; /*0x85a90e*/
                  if ( v62 ) /*0x85a918*/
                  {
                    v46 = (void (__thiscall ***)(_DWORD, int))v62; /*0x85a91a*/
                    if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) ) /*0x85a922*/
                      (**v46)(v46, 1); /*0x85a938*/
                  }
                }
                if ( v45 ) /*0x85a93c*/
                {
                  if ( a5 == 1 ) /*0x85a947*/
                  {
                    v47 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85a94f*/
                    v66 = v47; /*0x85a957*/
                    v67 = 1; /*0x85a962*/
                    if ( v47 ) /*0x85a966*/
                      v48 = RenderPass_Construct(v47, vtable, 0x172u, *a6, 3u, FirstActiveLight, v63, v38); /*0x85a990*/
                    else
                      v48 = 0; /*0x85a994*/
                    v48->pad_09[0] = (_BYTE)v60 + 1; /*0x85a99c*/
                    v49 = (*(this + 0xA))[1]; /*0x85a9a2*/
                    v67 = 0xFFFFFFFF; /*0x85a9aa*/
                    v50 = (int *)((int (__thiscall *)(int ***))v49)(this + 0xA); /*0x85a9b2*/
                    v50[2] = (int)v48; /*0x85a9b4*/
                    *v50 = 0; /*0x85a9b7*/
                    v50[1] = (int)*(this + 0xC); /*0x85a9c0*/
                    v51 = *(this + 0xC); /*0x85a9c3*/
                    if ( v51 ) /*0x85a9c8*/
                    {
                      *v51 = v50; /*0x85a9ca*/
                      *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85a9cc*/
                    }
                    else
                    {
                      *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85a9d4*/
                      *(this + 0xB) = (int **)v50; /*0x85a9d7*/
                    }
                    *(this + 0xC) = (int **)v50; /*0x85a9cf*/
                  }
                  else
                  {
                    ++LOWORD(a4->next); /*0x85a9e3*/
                  }
                }
                FirstActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85a9f0*/
                if ( !FirstActiveLight ) /*0x85a9f4*/
                  break; /*0x85a9f4*/
              }
            }
          }
        }
        v60 = v65; /*0x85aa02*/
      }
      while ( (int)v65 < v59 ); /*0x85aa06*/
    }
  }
  if ( a5 == 1 ) /*0x85aa11*/
  {
    v52 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85aa19*/
    v67 = 2; /*0x85aa27*/
    if ( v52 ) /*0x85aa2f*/
      v53 = RenderPass_Construct(v52, vtable, 0x176u, *a6, 1u, a3); /*0x85aa53*/
    else
      v53 = 0; /*0x85aa57*/
    v53->pad_09[0] = 9; /*0x85aa60*/
    v54 = (*(this + 0xA))[1]; /*0x85aa66*/
    v67 = 0xFFFFFFFF; /*0x85aa6b*/
    result = (int **)((int (__thiscall *)(int ***))v54)(this + 0xA); /*0x85aa73*/
    result[2] = (int *)v53; /*0x85aa75*/
    *result = 0; /*0x85aa78*/
    result[1] = (int *)*(this + 0xC); /*0x85aa81*/
    v56 = (int ***)*(this + 0xC); /*0x85aa84*/
    if ( v56 ) /*0x85aa89*/
    {
      *v56 = result; /*0x85aa8b*/
      *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85aa8d*/
    }
    else
    {
      *(this + 0xD) = (int **)((char *)*(this + 0xD) + 1); /*0x85aa96*/
      *(this + 0xB) = result; /*0x85aa9a*/
    }
    *(this + 0xC) = result; /*0x85aa91*/
  }
  else
  {
    ++LOWORD(a4->next); /*0x85aaa6*/
    return (int **)a4; /*0x85aaa2*/
  }
  return result; /*0x85aaaa*/
}
