LONG __userpurge WaterDisplacementPass@<eax>(
        void *this@<ecx>,
        double st7_0@<st0>,
        NiScreenElements *a3,
        int *a4,
        Ni2DBuffer **a5,
        char a6)
{
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  double v10; // st7
  double v11; // st6
  NiDX9Renderer *v12; // ecx
  NiRenderTargetGroup *(__thiscall *GetDefaultRTGroup)(NiRenderer *); // eax
  int v14; // esi
  int v15; // ecx
  int v16; // edi
  double v17; // st7
  double v18; // st6
  bool v19; // zf
  double v20; // st7
  double v21; // st6
  Ni2DBuffer *DefaultRenderTarget; // eax
  Ni2DBuffer *v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  double v27; // st6
  int v28; // ecx
  int v29; // eax
  double v30; // st6
  double v31; // st7
  float v32; // edi
  float v33; // eax
  float v34; // esi
  BSRenderedTexture *v35; // ecx
  NiRenderTargetGroup *v36; // eax
  NiDX9Renderer *v37; // ecx
  NiScreenElements *v38; // edi
  NiRenderTargetGroup *v39; // eax
  NiDX9Renderer *v40; // ecx
  NiRenderTargetGroup *v41; // eax
  ShaderDefinition *ShaderDefinition; // eax
  float *v43; // eax
  float *v44; // ebp
  double v45; // st6
  double v46; // st6
  int v47; // ecx
  float v48; // eax
  int v49; // eax
  float v50; // edx
  float v51; // ecx
  int v52; // edx
  float v53; // ecx
  NiTriShapeData *v54; // eax
  NiTriShapeData *v55; // esi
  NiTriShape *v56; // eax
  NiTriShape *v57; // eax
  NiObjectNET *v58; // eax
  BSShaderProperty *v59; // eax
  NiNode *v60; // ecx
  double v61; // st7
  double v62; // rt1
  int v63; // ecx
  int v64; // eax
  int v65; // ebp
  NiDX9Renderer *v66; // ecx
  int v67; // ebp
  int v68; // edi
  int v69; // esi
  int v70; // edi
  int v71; // esi
  NiRenderTargetGroup *v72; // eax
  int v73; // edi
  int v74; // esi
  double v75; // st7
  Ni2DBuffer *v76; // eax
  BSRenderedTexture *v77; // ecx
  NiRenderTargetGroup *v78; // eax
  int v79; // esi
  NiRenderTargetGroup *v80; // eax
  float v81; // edi
  LONG result; // eax
  int (__thiscall ***v83)(_DWORD, int); // esi
  NiDX9Renderer *v84; // [esp+Ch] [ebp-9Ch]
  char v85; // [esp+27h] [ebp-81h]
  float v86; // [esp+28h] [ebp-80h]
  int v87; // [esp+28h] [ebp-80h]
  int v88; // [esp+2Ch] [ebp-7Ch]
  int v89; // [esp+2Ch] [ebp-7Ch]
  float v90; // [esp+2Ch] [ebp-7Ch]
  void *v91; // [esp+38h] [ebp-70h]
  double v92; // [esp+38h] [ebp-70h]
  float v93; // [esp+38h] [ebp-70h]
  float v94; // [esp+38h] [ebp-70h]
  float v95; // [esp+40h] [ebp-68h] BYREF
  float v96; // [esp+44h] [ebp-64h]
  float v97; // [esp+48h] [ebp-60h]
  float v98; // [esp+4Ch] [ebp-5Ch]
  float v99; // [esp+50h] [ebp-58h]
  int a1; // [esp+54h] [ebp-54h]
  float v101; // [esp+58h] [ebp-50h]
  BSShader *shader; // [esp+5Ch] [ebp-4Ch]
  Ni2DBuffer **v103; // [esp+60h] [ebp-48h]
  UInt16 *v104; // [esp+64h] [ebp-44h]
  float v105; // [esp+68h] [ebp-40h]
  _DWORD v106[8]; // [esp+6Ch] [ebp-3Ch] BYREF
  float v107; // [esp+8Ch] [ebp-1Ch] BYREF
  float v108; // [esp+90h] [ebp-18h]
  int v109; // [esp+94h] [ebp-14h]
  unsigned int v110; // [esp+A4h] [ebp-4h]

  v103 = a5; /*0x7de8ec*/
  v7 = ((int (__usercall *)@<eax>(NiDX9Renderer *@<ecx>, double@<st0>))renderer->__vftable->super.GetDefaultRTGroup)( /*0x7de905*/
         renderer,
         st7_0);
  v8 = *(_DWORD *)(*a4 + 0x20); /*0x7de90a*/
  if ( v8 ) /*0x7de90f*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x4C))(v8); /*0x7de918*/
  else
    v9 = 0; /*0x7de91c*/
  v88 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0); /*0x7de92b*/
  v10 = (double)v88; /*0x7de92f*/
  if ( v88 < 0 ) /*0x7de933*/
    v10 = v10 + flt_A2FC78; /*0x7de935*/
  v11 = (double)v9; /*0x7de941*/
  if ( v9 < 0 ) /*0x7de945*/
    v11 = v11 + flt_A2FC78; /*0x7de947*/
  v12 = renderer; /*0x7de94f*/
  GetDefaultRTGroup = renderer->__vftable->super.GetDefaultRTGroup; /*0x7de957*/
  v99 = v10 / v11; /*0x7de95a*/
  v14 = (int)GetDefaultRTGroup((NiRenderer *)v12); /*0x7de960*/
  v15 = *(_DWORD *)(*a4 + 0x20); /*0x7de965*/
  if ( v15 ) /*0x7de96a*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x50))(v15); /*0x7de973*/
  else
    v16 = 0; /*0x7de977*/
  v89 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x50))(v14, 0); /*0x7de986*/
  v17 = (double)v89; /*0x7de98a*/
  if ( v89 < 0 ) /*0x7de98e*/
    v17 = v17 + flt_A2FC78; /*0x7de990*/
  v18 = (double)v16; /*0x7de99c*/
  if ( v16 < 0 ) /*0x7de9a0*/
    v18 = v18 + flt_A2FC78; /*0x7de9a2*/
  v19 = unk_B42E96 == 0; /*0x7de9a8*/
  v101 = v17 / v18; /*0x7de9b1*/
  v95 = 0.0; /*0x7de9b7*/
  v96 = 1.0; /*0x7de9bd*/
  v97 = 1.0; /*0x7de9c1*/
  v20 = 1.0; /*0x7de9c5*/
  v98 = 0.0; /*0x7de9c7*/
  if ( !v19 ) /*0x7de9cb*/
  {
    v99 = 1.0; /*0x7de9cd*/
    v101 = 1.0; /*0x7de9d1*/
  }
  v19 = LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) == 0; /*0x7de9e2*/
  a1 = OB_RendererGlobalState_010201A0.pad_1DB[1] != 0 ? 7 : 0;
  if ( v19 ) /*0x7de9ed*/
    v21 = flt_A47E78; /*0x7de9f7*/
  else
    v21 = flt_A91B4C; /*0x7de9ef*/
  *((float *)this + 0x48) = v21; /*0x7dea03*/
  if ( !*((_DWORD *)this + 0x40) ) /*0x7dea0b*/
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7dea20*/
                                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                          unk_B43104,
                                          7);
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x40, DefaultRenderTarget); /*0x7dea28*/
    v20 = 1.0; /*0x7dea2d*/
  }
  if ( !*((_DWORD *)this + 0x41) ) /*0x7dea2f*/
  {
    v23 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7dea4d*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                          unk_B43104,
                          7);
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x41, v23); /*0x7dea55*/
    v20 = 1.0; /*0x7dea5a*/
  }
  v24 = *a4; /*0x7dea5e*/
  v95 = 0.0; /*0x7dea61*/
  v98 = 0.0; /*0x7dea65*/
  v96 = v20; /*0x7dea69*/
  v97 = v20; /*0x7dea6d*/
  v25 = *(_DWORD *)(v24 + 0x20); /*0x7dea71*/
  if ( v25 ) /*0x7dea76*/
  {
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x4C))(v25); /*0x7dea7f*/
    v20 = 1.0; /*0x7dea81*/
  }
  else
  {
    v26 = 0; /*0x7dea85*/
  }
  v27 = (double)v26; /*0x7dea8d*/
  if ( v26 < 0 ) /*0x7dea91*/
    v27 = v27 + flt_A2FC78; /*0x7dea93*/
  v28 = *(_DWORD *)(*a4 + 0x20); /*0x7deaa2*/
  v105 = dbl_A2FAA0 / v27; /*0x7deaa7*/
  if ( v28 ) /*0x7deaab*/
  {
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x50))(v28); /*0x7deab4*/
    v20 = 1.0; /*0x7deab6*/
  }
  else
  {
    v29 = 0; /*0x7deaba*/
  }
  v30 = (double)v29; /*0x7deac2*/
  if ( v29 < 0 ) /*0x7deac6*/
    v30 = v30 + flt_A2FC78; /*0x7deac8*/
  v90 = dbl_A2FAA0 / v30; /*0x7deadc*/
  if ( a6 ) /*0x7deae0*/
  {
    v96 = v20; /*0x7deae2*/
  }
  else
  {
    v96 = v99; /*0x7deaee*/
    v20 = v101; /*0x7deaf2*/
  }
  v19 = unk_B42D78 == 0; /*0x7deaf6*/
  v97 = v20; /*0x7deafc*/
  if ( v19 ) /*0x7deb00*/
    v20 = 0.0; /*0x7deb11*/
  else
    ((void (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x7deb06*/
  v86 = v20; /*0x7deb13*/
  v31 = v86; /*0x7deb17*/
  v87 = 0; /*0x7deb1b*/
  *((float *)this + 0x44) = v31; /*0x7deb1f*/
  *((float *)this + 0x47) = *((float *)this + 0x47) + v31; /*0x7deb2d*/
  *((float *)this + 0x49) = v31 + *((float *)this + 0x49); /*0x7deb39*/
  v19 = LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) == 0; /*0x7deb3f*/
  v110 = 0; /*0x7deb46*/
  if ( v19 ) /*0x7deb4d*/
  {
    v38 = a3; /*0x7dec55*/
LABEL_58:
    v41 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*a4); /*0x7dec59*/
    NiRenderer_BeginScene(kClear_NONE, v41); /*0x7dec64*/
    goto LABEL_59; /*0x7dec64*/
  }
  v32 = *(float *)a4; /*0x7deb53*/
  v33 = OB_ShaderConstantStorage_010201A0[0x65]; /*0x7deb56*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x65]) != *a4 ) /*0x7deb5d*/
  {
    if ( v33 != 0.0 ) /*0x7deb61*/
    {
      v34 = OB_ShaderConstantStorage_010201A0[0x65]; /*0x7deb63*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v33) + 4)) && v34 != 0.0 ) /*0x7deb75*/
        (**(void (__thiscall ***)(float, int))LODWORD(v34))(COERCE_FLOAT(LODWORD(v34)), 1); /*0x7deb7f*/
    }
    OB_ShaderConstantStorage_010201A0[0x65] = v32; /*0x7deb83*/
    if ( v32 != 0.0 ) /*0x7deb89*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v32) + 4)); /*0x7deb8f*/
  }
  v35 = *((BSRenderedTexture **)this + 0x40); /*0x7deb95*/
  *((_DWORD *)this + 0x3D) = 7; /*0x7deb9b*/
  v36 = BSRenderedTexture::UseTextureToRender(v35); /*0x7deba5*/
  NiRenderer_BeginScene((ClearFlags)a1, v36); /*0x7debb0*/
  v37 = renderer; /*0x7debb5*/
  if ( (renderer->member.super.SceneState1 == 1 || v37->member.super.SceneState2 == 1) && v37->member.super.IsReady == 1 ) /*0x7debd9*/
    v37->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v37, (NiViewport *)&v95); /*0x7debe8*/
  v38 = a3; /*0x7debf0*/
  sub_709C60(a3); /*0x7debf7*/
  NiRenderer_EndScene(); /*0x7debfc*/
  if ( !LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7dec08*/
    goto LABEL_58; /*0x7dec08*/
  v39 = BSRenderedTexture::UseTextureToRender(*((BSRenderedTexture **)this + 0x40)); /*0x7dec10*/
  NiRenderer_BeginScene(kClear_NONE, v39); /*0x7dec18*/
  v40 = renderer; /*0x7dec1d*/
  if ( (renderer->member.super.SceneState1 == 1 || v40->member.super.SceneState2 == 1) && v40->member.super.IsReady == 1 ) /*0x7dec42*/
    v40->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v40, (NiViewport *)&v95); /*0x7dec51*/
