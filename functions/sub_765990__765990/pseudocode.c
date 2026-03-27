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
  float v61; // ecx
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
  int VB; // esi
  int v74; // esi
  int v75; // eax
  int v76; // ecx
  int v77; // edx
  double v78; // st7
  float *v79; // eax
  float *v80; // eax
  int v81; // eax
  int v82; // esi
  double v83; // st7
  double v84; // st6
  double v85; // st6
  double v86; // st5
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
  float v143; // [esp+A0h] [ebp-9Ch] BYREF
  int v144; // [esp+A4h] [ebp-98h]
  float v145; // [esp+A8h] [ebp-94h]
  int v146; // [esp+ACh] [ebp-90h] BYREF
  NiGeometryData *v147; // [esp+B0h] [ebp-8Ch]
  int v148; // [esp+B4h] [ebp-88h] BYREF
  int v149; // [esp+B8h] [ebp-84h]
  int v150[3]; // [esp+BCh] [ebp-80h] BYREF
  float v151; // [esp+C8h] [ebp-74h] BYREF
  char v152[12]; // [esp+CCh] [ebp-70h] BYREF
  int v153; // [esp+D8h] [ebp-64h] BYREF
  int v154[13]; // [esp+DCh] [ebp-60h] BYREF
  int v155; // [esp+110h] [ebp-2Ch] BYREF
  int v157[8]; // [esp+11Ch] [ebp-20h] BYREF

  if ( a1->member.lostDevice
    || (propertyState = a1->member.super.propertyState, (*(_BYTE *)(*((_DWORD *)propertyState + 2) + 0x18) & 1) != 0)
    && *(float *)(*((_DWORD *)propertyState + 4) + 0x50) <= 0.0 )
  {
    JUMPOUT(0x76686C);
  }
  v52 = a4[9];
  v53 = a4[0x2D];
  qmemcpy(v154, a4 + 0x19, sizeof(v154));
  v144 = *((int *)a4 + 8);
  v54 = a4[0xA];
  v145 = *(float *)&v52;
  v55 = a4[0xB];
  v146 = (int)v54;
  v147 = v55;
  GetNumVertices = v53->__vftable->GetNumVertices;
  v120 = (int)v53;
  v57 = GetNumVertices(v53);
  LODWORD(v123) = v53->member.m_usVertices;
  if ( !v57 )
    goto LABEL_30;
  NiGeometryGroup::AddGeometryDataToGroup(a1->member.dynamicGeometryGroup, v53, 0, 0, 0, 0);
  v58 = (float *)v57;
  BuffData = v53->member.BuffData;
  v122 = v58;
  v155 = (int)BuffData;
  sub_777F70(BuffData, 1u);
  v60 = LOWORD(v123);
  BuffData->MaxVertCount = 4 * LOWORD(v123);
  BuffData->NumArrays = 1;
  BuffData->VertCount = 4 * (_DWORD)v58;
  BuffData->MaxTriCount = 2 * v60;
  BuffData->TriCount = 2 * (_DWORD)v58;
  BuffData->IndexArray = 0;
  BuffData->ArrayLengths = 0;
  v61 = v145;
  a1->member.camUp.y = *(float *)&v144;
  v62 = v146;
  a1->member.camUp.z = v61;
  v63 = *(float *)&v147;
  LODWORD(a1->member.modelCamRight.x) = v62;
  a1->member.modelCamRight.y = v63;
  BuffData->Flags = 0x1C00000;
  if ( !sub_778350((int)a1->member.indexBufferMgr, (int)BuffData, 4 * (_DWORD)v58, 0, 0, 1, a2) )
    goto LABEL_30;
  v64 = *(float *)(v120 + 0x4C);
  v65 = *(float **)(v120 + 0x1C);
  m_pkColor = (float *)v53->member.m_pkColor;
  v126 = *(float *)(v120 + 0x44);
  v67 = *(float *)(v120 + 0x54);
  v127 = v64;
  renderState = a1->member.renderState;
  vtbl = renderState->vtbl;
  v138 = v67;
  ((void (__thiscall *)(NiDX9RenderState *, _DWORD))vtbl->SetVertexBlending)(renderState, 0);
  sub_761AE0((float *)&a1->member.worldMatrix, (float *)&v153, (float *)&v154[8], *(float *)&v154[0xB]);
  ((void (__cdecl *)(IDirect3DDevice9 *, int, D3DXMATRIX *))a1->member.device->lpVtbl->SetTransform)(
    a1->member.device,
    0x100,
    &a1->member.worldMatrix);
  ((void (__thiscall *)(NiDX9RenderState *))a1->member.renderState->vtbl->SetNormalization)(a1->member.renderState);
  v70 = sub_710250((float *)v150, (float *)&a1->member.pad624[5], &v151);
  a1->member.pad624[0xB] = *(UInt32 *)v70;
  a1->member.pad624[0xC] = (UInt32)v70[1];
  a1->member.camRight.x = v70[2];
  v71 = sub_710250((float *)v150, (float *)&a1->member.pad624[8], &v151);
  a1->member.camRight.y = *v71;
  a1->member.camRight.z = v71[1];
  a1->member.camUp.x = v71[2];
  sub_498FE0((float *)&a1->member.pad624[0xB], &v143, &a1->member.camRight.y);
  sub_7780A0(BuffData, 0x152u);
  if ( BuffData->StreamCount )
    *BuffData->VertexStride = 0x24;
  NiGeometryBufferData::RefreshVBChips(BuffData, 0);
  if ( BuffData->StreamCount )
  {
    v72 = *BuffData->VBChip;
    v147 = (NiGeometryData *)v72;
  }
  else
  {
    v147 = 0;
    v72 = 0;
  }
  VB = (int)v72->VB;
  if ( !VB
    || (v74 = sub_776C90(
                (char *)a1->member.vertexBufferMgr,
                VB,
                v72->Offset,
                __PAIR64__(v72->LockFlags, v72->Size),
                (int)v152)) == 0 )
  {
LABEL_30:
    JUMPOUT(0x766869);
  }
  if ( !v133 )
    JUMPOUT(0x766227);
  if ( m_pkColor )
  {
    if ( a3 != 0.0 )
    {
      v118 = LODWORD(a3);
      do
      {
        v109 = m_pkColor[3] * dbl_A3DDD8;
        v75 = (int)v109;
        v110 = *m_pkColor * dbl_A3DDD8;
        v76 = (int)v110;
        v111 = m_pkColor[1] * dbl_A3DDD8;
        v77 = (int)v111;
        v112 = m_pkColor[2] * dbl_A3DDD8;
        v149 = (int)v112;
        v113 = *v122 * *v121;
        v78 = *v133;
        v120 = v149 | ((v77 | ((v76 | (v75 << 8)) << 8)) << 8);
        v104 = v78;
        sub_532C20(v104, (float *)&v146, (float *)&v148);
        v126 = (*(float *)&v146 + *(float *)&v148) * v113;
        v114 = (*(float *)&v148 - *(float *)&v146) * v113;
        v105 = sub_47DA10((float *)v150, v114, &a1->member.camRight.y);
        v79 = sub_47DA10((float *)&v154[0xA], v126, (float *)&a1->member.pad624[0xB]);
        sub_47D9B0(v79, &v137, v105);
        v106 = sub_47DA10((float *)v157, v126, &a1->member.camRight.y);
        v102 = -v114;
        v80 = sub_47DA10((float *)&v155, v102, (float *)&a1->member.pad624[0xB]);
        sub_47D9B0(v80, &v123, v106);
        v81 = v120;
        v82 = v74 + 0x48;
        v83 = v137;
        v127 = *v65 - v137;
        v128 = v65[1] - v138;
        v84 = v65[2];
        *(float *)(v82 - 0x30) = *(float *)&v120;
        v129 = v84 - v139;
        *(float *)(v82 - 0x48) = v127;
        *(float *)(v82 - 0x44) = v128;
        *(float *)(v82 - 0x40) = v129;
        v85 = v143;
        *(float *)(v82 - 0x3C) = v143;
        v86 = *(float *)&v144;
        *(float *)(v82 - 0x38) = *(float *)&v144;
        v87 = v145;
        *(float *)(v82 - 0x34) = v145;
        *(float *)(v82 - 0x2C) = 0.0;
        *(float *)(v82 - 0x28) = 1.0;
        v130 = *v65 - v123;
        v131 = v65[1] - v124;
        v88 = v65[2];
        *(_DWORD *)(v82 - 0xC) = v81;
        v132 = v88 - v125;
        *(float *)(v82 - 0x24) = v130;
        *(float *)(v82 - 0x20) = v131;
        *(float *)(v82 - 0x1C) = v132;
        *(float *)(v82 - 0x18) = v85;
        *(float *)(v82 - 0x14) = v86;
        *(float *)(v82 - 0x10) = v87;
        *(float *)(v82 - 8) = 1.0;
        *(float *)(v82 - 4) = 1.0;
        v140 = v83 + *v65;
        v89 = v138 + v65[1];
        v74 = v82 + 0x48;
        v65 += 3;
        m_pkColor += 4;
        v141 = v89;
        v90 = v65[0xFFFFFFFF];
        *(_DWORD *)(v74 - 0x30) = v81;
        v142 = v90 + v139;
        *(float *)(v74 - 0x48) = v140;
        *(float *)(v74 - 0x44) = v141;
        *(float *)(v74 - 0x40) = v142;
        *(float *)(v74 - 0x3C) = v85;
        *(float *)(v74 - 0x38) = v86;
        *(float *)(v74 - 0x34) = v87;
        *(float *)(v74 - 0x2C) = 1.0;
        *(float *)(v74 - 0x28) = 0.0;
        v134 = v123 + v65[0xFFFFFFFD];
        v135 = v124 + v65[0xFFFFFFFE];
        v91 = v65[0xFFFFFFFF];
        *(_DWORD *)(v74 - 0xC) = v81;
        ++v121;
        ++v122;
        v136 = v91 + v125;
        ++v133;
        v92 = v118-- == 1;
        *(float *)(v74 - 0x24) = v134;
        *(float *)(v74 - 0x20) = v135;
        *(float *)(v74 - 0x1C) = v136;
        *(float *)(v74 - 0x18) = v85;
        *(float *)(v74 - 0x14) = v86;
        *(float *)(v74 - 0x10) = v87;
        *(float *)(v74 - 8) = 0.0;
        *(float *)(v74 - 4) = 0.0;
      }
      while ( !v92 );
    }
LABEL_28:
    JUMPOUT(0x766695);
  }
  if ( a3 == 0.0 )
    goto LABEL_28;
  v126 = a3;
  *(float *)&v146 = *v122 * *v121;
  sub_532C20(*v133, (float *)&v120, (float *)&v148);
  v119 = (*(float *)&v120 + *(float *)&v148) * *(float *)&v146;
  v115 = (*(float *)&v148 - *(float *)&v120) * *(float *)&v146;
  v107 = sub_47DA10((float *)&v155, v115, &a1->member.camRight.y);
  v93 = sub_47DA10((float *)v157, v119, (float *)&a1->member.pad624[0xB]);
  sub_47D9B0(v93, &v137, v107);
  v108 = sub_47DA10((float *)v150, v119, &a1->member.camRight.y);
  v103 = -v115;
  v94 = sub_47DA10((float *)&v154[0xA], v103, (float *)&a1->member.pad624[0xB]);
  sub_47D9B0(v94, &v123, v108);
  v134 = *v65 - v137;
  v95 = v74 + 0x6C;
  v135 = v65[1] - v138;
  v96 = v65[2];
  *(_DWORD *)(v95 - 0x54) = 0xFFFFFFFF;
  v136 = v96 - v139;
  *(float *)(v95 - 0x6C) = v134;
  *(float *)(v95 - 0x68) = v135;
  *(float *)(v95 - 0x64) = v136;
  v97 = v143;
  *(float *)(v95 - 0x60) = v143;
  v98 = *(float *)&v144;
  *(float *)(v95 - 0x5C) = *(float *)&v144;
  v99 = v145;
  *(float *)(v95 - 0x58) = v145;
  *(float *)(v95 - 0x50) = 0.0;
  *(float *)(v95 - 0x4C) = 1.0;
  v140 = *v65 - v123;
  v141 = v65[1] - v124;
  v100 = v65[2];
  *(_DWORD *)(v95 - 0x30) = 0xFFFFFFFF;
  v142 = v100 - v125;
  *(float *)(v95 - 0x48) = v140;
  *(float *)(v95 - 0x44) = v141;
  *(float *)(v95 - 0x40) = v142;
  *(float *)(v95 - 0x3C) = v97;
  *(float *)(v95 - 0x38) = v98;
  *(float *)(v95 - 0x34) = v99;
  *(float *)(v95 - 0x2C) = 1.0;
  *(float *)(v95 - 0x28) = 1.0;
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
