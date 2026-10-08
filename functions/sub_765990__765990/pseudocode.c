int __userpurge sub_765990@<eax>(
        NiDX9Renderer *a1@<ecx>,
        _WORD *a2@<edi>,
        float a3@<esi>,
        NiGeometryData **a4,
        float a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11,
        float a12,
        int a13,
        int a14,
        int a15,
        float a16,
        int a17,
        int a18,
        float a19,
        int a20,
        int a21,
        int a22,
        float a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        float a30,
        float a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50)
{
  NiPropertyState *propertyState; // eax
  NiGeometryData *v52; // edx
  NiGeometryData *v53; // ebx
  NiGeometryData *v54; // ecx
  NiGeometryData *v55; // edx
  UInt16 (__thiscall *GetNumVertices)(NiGeometryData *); // edx
  UInt16 v57; // si
  float *v58; // edi
  NiGeometryBufferData *BuffData; // esi
  int v60; // ecx
  float z; // ecx
  int v62; // edx
  float v63; // ecx
  float v64; // ecx
  float *v65; // edi
  float *m_pkColor; // ebx
  float v67; // edx
  NiDX9RenderState *renderState; // ecx
  NiDX9RenderStateVtbl *vtbl; // eax
  float *v70; // eax
  float *v71; // eax
  NiVBChip *v72; // eax
  IDirect3DVertexBuffer9 *VB; // esi
  _DWORD *v74; // esi
  int v75; // eax
  int v76; // ecx
  int v77; // edx
  double v78; // st7
  float *v79; // eax
  float *v80; // eax
  int v81; // eax
  char *v82; // esi
  double v83; // st7
  double v84; // st6
  double x; // st6
  double y; // st5
  double v87; // st4
  double v88; // st1
  double v89; // st2
  double v90; // st2
  double v91; // st3
  bool v92; // zf
  float *v93; // eax
  float *v94; // eax
  int v95; // esi
  double v96; // st6
  double v97; // st6
  double v98; // st5
  double v99; // st4
  double v100; // st1
  float v102; // [esp+0h] [ebp-13Ch]
  float v103; // [esp+0h] [ebp-13Ch]
  float v104; // [esp+4h] [ebp-138h]
  float *v105; // [esp+Ch] [ebp-130h]
  float *v106; // [esp+Ch] [ebp-130h]
  float *v107; // [esp+Ch] [ebp-130h]
  float *v108; // [esp+Ch] [ebp-130h]
  float v109; // [esp+20h] [ebp-11Ch]
  float v110; // [esp+20h] [ebp-11Ch]
  float v111; // [esp+20h] [ebp-11Ch]
  float v112; // [esp+20h] [ebp-11Ch]
  float v113; // [esp+20h] [ebp-11Ch]
  float v114; // [esp+20h] [ebp-11Ch]
  float v115; // [esp+20h] [ebp-11Ch]
  int v118; // [esp+2Ch] [ebp-110h]
  float v119; // [esp+2Ch] [ebp-110h]
  int v120; // [esp+34h] [ebp-108h] BYREF
  float *v121; // [esp+38h] [ebp-104h]
  float *v122; // [esp+3Ch] [ebp-100h]
  float v123; // [esp+40h] [ebp-FCh] BYREF
  float v124; // [esp+44h] [ebp-F8h]
  float v125; // [esp+48h] [ebp-F4h]
  float v126; // [esp+4Ch] [ebp-F0h]
  float v127; // [esp+50h] [ebp-ECh]
  float v128; // [esp+54h] [ebp-E8h]
  float v129; // [esp+58h] [ebp-E4h]
  float v130; // [esp+5Ch] [ebp-E0h]
  float v131; // [esp+60h] [ebp-DCh]
  float v132; // [esp+64h] [ebp-D8h]
  float *v133; // [esp+68h] [ebp-D4h]
  float v134; // [esp+6Ch] [ebp-D0h]
  float v135; // [esp+70h] [ebp-CCh]
  float v136; // [esp+74h] [ebp-C8h]
  float v137; // [esp+78h] [ebp-C4h] BYREF
  float v138; // [esp+7Ch] [ebp-C0h]
  float v139; // [esp+80h] [ebp-BCh]
  float v140; // [esp+84h] [ebp-B8h]
  float v141; // [esp+88h] [ebp-B4h]
  float v142; // [esp+8Ch] [ebp-B0h]
  NiPoint3 out; // [esp+A0h] [ebp-9Ch] BYREF
  int v144; // [esp+ACh] [ebp-90h] BYREF
  NiGeometryData *v145; // [esp+B0h] [ebp-8Ch]
  int v146; // [esp+B4h] [ebp-88h] BYREF
  int v147; // [esp+B8h] [ebp-84h]
  int v148[3]; // [esp+BCh] [ebp-80h] BYREF
  float v149; // [esp+C8h] [ebp-74h] BYREF
  char v150[12]; // [esp+CCh] [ebp-70h] BYREF
  int v151; // [esp+D8h] [ebp-64h] BYREF
  int v152[13]; // [esp+DCh] [ebp-60h] BYREF
  int v153; // [esp+110h] [ebp-2Ch] BYREF
  int v155[8]; // [esp+11Ch] [ebp-20h] BYREF

  if ( a1->member.lostDevice /*0x7659bf*/
    || (propertyState = a1->member.super.propertyState, (*(_BYTE *)(*((_DWORD *)propertyState + 2) + 0x18) & 1) != 0)
    && *(float *)(*((_DWORD *)propertyState + 4) + 0x50) <= 0.0 )
  {
    JUMPOUT(0x76686C); /*0x76686c*/
  }
  v52 = a4[9]; /*0x7659cc*/
  v53 = a4[0x2D]; /*0x7659d0*/
  qmemcpy(v152, a4 + 0x19, sizeof(v152)); /*0x7659e7*/
  LODWORD(out.y) = a4[8]; /*0x7659ec*/
  v54 = a4[0xA]; /*0x7659f3*/
  LODWORD(out.z) = v52; /*0x7659f6*/
  v55 = a4[0xB]; /*0x7659fd*/
  v144 = (int)v54; /*0x765a00*/
  v145 = v55; /*0x765a07*/
  GetNumVertices = v53->__vftable->GetNumVertices; /*0x765a10*/
  v120 = (int)v53; /*0x765a15*/
  v57 = GetNumVertices(v53); /*0x765a1b*/
  LODWORD(v123) = v53->member.m_usVertices; /*0x765a25*/
  if ( !v57 ) /*0x765a29*/
    goto LABEL_30; /*0x765a29*/
  NiGeometryGroup::AddGeometryDataToGroup(a1->member.dynamicGeometryGroup, v53, 0, 0, 0, 0); /*0x765a45*/
  v58 = (float *)v57; /*0x765a4a*/
  BuffData = v53->member.BuffData; /*0x765a4d*/
  v122 = v58; /*0x765a54*/
  v153 = (int)BuffData; /*0x765a58*/
  sub_777F70(BuffData, 1u); /*0x765a5f*/
  v60 = LOWORD(v123); /*0x765a64*/
  BuffData->MaxVertCount = 4 * LOWORD(v123); /*0x765a70*/
  BuffData->NumArrays = 1; /*0x765a73*/
  BuffData->VertCount = 4 * (_DWORD)v58; /*0x765a81*/
  BuffData->MaxTriCount = 2 * v60; /*0x765a86*/
  BuffData->TriCount = 2 * (_DWORD)v58; /*0x765a8c*/
  BuffData->IndexArray = 0; /*0x765a91*/
  BuffData->ArrayLengths = 0; /*0x765a94*/
  z = out.z; /*0x765a9e*/
  a1->member.camUp.y = out.y; /*0x765aa5*/
  v62 = v144; /*0x765aab*/
  a1->member.camUp.z = z; /*0x765ab2*/
  v63 = *(float *)&v145; /*0x765ab8*/
  LODWORD(a1->member.modelCamRight.x) = v62; /*0x765ac2*/
  a1->member.modelCamRight.y = v63; /*0x765ac8*/
  BuffData->Flags = 0x1C00000; /*0x765acf*/
  if ( !sub_778350((_DWORD *)a1->member.indexBufferMgr, (int)BuffData, 4 * (_DWORD)v58, 0, 0, 1, a2) ) /*0x765adc*/
    goto LABEL_30; /*0x765aea*/
  v64 = *(float *)(v120 + 0x4C); /*0x765af4*/
  v65 = *(float **)(v120 + 0x1C); /*0x765afa*/
  m_pkColor = (float *)v53->member.m_pkColor; /*0x765afd*/
  v126 = *(float *)(v120 + 0x44); /*0x765b00*/
  v67 = *(float *)(v120 + 0x54); /*0x765b04*/
  v127 = v64; /*0x765b07*/
  renderState = a1->member.renderState; /*0x765b0b*/
  vtbl = renderState->vtbl; /*0x765b11*/
  v138 = v67; /*0x765b13*/
  ((void (__thiscall *)(NiDX9RenderState *, _DWORD))vtbl->SetVertexBlending)(renderState, 0); /*0x765b1c*/
  sub_761AE0((float *)&a1->member.worldMatrix, (float *)&v151, (float *)&v152[8], *(float *)&v152[0xB]); /*0x765b40*/
  ((void (__cdecl *)(IDirect3DDevice9 *, int, D3DXMATRIX *))a1->member.device->lpVtbl->SetTransform)( /*0x765b63*/
    a1->member.device,
    0x100,
    &a1->member.worldMatrix);
  ((void (__thiscall *)(NiDX9RenderState *, char *))a1->member.renderState->vtbl->SetNormalization)( /*0x765b78*/
    a1->member.renderState,
    v150);
  v70 = NiPoint3_MultiplyMatrix3((float *)v148, (float *)&a1->member.pad624[5], &v149); /*0x765b91*/
  a1->member.pad624[0xB] = *(UInt32 *)v70; /*0x765b98*/
  a1->member.pad624[0xC] = (UInt32)v70[1]; /*0x765ba1*/
  a1->member.camRight.x = v70[2]; /*0x765bb8*/
  v71 = NiPoint3_MultiplyMatrix3((float *)v148, (float *)&a1->member.pad624[8], &v149); /*0x765bc7*/
  a1->member.camRight.y = *v71; /*0x765bd4*/
  a1->member.camRight.z = v71[1]; /*0x765bd9*/
  a1->member.camUp.x = v71[2]; /*0x765be3*/
  NiPoint3_CrossProduct((NiPoint3 *)&a1->member.pad624[0xB], &out, (NiPoint3 *)&a1->member.camRight.y); /*0x765bf4*/
  sub_7780A0(BuffData, 0x152u); /*0x765c00*/
  if ( BuffData->StreamCount ) /*0x765c05*/
    *BuffData->VertexStride = 0x24; /*0x765c0e*/
  NiGeometryBufferData::RefreshVBChips(BuffData, 0); /*0x765c1d*/
  if ( BuffData->StreamCount ) /*0x765c22*/
  {
    v72 = *BuffData->VBChip; /*0x765c2b*/
    v145 = (NiGeometryData *)v72; /*0x765c2d*/
  }
  else
  {
    v145 = 0; /*0x765c36*/
    v72 = 0; /*0x765c41*/
  }
  VB = v72->VB; /*0x765c48*/
  if ( !VB /*0x765c6f*/
    || (v74 = NiDX9VertexBufferManager_LockToStaging(
                a1->member.vertexBufferMgr,
                VB,
                v72->Offset,
                v72->Size,
                v72->LockFlags)) == 0 )
  {
LABEL_30:
    JUMPOUT(0x766869); /*0x766869*/
  }
  if ( !v133 ) /*0x765c7a*/
    JUMPOUT(0x766227); /*0x766227*/
  if ( m_pkColor ) /*0x765c86*/
  {
    if ( a3 != 0.0 ) /*0x765c8e*/
    {
      v118 = LODWORD(a3); /*0x765c94*/
      do /*0x765f8e*/
      {
        v109 = m_pkColor[3] * dbl_A3DDD8; /*0x765ca9*/
        v75 = (int)v109; /*0x765cb7*/
        v110 = *m_pkColor * dbl_A3DDD8; /*0x765cc1*/
        v76 = (int)v110; /*0x765cd0*/
        v111 = m_pkColor[1] * dbl_A3DDD8; /*0x765cda*/
        v77 = (int)v111; /*0x765ce9*/
        v112 = m_pkColor[2] * dbl_A3DDD8; /*0x765cf3*/
        v147 = (int)v112; /*0x765cfb*/
        v113 = *v122 * *v121; /*0x765d2d*/
        v78 = *v133; /*0x765d31*/
        v120 = v147 | ((v77 | ((v76 | (v75 << 8)) << 8)) << 8); /*0x765d33*/
        v104 = v78; /*0x765d41*/
        sub_532C20(v104, (float *)&v144, (float *)&v146); /*0x765d44*/
        v126 = (*(float *)&v144 + *(float *)&v146) * v113; /*0x765d79*/
        v114 = (*(float *)&v146 - *(float *)&v144) * v113; /*0x765d81*/
        v105 = sub_47DA10((float *)v148, v114, &a1->member.camRight.y); /*0x765d99*/
        v79 = sub_47DA10((float *)&v152[0xA], v126, (float *)&a1->member.pad624[0xB]); /*0x765db2*/
        sub_47D9B0(v79, &v137, v105); /*0x765dbc*/
        v106 = sub_47DA10((float *)v155, v126, &a1->member.camRight.y); /*0x765de6*/
        v102 = -v114; /*0x765dfb*/
        v80 = sub_47DA10((float *)&v153, v102, (float *)&a1->member.pad624[0xB]); /*0x765dff*/
        sub_47D9B0(v80, &v123, v106); /*0x765e09*/
        v81 = v120; /*0x765e14*/
        v82 = (char *)(v74 + 0x12); /*0x765e1f*/
        v83 = v137; /*0x765e22*/
        v127 = *v65 - v137; /*0x765e24*/
        v128 = v65[1] - v138; /*0x765e2f*/
        v84 = v65[2]; /*0x765e33*/
        *((float *)v82 + 0xFFFFFFF4) = *(float *)&v120; /*0x765e36*/
        v129 = v84 - v139; /*0x765e3d*/
        *((float *)v82 + 0xFFFFFFEE) = v127; /*0x765e45*/
        *((float *)v82 + 0xFFFFFFEF) = v128; /*0x765e4c*/
        *((float *)v82 + 0xFFFFFFF0) = v129; /*0x765e53*/
        x = out.x; /*0x765e56*/
        *((float *)v82 + 0xFFFFFFF1) = out.x; /*0x765e5d*/
        y = out.y; /*0x765e60*/
        *((float *)v82 + 0xFFFFFFF2) = out.y; /*0x765e67*/
        v87 = out.z; /*0x765e6a*/
        *((float *)v82 + 0xFFFFFFF3) = out.z; /*0x765e71*/
        *((float *)v82 + 0xFFFFFFF5) = 0.0; /*0x765e76*/
        *((float *)v82 + 0xFFFFFFF6) = 1.0; /*0x765e7b*/
        v130 = *v65 - v123; /*0x765e84*/
        v131 = v65[1] - v124; /*0x765e8f*/
        v88 = v65[2]; /*0x765e93*/
        *((_DWORD *)v82 + 0xFFFFFFFD) = v81; /*0x765e96*/
        v132 = v88 - v125; /*0x765e9d*/
        *((float *)v82 + 0xFFFFFFF7) = v130; /*0x765ea5*/
        *((float *)v82 + 0xFFFFFFF8) = v131; /*0x765eac*/
        *((float *)v82 + 0xFFFFFFF9) = v132; /*0x765eb3*/
        *((float *)v82 + 0xFFFFFFFA) = x; /*0x765eb8*/
        *((float *)v82 + 0xFFFFFFFB) = y; /*0x765ebd*/
        *((float *)v82 + 0xFFFFFFFC) = v87; /*0x765ec2*/
        *((float *)v82 + 0xFFFFFFFE) = 1.0; /*0x765ec7*/
        *((float *)v82 + 0xFFFFFFFF) = 1.0; /*0x765eca*/
        v140 = v83 + *v65; /*0x765ed3*/
        v89 = v138 + v65[1]; /*0x765ede*/
        v74 = v82 + 0x48; /*0x765ee1*/
        v65 += 3; /*0x765ee4*/
        m_pkColor += 4; /*0x765ee7*/
        v141 = v89; /*0x765eea*/
        v90 = v65[0xFFFFFFFF]; /*0x765eee*/
        v74[0xFFFFFFF4] = v81; /*0x765ef1*/
        v142 = v90 + v139; /*0x765ef8*/
        *((float *)v74 + 0xFFFFFFEE) = v140; /*0x765f00*/
        *((float *)v74 + 0xFFFFFFEF) = v141; /*0x765f07*/
        *((float *)v74 + 0xFFFFFFF0) = v142; /*0x765f0e*/
        *((float *)v74 + 0xFFFFFFF1) = x; /*0x765f13*/
        *((float *)v74 + 0xFFFFFFF2) = y; /*0x765f18*/
        *((float *)v74 + 0xFFFFFFF3) = v87; /*0x765f1d*/
        *((float *)v74 + 0xFFFFFFF5) = 1.0; /*0x765f22*/
        *((float *)v74 + 0xFFFFFFF6) = 0.0; /*0x765f27*/
        v134 = v123 + v65[0xFFFFFFFD]; /*0x765f31*/
        v135 = v124 + v65[0xFFFFFFFE]; /*0x765f3c*/
        v91 = v65[0xFFFFFFFF]; /*0x765f40*/
        v74[0xFFFFFFFD] = v81; /*0x765f43*/
        ++v121; /*0x765f4f*/
        ++v122; /*0x765f53*/
        v136 = v91 + v125; /*0x765f57*/
        ++v133; /*0x765f5b*/
        v92 = v118-- == 1; /*0x765f5f*/
        *((float *)v74 + 0xFFFFFFF7) = v134; /*0x765f68*/
        *((float *)v74 + 0xFFFFFFF8) = v135; /*0x765f6f*/
        *((float *)v74 + 0xFFFFFFF9) = v136; /*0x765f76*/
        *((float *)v74 + 0xFFFFFFFA) = x; /*0x765f7b*/
        *((float *)v74 + 0xFFFFFFFB) = y; /*0x765f80*/
        *((float *)v74 + 0xFFFFFFFC) = v87; /*0x765f85*/
        *((float *)v74 + 0xFFFFFFFE) = 0.0; /*0x765f88*/
        *((float *)v74 + 0xFFFFFFFF) = 0.0; /*0x765f8b*/
      }
      while ( !v92 ); /*0x765f8e*/
    }
LABEL_28:
    JUMPOUT(0x766695); /*0x766695*/
  }
  if ( a3 == 0.0 ) /*0x765f9b*/
    goto LABEL_28; /*0x765f9b*/
  v126 = a3; /*0x765fa1*/
  *(float *)&v144 = *v122 * *v121; /*0x765fc9*/
  sub_532C20(*v133, (float *)&v120, (float *)&v146); /*0x765fda*/
  v119 = (*(float *)&v120 + *(float *)&v146) * *(float *)&v144; /*0x76600f*/
  v115 = (*(float *)&v146 - *(float *)&v120) * *(float *)&v144; /*0x766017*/
  v107 = sub_47DA10((float *)&v153, v115, &a1->member.camRight.y); /*0x76602f*/
  v93 = sub_47DA10((float *)v155, v119, (float *)&a1->member.pad624[0xB]); /*0x766048*/
  sub_47D9B0(v93, &v137, v107); /*0x766052*/
  v108 = sub_47DA10((float *)v148, v119, &a1->member.camRight.y); /*0x76607c*/
  v103 = -v115; /*0x766091*/
  v94 = sub_47DA10((float *)&v152[0xA], v103, (float *)&a1->member.pad624[0xB]); /*0x766095*/
  sub_47D9B0(v94, &v123, v108); /*0x76609f*/
  v134 = *v65 - v137; /*0x7660b0*/
  v95 = (int)(v74 + 0x1B); /*0x7660c1*/
  v135 = v65[1] - v138; /*0x7660c4*/
  v96 = v65[2]; /*0x7660c8*/
  *(_DWORD *)(v95 - 0x54) = 0xFFFFFFFF; /*0x7660cb*/
  v136 = v96 - v139; /*0x7660d2*/
  *(float *)(v95 - 0x6C) = v134; /*0x7660da*/
  *(float *)(v95 - 0x68) = v135; /*0x7660e1*/
  *(float *)(v95 - 0x64) = v136; /*0x7660e8*/
  v97 = out.x; /*0x7660eb*/
  *(float *)(v95 - 0x60) = out.x; /*0x7660f2*/
  v98 = out.y; /*0x7660f5*/
  *(float *)(v95 - 0x5C) = out.y; /*0x7660fc*/
  v99 = out.z; /*0x7660ff*/
  *(float *)(v95 - 0x58) = out.z; /*0x766106*/
  *(float *)(v95 - 0x50) = 0.0; /*0x76610b*/
  *(float *)(v95 - 0x4C) = 1.0; /*0x766110*/
  v140 = *v65 - v123; /*0x766119*/
  v141 = v65[1] - v124; /*0x766124*/
  v100 = v65[2]; /*0x766128*/
  *(_DWORD *)(v95 - 0x30) = 0xFFFFFFFF; /*0x76612b*/
  v142 = v100 - v125; /*0x766132*/
  *(float *)(v95 - 0x48) = v140; /*0x76613a*/
  *(float *)(v95 - 0x44) = v141; /*0x766141*/
  *(float *)(v95 - 0x40) = v142; /*0x766148*/
  *(float *)(v95 - 0x3C) = v97; /*0x76614d*/
  *(float *)(v95 - 0x38) = v98; /*0x766152*/
  *(float *)(v95 - 0x34) = v99; /*0x766157*/
  *(float *)(v95 - 0x2C) = 1.0; /*0x76615c*/
  *(float *)(v95 - 0x28) = 1.0; /*0x76615f*/
  return sub_766177(
           0xFFFFFFFF,
           (int)a1,
           v65,
           v95,
           0.0,
           v98,
           v97,
           v99,
           1.0,
           *(float *)&a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50);
}