LABEL_59:
  if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7dec71*/
  {
    if ( BYTE1(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7dec7e*/
    {
      *((float *)this + 0x26) = 1.0; /*0x7dec8f*/
      *((float *)this + 0x25) = 1.0; /*0x7dec97*/
      *((_DWORD *)this + 0x3D) = 0; /*0x7dec9d*/
      shader = 0; /*0x7deca5*/
      *((float *)this + 0x27) = 0.0; /*0x7deca9*/
      *((float *)this + 0x28) = 0.0; /*0x7decaf*/
      ShaderDefinition = GetShaderDefinition(0x14u); /*0x7decb5*/
      if ( ShaderDefinition ) /*0x7decbf*/
        shader = ShaderDefinition->shader; /*0x7decc4*/
      if ( !*((_DWORD *)this + 0x24) ) /*0x7decc8*/
      {
        v43 = (float *)FormHeapAlloc(0x30u); /*0x7decd6*/
        v107 = 0.0; /*0x7decdd*/
        v44 = v43; /*0x7dece4*/
        v45 = flt_A34BA0; /*0x7dece6*/
        v108 = flt_A34BA0; /*0x7decf3*/
        *v43 = 0.0; /*0x7decfa*/
        *(float *)&v109 = 0.0; /*0x7ded06*/
        v43[1] = v108; /*0x7ded0d*/
        v107 = 1.0; /*0x7ded19*/
        v43[2] = *(float *)&v109; /*0x7ded20*/
        v108 = v45; /*0x7ded2e*/
        v43[3] = v107; /*0x7ded35*/
        v43[4] = v108; /*0x7ded3f*/
        *(float *)&v109 = 0.0; /*0x7ded42*/
        v43[5] = 0.0; /*0x7ded52*/
        v107 = 1.0; /*0x7ded55*/
        v46 = flt_A59E38; /*0x7ded63*/
        v43[6] = 1.0; /*0x7ded69*/
        v108 = v46; /*0x7ded6c*/
        v43[7] = v108; /*0x7ded7c*/
        *(float *)&v109 = 0.0; /*0x7ded7f*/
        v43[8] = 0.0; /*0x7deda2*/
        v47 = v109; /*0x7deda5*/
        v108 = v46; /*0x7dedac*/
        v48 = v108; /*0x7dedb3*/
        v44[9] = 0.0; /*0x7dedba*/
        v44[0xA] = v48; /*0x7dedbd*/
        *((_DWORD *)v44 + 0xB) = v47; /*0x7dedc0*/
        LODWORD(v107) = 0x10000; /*0x7dedca*/
        LODWORD(v108) = 2; /*0x7deddc*/
        v109 = 0x30002; /*0x7dedec*/
        v49 = FormHeapAlloc(0xCu); /*0x7dedfe*/
        v50 = v107; /*0x7dee05*/
        v107 = 0.0; /*0x7dee0c*/
        v51 = v108; /*0x7dee13*/
        v108 = 0.0; /*0x7dee1a*/
        *(float *)v49 = v50; /*0x7dee21*/
        v52 = v109; /*0x7dee23*/
        *(float *)(v49 + 4) = v51; /*0x7dee2a*/
        v53 = v108; /*0x7dee2d*/
        v104 = (UInt16 *)v49; /*0x7dee34*/
        *(_DWORD *)(v49 + 8) = v52; /*0x7dee38*/
        *(float *)v106 = v107; /*0x7dee44*/
        *(float *)&v106[1] = v53; /*0x7dee48*/
        *(float *)&v106[2] = v107; /*0x7dee4c*/
        *(float *)&v106[3] = v53; /*0x7dee50*/
        *(float *)&v106[4] = v107; /*0x7dee54*/
        *(float *)&v106[5] = v53; /*0x7dee58*/
        *(float *)&v106[6] = v107; /*0x7dee5c*/
        *(float *)&v106[7] = v53; /*0x7dee63*/
        v91 = (void *)FormHeapAlloc(0x20u); /*0x7dee6f*/
        qmemcpy(v91, v106, 0x20u); /*0x7dee80*/
        *(float *)&v54 = COERCE_FLOAT(FormHeapAlloc(0x58u)); /*0x7dee82*/
        v107 = *(float *)&v54; /*0x7dee8a*/
        LOBYTE(v110) = 1; /*0x7dee90*/
        if ( *(float *)&v54 == 0.0 ) /*0x7dee98*/
          v55 = 0; /*0x7deebc*/
        else
          v55 = NiTriShapeData_ConstructWithData(v54, 4u, (NiPoint3 *)v44, 0, 0, v91, 1, 0, 2u, v104); /*0x7deeb8*/
        LOBYTE(v110) = 0; /*0x7deec3*/
        *(float *)&v56 = COERCE_FLOAT(FormHeapAlloc(0xC0u)); /*0x7deecb*/
        v107 = *(float *)&v56; /*0x7deed3*/
        LOBYTE(v110) = 2; /*0x7deed9*/
        if ( *(float *)&v56 == 0.0 ) /*0x7deee1*/
          v57 = 0; /*0x7deeed*/
        else
          v57 = OB_NiTriShape_ctorWithData_010201A0(v56, v55); /*0x7deee6*/
        LOBYTE(v110) = 0; /*0x7deef1*/
        *((_DWORD *)this + 0x24) = v57; /*0x7deef9*/
        *(float *)&v58 = COERCE_FLOAT(FormHeapAlloc(0x24u)); /*0x7deeff*/
        v107 = *(float *)&v58; /*0x7def07*/
        LOBYTE(v110) = 3; /*0x7def0d*/
        if ( *(float *)&v58 == 0.0 ) /*0x7def15*/
          v59 = 0; /*0x7def20*/
        else
          v59 = (BSShaderProperty *)sub_482590(v58); /*0x7def19*/
        v59->member.super.flags |= 0xC00u; /*0x7def22*/
        v60 = *((NiNode **)this + 0x24); /*0x7def28*/
        LOBYTE(v110) = 0; /*0x7def2f*/
        sub_405680(v60, v59); /*0x7def37*/
        NiAVObject_InitializePropertyState(*((NiAVObject **)this + 0x24)); /*0x7def42*/
        NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x24), 0.0, 1); /*0x7def55*/
        v38 = a3; /*0x7def5a*/
      }
      NiGeometry_SetShader(*((NiGeometry **)this + 0x24), shader); /*0x7def69*/
      v61 = OB_ShaderConstantStorage_010201A0[0x61] - OB_ShaderConstantStorage_010201A0[0x66]; /*0x7def74*/
      OB_ShaderConstantStorage_010201A0[0x59] = OB_ShaderConstantStorage_010201A0[0x69] - v61; /*0x7def86*/
      v92 = OB_ShaderConstantStorage_010201A0[0x67] + OB_ShaderConstantStorage_010201A0[0x62]; /*0x7def98*/
      OB_ShaderConstantStorage_010201A0[0x5D] = OB_ShaderConstantStorage_010201A0[0x6A] - v92; /*0x7defa2*/
      OB_ShaderConstantStorage_010201A0[0x5B] = v61; /*0x7defa8*/
      v107 = -OB_ShaderConstantStorage_010201A0[0x5D]; /*0x7defb6*/
      v108 = OB_ShaderConstantStorage_010201A0[0x59]; /*0x7defc0*/
      sub_499020(&v107); /*0x7defc7*/
      v84 = renderer; /*0x7defd7*/
      v62 = kFaceGenVariationScale1_5; /*0x7defe0*/
      v107 = v107 * v62; /*0x7defe2*/
      v108 = v62 * v108; /*0x7deff0*/
      OB_ShaderConstantStorage_010201A0[0x5A] = v107; /*0x7deffe*/
      OB_ShaderConstantStorage_010201A0[0x5E] = v108; /*0x7df00b*/
      OB_ShaderConstantStorage_010201A0[0x5F] = v92; /*0x7df015*/
      v63 = *((_DWORD *)this + 0x24); /*0x7df01b*/
      if ( v63 ) /*0x7df023*/
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v63 + 0x84))(v63, v84); /*0x7df02d*/
      else
        sub_709C60(v38); /*0x7df036*/
    }
  }
  else
  {
    *((_DWORD *)this + 0x3D) = 1; /*0x7df040*/
    *((float *)this + 0x26) = OB_ShaderConstantStorage_010201A0[0x54]; /*0x7df04c*/
    *((float *)this + 0x25) = OB_ShaderConstantStorage_010201A0[0x54]; /*0x7df058*/
    v64 = Double_To_SInt32((double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x4D]) * *((float *)this + 0x47)); /*0x7df06a*/
    *((float *)this + 0x47) = 0.0; /*0x7df073*/
    if ( v64 > 0 ) /*0x7df079*/
    {
      v65 = v64; /*0x7df07f*/
      do /*0x7df111*/
      {
        v93 = (double)rand() / dbl_A3D5A8; /*0x7df094*/
        *((float *)this + 0x27) = v93 + v93 - dbl_A2F928; /*0x7df0a4*/
        v94 = (double)rand() / dbl_A3D5A8; /*0x7df0bd*/
        *((float *)this + 0x28) = v94 + v94 - dbl_A2F928; /*0x7df0cd*/
        v66 = renderer; /*0x7df0d3*/
        if ( (renderer->member.super.SceneState1 == 1 || v66->member.super.SceneState2 == 1) /*0x7df0f0*/
          && v66->member.super.IsReady == 1 )
        {
          v66->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v66, (NiViewport *)&v95); /*0x7df0ff*/
        }
        sub_709C60(v38); /*0x7df10a*/
        --v65; /*0x7df10f*/
      }
      while ( v65 ); /*0x7df111*/
    }
  }
  NiRenderer_EndScene(); /*0x7df117*/
  *((float *)this + 0x25) = v99; /*0x7df120*/
  *((float *)this + 0x26) = v101; /*0x7df12a*/
  *((float *)this + 0x27) = v105 + 0.0; /*0x7df13a*/
  *((float *)this + 0x28) = v90 + 0.0; /*0x7df144*/
  if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7df14a*/
    *((_DWORD *)this + 0x3D) = 2; /*0x7df153*/
  else
    *((_DWORD *)this + 0x3D) = 3; /*0x7df15f*/
  v85 = 1; /*0x7df16f*/
  if ( *((float *)this + 0x48) < (double)*((float *)this + 0x49) ) /*0x7df181*/
  {
    v67 = 0; /*0x7df187*/
    do /*0x7df18b*/
    {
      if ( v85 ) /*0x7df190*/
      {
        if ( !LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7df22f*/
        {
LABEL_105:
          if ( v67 != *((_DWORD *)this + 0x41) ) /*0x7df242*/
          {
            if ( v67 ) /*0x7df246*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v67 + 4)) ) /*0x7df24c*/
                (**(void (__thiscall ***)(int, int))v67)(v67, 1); /*0x7df25f*/
            }
            v67 = *((_DWORD *)this + 0x41); /*0x7df261*/
            v87 = v67; /*0x7df269*/
            if ( v67 ) /*0x7df26d*/
              InterlockedIncrement((volatile LONG *)(v67 + 4)); /*0x7df273*/
          }
          v70 = *a4; /*0x7df27d*/
          v71 = *((_DWORD *)this + 0x41); /*0x7df27f*/
          if ( v71 != *a4 ) /*0x7df287*/
          {
            if ( v71 ) /*0x7df28b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v71 + 4)) ) /*0x7df291*/
                (**(void (__thiscall ***)(int, int))v71)(v71, 1); /*0x7df2a7*/
            }
            *((_DWORD *)this + 0x41) = v70; /*0x7df2ab*/
            if ( v70 ) /*0x7df2b1*/
              InterlockedIncrement((volatile LONG *)(v70 + 4)); /*0x7df2b7*/
          }
          *a4 = v67; /*0x7df2c1*/
          goto LABEL_119; /*0x7df2c3*/
        }
        v85 = 0; /*0x7df2c5*/
      }
      else
      {
        if ( !LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7df19d*/
          goto LABEL_105; /*0x7df19d*/
        if ( v67 != *((_DWORD *)this + 0x40) ) /*0x7df1a9*/
        {
          if ( v67 ) /*0x7df1ad*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v67 + 4)) ) /*0x7df1b3*/
              (**(void (__thiscall ***)(int, int))v67)(v67, 1); /*0x7df1c6*/
          }
          v67 = *((_DWORD *)this + 0x40); /*0x7df1c8*/
          v87 = v67; /*0x7df1d0*/
          if ( v67 ) /*0x7df1d4*/
            InterlockedIncrement((volatile LONG *)(v67 + 4)); /*0x7df1da*/
        }
        v68 = *a4; /*0x7df1e4*/
        v69 = *((_DWORD *)this + 0x40); /*0x7df1e6*/
        if ( v69 != *a4 ) /*0x7df1ee*/
        {
          if ( v69 ) /*0x7df1f2*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v69 + 4)) ) /*0x7df1f8*/
              (**(void (__thiscall ***)(int, int))v69)(v69, 1); /*0x7df20e*/
          }
          *((_DWORD *)this + 0x40) = v68; /*0x7df212*/
          if ( v68 ) /*0x7df218*/
            InterlockedIncrement((volatile LONG *)(v68 + 4)); /*0x7df21e*/
        }
        *a4 = v67; /*0x7df228*/
      }
