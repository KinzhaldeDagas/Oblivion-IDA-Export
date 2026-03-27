NiFrustum *__thiscall ShadowCanopyPass(GridCellArray *this)
{
  NiFrustum *result; // eax
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
  _WORD *v23; // eax
  Ni2DBuffer *v24; // eax
  NiTexturingProperty *v25; // edi
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
  SceneGraph *(__thiscall ***v81)(_DWORD, int); // esi
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
  _WORD *v95; // [esp+84h] [ebp-E8h]
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

  v102 = this;
  v87 = 0;
  *(_DWORD *)&v105[0x98] = 5;
  v85 = 0;
  v98 = 0;
  v92 = 0;
  v93 = 0;
  v99 = 0;
  *(float *)&result = COERCE_FLOAT(NiFrustum::SetOrtho(&v104, 0));
  v100 = 0;
  v3 = byte_B06CBC == 0;
  v103[0] = 0.0;
  size = this->size;
  v103[1] = 0.0;
  v103[2] = 0.0;
  v105[0x98] = 6;
  v103[3] = 0.0;
  v101 = size;
  v84 = 1;
  v83 = 1;
  byte_B06A28 = 0;
  if ( v3 )
    return result;
  result = (NiFrustum *)(this->size << 0xC);
  v5 = (this->size & 0x80000) != 0;
  v86 = *(float *)&result;
  v6 = (double)(int)result;
  if ( v5 )
    v6 = v6 + flt_A2FC78;
  v86 = v6;
  v7 = v86;
  v8 = dbl_A2FAA0;
  v86 = dbl_A30F70 - v86 * v8;
  v9 = v86;
  v86 = this->posX + v86;
  v10 = v9 + this->posY;
  dword_B42F40 |= 0x20u;
  v94 = v10;
  flt_B44EE8 = v86;
  flt_B44EEC = v94;
  v11 = v7;
  v12 = v8;
  flt_B44EF4 = v11;
  if ( *(float *)&size == 0.0 || !dword_B350D8 )
  {
    v82 = CanopySadowMap;
    dword_B42F40 &= ~0x20u;
    if ( v82 )
    {
      *(float *)&result = COERCE_FLOAT(InterlockedDecrement((volatile LONG *)&v82->member));
      if ( *(float *)&result == 0.0 )
        *(float *)&result = COERCE_FLOAT(
                              ((int (__thiscall *)(NiRenderedTexture *, int))v82->__vftable->super.super.super.Destructor)(
                                v82,
                                1));
      CanopySadowMap = 0;
    }
    return result;
  }
  v86 = *(float *)&size;
  v13 = (double)size;
  if ( size < 0 )
    v13 = v13 + flt_A2FC78;
  v86 = v12 * v13;
  v94 = v86 * dbl_A3D360;
  v90 = v94;
  v89 = v94;
  v91 = 0.0;
  v14 = (NiNode *)FormHeapAlloc(0xDCu);
  v88 = v14;
  v105[0x98] = 7;
  if ( v14 )
    v15 = NiNode::NiNode(v14, 0);
  else
    v15 = 0;
  v105[0x98] = 6;
  NiSmartPointer_Set__((Ni2DBuffer **)&v85, (Ni2DBuffer *)v15);
  v16 = (float *)FormHeapAlloc(0x30u);
  *v16 = 0.0;
  v16[1] = 0.0;
  v16[2] = 0.0;
  v16[3] = 1.0;
  v16[4] = 0.0;
  v16[5] = 0.0;
  v16[6] = 1.0;
  v16[7] = 1.0;
  v16[8] = 0.0;
  v16[9] = 0.0;
  v16[0xA] = 1.0;
  v16[0xB] = 0.0;
  v17 = (_DWORD *)FormHeapAlloc(0x30u);
  v17[9] = dword_B258E8;
  v17[0xA] = dword_B258EC;
  v18 = dword_B258F0;
  v17[0xB] = dword_B258F0;
  v19 = v17[9];
  v20 = v17[0xA];
  v17[6] = v19;
  v17[3] = v19;
  *v17 = v19;
  v17[7] = v20;
  v17[4] = v20;
  v17[1] = v20;
  v17[8] = v18;
  v17[5] = v18;
  v17[2] = v18;
  v21 = (float *)FormHeapAlloc(0x20u);
  *v21 = 0.0;
  v21[1] = 0.0;
  v21[2] = 1.0;
  v21[3] = 0.0;
  v21[4] = 1.0;
  v21[5] = 1.0;
  v21[6] = 0.0;
  v21[7] = 1.0;
  v22 = (_WORD *)FormHeapAlloc(8u);
  *v22 = 1;
  v22[1] = 0;
  v22[2] = 2;
  v22[3] = 3;
  v88 = (NiNode *)FormHeapAlloc(2u);
  LOWORD(v88->vtbl) = 4;
  v23 = (_WORD *)FormHeapAlloc(0x50u);
  v95 = v23;
  v105[0x98] = 8;
  if ( v23 )
    v24 = (Ni2DBuffer *)sub_719CB0(v23, 4, (int)v16, (int)v17, 0, (int)v21, 1, 0, 2, 1, (int)v88, (int)v22);
  else
    v24 = 0;
  v105[0x98] = 6;
  NiSmartPointer_Set__((Ni2DBuffer **)&v93, v24);
  v88 = 0;
  if ( !v101 )
  {
LABEL_51:
    v39 = **(_DWORD **)(sub_4A41E0() + 0x20);
    if ( v39 )
      v40 = *(NiRenderedTexture **)(v39 + 8);
    else
      v40 = 0;
    *(float *)&result = COERCE_FLOAT((int)SetTextureCanopyShadowMap(v40));
    v41 = (int (__thiscall ***)(_DWORD, int))v93;
    v42 = InterlockedDecrement;
    v105[0x98] = 3;
    if ( v93 )
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v93 + 4)));
      if ( *(float *)&result == 0.0 )
        *(float *)&result = COERCE_FLOAT((**v41)(v41, 1));
    }
    v43 = v92;
    v105[0x98] = 2;
    if ( v92 )
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v92->members));
      if ( *(float *)&result == 0.0 )
      {
        vtbl = v43->vtbl;
        v45 = v43;
        goto LABEL_104;
      }
    }
    goto LABEL_105;
  }
  do
  {
    v25 = (NiTexturingProperty *)v87;
    v26 = v92;
    v95 = 0;
    do
    {
      if ( v25 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v25->super) )
          (*(void (__thiscall **)(NiTexturingProperty *, int))v25->vtbl)(v25, 1);
        v25 = 0;
        v87 = 0;
      }
      cell = (ExtraDataList *)v102->grid[(unsigned int)v95 + (_DWORD)v88 * v102->size].cell;
      if ( cell )
      {
        v28 = sub_4CAFF0(cell, &v96, &v97);
        v29 = v96;
        if ( v96 )
        {
          if ( v97 )
          {
            if ( *(_DWORD *)(v97 + 4) )
            {
              v30 = (*((int (__thiscall **)(NiDX9TextureData *))v96->member.super.rendererData->_vtbl + 5))(v96->member.super.rendererData);
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v30 + 0x50))(v30, 0);
              *(_DWORD *)(v97 + 4) = 0;
              v29 = v96;
            }
          }
        }
        if ( v28 == (BSExtraData *)1 )
        {
          if ( !v29 )
            goto LABEL_36;
          v31 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
          v105[0x98] = 9;
          if ( v31 )
            v32 = NiTexturingProperty::NiTexturingProperty(v31);
          else
            v32 = 0;
          v105[0x98] = 6;
          NiSmartPointer_Set__((Ni2DBuffer **)&v87, (Ni2DBuffer *)v32);
          v25 = (NiTexturingProperty *)v87;
          NiTexturingProperty::SetUnk08((NiTexturingProperty *)v87, v96);
          sub_405870(v25, 0);
          v84 = 0;
        }
        else
        {
          if ( v28 != (BSExtraData *)2 )
            goto LABEL_36;
          v33 = sub_4A41E0();
          if ( v25 != (NiTexturingProperty *)v33 )
          {
            v25 = (NiTexturingProperty *)v33;
            v87 = v33;
            if ( v33 )
              InterlockedIncrement((volatile LONG *)(v33 + 4));
          }
        }
        v83 = 0;
      }
