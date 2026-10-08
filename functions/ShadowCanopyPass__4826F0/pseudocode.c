// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused callsite decode: builds a temporary process with null VisibleGeo at 0x483153 and uses it for canopy render at 0x48317F. This is a separate process/camera/target route, correctly outside CULLING's exact world owner gate.
signed int __thiscall ShadowCanopyPass(GridCellArray *this)
{
  signed int result; // eax
  bool v3; // zf
  signed int size; // ecx
  bool v5; // sf
  double v6; // st6
  double v7; // st6
  double v8; // rt0
  double v9; // st4
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v13; // st5
  NiNode *v14; // eax
  NiNode *v15; // eax
  float *v16; // edi
  _DWORD *v17; // esi
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  float *v21; // ebp
  _WORD *v22; // ebx
  NiTriBasedGeomData *v23; // eax
  NiTriBasedGeomData *v24; // eax
  BSShaderProperty *v25; // edi
  NiNode *v26; // ebp
  ExtraDataList *cell; // eax
  BSExtraData *v28; // esi
  NiRenderedTexture *v29; // eax
  int v30; // eax
  NiTexturingProperty *v31; // eax
  NiTexturingProperty *v32; // eax
  UInt32 v33; // esi
  NiAVObject *v34; // eax
  NiNode *v35; // esi
  float v36; // ecx
  float v37; // edx
  bool v38; // cf
  int v39; // eax
  NiRenderedTexture *v40; // eax
  int (__thiscall ***v41)(_DWORD, int); // esi
  LONG (__stdcall *v42)(volatile LONG *); // edi
  NiNode *v43; // esi
  NiNodeVtbl *vtbl; // edx
  void *v45; // ecx
  NiRenderedTexture *v46; // esi
  int (__thiscall ***v47)(_DWORD, int); // esi
  NiNode *v48; // esi
  NiNode *v49; // eax
  NiNode *v50; // eax
  NiCamera *v51; // eax
  NiCamera *v52; // eax
  NiAVObject *v53; // ebp
  UInt32 v54; // ebx
  NiLight *v55; // eax
  NiLight *v56; // eax
  UInt32 v57; // esi
  int v58; // ecx
  int v59; // ecx
  NiNode *v60; // edi
  NiMaterialProperty *v61; // eax
  NiMaterialProperty *v62; // eax
  int v63; // edx
  int v64; // ecx
  int v65; // edx
  int v66; // edx
  NiObjectNET *v67; // eax
  BSShaderProperty *v68; // edi
  NiNode *v69; // ecx
  NiObjectNET *v70; // eax
  BSShaderProperty *v71; // eax
  NiNode *v72; // ecx
  Ni2DBuffer **p_unk24; // edi
  Ni2DBuffer *DefaultRenderTarget; // eax
  Ni2DBuffer *v75; // ecx
  NiRenderTargetGroup *v76; // eax
  NiRenderedTexture *InnerTexture; // eax
  void (__thiscall ***v78)(_DWORD, int); // esi
  NiNode *v79; // esi
  int (__thiscall ***v80)(_DWORD, int); // esi
  NiFrustum *(__thiscall ***v81)(_DWORD, int); // esi
  NiRenderedTexture *v82; // esi
  char v83; // [esp+4Bh] [ebp-121h]
  char v84; // [esp+5Bh] [ebp-111h]
  UInt32 v85; // [esp+5Ch] [ebp-110h] BYREF
  float v86; // [esp+60h] [ebp-10Ch]
  UInt32 v87; // [esp+64h] [ebp-108h] BYREF
  NiNode *v88; // [esp+68h] [ebp-104h]
  float v89; // [esp+6Ch] [ebp-100h]
  float v90; // [esp+70h] [ebp-FCh]
  float v91; // [esp+74h] [ebp-F8h]
  NiNode *v92; // [esp+78h] [ebp-F4h]
  UInt32 v93; // [esp+7Ch] [ebp-F0h] BYREF
  float v94; // [esp+80h] [ebp-ECh]
  NiTriBasedGeomData *v95; // [esp+84h] [ebp-E8h]
  NiRenderedTexture *v96; // [esp+88h] [ebp-E4h] BYREF
  int v97; // [esp+8Ch] [ebp-E0h] BYREF
  UInt32 v98; // [esp+90h] [ebp-DCh] BYREF
  UInt32 v99; // [esp+94h] [ebp-D8h] BYREF
  UInt32 v100; // [esp+98h] [ebp-D4h] BYREF
  unsigned int v101; // [esp+9Ch] [ebp-D0h]
  GridCellArray *v102; // [esp+A0h] [ebp-CCh]
  float v103[4]; // [esp+A4h] [ebp-C8h] BYREF
  NiFrustum v104; // [esp+B4h] [ebp-B8h] BYREF
  _BYTE v105[156]; // [esp+D0h] [ebp-9Ch] BYREF

  v102 = this; /*0x48271f*/
  v87 = 0; /*0x482725*/
  *(_DWORD *)&v105[0x98] = 5; /*0x482729*/
  v85 = 0; /*0x482730*/
  v98 = 0; /*0x482734*/
  v92 = 0; /*0x482738*/
  v93 = 0; /*0x48273c*/
  v99 = 0; /*0x482740*/
  *(float *)&result = COERCE_FLOAT(NiFrustum::SetOrtho(&v104, 0)); /*0x482754*/
  v100 = 0; /*0x482759*/
  v3 = byte_B06CBC == 0;                        // Native ShadowCanopyPass exits unless bDoCanopyShadowPass (B06CBC) is enabled; canopy texture ownership remains native. /*0x48275f*/
  v103[0] = 0.0; /*0x482766*/
  size = this->size; /*0x48276a*/
  v103[1] = 0.0; /*0x48276d*/
  v103[2] = 0.0; /*0x482771*/
  v105[0x98] = 6; /*0x482775*/
  v103[3] = 0.0; /*0x48277d*/
  v101 = size; /*0x482781*/
  v84 = 1; /*0x482785*/
  v83 = 1; /*0x48278a*/
  g_bCanopyShadowMapPending = 0;                // Clear the pending canopy shadow-map latch after canopy pass work. /*0x48278f*/
  if ( v3 ) /*0x482796*/
    return result; /*0x482796*/
  result = this->size << 0xC; /*0x48279f*/
  v5 = (this->size & 0x80000) != 0; /*0x4827a2*/
  v86 = *(float *)&result; /*0x4827a4*/
  v6 = (double)result; /*0x4827a8*/
  if ( v5 ) /*0x4827ac*/
    v6 = v6 + flt_A2FC78; /*0x4827ae*/
  v86 = v6; /*0x4827b4*/
  v7 = v86; /*0x4827b8*/
  v8 = dbl_A2FAA0; /*0x4827ce*/
  v86 = dbl_A30F70 - v86 * v8; /*0x4827d0*/
  v9 = v86; /*0x4827df*/
  v86 = this->posX + v86; /*0x4827e1*/
  v10 = v9 + this->posY; /*0x4827e5*/
  MEMORY[0xB42F40] |= 0x20u; /*0x4827e8*/
  v94 = v10; /*0x4827f1*/
  unk_B44EE8 = v86; /*0x4827f9*/
  unk_B44EEC = v94; /*0x482803*/
  v11 = v7; /*0x482809*/
  v12 = v8; /*0x482809*/
  unk_B44EF4 = v11; /*0x48280b*/
  if ( *(float *)&size == 0.0 || !MEMORY[0xB350D8] ) /*0x482817*/
  {
    v82 = g_CanopyShadowMap; /*0x4832c6*/
    MEMORY[0xB42F40] &= ~0x20u; /*0x4832ce*/
    if ( v82 ) /*0x4832d9*/
    {
      *(float *)&result = COERCE_FLOAT(InterlockedDecrement((volatile LONG *)&v82->member)); /*0x4832df*/
      if ( *(float *)&result == 0.0 ) /*0x4832e7*/
        *(float *)&result = COERCE_FLOAT( /*0x4832f5*/
                              ((int (__thiscall *)(NiRenderedTexture *, int))v82->__vftable->super.super.super.Destructor)(
                                v82,
                                1));
      g_CanopyShadowMap = 0; /*0x4832f7*/
    }
    return result; /*0x4832f7*/
  }
  v86 = *(float *)&size; /*0x482825*/
  v13 = (double)size; /*0x482829*/
  if ( size < 0 ) /*0x48282d*/
    v13 = v13 + flt_A2FC78; /*0x48282f*/
  v86 = v12 * v13; /*0x48283c*/
  v94 = v86 * dbl_A3D360; /*0x48284a*/
  v90 = v94; /*0x482852*/
  v89 = v94; /*0x48285a*/
  v91 = 0.0; /*0x48285e*/
  v14 = (NiNode *)FormHeapAlloc(0xDCu); /*0x482862*/
  v88 = v14; /*0x48286a*/
  v105[0x98] = 7; /*0x482870*/
  if ( v14 ) /*0x482878*/
    v15 = NiNode::NiNode(v14, 0); /*0x48287d*/
  else
    v15 = 0; /*0x482884*/
  v105[0x98] = 6; /*0x48288b*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v85, (Ni2DBuffer *)v15); /*0x482893*/
  v16 = (float *)FormHeapAlloc(0x30u); /*0x4828a1*/
  *v16 = 0.0; /*0x4828c1*/
  v16[1] = 0.0; /*0x4828c5*/
  v16[2] = 0.0; /*0x4828d4*/
  v16[3] = 1.0; /*0x4828e9*/
  v16[4] = 0.0; /*0x4828f2*/
  v16[5] = 0.0; /*0x482901*/
  v16[6] = 1.0; /*0x48290c*/
  v16[7] = 1.0; /*0x482913*/
  v16[8] = 0.0; /*0x48291e*/
  v16[9] = 0.0; /*0x482925*/
  v16[0xA] = 1.0; /*0x482928*/
  v16[0xB] = 0.0; /*0x48292d*/
  v17 = (_DWORD *)FormHeapAlloc(0x30u); /*0x482935*/
  v17[9] = rhs; /*0x48293c*/
  v17[0xA] = MEMORY[0xB258EC]; /*0x482945*/
  v18 = MEMORY[0xB258F0]; /*0x482948*/
  v17[0xB] = MEMORY[0xB258F0]; /*0x48294e*/
  v19 = v17[9]; /*0x482951*/
  v20 = v17[0xA]; /*0x482954*/
  v17[6] = v19; /*0x482957*/
  v17[3] = v19; /*0x48295a*/
  *v17 = v19; /*0x48295d*/
  v17[7] = v20; /*0x48295f*/
  v17[4] = v20; /*0x482962*/
  v17[1] = v20; /*0x482965*/
  v17[8] = v18; /*0x48296a*/
  v17[5] = v18; /*0x48296d*/
  v17[2] = v18; /*0x482970*/
  v21 = (float *)FormHeapAlloc(0x20u); /*0x48297e*/
  *v21 = 0.0; /*0x482992*/
  v21[1] = 0.0; /*0x482995*/
  v21[2] = 1.0; /*0x4829b4*/
  v21[3] = 0.0; /*0x4829c1*/
  v21[4] = 1.0; /*0x4829c8*/
  v21[5] = 1.0; /*0x4829d5*/
  v21[6] = 0.0; /*0x4829d8*/
  v21[7] = 1.0; /*0x4829db*/
  v22 = (_WORD *)FormHeapAlloc(8u); /*0x4829e3*/
  *v22 = 1; /*0x4829e7*/
  v22[1] = 0; /*0x4829ec*/
  v22[2] = 2; /*0x4829f2*/
  v22[3] = 3; /*0x4829f8*/
  v88 = (NiNode *)FormHeapAlloc(2u); /*0x482a05*/
  LOWORD(v88->vtbl) = 4; /*0x482a09*/
  v23 = (NiTriBasedGeomData *)FormHeapAlloc(0x50u); /*0x482a0e*/
  v95 = v23; /*0x482a16*/
  v105[0x98] = 8; /*0x482a1c*/
  if ( v23 ) /*0x482a24*/
    v24 = sub_719CB0(v23, 4, (int)v16, (int)v17, 0, (int)v21, 1, 0, 2u, 1, (int)v88, (int)v22); /*0x482a3d*/
  else
    v24 = 0; /*0x482a44*/
  v105[0x98] = 6; /*0x482a4b*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v93, (Ni2DBuffer *)v24); /*0x482a53*/
  v88 = 0; /*0x482a5d*/
  if ( !v101 ) /*0x482a65*/
  {
LABEL_51:
    v39 = **(_DWORD **)(TESRegion_CreateFallbackCanopyShadowTexture() + 0x20); /*0x482ca7*/
    if ( v39 ) /*0x482cb3*/
      v40 = *(NiRenderedTexture **)(v39 + 8); /*0x482cb5*/
    else
      v40 = 0; /*0x482cba*/
    *(float *)&result = COERCE_FLOAT((int)SetTextureCanopyShadowMap(v40)); /*0x482cbd*/
    v41 = (int (__thiscall ***)(_DWORD, int))v93; /*0x482cc2*/
    v42 = InterlockedDecrement; /*0x482cc6*/
    v105[0x98] = 3; /*0x482cd1*/
    if ( v93 ) /*0x482cd9*/
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v93 + 4))); /*0x482cdf*/
      if ( *(float *)&result == 0.0 ) /*0x482ce3*/
        *(float *)&result = COERCE_FLOAT((**v41)(v41, 1)); /*0x482ced*/
    }
    v43 = v92; /*0x482cef*/
    v105[0x98] = 2; /*0x482cf5*/
    if ( v92 ) /*0x482cfd*/
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v92->members)); /*0x482d07*/
      if ( *(float *)&result == 0.0 ) /*0x482d0b*/
      {
        vtbl = v43->vtbl; /*0x482d11*/
        v45 = v43; /*0x482d13*/
        goto LABEL_104; /*0x482d15*/
      }
    }
    goto LABEL_105; /*0x482d0b*/
  }
  do /*0x482c9a*/
  {
    v25 = (BSShaderProperty *)v87; /*0x482a6b*/
    v26 = v92; /*0x482a6f*/
    v95 = 0; /*0x482a73*/
    do /*0x482c77*/
    {
      if ( v25 ) /*0x482a84*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v25->member) ) /*0x482a8a*/
          (*(void (__thiscall **)(BSShaderProperty *, int))v25->vtbl)(v25, 1); /*0x482a9c*/
        v25 = 0; /*0x482a9e*/
        v87 = 0; /*0x482aa0*/
      }
      cell = (ExtraDataList *)v102->grid[(unsigned int)v95 + (_DWORD)v88 * v102->size].cell; /*0x482ab7*/
      if ( cell ) /*0x482abc*/
      {
        v28 = sub_4CAFF0(cell, &v96, &v97); /*0x482ad3*/
        v29 = v96; /*0x482ad5*/
        if ( v96 ) /*0x482adb*/
        {
          if ( v97 ) /*0x482ae3*/
          {
            if ( *(_DWORD *)(v97 + 4) ) /*0x482ae5*/
            {
              v30 = (*((int (__thiscall **)(NiDX9TextureData *))v96->member.super.rendererData->_vtbl + 5))(v96->member.super.rendererData); /*0x482af2*/
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v30 + 0x50))(v30, 0); /*0x482afb*/
              *(_DWORD *)(v97 + 4) = 0; /*0x482b01*/
              v29 = v96; /*0x482b04*/
            }
          }
        }
        if ( v28 == (BSExtraData *)1 ) /*0x482b0b*/
        {
          if ( !v29 ) /*0x482b0f*/
            goto LABEL_36; /*0x482b0f*/
          v31 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x482b17*/
          v105[0x98] = 9; /*0x482b25*/
          if ( v31 ) /*0x482b2d*/
            v32 = NiTexturingProperty::NiTexturingProperty(v31); /*0x482b31*/
          else
            v32 = 0; /*0x482b38*/
          v105[0x98] = 6; /*0x482b3f*/
          NiSmartPointer_Set__((Ni2DBuffer **)&v87, (Ni2DBuffer *)v32); /*0x482b47*/
          v25 = (BSShaderProperty *)v87; /*0x482b50*/
          OB_NiTexturingProperty_SetBaseTexture_010201A0((NiTexturingProperty *)v87, v96); /*0x482b57*/
          OB_NiTexturingProperty_SetClampMode_010201A0(v25, 0); /*0x482b5f*/
          v84 = 0; /*0x482b64*/
        }
        else
        {
          if ( v28 != (BSExtraData *)2 ) /*0x482b6e*/
            goto LABEL_36; /*0x482b6e*/
          v33 = TESRegion_CreateFallbackCanopyShadowTexture(); /*0x482b75*/
          if ( v25 != (BSShaderProperty *)v33 ) /*0x482b79*/
          {
            v25 = (BSShaderProperty *)v33; /*0x482b99*/
            v87 = v33; /*0x482b9b*/
            if ( v33 ) /*0x482b9f*/
              InterlockedIncrement((volatile LONG *)(v33 + 4)); /*0x482ba5*/
          }
        }
        v83 = 0; /*0x482bab*/
      }
