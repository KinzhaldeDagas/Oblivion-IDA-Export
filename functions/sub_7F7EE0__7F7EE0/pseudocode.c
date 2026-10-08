// Pass205: Object-batch render path calls shader virtual +0x2C with NiPropertyState returned by sub_405760(geometry).
int __thiscall sub_7F7EE0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // ebp
  int v7; // eax
  volatile LONG *v8; // esi
  volatile LONG *v9; // edi
  unsigned int *v10; // ebx
  int v11; // edi
  ShaderDefinition *ShaderDefinition; // eax
  int v13; // ecx
  int v14; // edi
  NiGeometry **v15; // eax
  void (__thiscall *v16)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v23; // eax
  void (__thiscall *v24)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  void (__thiscall ***v25)(_DWORD, int); // esi
  unsigned int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // edx
  int *v29; // eax
  int v30; // ebp
  int v31; // eax
  volatile LONG *v32; // esi
  volatile LONG *v33; // edi
  _DWORD *v34; // edi
  int v35; // esi
  int v36; // edi
  NiGeometry **v37; // eax
  void (__thiscall *v38)(unsigned int *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *); // edx
  NiGeometry *v39; // eax
  void (__thiscall *v40)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int); // edx
  NiGeometry *v41; // eax
  void (__thiscall *v42)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int); // edx
  volatile LONG *v43; // esi
  int *v44; // esi
  int v45; // edi
  NiGeometry *v47; // [esp+124h] [ebp-F8h]
  NiGeometry *v48; // [esp+124h] [ebp-F8h]
  NiGeometry *v49; // [esp+124h] [ebp-F8h]
  NiGeometry *v50; // [esp+124h] [ebp-F8h]
  NiGeometry *v51; // [esp+124h] [ebp-F8h]
  NiGeometry *v52; // [esp+124h] [ebp-F8h]
  _DWORD *v53; // [esp+128h] [ebp-F4h]
  char v54; // [esp+147h] [ebp-D5h]
  volatile LONG *v55; // [esp+148h] [ebp-D4h] BYREF
  int v56; // [esp+14Ch] [ebp-D0h] BYREF
  int *v57; // [esp+150h] [ebp-CCh]
  _DWORD *v58; // [esp+154h] [ebp-C8h]
  int *v59; // [esp+158h] [ebp-C4h]
  int *v60; // [esp+15Ch] [ebp-C0h]
  int v61; // [esp+160h] [ebp-BCh]
  int v62; // [esp+164h] [ebp-B8h]
  BSShader *shader; // [esp+168h] [ebp-B4h]
  _DWORD *v64; // [esp+16Ch] [ebp-B0h]
  int v65; // [esp+170h] [ebp-ACh] BYREF
  int v66; // [esp+174h] [ebp-A8h]
  int v67; // [esp+178h] [ebp-A4h]
  int v68; // [esp+17Ch] [ebp-A0h]
  NiDX9Renderer *v69; // [esp+180h] [ebp-9Ch]
  int v70; // [esp+184h] [ebp-98h]
  int v71; // [esp+188h] [ebp-94h]
  volatile LONG *v72; // [esp+18Ch] [ebp-90h] BYREF
  volatile LONG *v73; // [esp+190h] [ebp-8Ch] BYREF
  volatile LONG *v74; // [esp+194h] [ebp-88h] BYREF
  volatile LONG *v75; // [esp+198h] [ebp-84h] BYREF
  float v76[13]; // [esp+19Ch] [ebp-80h] BYREF
  NiPoint3 v77[5]; // [esp+1D0h] [ebp-4Ch] BYREF
  int v78; // [esp+218h] [ebp-4h]

  v59 = this; /*0x7f7f0f*/
  v69 = renderer; /*0x7f7f20*/
  v54 = 0; /*0x7f7f24*/
  v70 = sub_7F5C40(a3); /*0x7f7f31*/
  v71 = sub_7F5E80(a3); /*0x7f7f41*/
  v3 = (_DWORD *)a2[1]; /*0x7f7f45*/
  v4 = (_DWORD *)*v3; /*0x7f7f48*/
  v5 = v3[2]; /*0x7f7f4d*/
  v6 = *(_DWORD *)v5; /*0x7f7f4f*/
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4); /*0x7f7f51*/
  v60 = (int *)v5; /*0x7f7f57*/
  qmemcpy(v76, (const void *)(v6 + 0x64), sizeof(v76)); /*0x7f7f67*/
  v65 = *(_DWORD *)(v6 + 0x20); /*0x7f7f6c*/
  v64 = v4; /*0x7f7f70*/
  v66 = *(_DWORD *)(v6 + 0x24); /*0x7f7f77*/
  v61 = v7; /*0x7f7f7b*/
  v67 = *(_DWORD *)(v6 + 0x28); /*0x7f7f82*/
  v68 = *(_DWORD *)(v6 + 0x2C); /*0x7f7f8d*/
  v8 = *NiGeometry_GetPropertyState((NiGeometry *)v6, &v55); /*0x7f7f99*/
  if ( v55 ) /*0x7f7fa1*/
  {
    v9 = v55; /*0x7f7fa3*/
    if ( !InterlockedDecrement(v55 + 1) ) /*0x7f7fa9*/
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7f7fbf*/
  }
  v10 = *(unsigned int **)(v6 + 0xBC); /*0x7f7fc1*/
  v11 = *((_DWORD *)v8 + 6); /*0x7f7fc7*/
  ShaderDefinition = GetShaderDefinition(1u); /*0x7f7fcc*/
  v13 = (int)v60; /*0x7f7fd1*/
  shader = ShaderDefinition->shader; /*0x7f7fda*/
  LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f7fe9*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v13; /*0x7f7fee*/
  OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f7ff4*/
  OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v60, v11, 0); /*0x7f800f*/
  sub_7F6A30((NiGeometry *)v6); /*0x7f8017*/
  v14 = *(_DWORD *)(v61 + 0x38); /*0x7f8020*/
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f802a*/
  v16 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x28); /*0x7f8033*/
  v47 = *v15; /*0x7f8040*/
  v78 = 0; /*0x7f8048*/
  v16(v10, v6, 0, v14, v8, v47, v76, &v65); /*0x7f8053*/
  v78 = 0xFFFFFFFF; /*0x7f805b*/
  if ( v56 ) /*0x7f8066*/
  {
    v57 = (int *)v56; /*0x7f8068*/
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f8070*/
    {
      if ( v57 ) /*0x7f8080*/
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1); /*0x7f8088*/
    }
  }
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f8091*/
  v18 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x2C); /*0x7f809a*/
  v48 = *v17; /*0x7f80a7*/
  v78 = 1; /*0x7f80af*/
  v18(v10, v6, 0, v14, v8, v48, v76, &v65); /*0x7f80ba*/
  v78 = 0xFFFFFFFF; /*0x7f80c2*/
  if ( v56 ) /*0x7f80cd*/
  {
    v57 = (int *)v56; /*0x7f80cf*/
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f80d7*/
    {
      if ( v57 ) /*0x7f80e7*/
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1); /*0x7f80ef*/
    }
  }
  (*(void (__thiscall **)(unsigned int *))(*v10 + 0x48))(v10); /*0x7f80f8*/
  v62 = v10[0xF]; /*0x7f8104*/
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f8108*/
  v20 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x30); /*0x7f8111*/
  v49 = *v19; /*0x7f811e*/
  v78 = 2; /*0x7f8126*/
  v20(v10, v6, 0, v14, v8, v49, v76, &v65); /*0x7f8131*/
  v78 = 0xFFFFFFFF; /*0x7f8139*/
  if ( v56 ) /*0x7f8144*/
  {
    v57 = (int *)v56; /*0x7f8146*/
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f814e*/
    {
      if ( v57 ) /*0x7f815e*/
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1); /*0x7f8166*/
    }
  }
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f816f*/
  v22 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34); /*0x7f8178*/
  v50 = *v21; /*0x7f8185*/
  v78 = 3; /*0x7f818f*/
  v22(v10, v6, 0, 0, v14, v8, v50, v76, &v65); /*0x7f819a*/
  v78 = 0xFFFFFFFF; /*0x7f81a2*/
  if ( v56 ) /*0x7f81ad*/
  {
    v57 = (int *)v56; /*0x7f81af*/
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f81b7*/
    {
      if ( v57 ) /*0x7f81c7*/
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1); /*0x7f81cf*/
    }
  }
  (*(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *))(*v10 + 0x3C))(v10, v6, 0, v14, v8); /*0x7f81dd*/
  v23 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f81e6*/
  v24 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x38); /*0x7f81ef*/
  v51 = *v23; /*0x7f81fc*/
  v78 = 4; /*0x7f8206*/
  v24(v10, v6, 0, 0, v14, v8, v51, v76, &v65); /*0x7f8211*/
  v78 = 0xFFFFFFFF; /*0x7f8219*/
  if ( v56 ) /*0x7f8224*/
  {
    v25 = (void (__thiscall ***)(_DWORD, int))v56; /*0x7f8226*/
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f822c*/
      (**v25)(v25, 1); /*0x7f8242*/
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, renderer); /*0x7f8256*/
  sub_7D1800(a3); /*0x7f8260*/
  v26 = 4 * dword_B28CB0; /*0x7f826f*/
  v55 = (volatile LONG *)v61; /*0x7f8276*/
  _memset(*v59, 0, v26); /*0x7f8284*/
  v27 = v64; /*0x7f8289*/
  if ( v64 ) /*0x7f8292*/
  {
    while ( 1 ) /*0x7f82a8*/
    {
      v28 = (_DWORD *)*v27; /*0x7f82a8*/
      v57 = v60; /*0x7f82aa*/
      v29 = (int *)v27[2]; /*0x7f82b1*/
      LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f82bb*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v29; /*0x7f82c1*/
      v30 = *v29; /*0x7f82c6*/
      v60 = v29; /*0x7f82cc*/
      v31 = *(_DWORD *)(v30 + 0xB4); /*0x7f82d0*/
      v64 = v28; /*0x7f82d9*/
      v61 = v31; /*0x7f82dd*/
      v32 = *NiGeometry_GetPropertyState((NiGeometry *)v30, &v72); /*0x7f82e6*/
      v56 = (int)v32; /*0x7f82ee*/
      if ( v72 ) /*0x7f82f2*/
      {
        v33 = v72; /*0x7f82f4*/
        if ( !InterlockedDecrement(v72 + 1) ) /*0x7f82fa*/
          (**(void (__thiscall ***)(volatile LONG *, int))v33)(v33, 1); /*0x7f8310*/
      }
      v58 = *((_DWORD **)v32 + 6); /*0x7f8315*/
      qmemcpy(v76, (const void *)(v30 + 0x64), sizeof(v76)); /*0x7f8325*/
      v65 = *(_DWORD *)(v30 + 0x20); /*0x7f832a*/
      v66 = *(_DWORD *)(v30 + 0x24); /*0x7f8331*/
      v67 = *(_DWORD *)(v30 + 0x28); /*0x7f8340*/
      v68 = *(_DWORD *)(v30 + 0x2C); /*0x7f8347*/
      if ( v55 == (volatile LONG *)v61 ) /*0x7f834b*/
      {
        v44 = v59; /*0x7f8583*/
        if ( !v54 ) /*0x7f8587*/
        {
          sub_7F68C0(a3, 1, v70, v71, (int)shader); /*0x7f859d*/
          v54 = 1; /*0x7f85a2*/
        }
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v60, (int)v58, (int)v57); /*0x7f85b9*/
        sub_7F63D0(v30, a3, v56, v58, v10); /*0x7f85cd*/
        if ( !*((_BYTE *)v60 + 7) ) /*0x7f85d6*/
          OB_ShaderConstantStorage_010201A0[0x21E] = 0.0; /*0x7f85de*/
        sub_7C8680(v76); /*0x7f85e9*/
        NiDX9Renderer_SetModelTransform(v69, v76, 0); /*0x7f85fc*/
        sub_7F5B80(v76, v77); /*0x7f8610*/
        v45 = (int)shader; /*0x7f8626*/
        sub_7C9140((int)v77, v76[0xC], (unsigned __int16)a3, *(_DWORD *)(v30 + 0xB8)); /*0x7f8639*/
        sub_7F6BF0(v44, (NiGeometry *)v30, v45, v62, 0); /*0x7f8649*/
      }
      else
      {
        if ( v54 ) /*0x7f8356*/
        {
          sub_7F68C0(a3, 0, v70, v71, (int)shader); /*0x7f8375*/
          v54 = 0; /*0x7f837a*/
        }
        sub_7F6A30((NiGeometry *)v30); /*0x7f8384*/
        v34 = v58; /*0x7f8391*/
        v35 = *(_DWORD *)(v61 + 0x38); /*0x7f8399*/
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v60, (int)v58, (int)v57); /*0x7f83ab*/
        v53 = v34; /*0x7f83bc*/
        v36 = v56; /*0x7f83bd*/
        sub_7F63D0(v30, a3, v56, v53, v10); /*0x7f83c4*/
        if ( !*((_BYTE *)v60 + 7) ) /*0x7f83cd*/
          OB_ShaderConstantStorage_010201A0[0x21E] = 0.0; /*0x7f83d5*/
        v37 = sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v73); /*0x7f83e2*/
        v38 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *))(*v10 + 0x34); /*0x7f83eb*/
        v52 = *v37; /*0x7f83f8*/
        v78 = 5; /*0x7f8402*/
        v38(v10, v30, 0, 0, v35, v36, v52, v76, &v65); /*0x7f840d*/
        v78 = 0xFFFFFFFF; /*0x7f8415*/
        if ( v73 ) /*0x7f8420*/
        {
          v55 = v73; /*0x7f8422*/
          if ( !InterlockedDecrement(v73 + 1) ) /*0x7f842a*/
          {
            if ( v55 ) /*0x7f843a*/
              (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1); /*0x7f8442*/
          }
        }
        (*(void (__thiscall **)(unsigned int *, int, _DWORD, int, int))(*v10 + 0x3C))(v10, v30, 0, v35, v36); /*0x7f8450*/
        v58 = (_DWORD *)v10[0xB]; /*0x7f845c*/
        v39 = *sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v74); /*0x7f846c*/
        v40 = *(void (__thiscall **)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int))(*v58 + 0x40); /*0x7f8474*/
        v55 = *(volatile LONG **)(v62 + 0x44); /*0x7f847b*/
        v78 = 6; /*0x7f849a*/
        v40(v58, v55, v30, 0, 0, v35, v36, v39, v76, &v65, 0, 1); /*0x7f84a5*/
        v78 = 0xFFFFFFFF; /*0x7f84ad*/
        if ( v74 ) /*0x7f84b8*/
        {
          v55 = v74; /*0x7f84ba*/
          if ( !InterlockedDecrement(v74 + 1) ) /*0x7f84c2*/
          {
            if ( v55 ) /*0x7f84d2*/
              (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1); /*0x7f84da*/
          }
        }
        v58 = (_DWORD *)v10[0xC]; /*0x7f84e6*/
        v41 = *sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v75); /*0x7f84f6*/
        v42 = *(void (__thiscall **)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int))(*v58 + 0x40); /*0x7f84fe*/
        v55 = *(volatile LONG **)(v62 + 0x58); /*0x7f8505*/
        v78 = 7; /*0x7f8524*/
        v42(v58, v55, v30, 0, 0, v35, v36, v41, v76, &v65, 0, 1); /*0x7f852f*/
        v78 = 0xFFFFFFFF; /*0x7f8537*/
        if ( v75 ) /*0x7f8542*/
        {
          v43 = v75; /*0x7f8544*/
          if ( !InterlockedDecrement(v75 + 1) ) /*0x7f854a*/
            (**(void (__thiscall ***)(volatile LONG *, int))v43)(v43, 1); /*0x7f8560*/
        }
        sub_7F6BF0(v59, (NiGeometry *)v30, (int)shader, v62, 0); /*0x7f8572*/
      }
      v55 = (volatile LONG *)v61; /*0x7f8657*/
      if ( !v64 ) /*0x7f865b*/
        break; /*0x7f865b*/
      v27 = v64; /*0x7f82a0*/
    }
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f866a*/
  a2[3] = a2[1]; /*0x7f8674*/
  a2[1] = 0; /*0x7f8677*/
  a2[2] = 0; /*0x7f867a*/
  a2[4] = 0; /*0x7f867d*/
  (*(void (__thiscall **)(unsigned int *))(*v10 + 0x4C))(v10); /*0x7f8687*/
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v69->member.renderState->vtbl->SetVar_0FF5)( /*0x7f869e*/
           v69->member.renderState,
           0);
}
