int __thiscall sub_7F6FC0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  volatile LONG *v5; // ecx
  volatile LONG v6; // ebp
  volatile LONG *v7; // eax
  volatile LONG *v8; // edi
  volatile LONG *v9; // esi
  NiTArray_NiD3DPass *v10; // ebx
  int v11; // esi
  int v12; // esi
  NiGeometry **v13; // eax
  void (__thiscall *v14)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v15; // eax
  void (__thiscall *v16)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  volatile LONG *v23; // esi
  NiDX9RenderState *renderState; // ecx
  unsigned __int16 v25; // ax
  bool v26; // zf
  NiRenderStateSetting *v27; // eax
  unsigned int v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // edx
  volatile LONG *v31; // edi
  int v32; // ebp
  volatile LONG *v33; // esi
  NiDynamicEffectState *v34; // eax
  _DWORD *v35; // esi
  int *v36; // edi
  volatile LONG *v37; // esi
  NiGeometry **v38; // eax
  void (__thiscall *v39)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, int *); // edx
  int *v40; // esi
  NiGeometry *v42; // [esp+D8h] [ebp-F0h]
  NiGeometry *v43; // [esp+D8h] [ebp-F0h]
  NiGeometry *v44; // [esp+D8h] [ebp-F0h]
  NiGeometry *v45; // [esp+D8h] [ebp-F0h]
  NiGeometry *v46; // [esp+D8h] [ebp-F0h]
  NiGeometry *v47; // [esp+D8h] [ebp-F0h]
  _DWORD *v48; // [esp+DCh] [ebp-ECh]
  char v49; // [esp+FBh] [ebp-CDh]
  volatile LONG *v50; // [esp+FCh] [ebp-CCh] BYREF
  volatile LONG *v51; // [esp+100h] [ebp-C8h]
  int *v52; // [esp+104h] [ebp-C4h]
  volatile LONG *v53; // [esp+108h] [ebp-C0h] BYREF
  volatile LONG *v54; // [esp+10Ch] [ebp-BCh] BYREF
  _DWORD *v55; // [esp+110h] [ebp-B8h]
  volatile LONG *v56; // [esp+114h] [ebp-B4h]
  _DWORD *v57; // [esp+118h] [ebp-B0h]
  volatile LONG *v58; // [esp+11Ch] [ebp-ACh]
  int v59; // [esp+120h] [ebp-A8h] BYREF
  int v60; // [esp+124h] [ebp-A4h]
  int v61; // [esp+128h] [ebp-A0h]
  int v62; // [esp+12Ch] [ebp-9Ch]
  int v63; // [esp+130h] [ebp-98h]
  int v64; // [esp+134h] [ebp-94h]
  NiDX9Renderer *v65; // [esp+138h] [ebp-90h]
  volatile LONG *v66; // [esp+13Ch] [ebp-8Ch] BYREF
  int v67; // [esp+140h] [ebp-88h]
  volatile LONG *v68; // [esp+144h] [ebp-84h] BYREF
  float v69[13]; // [esp+148h] [ebp-80h] BYREF
  NiPoint3 v70[5]; // [esp+17Ch] [ebp-4Ch] BYREF
  int v71; // [esp+1C4h] [ebp-4h]

  v52 = this; /*0x7f6fef*/
  v65 = renderer; /*0x7f7000*/
  v49 = 0; /*0x7f7004*/
  v63 = sub_7F5C40(a3); /*0x7f7011*/
  v64 = sub_7F5E80(a3); /*0x7f7021*/
  v3 = (_DWORD *)a2[1]; /*0x7f7025*/
  v4 = (_DWORD *)*v3; /*0x7f7028*/
  v5 = (volatile LONG *)v3[2]; /*0x7f702d*/
  v6 = *v5; /*0x7f702f*/
  v7 = *(volatile LONG **)(*v5 + 0xB4); /*0x7f7031*/
  v56 = v5; /*0x7f7037*/
  qmemcpy(v69, (const void *)(v6 + 0x64), sizeof(v69)); /*0x7f7047*/
  v59 = *(_DWORD *)(v6 + 0x20); /*0x7f704c*/
  v57 = v4; /*0x7f7050*/
  v60 = *(_DWORD *)(v6 + 0x24); /*0x7f7057*/
  v58 = v7; /*0x7f705b*/
  v61 = *(_DWORD *)(v6 + 0x28); /*0x7f7062*/
  v62 = *(_DWORD *)(v6 + 0x2C); /*0x7f706d*/
  v8 = *NiGeometry_GetPropertyState((NiGeometry *)v6, &v54); /*0x7f7079*/
  if ( v54 ) /*0x7f7081*/
  {
    v9 = v54; /*0x7f7083*/
    if ( !InterlockedDecrement(v54 + 1) ) /*0x7f7089*/
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7f709f*/
  }
  v10 = *(NiTArray_NiD3DPass **)(v6 + 0xBC); /*0x7f70a9*/
  v11 = *((_DWORD *)v8 + 6); /*0x7f70af*/
  unk_B42E90 = (unsigned __int16)a3; /*0x7f70b2*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v56; /*0x7f70bb*/
  OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f70c0*/
  OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v56, v11, 0); /*0x7f70db*/
  sub_7F6A30((NiGeometry *)v6); /*0x7f70e3*/
  v12 = *((_DWORD *)v58 + 0xE); /*0x7f70ec*/
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v53); /*0x7f70f6*/
  v14 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f70ff*/
        + 0xA);
  v42 = *v13; /*0x7f710c*/
  v71 = 0; /*0x7f7114*/
  v14(v10, v6, 0, v12, v8, v42, v69, &v59); /*0x7f711f*/
  v71 = 0xFFFFFFFF; /*0x7f7127*/
  if ( v53 ) /*0x7f7132*/
  {
    v50 = v53; /*0x7f7134*/
    if ( !InterlockedDecrement(v53 + 1) ) /*0x7f713c*/
      (**(void (__thiscall ***)(volatile LONG *, int))v50)(v50, 1); /*0x7f7154*/
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v53); /*0x7f715d*/
  v16 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f7166*/
        + 0xB);
  v43 = *v15; /*0x7f7173*/
  v71 = 1; /*0x7f717b*/
  v16(v10, v6, 0, v12, v8, v43, v69, &v59); /*0x7f7186*/
  v71 = 0xFFFFFFFF; /*0x7f718e*/
  if ( v53 ) /*0x7f7199*/
  {
    v50 = v53; /*0x7f719b*/
    if ( !InterlockedDecrement(v53 + 1) ) /*0x7f71a3*/
      (**(void (__thiscall ***)(volatile LONG *, int))v50)(v50, 1); /*0x7f71bb*/
  }
  (*((void (__thiscall **)(NiTArray_NiD3DPass *))v10->_vtbl + 0x12))(v10); /*0x7f71c4*/
  v53 = *(volatile LONG **)&v10[3].numObjs; /*0x7f71d0*/
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50); /*0x7f71d4*/
  v18 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f71dd*/
        + 0xC);
  v44 = *v17; /*0x7f71ea*/
  v71 = 2; /*0x7f71f2*/
  v18(v10, v6, 0, v12, v8, v44, v69, &v59); /*0x7f71fd*/
  v71 = 0xFFFFFFFF; /*0x7f7205*/
  if ( v50 ) /*0x7f7210*/
  {
    v51 = v50; /*0x7f7212*/
    if ( !InterlockedDecrement(v50 + 1) ) /*0x7f721a*/
    {
      if ( v51 ) /*0x7f722a*/
        (**(void (__thiscall ***)(volatile LONG *, int))v51)(v51, 1); /*0x7f7232*/
    }
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50); /*0x7f723b*/
  v20 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f7244*/
        + 0xD);
  v45 = *v19; /*0x7f7251*/
  v71 = 3; /*0x7f725b*/
  v20(v10, v6, 0, 0, v12, v8, v45, v69, &v59); /*0x7f7266*/
  v71 = 0xFFFFFFFF; /*0x7f726e*/
  if ( v50 ) /*0x7f7279*/
  {
    v51 = v50; /*0x7f727b*/
    if ( !InterlockedDecrement(v50 + 1) ) /*0x7f7283*/
    {
      if ( v51 ) /*0x7f7293*/
        (**(void (__thiscall ***)(volatile LONG *, int))v51)(v51, 1); /*0x7f729b*/
    }
  }
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *))v10->_vtbl + 0xF))( /*0x7f72a9*/
    v10,
    v6,
    0,
    v12,
    v8);
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50); /*0x7f72b2*/
  v22 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f72bb*/
        + 0xE);
  v46 = *v21; /*0x7f72c8*/
  v71 = 4; /*0x7f72d2*/
  v22(v10, v6, 0, 0, v12, v8, v46, v69, &v59); /*0x7f72dd*/
  v71 = 0xFFFFFFFF; /*0x7f72e5*/
  if ( v50 ) /*0x7f72f0*/
  {
    v23 = v50; /*0x7f72f2*/
    if ( !InterlockedDecrement(v50 + 1) ) /*0x7f72f8*/
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x7f730e*/
  }
  renderState = renderer->member.renderState; /*0x7f7315*/
  v25 = word_B427BE; /*0x7f731b*/
  if ( word_B427BE < 5u ) /*0x7f7325*/
  {
    v26 = renderState->member.SamplerStateSettings[v25 + 5].CurrentValue == 2; /*0x7f732a*/
    v27 = &renderState->member.SamplerStateSettings[v25 + 5]; /*0x7f7332*/
    if ( !v26 ) /*0x7f7339*/
    {
      v27->CurrentValue = 2; /*0x7f733d*/
      renderState->member.Device->lpVtbl->SetSamplerState(renderState->member.Device, 1, D3DSAMP_MIPFILTER, 2); /*0x7f7356*/
    }
  }
  (*(void (__thiscall **)(volatile LONG, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, renderer); /*0x7f736a*/
  sub_7D1800(a3); /*0x7f7374*/
  v28 = 4 * dword_B28CB0; /*0x7f7383*/
  v50 = v58; /*0x7f738a*/
  _memset(*v52, 0, v28); /*0x7f7397*/
  v29 = v57; /*0x7f739c*/
  if ( v57 ) /*0x7f73a5*/
  {
    while ( 1 ) /*0x7f73b8*/
    {
      v30 = (_DWORD *)*v29; /*0x7f73b8*/
      v31 = (volatile LONG *)v29[2]; /*0x7f73ba*/
      v54 = v56; /*0x7f73bd*/
      unk_B42E90 = (unsigned __int16)a3; /*0x7f73cc*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v31; /*0x7f73d1*/
      v32 = *v31; /*0x7f73d7*/
      v33 = *(volatile LONG **)(*v31 + 0xB4); /*0x7f73d9*/
      v67 = (unsigned __int16)a3; /*0x7f73df*/
      v57 = v30; /*0x7f73ea*/
      v56 = v31; /*0x7f73ee*/
      v58 = v33; /*0x7f73f2*/
      v51 = *NiGeometry_GetPropertyState((NiGeometry *)v32, &v68); /*0x7f7403*/
      if ( v68 ) /*0x7f7407*/
      {
        v55 = v68; /*0x7f7409*/
        if ( !InterlockedDecrement(v68 + 1) ) /*0x7f7411*/
        {
          if ( v55 ) /*0x7f7421*/
            (*(void (__thiscall **)(_DWORD *, int))*v55)(v55, 1); /*0x7f7429*/
        }
      }
      v55 = *((_DWORD **)v51 + 6); /*0x7f7436*/
      if ( v50 == v33 ) /*0x7f743a*/
      {
        v40 = v52; /*0x7f7570*/
        if ( !v49 ) /*0x7f7574*/
        {
          sub_7F68C0(a3, 1, v63, v64, (int)v10); /*0x7f758d*/
          v49 = 1; /*0x7f7592*/
        }
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v31, (int)v55, (int)v54); /*0x7f75ac*/
        sub_7F6150(v32, a3, (int)v51, v55, v10); /*0x7f75c0*/
        sub_7F5B80(v69, v70); /*0x7f75d4*/
        sub_7C9140((int)v70, v69[0xC], v67, *(_DWORD *)(v32 + 0xB8)); /*0x7f75fa*/
        sub_7F6BF0(v40, (NiGeometry *)v32, (int)v10, (int)v53, 0); /*0x7f760a*/
      }
      else
      {
        if ( v49 ) /*0x7f7445*/
        {
          sub_7F68C0(a3, 0, v63, v64, (int)v10); /*0x7f7460*/
          v49 = 0; /*0x7f7465*/
        }
        sub_7F6A30((NiGeometry *)v32); /*0x7f746f*/
        v34 = *((NiDynamicEffectState **)v33 + 0xE); /*0x7f7474*/
        qmemcpy(v69, (const void *)(v32 + 0x64), sizeof(v69)); /*0x7f7483*/
        v35 = v55; /*0x7f7488*/
        v36 = v52; /*0x7f748c*/
        v59 = *(_DWORD *)(v32 + 0x20); /*0x7f7490*/
        v60 = *(_DWORD *)(v32 + 0x24); /*0x7f7497*/
        v50 = (volatile LONG *)v34; /*0x7f749f*/
        v61 = *(_DWORD *)(v32 + 0x28); /*0x7f74a7*/
        v62 = *(_DWORD *)(v32 + 0x2C); /*0x7f74b3*/
        OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v56, (int)v55, (int)v54); /*0x7f74c2*/
        v48 = v35; /*0x7f74cf*/
        v37 = v51; /*0x7f74d0*/
        sub_7F6150(v32, a3, (int)v51, v48, v10); /*0x7f74d9*/
        v38 = sub_7016D0((NiGeometry *)v32, (NiDynamicEffectState **)&v66); /*0x7f74e5*/
        v39 = *((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl /*0x7f74ee*/
              + 0xD);
        v47 = *v38; /*0x7f74fb*/
        v71 = 5; /*0x7f7509*/
        v39(v10, v32, 0, 0, v50, v37, v47, v69, &v59); /*0x7f7514*/
        v71 = 0xFFFFFFFF; /*0x7f751c*/
        if ( v66 ) /*0x7f7527*/
        {
          v54 = v66; /*0x7f7529*/
          if ( !InterlockedDecrement(v66 + 1) ) /*0x7f7531*/
          {
            if ( v54 ) /*0x7f7541*/
              (**(void (__thiscall ***)(volatile LONG *, int))v54)(v54, 1); /*0x7f7549*/
          }
        }
        (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, volatile LONG *, volatile LONG *))v10->_vtbl + 0xF))( /*0x7f755b*/
          v10,
          v32,
          0,
          v50,
          v37);
        sub_7F6BF0(v36, (NiGeometry *)v32, (int)v10, (int)v53, 0); /*0x7f7566*/
      }
      v50 = v58; /*0x7f7618*/
      if ( !v57 ) /*0x7f761c*/
        break; /*0x7f761c*/
      v29 = v57; /*0x7f73b0*/
    }
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f762d*/
  a2[3] = a2[1]; /*0x7f7635*/
  a2[1] = 0; /*0x7f7638*/
  a2[2] = 0; /*0x7f763b*/
  a2[4] = 0; /*0x7f763e*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *))v10->_vtbl + 0x13))(v10); /*0x7f7648*/
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v65->member.renderState->vtbl->SetVar_0FF5)( /*0x7f765f*/
           v65->member.renderState,
           0);
}