LABEL_36:
      if ( v25 )
      {
        v34 = (NiAVObject *)FormHeapAlloc(0xC0u);
        v105[0x98] = 0xA;
        if ( v34 )
          v35 = (NiNode *)sub_719A20(v34, v93);
        else
          v35 = 0;
        v105[0x98] = 6;
        if ( v26 != v35 )
        {
          if ( v26 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v26->members) )
              v26->vtbl->super.super.super.Destructor((NiRefObject *)v26, 1);
          }
          v26 = v35;
          v92 = v35;
          if ( v35 )
            InterlockedIncrement((volatile LONG *)&v35->members);
        }
        v36 = v90;
        v37 = v91;
        v26->members.super.m_localTransform.pos.x = v89;
        v26->members.super.m_localTransform.pos.y = v36;
        v26->members.super.m_localTransform.pos.z = v37;
        sub_405680(v26, (BSShaderProperty *)v25);
        (*(void (__thiscall **)(UInt32, NiNode *, int))(*(_DWORD *)v85 + 0x84))(v85, v26, 1);
      }
      else
      {
        v84 = 0;
      }
      v38 = (unsigned int)v95 + 1 < v101;
      v95 = (_WORD *)((char *)v95 + 1);
      v90 = v90 + 1.0;
    }
    while ( v38 );
    result = (NiFrustum *)((char *)&v88->vtbl + 1);
    v38 = (unsigned int)&v88->vtbl + 1 < v101;
    v89 = v89 + 1.0;
    v88 = (NiNode *)((char *)v88 + 1);
    v90 = v94;
  }
  while ( v38 );
  if ( v84 )
    goto LABEL_51;
  if ( v83 )
  {
    v46 = CanopySadowMap;
    dword_B42F40 &= ~0x20u;
    v42 = InterlockedDecrement;
    if ( v46 )
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v46->member));
      if ( *(float *)&result == 0.0 )
        *(float *)&result = COERCE_FLOAT(
                              ((int (__thiscall *)(NiRenderedTexture *, int))v46->__vftable->super.super.super.Destructor)(
                                v46,
                                1));
      CanopySadowMap = 0;
    }
    v47 = (int (__thiscall ***)(_DWORD, int))v93;
    v105[0x98] = 3;
    if ( v93 )
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v93 + 4)));
      if ( *(float *)&result == 0.0 )
        *(float *)&result = COERCE_FLOAT((**v47)(v47, 1));
    }
    v48 = v92;
    v105[0x98] = 2;
    if ( v92 )
    {
      *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v92->members));
      if ( *(float *)&result == 0.0 )
      {
        vtbl = v48->vtbl;
        v45 = v48;
        goto LABEL_104;
      }
    }
  }
  else
  {
    v49 = (NiNode *)FormHeapAlloc(0xDCu);
    v105[0x98] = 0xB;
    if ( v49 )
      v50 = NiNode::NiNode(v49, 0);
    else
      v50 = 0;
    v105[0x98] = 6;
    NiSmartPointer_Set__((Ni2DBuffer **)&v98, (Ni2DBuffer *)v50);
    v51 = (NiCamera *)FormHeapAlloc(0x124u);
    v105[0x98] = 0xC;
    if ( v51 )
      v52 = sub_70D590(v51);
    else
      v52 = 0;
    v105[0x98] = 6;
    NiSmartPointer_Set__((Ni2DBuffer **)&v99, (Ni2DBuffer *)v52);
    v53 = (NiAVObject *)v98;
    v54 = v99;
    (*(void (__thiscall **)(UInt32, UInt32, int))(*(_DWORD *)v98 + 0x84))(v98, v99, 1);
    v89 = 0.0;
    v90 = 0.0;
    v53->members.m_localTransform.pos.x = 0.0;
    v91 = 1.0;
    v53->members.m_localTransform.pos.y = 0.0;
    v53->members.m_localTransform.pos.z = 1.0;
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1);
    sub_70C340((float *)v54, &Vector3_InitValue_, (float *)&dword_B258DC);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v54, 0.0, 1);
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1);
    v104.Left = v94;
    v104.Bottom = v94;
    v104.Ortho = 1;
    v104.Right = v86;
    v104.Top = v86;
    v104.Near = 1.0;
    v104.Far = fConstant_2;
    Camera_SetFrustum((NiCamera *)v54, (int)&v104);
    v55 = (NiLight *)FormHeapAlloc(0x114u);
    v105[0x98] = 0xD;
    if ( v55 )
      v56 = sub_719760(v55);
    else
      v56 = 0;
    v105[0x98] = 6;
    NiSmartPointer_Set__((Ni2DBuffer **)&v100, (Ni2DBuffer *)v56);
    v57 = v100;
    *(_DWORD *)(v100 + 0xE0) = dword_B25AC4;
    *(_DWORD *)(v57 + 0xE4) = dword_B25AC8;
    v58 = dword_B25ACC;
    ++*(_DWORD *)(v57 + 0xB8);
    *(_DWORD *)(v57 + 0xE8) = v58;
    *(_DWORD *)(v57 + 0xEC) = dword_B25AC4;
    *(_DWORD *)(v57 + 0xF0) = dword_B25AC8;
    v59 = dword_B25ACC;
    ++*(_DWORD *)(v57 + 0xB8);
    v60 = (NiNode *)v85;
    *(_DWORD *)(v57 + 0xF4) = v59;
    sub_708E40((_DWORD *)v57, (int)v60);
    v61 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
    v105[0x98] = 0xE;
    if ( v61 )
      v62 = NiMaterialProperty::NiMaterialProperty(v61);
    else
      v62 = 0;
    *((_DWORD *)v62 + 7) = dword_B25AC4;
    *((_DWORD *)v62 + 8) = dword_B25AC8;
    v63 = dword_B25ACC;
    v64 = ++*((_DWORD *)v62 + 0x15);
    *((_DWORD *)v62 + 9) = v63;
    *((_DWORD *)v62 + 0xA) = dword_B25AC4;
    *((_DWORD *)v62 + 0xB) = dword_B25AC8;
    v65 = dword_B25ACC;
    *((_DWORD *)v62 + 0x15) = ++v64;
    *((_DWORD *)v62 + 0xC) = v65;
    *((_DWORD *)v62 + 0x10) = dword_B25AC4;
    *((_DWORD *)v62 + 0x11) = dword_B25AC8;
    v66 = dword_B25ACC;
    *((_DWORD *)v62 + 0x15) = v64 + 1;
    v105[0x98] = 6;
    *((_DWORD *)v62 + 0x12) = v66;
    sub_405680(v60, (BSShaderProperty *)v62);
    v67 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v68 = (BSShaderProperty *)v67;
    v105[0x98] = 0xF;
    if ( v67 )
    {
      NiObjectNET::NiObjectNET(v67);
      v68->vtbl = &NiVertexColorProperty::`vftable';
      v68->member.super.flags = 8;
    }
    else
    {
      v68 = 0;
    }
    v69 = (NiNode *)v85;
    v68->member.super.flags &= 0xFFC7u;
    v105[0x98] = 6;
    sub_405680(v69, v68);
    v70 = (NiObjectNET *)FormHeapAlloc(0x24u);
    v105[0x98] = 0x10;
    if ( v70 )
      v71 = (BSShaderProperty *)sub_482590(v70);
    else
      v71 = 0;
    v72 = (NiNode *)v85;
    v71->member.super.flags |= 0xC00u;
    v105[0x98] = 6;
    sub_405680(v72, v71);
    p_unk24 = (Ni2DBuffer **)&v102->unk24;
    if ( !v102->unk24 )
    {
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, g_Renderer, 0xE);
      NiSmartPointer_Set__(p_unk24, DefaultRenderTarget);
    }
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_B350D8 + 0x68))(dword_B350D8, v103);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_B350D8 + 0x60))(dword_B350D8, &dword_B25AD0);
    NiNode_UpdateDynamicEffectState((NiNode *)v85);
    NiAVObject_InitializePropertyState((NiAVObject *)v85);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v85, 0.0, 1);
    NiAVObject_UpdateNiAVObject(v53, 0.0, 1);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v54, 0.0, 1);
    *((_BYTE *)InitBSShaderAccumulator() + 0x21E0) = 0;
    NiCullingProcess_NiCullingProcess((NiCullingProcess *)v105, 0);
    v75 = *p_unk24;
    v105[0x98] = 0x11;
    v76 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v75);
    NiRenderer_BeginScene(kClear_ALL, v76);
    sub_70C0B0((NiCamera *)v54, (SceneGraph *)v85, (NiCullingProcess *)v105, 0);
    NiRenderer_EndScene();
    InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)*p_unk24);
    SetTextureCanopyShadowMap(InnerTexture);
    *((_BYTE *)InitBSShaderAccumulator() + 0x21E0) = 1;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_B350D8 + 0x60))(dword_B350D8, v103);
    v105[0x98] = 6;
    BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v105);
    v105[0x98] = 5;
    if ( !InterlockedDecrement((volatile LONG *)(v57 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v57)(v57, 1);
    v42 = InterlockedDecrement;
    v105[0x98] = 4;
    if ( v54 )
    {
      if ( !v42((volatile LONG *)(v54 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v54)(v54, 1);
    }
    v78 = (void (__thiscall ***)(_DWORD, int))v93;
    v105[0x98] = 3;
    if ( v93 )
    {
      if ( !v42((volatile LONG *)(v93 + 4)) )
        (**v78)(v78, 1);
    }
    v79 = v92;
    v105[0x98] = 2;
    if ( v92 )
    {
      if ( !v42((volatile LONG *)&v92->members) )
        v79->vtbl->super.super.super.Destructor((NiRefObject *)v79, 1);
    }
    v105[0x98] = 1;
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)&v53->members));
    if ( *(float *)&result == 0.0 )
    {
      vtbl = (NiNodeVtbl *)v53->vtbl;
      v45 = v53;
LABEL_104:
      *(float *)&result = COERCE_FLOAT(((int (__thiscall *)(void *, int))vtbl->super.super.super.Destructor)(v45, 1));
    }
  }
LABEL_105:
  v80 = (int (__thiscall ***)(_DWORD, int))v85;
  v105[0x98] = 0;
  if ( v85 )
  {
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v85 + 4)));
    if ( *(float *)&result == 0.0 )
      *(float *)&result = COERCE_FLOAT((**v80)(v80, 1));
  }
  v81 = (SceneGraph *(__thiscall ***)(_DWORD, int))v87;
  *(_DWORD *)&v105[0x98] = 0xFFFFFFFF;
  if ( v87 )
  {
    *(float *)&result = COERCE_FLOAT(v42((volatile LONG *)(v87 + 4)));
    if ( *(float *)&result == 0.0 )
      *(float *)&result = COERCE_FLOAT((**v81)(v81, 1));
  }
  return result;
}