LABEL_119:
      *((float *)this + 0x49) = *((float *)this + 0x49) - *((float *)this + 0x48); /*0x7df2ca*/
      v72 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*a4); /*0x7df2e2*/
      NiRenderer_BeginScene(kClear_NONE, v72); /*0x7df2ea*/
      sub_709C60(a3); /*0x7df2fd*/
      NiRenderer_EndScene(); /*0x7df302*/
    }
    while ( *((float *)this + 0x48) < (double)*((float *)this + 0x49) ); /*0x7df18b*/
  }
  v73 = *a4; /*0x7df320*/
  v74 = *((_DWORD *)this + 0x3F); /*0x7df326*/
  if ( v74 != *a4 ) /*0x7df334*/
  {
    if ( v74 ) /*0x7df338*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v74 + 4)) ) /*0x7df33e*/
        (**(void (__thiscall ***)(int, int))v74)(v74, 1); /*0x7df354*/
    }
    *((_DWORD *)this + 0x3F) = v73; /*0x7df358*/
    if ( v73 ) /*0x7df35b*/
      InterlockedIncrement((volatile LONG *)(v73 + 4)); /*0x7df361*/
  }
  v75 = OB_ShaderConstantStorage_010201A0[0x4C]; /*0x7df36e*/
  if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) || v75 <= 0.0 || v75 >= 1.0 ) /*0x7df392*/
  {
    if ( *((_DWORD *)this + 0x43) ) /*0x7df411*/
    {
      if ( 1.0 == v75 ) /*0x7df424*/
      {
        BSTextureManager__ReturnRenderedTexture( /*0x7df42d*/
          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
          *((BSRenderedTexture **)this + 0x43));
        v79 = *((_DWORD *)this + 0x43); /*0x7df432*/
        if ( v79 ) /*0x7df43a*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v79 + 4)) ) /*0x7df440*/
            (**(void (__thiscall ***)(int, int))v79)(v79, 1); /*0x7df456*/
          *((_DWORD *)this + 0x43) = 0; /*0x7df458*/
        }
      }
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 0x43) ) /*0x7df394*/
    {
      v76 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7df3b4*/
                            *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                            unk_B43104,
                            7);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x43, v76); /*0x7df3bc*/
    }
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x42, *v103); /*0x7df3ce*/
    v77 = *((BSRenderedTexture **)this + 0x43); /*0x7df3d3*/
    *((_DWORD *)this + 0x3D) = 6; /*0x7df3d5*/
    v78 = BSRenderedTexture::UseTextureToRender(v77); /*0x7df3df*/
    NiRenderer_BeginScene((ClearFlags)a1, v78); /*0x7df3ea*/
    sub_709C60(a3); /*0x7df3fd*/
    NiRenderer_EndScene(); /*0x7df402*/
    OB_NiSmartPointer_Assign_010201A0((int *)this + 0x3F, (int *)this + 0x43); /*0x7df40a*/
  }
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) ) /*0x7df466*/
  {
    *((_DWORD *)this + 0x3D) = 5; /*0x7df46f*/
    v80 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)LODWORD(OB_ShaderConstantStorage_010201A0[0x68])); /*0x7df47f*/
    NiRenderer_BeginScene((ClearFlags)a1, v80); /*0x7df48a*/
    sub_709C60(a3); /*0x7df49d*/
    NiRenderer_EndScene(); /*0x7df4a2*/
  }
  v81 = *(float *)a4; /*0x7df4ad*/
  v95 = 0.0; /*0x7df4af*/
  result = LODWORD(OB_ShaderConstantStorage_010201A0[0x65]); /*0x7df4b5*/
  v19 = LODWORD(OB_ShaderConstantStorage_010201A0[0x65]) == LODWORD(v81); /*0x7df4ba*/
  v96 = 1.0; /*0x7df4bc*/
  v97 = 1.0; /*0x7df4c0*/
  v98 = 0.0; /*0x7df4c4*/
  if ( !v19 ) /*0x7df4c8*/
  {
    if ( result ) /*0x7df4cc*/
    {
      v83 = (int (__thiscall ***)(_DWORD, int))result; /*0x7df4ce*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x7df4d4*/
      if ( !result ) /*0x7df4dc*/
        result = (**v83)(v83, 1); /*0x7df4ea*/
    }
    OB_ShaderConstantStorage_010201A0[0x65] = v81; /*0x7df4ee*/
    if ( v81 != 0.0 ) /*0x7df4f4*/
      result = InterlockedIncrement((volatile LONG *)(LODWORD(v81) + 4)); /*0x7df4fa*/
  }
  v110 = 0xFFFFFFFF; /*0x7df506*/
  if ( v87 ) /*0x7df511*/
  {
    result = InterlockedDecrement((volatile LONG *)(v87 + 4)); /*0x7df517*/
    if ( !result ) /*0x7df51f*/
      return (**(LONG (__thiscall ***)(int, int))v87)(v87, 1); /*0x7df529*/
  }
  return result; /*0x7df52b*/
}