LABEL_36:
      if ( v25 ) /*0x482bb2*/
      {
        v34 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x482bc3*/
        v105[0x98] = 0xA; /*0x482bd1*/
        if ( v34 ) /*0x482bd9*/
          v35 = (NiNode *)sub_719A20(v34, (NiScreenElementsData *)v93); /*0x482be7*/
        else
          v35 = 0; /*0x482beb*/
        v105[0x98] = 6; /*0x482bef*/
        if ( v26 != v35 ) /*0x482bf7*/
        {
          if ( v26 ) /*0x482bfb*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v26->members) ) /*0x482c01*/
              v26->vtbl->super.super.super.Destructor((NiRefObject *)v26, 1); /*0x482c14*/
          }
          v26 = v35; /*0x482c18*/
          v92 = v35; /*0x482c1a*/
          if ( v35 ) /*0x482c1e*/
            InterlockedIncrement((volatile LONG *)&v35->members); /*0x482c24*/
        }
        v36 = v90; /*0x482c2e*/
        v37 = v91; /*0x482c32*/
        v26->members.super.m_localTransform.pos.x = v89; /*0x482c36*/
        v26->members.super.m_localTransform.pos.y = v36; /*0x482c39*/
        v26->members.super.m_localTransform.pos.z = v37; /*0x482c3f*/
        sub_405680(v26, v25); /*0x482c42*/
        (*(void (__thiscall **)(UInt32, NiNode *, int))(*(_DWORD *)v85 + 0x84))(v85, v26, 1); /*0x482c56*/
      }
      else
      {
        v84 = 0; /*0x482bb4*/
      }
      v38 = (unsigned int)&v95->__vftable + 1 < v101; /*0x482c6b*/
      v95 = (NiTriBasedGeomData *)((char *)v95 + 1); /*0x482c6f*/
      v90 = v90 + 1.0; /*0x482c73*/
    }
    while ( v38 ); /*0x482c77*/
    result = (signed int)&v88->vtbl + 1; /*0x482c85*/
    v38 = (unsigned int)&v88->vtbl + 1 < v101; /*0x482c88*/
    v89 = v89 + 1.0; /*0x482c8a*/
    v88 = (NiNode *)((char *)v88 + 1); /*0x482c8e*/
    v90 = v94; /*0x482c96*/
  }
  while ( v38 ); /*0x482c9a*/
  if ( v84 ) /*0x482ca5*/
    goto LABEL_51; /*0x482ca5*/
  if ( v83 ) /*0x482d1f*/
  {
    v46 = g_CanopyShadowMap; /*0x482d25*/
    MEMORY[0xB42F40] &= ~0x20u; /*0x482d2b*/
    v42 = InterlockedDecrement; /*0x482d34*/
    if ( v46 ) /*0x482d3a*/
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v46->member)); /*0x482d40*/
      if ( *(float *)&result == 0.0 ) /*0x482d44*/
        *(float *)&result = COERCE_FLOAT( /*0x482d52*/
                              ((int (__thiscall *)(NiRenderedTexture *, int))v46->__vftable->super.super.super.Destructor)(
                                v46,
                                1));
      g_CanopyShadowMap = 0; /*0x482d54*/
    }
    v47 = (int (__thiscall ***)(_DWORD, int))v93; /*0x482d5e*/
    v105[0x98] = 3; /*0x482d64*/
    if ( v93 ) /*0x482d6c*/
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v93 + 4))); /*0x482d72*/
      if ( *(float *)&result == 0.0 ) /*0x482d76*/
        *(float *)&result = COERCE_FLOAT((**v47)(v47, 1)); /*0x482d80*/
    }
    v48 = v92; /*0x482d82*/
    v105[0x98] = 2; /*0x482d88*/
    if ( v92 ) /*0x482d90*/
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v92->members)); /*0x482d9a*/
      if ( *(float *)&result == 0.0 ) /*0x482d9e*/
      {
        vtbl = v48->vtbl; /*0x482da4*/
        v45 = v48; /*0x482da6*/
        goto LABEL_104; /*0x482da8*/
      }
    }
  }
  else
  {
    v49 = (NiNode *)FormHeapAlloc(0xDCu); /*0x482db2*/
    v105[0x98] = 0xB; /*0x482dc0*/
    if ( v49 ) /*0x482dc8*/
      v50 = NiNode::NiNode(v49, 0); /*0x482dce*/
    else
      v50 = 0; /*0x482dd5*/
    v105[0x98] = 6; /*0x482ddc*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v98, (Ni2DBuffer *)v50); /*0x482de4*/
    v51 = (NiCamera *)FormHeapAlloc(0x124u); /*0x482dee*/
    v105[0x98] = 0xC; /*0x482dfc*/
    if ( v51 ) /*0x482e04*/
      v52 = sub_70D590(v51); /*0x482e08*/
    else
      v52 = 0; /*0x482e0f*/
    v105[0x98] = 6; /*0x482e16*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v99, (Ni2DBuffer *)v52); /*0x482e1e*/
    v53 = (NiAVObject *)v98; /*0x482e23*/
    v54 = v99; /*0x482e2a*/
    (*(void (__thiscall **)(UInt32, UInt32, int))(*(_DWORD *)v98 + 0x84))(v98, v99, 1); /*0x482e3d*/
    v89 = 0.0; /*0x482e41*/
    v90 = 0.0; /*0x482e4a*/
    v53->members.m_localTransform.pos.x = 0.0; /*0x482e54*/
    v91 = 1.0; /*0x482e57*/
    v53->members.m_localTransform.pos.y = 0.0; /*0x482e60*/
    v53->members.m_localTransform.pos.z = 1.0; /*0x482e68*/
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1); /*0x482e6b*/
    sub_70C340((float *)v54, &g_zeroNiPoint3, (float *)&stru_B258DC); /*0x482e7c*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v54, 0.0, 1); /*0x482e8a*/
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1); /*0x482e98*/
    v104.Left = v94; /*0x482ea1*/
    v104.Bottom = v94; /*0x482eb7*/
    v104.Ortho = 1; /*0x482ec4*/
    v104.Right = v86; /*0x482ecc*/
    v104.Top = v86; /*0x482ed3*/
    v104.Near = 1.0; /*0x482edc*/
    v104.Far = fConstant_2; /*0x482ee9*/
    Camera_SetFrustum((NiCamera *)v54, (int)&v104); /*0x482ef0*/
    v55 = (NiLight *)FormHeapAlloc(0x114u); /*0x482efa*/
    v105[0x98] = 0xD; /*0x482f08*/
    if ( v55 ) /*0x482f10*/
      v56 = sub_719760(v55); /*0x482f14*/
    else
      v56 = 0; /*0x482f1b*/
    v105[0x98] = 6; /*0x482f22*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v100, (Ni2DBuffer *)v56); /*0x482f2a*/
    v57 = v100; /*0x482f35*/
    *(_DWORD *)(v100 + 0xE0) = stru_B25AC4; /*0x482f39*/
    *(_DWORD *)(v57 + 0xE4) = MEMORY[0xB25AC8]; /*0x482f44*/
    v58 = MEMORY[0xB25ACC]; /*0x482f4a*/
    ++*(_DWORD *)(v57 + 0xB8); /*0x482f50*/
    *(_DWORD *)(v57 + 0xE8) = v58; /*0x482f56*/
    *(_DWORD *)(v57 + 0xEC) = stru_B25AC4; /*0x482f62*/
    *(_DWORD *)(v57 + 0xF0) = MEMORY[0xB25AC8]; /*0x482f6d*/
    v59 = MEMORY[0xB25ACC]; /*0x482f73*/
    ++*(_DWORD *)(v57 + 0xB8); /*0x482f79*/
    v60 = (NiNode *)v85; /*0x482f7f*/
    *(_DWORD *)(v57 + 0xF4) = v59; /*0x482f83*/
    sub_708E40((_DWORD *)v57, v60); /*0x482f8c*/
    v61 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x482f93*/
    v105[0x98] = 0xE; /*0x482fa1*/
    if ( v61 ) /*0x482fa9*/
      v62 = NiMaterialProperty::NiMaterialProperty(v61); /*0x482fad*/
    else
      v62 = 0; /*0x482fb4*/
    *((_DWORD *)v62 + 7) = stru_B25AC4; /*0x482fbc*/
    *((_DWORD *)v62 + 8) = MEMORY[0xB25AC8]; /*0x482fc5*/
    v63 = MEMORY[0xB25ACC]; /*0x482fc8*/
    v64 = ++*((_DWORD *)v62 + 0x15); /*0x482fd2*/
    *((_DWORD *)v62 + 9) = v63; /*0x482fd5*/
    *((_DWORD *)v62 + 0xA) = stru_B25AC4; /*0x482fde*/
    *((_DWORD *)v62 + 0xB) = MEMORY[0xB25AC8]; /*0x482fe7*/
    v65 = MEMORY[0xB25ACC]; /*0x482fea*/
    *((_DWORD *)v62 + 0x15) = ++v64; /*0x482ff3*/
    *((_DWORD *)v62 + 0xC) = v65; /*0x482ff6*/
    *((_DWORD *)v62 + 0x10) = stru_B25AC4; /*0x482fff*/
    *((_DWORD *)v62 + 0x11) = MEMORY[0xB25AC8]; /*0x483008*/
    v66 = MEMORY[0xB25ACC]; /*0x48300b*/
    *((_DWORD *)v62 + 0x15) = v64 + 1; /*0x483014*/
    v105[0x98] = 6; /*0x48301a*/
    *((_DWORD *)v62 + 0x12) = v66; /*0x483022*/
    sub_405680(v60, (BSShaderProperty *)v62); /*0x483025*/
    v67 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x48302c*/
    v68 = (BSShaderProperty *)v67; /*0x483031*/
    v105[0x98] = 0xF; /*0x48303c*/
    if ( v67 ) /*0x483044*/
    {
      NiObjectNET::NiObjectNET(v67); /*0x483048*/
      v68->vtbl = &NiVertexColorProperty::`vftable'; /*0x48304d*/
      v68->member.super.flags = 8; /*0x483053*/
    }
    else
    {
      v68 = 0; /*0x48305b*/
    }
    v69 = (NiNode *)v85; /*0x48305d*/
    v68->member.super.flags &= 0xFFC7u; /*0x483061*/
    v105[0x98] = 6; /*0x483068*/
    sub_405680(v69, v68); /*0x483070*/
    v70 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x483077*/
    v105[0x98] = 0x10; /*0x483085*/
    if ( v70 ) /*0x48308d*/
      v71 = (BSShaderProperty *)sub_482590(v70); /*0x483091*/
    else
      v71 = 0; /*0x483098*/
    v72 = (NiNode *)v85; /*0x48309a*/
    v71->member.super.flags |= 0xC00u; /*0x48309e*/
    v105[0x98] = 6; /*0x4830a5*/
    sub_405680(v72, v71); /*0x4830ad*/
    p_unk24 = (Ni2DBuffer **)&v102->unk24; /*0x4830b6*/
    if ( !v102->unk24 ) /*0x4830b9*/
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(MEMORY[0xB42F50], renderer, 0xE); /*0x4830cc*/
      NiSmartPointer_Set__(p_unk24, DefaultRenderTarget); /*0x4830d4*/
    }
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)MEMORY[0xB350D8] + 0x68))(MEMORY[0xB350D8], v103); /*0x4830e9*/
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)MEMORY[0xB350D8] + 0x60))(MEMORY[0xB350D8], &dword_B25AD0); /*0x4830fb*/
    NiNode_UpdateDynamicEffectState((NiNode *)v85); /*0x483101*/
    NiAVObject_InitializePropertyState((NiAVObject *)v85); /*0x48310a*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v85, 0.0, 1); /*0x48311b*/
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1); /*0x48312a*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v54, 0.0, 1); /*0x483139*/
    *((_BYTE *)BSShaderAccumulator_GetOrCreateGlobal() + 0x21E0) = 0; /*0x48314c*/
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v105, 0); /*0x483153*/
    v75 = *p_unk24; /*0x483158*/
    v105[0x98] = 0x11; /*0x48315a*/
    v76 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v75); /*0x483162*/
    NiRenderer_BeginScene(kClear_ALL, v76); /*0x48316a*/
    NiRenderer_CullAndRenderScene((NiCamera *)v54, (SceneGraph *)v85, (NiCullingProcess *)v105, 0); /*0x48317f*/
    NiRenderer_EndScene(); /*0x483187*/
    InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)*p_unk24); /*0x48318e*/
    SetTextureCanopyShadowMap(InnerTexture); /*0x483194*/
    *((_BYTE *)BSShaderAccumulator_GetOrCreateGlobal() + 0x21E0) = 1; /*0x4831a1*/
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)MEMORY[0xB350D8] + 0x60))(MEMORY[0xB350D8], v103); /*0x4831b8*/
    v105[0x98] = 6; /*0x4831c1*/
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v105); /*0x4831c9*/
    v105[0x98] = 5; /*0x4831d2*/
    if ( !InterlockedDecrement((volatile LONG *)(v57 + 4)) ) /*0x4831da*/
      (**(void (__thiscall ***)(UInt32, int))v57)(v57, 1); /*0x4831ec*/
    v42 = InterlockedDecrement; /*0x4831f0*/
    v105[0x98] = 4; /*0x4831f6*/
    if ( v54 ) /*0x4831fe*/
    {
      if ( !v42((volatile LONG *)(v54 + 4)) ) /*0x483204*/
        (**(void (__thiscall ***)(UInt32, int))v54)(v54, 1); /*0x483212*/
    }
    v78 = (void (__thiscall ***)(_DWORD, int))v93; /*0x483214*/
    v105[0x98] = 3; /*0x48321a*/
    if ( v93 ) /*0x483222*/
    {
      if ( !v42((volatile LONG *)(v93 + 4)) ) /*0x483228*/
        (**v78)(v78, 1); /*0x483236*/
    }
    v79 = v92; /*0x483238*/
    v105[0x98] = 2; /*0x48323e*/
    if ( v92 ) /*0x483246*/
    {
      if ( !v42((volatile LONG *)&v92->members) ) /*0x48324c*/
        v79->vtbl->super.super.super.Destructor((NiRefObject *)v79, 1); /*0x48325a*/
    }
    v105[0x98] = 1; /*0x483260*/
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v53->members)); /*0x483268*/
    if ( *(float *)&result == 0.0 ) /*0x48326c*/
    {
      vtbl = (NiNodeVtbl *)v53->vtbl; /*0x48326e*/
      v45 = v53; /*0x483271*/
LABEL_104:
      *(float *)&result = COERCE_FLOAT(((int (__thiscall *)(void *, int))vtbl->super.super.super.Destructor)(v45, 1)); /*0x483273*/
    }
  }
LABEL_105:
  v80 = (int (__thiscall ***)(_DWORD, int))v85; /*0x483279*/
  v105[0x98] = 0; /*0x48327f*/
  if ( v85 ) /*0x483287*/
  {
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v85 + 4))); /*0x48328d*/
    if ( *(float *)&result == 0.0 ) /*0x483291*/
      *(float *)&result = COERCE_FLOAT((**v80)(v80, 1)); /*0x48329b*/
  }
  v81 = (NiFrustum *(__thiscall ***)(_DWORD, int))v87; /*0x48329d*/
  *(_DWORD *)&v105[0x98] = 0xFFFFFFFF; /*0x4832a3*/
  if ( v87 ) /*0x4832ae*/
  {
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v87 + 4))); /*0x4832b4*/
    if ( *(float *)&result == 0.0 ) /*0x4832b8*/
      *(float *)&result = COERCE_FLOAT((**v81)(v81, 1)); /*0x4832c2*/
  }
  return result; /*0x483301*/
}
