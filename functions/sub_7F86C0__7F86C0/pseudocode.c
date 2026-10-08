// Pass205: Object-batch render path calls shader virtual +0x2C with NiPropertyState returned by sub_405760(geometry).
int __thiscall sub_7F86C0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // ebp
  int v7; // eax
  volatile LONG *v8; // esi
  volatile LONG *v9; // edi
  _DWORD **v10; // ebx
  int v11; // edi
  int v12; // edi
  NiGeometry **v13; // eax
  void (__thiscall *v14)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v15; // eax
  void (__thiscall *v16)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  volatile LONG *v23; // esi
  unsigned int v24; // edx
  _DWORD *v25; // eax
  NiDynamicEffectState *v26; // edx
  int v27; // eax
  float v28; // ebp
  int v29; // ecx
  volatile LONG *v30; // esi
  volatile LONG *v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // edx
  int v35; // edi
  NiDX9RenderState *v36; // edi
  void (__thiscall **v37)(NiDX9RenderState *, int); // esi
  int v38; // eax
  int v39; // ecx
  volatile LONG *v40; // esi
  NiDX9Renderer *v41; // esi
  NiDX9RenderState *renderState; // edi
  void (__thiscall **p_SetVertexShader)(NiDX9RenderState *, int); // esi
  int v44; // eax
  NiDX9RenderState *v45; // edi
  void (__thiscall **p_SetPixelShader)(NiDX9RenderState *, int); // esi
  int v47; // eax
  NiGeometry *v49; // [esp+C0h] [ebp-E8h]
  NiGeometry *v50; // [esp+C0h] [ebp-E8h]
  NiGeometry *v51; // [esp+C0h] [ebp-E8h]
  NiGeometry *v52; // [esp+C0h] [ebp-E8h]
  NiGeometry *v53; // [esp+C0h] [ebp-E8h]
  NiGeometry *v54; // [esp+C0h] [ebp-E8h]
  NiGeometry *v55; // [esp+C0h] [ebp-E8h]
  volatile LONG *v56; // [esp+E0h] [ebp-C8h] BYREF
  int v57; // [esp+E4h] [ebp-C4h]
  NiDynamicEffectState *v58; // [esp+E8h] [ebp-C0h]
  volatile LONG *v59; // [esp+ECh] [ebp-BCh] BYREF
  NiDX9Renderer *v60; // [esp+F0h] [ebp-B8h]
  int *v61; // [esp+F4h] [ebp-B4h]
  _DWORD *v62; // [esp+F8h] [ebp-B0h]
  int v63; // [esp+FCh] [ebp-ACh]
  _DWORD *v64; // [esp+100h] [ebp-A8h]
  int v65; // [esp+104h] [ebp-A4h]
  int v66; // [esp+108h] [ebp-A0h] BYREF
  int v67; // [esp+10Ch] [ebp-9Ch]
  int v68; // [esp+110h] [ebp-98h]
  int v69; // [esp+114h] [ebp-94h]
  int v70; // [esp+118h] [ebp-90h]
  volatile LONG *v71; // [esp+11Ch] [ebp-8Ch] BYREF
  volatile LONG *v72; // [esp+120h] [ebp-88h] BYREF
  volatile LONG *v73; // [esp+124h] [ebp-84h] BYREF
  int v74[13]; // [esp+128h] [ebp-80h] BYREF
  NiPoint3 v75[5]; // [esp+15Ch] [ebp-4Ch] BYREF
  int v76; // [esp+1A4h] [ebp-4h]

  v61 = this; /*0x7f86ed*/
  v60 = renderer; /*0x7f86fd*/
  v3 = (_DWORD *)a2[1]; /*0x7f8701*/
  v4 = (_DWORD *)*v3; /*0x7f8704*/
  v5 = v3[2]; /*0x7f8709*/
  v6 = *(_DWORD *)v5; /*0x7f870b*/
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4); /*0x7f870d*/
  v58 = (NiDynamicEffectState *)v5; /*0x7f8713*/
  qmemcpy(v74, (const void *)(v6 + 0x64), sizeof(v74)); /*0x7f8723*/
  v66 = *(_DWORD *)(v6 + 0x20); /*0x7f8728*/
  v64 = v4; /*0x7f872c*/
  v67 = *(_DWORD *)(v6 + 0x24); /*0x7f8733*/
  v63 = v7; /*0x7f8737*/
  v68 = *(_DWORD *)(v6 + 0x28); /*0x7f873e*/
  v69 = *(_DWORD *)(v6 + 0x2C); /*0x7f8749*/
  v8 = *NiGeometry_GetPropertyState((NiGeometry *)v6, &v59); /*0x7f8755*/
  if ( v59 ) /*0x7f875d*/
  {
    v9 = v59; /*0x7f875f*/
    if ( !InterlockedDecrement(v59 + 1) ) /*0x7f8765*/
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7f877b*/
  }
  v10 = *(_DWORD ***)(v6 + 0xBC); /*0x7f8785*/
  v11 = *((_DWORD *)v8 + 6); /*0x7f878b*/
  LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f878e*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v58; /*0x7f8797*/
  OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f879c*/
  OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v58, v11, 0); /*0x7f87b7*/
  sub_7F6A30((NiGeometry *)v6); /*0x7f87bf*/
  v70 = *(_DWORD *)(v63 + 0x38); /*0x7f87d2*/
  v12 = v70; /*0x7f87c8*/
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f87d6*/
  v14 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xA]; /*0x7f87df*/
  v49 = *v13; /*0x7f87ec*/
  v76 = 0; /*0x7f87f4*/
  v14(v10, v6, 0, v12, v8, v49, v74, &v66); /*0x7f87ff*/
  v76 = 0xFFFFFFFF; /*0x7f8807*/
  if ( v56 ) /*0x7f8812*/
  {
    v57 = (int)v56; /*0x7f8814*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f881c*/
    {
      if ( v57 ) /*0x7f882c*/
        (**(void (__thiscall ***)(int, int))v57)(v57, 1); /*0x7f8834*/
    }
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f883d*/
  v16 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xB]; /*0x7f8846*/
  v50 = *v15; /*0x7f8853*/
  v76 = 1; /*0x7f885b*/
  v16(v10, v6, 0, v12, v8, v50, v74, &v66); /*0x7f8866*/
  v76 = 0xFFFFFFFF; /*0x7f886e*/
  if ( v56 ) /*0x7f8879*/
  {
    v57 = (int)v56; /*0x7f887b*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f8883*/
    {
      if ( v57 ) /*0x7f8893*/
        (**(void (__thiscall ***)(int, int))v57)(v57, 1); /*0x7f889b*/
    }
  }
  ((void (__thiscall *)(_DWORD **))(*v10)[0x12])(v10); /*0x7f88a4*/
  v62 = v10[0xF]; /*0x7f88b0*/
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f88b4*/
  v18 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xC]; /*0x7f88bd*/
  v51 = *v17; /*0x7f88ca*/
  v76 = 2; /*0x7f88d2*/
  v18(v10, v6, 0, v12, v8, v51, v74, &v66); /*0x7f88dd*/
  v76 = 0xFFFFFFFF; /*0x7f88e5*/
  if ( v56 ) /*0x7f88f0*/
  {
    v57 = (int)v56; /*0x7f88f2*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f88fa*/
    {
      if ( v57 ) /*0x7f890a*/
        (**(void (__thiscall ***)(int, int))v57)(v57, 1); /*0x7f8912*/
    }
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f891b*/
  v20 = (void (__thiscall *)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xD]; /*0x7f8924*/
  v52 = *v19; /*0x7f8931*/
  v76 = 3; /*0x7f893b*/
  v20(v10, v6, 0, 0, v12, v8, v52, v74, &v66); /*0x7f8946*/
  v76 = 0xFFFFFFFF; /*0x7f894e*/
  if ( v56 ) /*0x7f8959*/
  {
    v57 = (int)v56; /*0x7f895b*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f8963*/
    {
      if ( v57 ) /*0x7f8973*/
        (**(void (__thiscall ***)(int, int))v57)(v57, 1); /*0x7f897b*/
    }
  }
  ((void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *))(*v10)[0xF])(v10, v6, 0, v12, v8); /*0x7f8989*/
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f8992*/
  v22 = (void (__thiscall *)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xE]; /*0x7f899b*/
  v53 = *v21; /*0x7f89a8*/
  v76 = 4; /*0x7f89b2*/
  v22(v10, v6, 0, 0, v12, v8, v53, v74, &v66); /*0x7f89bd*/
  v76 = 0xFFFFFFFF; /*0x7f89c5*/
  if ( v56 ) /*0x7f89d0*/
  {
    v23 = v56; /*0x7f89d2*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f89d8*/
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x7f89ee*/
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, renderer); /*0x7f8a02*/
  v24 = 4 * dword_B28CB0; /*0x7f8a0e*/
  v59 = (volatile LONG *)v63; /*0x7f8a15*/
  _memset(*v61, 0, v24); /*0x7f8a23*/
  v25 = v64; /*0x7f8a28*/
  if ( v64 ) /*0x7f8a31*/
  {
    while ( 1 ) /*0x7f8a44*/
    {
      v26 = v58; /*0x7f8a44*/
      v64 = (_DWORD *)*v25; /*0x7f8a4d*/
      v27 = v25[2]; /*0x7f8a51*/
      LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f8a5b*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v27; /*0x7f8a61*/
      v28 = *(float *)v27; /*0x7f8a66*/
      v29 = *(_DWORD *)(*(_DWORD *)v27 + 0xB4); /*0x7f8a68*/
      v56 = (volatile LONG *)v26; /*0x7f8a6e*/
      v63 = v29; /*0x7f8a76*/
      v58 = (NiDynamicEffectState *)v27; /*0x7f8a7d*/
      v30 = *NiGeometry_GetPropertyState((NiGeometry *)LODWORD(v28), &v71); /*0x7f8a86*/
      v65 = (int)v30; /*0x7f8a8e*/
      if ( v71 ) /*0x7f8a92*/
      {
        v31 = v71; /*0x7f8a94*/
        if ( !InterlockedDecrement(v71 + 1) ) /*0x7f8a9a*/
          (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1); /*0x7f8ab0*/
      }
      v32 = *((_DWORD *)v30 + 6); /*0x7f8ab2*/
      qmemcpy(v74, (const void *)(LODWORD(v28) + 0x64), sizeof(v74)); /*0x7f8ac1*/
      v33 = v63; /*0x7f8ac6*/
      v66 = *(_DWORD *)(LODWORD(v28) + 0x20); /*0x7f8ace*/
      v67 = *(_DWORD *)(LODWORD(v28) + 0x24); /*0x7f8ad5*/
      v68 = *(_DWORD *)(LODWORD(v28) + 0x28); /*0x7f8adc*/
      v34 = *(_DWORD *)(LODWORD(v28) + 0x2C); /*0x7f8ae0*/
      v57 = v32; /*0x7f8ae3*/
      v69 = v34; /*0x7f8ae7*/
      if ( v59 == (volatile LONG *)v63 ) /*0x7f8aeb*/
      {
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v58, v32, (int)v56); /*0x7f8c2e*/
        v55 = *sub_7016D0((NiGeometry *)LODWORD(v28), (NiDynamicEffectState **)&v73); /*0x7f8c4f*/
        v76 = 6; /*0x7f8c5b*/
        OB_SpeedTreeLeafShader_SetupPass_010201A0(v10, v28, 0, v70, (_DWORD *)v65, (int)v55, (int)v74, (int)&v66); /*0x7f8c66*/
        v76 = 0xFFFFFFFF; /*0x7f8c71*/
        if ( v73 ) /*0x7f8c7c*/
        {
          v40 = v73; /*0x7f8c7e*/
          if ( !InterlockedDecrement(v73 + 1) ) /*0x7f8c84*/
            (**(void (__thiscall ***)(volatile LONG *, int))v40)(v40, 1); /*0x7f8c9a*/
        }
        v41 = v60; /*0x7f8c9c*/
        NiDX9Renderer_SetModelTransform(v60, (float *)v74, 0); /*0x7f8ca9*/
        sub_7F5B80((float *)v74, v75); /*0x7f8cbd*/
        OB_SpeedTreeLeafShader_UpdateObjectSpaceLightConstants_010201A0((_DWORD *)v57, (int)v75, *(float *)&v74[0xC]); /*0x7f8cdc*/
        renderState = v41->member.renderState; /*0x7f8ce8*/
        p_SetVertexShader = (void (__thiscall **)(NiDX9RenderState *, int))&renderState->vtbl->SetVertexShader; /*0x7f8cf7*/
        v44 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v62[0x16] + 0x40))(v62[0x16], 0); /*0x7f8cfd*/
        (*p_SetVertexShader)(renderState, v44); /*0x7f8d04*/
        v39 = v62[0x11]; /*0x7f8d0a*/
      }
      else
      {
        sub_7F6A30((NiGeometry *)LODWORD(v28)); /*0x7f8af8*/
        v35 = *(_DWORD *)(v33 + 0x38); /*0x7f8b09*/
        v70 = v35; /*0x7f8b19*/
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v58, v57, (int)v56); /*0x7f8b1d*/
        v54 = *sub_7016D0((NiGeometry *)LODWORD(v28), (NiDynamicEffectState **)&v72); /*0x7f8b3e*/
        v76 = 5; /*0x7f8b46*/
        OB_SpeedTreeLeafShader_SetupPass_010201A0(v10, v28, 0, v35, (_DWORD *)v65, (int)v54, (int)v74, (int)&v66); /*0x7f8b51*/
        v76 = 0xFFFFFFFF; /*0x7f8b5c*/
        if ( v72 ) /*0x7f8b67*/
        {
          v59 = v72; /*0x7f8b69*/
          if ( !InterlockedDecrement(v72 + 1) ) /*0x7f8b71*/
          {
            if ( v59 ) /*0x7f8b81*/
              (**(void (__thiscall ***)(volatile LONG *, int))v59)(v59, 1); /*0x7f8b89*/
          }
        }
        NiDX9Renderer_SetModelTransform(v60, (float *)v74, 0); /*0x7f8b96*/
        sub_7F5B80((float *)v74, v75); /*0x7f8baa*/
        OB_SpeedTreeLeafShader_UpdateObjectSpaceLightConstants_010201A0((_DWORD *)v57, (int)v75, *(float *)&v74[0xC]); /*0x7f8bc9*/
        ((void (__thiscall *)(_DWORD **, float, _DWORD, int, int))(*v10)[0xF])( /*0x7f8bde*/
          v10,
          COERCE_FLOAT(LODWORD(v28)),
          0,
          v35,
          v65);
        v36 = v60->member.renderState; /*0x7f8beb*/
        v37 = (void (__thiscall **)(NiDX9RenderState *, int))&v36->vtbl->SetVertexShader; /*0x7f8bfa*/
        v38 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v62[0x16] + 0x40))(v62[0x16], 0); /*0x7f8c00*/
        (*v37)(v36, v38); /*0x7f8c07*/
        v39 = v62[0x11]; /*0x7f8c0d*/
      }
      v45 = v60->member.renderState; /*0x7f8d11*/
      p_SetPixelShader = (void (__thiscall **)(NiDX9RenderState *, int))&v45->vtbl->SetPixelShader; /*0x7f8d20*/
      v47 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v39 + 0x38))(v39, 0); /*0x7f8d23*/
      (*p_SetPixelShader)(v45, v47); /*0x7f8d2a*/
      sub_7F6BF0(v61, (NiGeometry *)LODWORD(v28), (int)v10, (int)v62, 1); /*0x7f8d39*/
      v59 = (volatile LONG *)v63; /*0x7f8d47*/
      if ( !v64 ) /*0x7f8d4b*/
        break; /*0x7f8d4b*/
      v25 = v64; /*0x7f8a40*/
    }
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f8d5a*/
  a2[3] = a2[1]; /*0x7f8d64*/
  a2[1] = 0; /*0x7f8d67*/
  a2[2] = 0; /*0x7f8d6a*/
  a2[4] = 0; /*0x7f8d6d*/
  ((void (__thiscall *)(_DWORD **))(*v10)[0x13])(v10); /*0x7f8d77*/
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v60->member.renderState->vtbl->SetVar_0FF5)( /*0x7f8d8e*/
           v60->member.renderState,
           0);
}
