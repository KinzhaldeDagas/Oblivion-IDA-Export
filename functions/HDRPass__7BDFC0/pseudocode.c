void __thiscall HDRPass(HDRShader *this, NiScreenElements *a2, BSRenderedTexture **a3, BSRenderedTexture **a4, int a5)
{
  NiRenderer *v6; // ecx
  BSRenderedTexture *v7; // ebp
  NiRenderTargetGroup *(__thiscall *GetDefaultRTGroup)(NiRenderer *); // edx
  NiRenderTargetGroup *v9; // esi
  NiTexture *RenderedTexture; // ecx
  double v11; // st7
  double v12; // st6
  NiRenderer *v13; // ecx
  NiRenderTargetGroup *(__thiscall *v14)(NiRenderer *); // edx
  NiRenderTargetGroup *v15; // esi
  NiTexture *v16; // ecx
  BSRenderedTexture *v17; // ebp
  double v18; // st7
  double v19; // st6
  NiRenderer *v20; // ecx
  NiRenderTargetGroup *(__thiscall *v21)(NiRenderer *); // edx
  NiRenderTargetGroup *v22; // eax
  bool v23; // zf
  BSRenderedTexture *DefaultRenderTarget; // eax
  NiTexture *v25; // ecx
  int v26; // ebx
  NiTexture *v27; // ecx
  BSRenderedTexture *v28; // ebp
  NiTexture *v29; // ecx
  BSRenderedTexture *v30; // eax
  double v31; // st7
  NiTexture *v32; // ecx
  BSRenderedTexture *v33; // eax
  double v34; // st7
  BSRenderedTexture *v35; // esi
  NiRenderTargetGroup *v36; // eax
  NiRenderer *v37; // ecx
  NiTexture *v38; // ecx
  BSRenderedTexture *v39; // eax
  double v40; // st7
  NiRenderTargetGroup *v41; // eax
  NiRenderer *v42; // ecx
  NiTexture *v43; // ecx
  NiTexture *v44; // ecx
  NiRenderTargetGroup *v45; // eax
  NiRenderer *v46; // ecx
  BSRenderedTexture *RenderedSurface; // ebp
  BSRenderedTexture *v48; // esi
  NiRenderedTexture *InnerTexture; // ebp
  ShaderDefinition *ShaderDefinition; // eax
  NiRenderedTexture *v51; // ecx
  NiRenderTargetGroup *v52; // eax
  NiRenderer *v53; // ecx
  LONG (__stdcall *v54)(volatile LONG *); // ebx
  NiTexture *v55; // ecx
  int v56; // eax
  BSRenderedTexture *v57; // esi
  NiRenderTargetGroup *v58; // eax
  NiRenderer *v59; // ecx
  BSRenderedTexture *v60; // eax
  BSRenderedTexture *v61; // ebp
  NiTexture *v62; // ecx
  int v63; // eax
  int v64; // eax
  NiRenderedTexture *v65; // eax
  NiRenderTargetGroup *v66; // eax
  NiRenderer *v67; // ecx
  BSRenderedTexture *v68; // eax
  BSRenderedTexture *v69; // esi
  BSRenderedTexture *v70; // ebx
  NiTexture *v71; // ecx
  NiRenderedTexture *v72; // eax
  double v73; // st7
  NiTexture *v74; // ecx
  NiRenderedTexture *v75; // eax
  double v76; // st7
  NiRenderTargetGroup *v77; // eax
  NiRenderer *v78; // ecx
  int v79; // eax
  int v80; // eax
  int v81; // esi
  NiRenderTargetGroup *v82; // eax
  NiDX9Renderer *v83; // ecx
  NiRenderTargetGroup *v84; // eax
  NiDX9Renderer *v85; // ecx
  NiRenderedTexture *v86; // esi
  char v87; // bl
  NiRenderedTexture **p_RenderedTexture; // eax
  NiRenderedTexture *v89; // ebp
  UInt32 unk118; // esi
  NiRenderedTexture *v91; // esi
  NiRenderedTexture **p_a4a; // eax
  UInt32 v93; // ebp
  UInt32 unk11C; // esi
  double v95; // st7
  NiTexture *v96; // ecx
  int v97; // eax
  double v98; // st6
  NiTexture *v99; // ecx
  int v100; // eax
  double v101; // st6
  NiRenderTargetGroup *v102; // eax
  NiDX9Renderer *v103; // ecx
  int v104; // esi
  NiRenderedTexture **v105; // eax
  NiRenderedTexture *v106; // ebp
  ShaderDefinition *v107; // eax
  int v108; // esi
  NiRenderedTexture **v109; // eax
  NiRenderedTexture *v110; // ebp
  ShaderDefinition *v111; // eax
  BSRenderedTexture *v112; // esi
  LONG (__stdcall *v113)(volatile LONG *); // ebx
  UInt32 v114; // esi
  UInt32 v115; // esi
  BSRenderedTexture *v116; // [esp+64h] [ebp-44h]
  BSRenderedTexture *v117; // [esp+64h] [ebp-44h]
  BSRenderedTexture *v118; // [esp+78h] [ebp-30h]
  ClearFlags a1; // [esp+7Ch] [ebp-2Ch]
  NiRenderedTexture *a4a; // [esp+80h] [ebp-28h] BYREF
  BSRenderedTexture *v121; // [esp+84h] [ebp-24h]
  float v122; // [esp+88h] [ebp-20h]
  float v123; // [esp+8Ch] [ebp-1Ch]
  int v124; // [esp+90h] [ebp-18h]
  BSRenderedTexture *a2a; // [esp+94h] [ebp-14h]
  NiViewport v126; // [esp+98h] [ebp-10h] BYREF

  flt_B2C774 = 1.0;
  flt_B2C778 = 1.0;
  flt_B2C77C = 0.0;
  v6 = (NiRenderer *)g_Renderer;
  flt_B2C780 = 0.0;
  v7 = 0;
  GetDefaultRTGroup = v6->__vftable->GetDefaultRTGroup;
  v124 = 0;
  v9 = GetDefaultRTGroup(v6);
  RenderedTexture = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( RenderedTexture )
    v7 = (BSRenderedTexture *)RenderedTexture->__vftable->GetWidth(RenderedTexture);
  a2a = (BSRenderedTexture *)v9->vtbl->GetWidth(v9, 0);
  v11 = (double)(int)a2a;
  if ( (int)a2a < 0 )
    v11 = v11 + flt_A2FC78;
  a2a = v7;
  v12 = (double)(int)v7;
  if ( (int)v7 < 0 )
    v12 = v12 + flt_A2FC78;
  v13 = (NiRenderer *)g_Renderer;
  v14 = g_Renderer->__vftable->super.GetDefaultRTGroup;
  v122 = v11 / v12;
  v15 = v14(v13);
  v16 = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( v16 )
    v17 = (BSRenderedTexture *)v16->__vftable->GetHeight(v16);
  else
    v17 = 0;
  a2a = (BSRenderedTexture *)v15->vtbl->GetHeight(v15, 0);
  v18 = (double)(int)a2a;
  if ( (int)a2a < 0 )
    v18 = v18 + flt_A2FC78;
  a2a = v17;
  v19 = (double)(int)v17;
  if ( (int)v17 < 0 )
    v19 = v19 + flt_A2FC78;
  v20 = (NiRenderer *)g_Renderer;
  v21 = g_Renderer->__vftable->super.GetDefaultRTGroup;
  v123 = v18 / v19;
  v22 = v21(v20);
  v22->vtbl->GetWidth(v22, 0);
  v23 = byte_B42E96 == 0;
  v126.l = 0.0;
  v126.r = 1.0;
  v126.t = 1.0;
  v126.b = 0.0;
  if ( !v23 )
  {
    v122 = 1.0;
    v123 = 1.0;
  }
  a1 = byte_B43075 != 0 ? kClear_ALL : kClear_NONE;
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0);
  v25 = (NiTexture *)DefaultRenderTarget->members.RenderedTexture;
  v118 = DefaultRenderTarget;
  if ( v25 )
    v26 = v25->__vftable->GetWidth(v25);
  else
    v26 = 0;
  v27 = (NiTexture *)v118->members.RenderedTexture;
  if ( v27 )
    a4a = (NiRenderedTexture *)v27->__vftable->GetHeight(v27);
  else
    a4a = 0;
  v28 = *a3;
  if ( LOBYTE(this->unk120) )
  {
    sub_802890((BSImageSpaceShader *)this, *a3);
    v126.r = 1.0 / v122;
    v126.t = 1.0 / v123;
    v29 = (NiTexture *)v28->members.RenderedTexture;
    if ( v29 )
      v30 = (BSRenderedTexture *)v29->__vftable->GetWidth(v29);
    else
      v30 = 0;
    a2a = v30;
    v31 = (double)(int)v30;
    if ( (int)v30 < 0 )
      v31 = v31 + flt_A2FC78;
    flt_B2C77C = dbl_A2FAA0 / v31 + dbl_A2FC68;
    v32 = (NiTexture *)v28->members.RenderedTexture;
    if ( v32 )
      v33 = (BSRenderedTexture *)v32->__vftable->GetHeight(v32);
    else
      v33 = 0;
    a2a = v33;
    v34 = (double)(int)v33;
    if ( (int)v33 < 0 )
      v34 = v34 + flt_A2FC78;
    flt_B2C780 = dbl_A2FAA0 / v34 + dbl_A2FC68;
    this->unkD0 = 7;
    g_Renderer->member.device->lpVtbl->SetSamplerState(g_Renderer->member.device, 0, D3DSAMP_MAXANISOTROPY, 8);
    v35 = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 1);
    v36 = BSRenderedTexture::UseTextureToRender(v35);
    NiRenderer_BeginScene(a1, v36);
    v37 = (NiRenderer *)g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v37->members.SceneState2 == 1) && v37->members.IsReady == 1 )
      v37->__vftable->SetupScreenSpaceCamera(v37, &v126);
    sub_709C60(a2);
    NiRenderer_EndScene();
    sub_802890((BSImageSpaceShader *)this, v35);
    v38 = (NiTexture *)v118->members.RenderedTexture;
    if ( v38 )
      v39 = (BSRenderedTexture *)v38->__vftable->GetHeight(v38);
    else
      v39 = 0;
    a2a = v39;
    v40 = (double)(int)v39;
    if ( (int)v39 < 0 )
      v40 = v40 + flt_A2FC78;
    flt_B2C780 = dbl_A2FAA0 / v40 + dbl_A2FC68;
    v41 = BSRenderedTexture::UseTextureToRender(v118);
    NiRenderer_BeginScene(a1, v41);
    v42 = (NiRenderer *)g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v42->members.SceneState2 == 1) && v42->members.IsReady == 1 )
      v42->__vftable->SetupScreenSpaceCamera(v42, 0);
    sub_709C60(a2);
    NiRenderer_EndScene();
    sub_7C1EE0(g_textureManager, v35);
    g_Renderer->member.device->lpVtbl->SetSamplerState(g_Renderer->member.device, 0, D3DSAMP_MAXANISOTROPY, 1);
    flt_B2C77C = 0.0;
    flt_B2C780 = 0.0;
  }
  else
  {
    v43 = (NiTexture *)v28->members.RenderedTexture;
    if ( v43 && v43->__vftable->GetWidth(v43) == 0x400 )
    {
      this->unkD0 = 4;
    }
    else
    {
      v44 = (NiTexture *)v28->members.RenderedTexture;
      if ( v44 && v44->__vftable->GetWidth(v44) == 0x280 )
        this->unkD0 = 6;
      else
        this->unkD0 = 3;
    }
    sub_802890((BSImageSpaceShader *)this, v28);
    v126.r = 1.0 / v122;
    v126.t = 1.0 / v123;
    v45 = BSRenderedTexture::UseTextureToRender(v118);
    NiRenderer_BeginScene(a1, v45);
    v46 = (NiRenderer *)g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v46->members.SceneState2 == 1) && v46->members.IsReady == 1 )
      v46->__vftable->SetupScreenSpaceCamera(v46, &v126);
    sub_709C60(a2);
    NiRenderer_EndScene();
  }
  if ( v28 != *a3 )
    sub_7C1EE0(g_textureManager, v28);
  v23 = byte_B431E4 == 0;
  RenderedSurface = v118;
  v48 = v118;
  v121 = v118;
  if ( !v23 )
  {
    InnerTexture = BSRenderedTexture::GetInnerTexture(*a3);
    ShaderDefinition = GetShaderDefinition(9u);
    sub_7FA470((BSImageSpaceShader *)ShaderDefinition->shader, InnerTexture);
    RenderedSurface = v118;
  }
  if ( v26 > 1 )
  {
    do
    {
      v51 = a4a;
      if ( (int)a4a <= 1 )
        break;
      v26 /= 4;
      if ( v26 < 1 )
        v26 = 1;
      a4a = (NiRenderedTexture *)((int)a4a / 4);
      if ( (int)v51 / 4 < 1 )
        a4a = (NiRenderedTexture *)1;
      RenderedSurface = (BSRenderedTexture *)NiRenderer_GetRenderedSurface(
                                               g_textureManager,
                                               (NiTPointerList_Node_void *)dword_B43104,
                                               v26,
                                               (int)a4a,
                                               4u,
                                               0x71,
                                               0);
      this->unkD0 = 3;
      sub_802890((BSImageSpaceShader *)this, v48);
      v52 = BSRenderedTexture::UseTextureToRender(RenderedSurface);
      NiRenderer_BeginScene(a1, v52);
      v53 = (NiRenderer *)g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v53->members.SceneState2 == 1) && v53->members.IsReady == 1 )
        v53->__vftable->SetupScreenSpaceCamera(v53, 0);
      sub_709C60(a2);
      NiRenderer_EndScene();
      if ( v48 != *a3 && v48 != v121 )
        sub_7C1EE0(g_textureManager, v48);
      v48 = RenderedSurface;
    }
    while ( v26 > 1 );
    v118 = RenderedSurface;
  }
  v54 = InterlockedDecrement;
  if ( dword_B43328 )
  {
    v62 = (NiTexture *)dword_B43328->members.RenderedTexture;
    if ( v62 )
      v63 = v62->__vftable->GetWidth(v62);
    else
      v63 = 0;
    v64 = sub_7C2420(g_textureManager, dword_B43104, v63, 4u, 0x71, 0);
    this->unkD0 = 0xB;
    v57 = (BSRenderedTexture *)v64;
    sub_802890((BSImageSpaceShader *)this, dword_B43328);
    v65 = BSRenderedTexture::GetInnerTexture(RenderedSurface);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->unk118, (Ni2DBuffer *)v65);
    v66 = BSRenderedTexture::UseTextureToRender(v57);
    NiRenderer_BeginScene(a1, v66);
    v67 = (NiRenderer *)g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v67->members.SceneState2 == 1) && v67->members.IsReady == 1 )
      v67->__vftable->SetupScreenSpaceCamera(v67, 0);
    sub_709C60(a2);
    NiRenderer_EndScene();
    sub_7C1EE0(g_textureManager, dword_B43328);
    v68 = dword_B43328;
    if ( dword_B43328 != v57 )
    {
      if ( !v68 )
        goto LABEL_103;
      v61 = dword_B43328;
      if ( v54((volatile LONG *)&v68->members) || !v61 )
        goto LABEL_103;
LABEL_102:
      (*(void (__thiscall **)(BSRenderedTexture *, int))v61->vtbl)(v61, 1);
LABEL_103:
      dword_B43328 = v57;
      if ( v57 )
        InterlockedIncrement((volatile LONG *)&v57->members);
    }
  }
  else
  {
    v55 = (NiTexture *)RenderedSurface->members.RenderedTexture;
    if ( v55 )
      v56 = v55->__vftable->GetWidth(v55);
    else
      v56 = 0;
    v57 = (BSRenderedTexture *)sub_7C2420(g_textureManager, dword_B43104, v56, 4u, 0x71, 0);
    this->unkD0 = 0xC;
    sub_802890((BSImageSpaceShader *)this, RenderedSurface);
    v58 = BSRenderedTexture::UseTextureToRender(v57);
    NiRenderer_BeginScene(a1, v58);
    v59 = (NiRenderer *)g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v59->members.SceneState2 == 1) && v59->members.IsReady == 1 )
      v59->__vftable->SetupScreenSpaceCamera(v59, 0);
    sub_709C60(a2);
    NiRenderer_EndScene();
    v60 = dword_B43328;
    if ( dword_B43328 != v57 )
    {
      if ( !v60 )
        goto LABEL_103;
      v61 = dword_B43328;
      if ( v54((volatile LONG *)&v60->members) || !v61 )
        goto LABEL_103;
      goto LABEL_102;
    }
  }
  v69 = v121;
  v70 = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 2);
  v116 = v121;
  a2a = v70;
  this->unkD0 = 0xA;
  sub_802890((BSImageSpaceShader *)this, v116);
  flt_B2C774 = 1.0;
  flt_B2C778 = 1.0;
  v71 = (NiTexture *)v69->members.RenderedTexture;
  if ( v71 )
    v72 = (NiRenderedTexture *)v71->__vftable->GetWidth(v71);
  else
    v72 = 0;
  a4a = v72;
  v73 = (double)(int)v72;
  if ( (int)v72 < 0 )
    v73 = v73 + flt_A2FC78;
  flt_B2C77C = dbl_A2FAA0 / v73 + dbl_A2FC68;
  v74 = (NiTexture *)v69->members.RenderedTexture;
  if ( v74 )
    v75 = (NiRenderedTexture *)v74->__vftable->GetHeight(v74);
  else
    v75 = 0;
  a4a = v75;
  v76 = (double)(int)v75;
  if ( (int)v75 < 0 )
    v76 = v76 + flt_A2FC78;
  flt_B2C780 = dbl_A2FAA0 / v76 + dbl_A2FC68;
  v77 = BSRenderedTexture::UseTextureToRender(v70);
  NiRenderer_BeginScene(a1, v77);
  v78 = (NiRenderer *)g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v78->members.SceneState2 == 1) && v78->members.IsReady == 1 )
    v78->__vftable->SetupScreenSpaceCamera(v78, 0);
  sub_709C60(a2);
  NiRenderer_EndScene();
  v79 = dword_B43224;
  if ( !byte_B43074 )
    v79 = dword_B43220;
  v80 = abs32(v79);
  if ( v80 > 0 )
  {
    v81 = v80;
    do
    {
      this->unkD0 = 1;
      sub_802890((BSImageSpaceShader *)this, v70);
      v82 = BSRenderedTexture::UseTextureToRender(v121);
      NiRenderer_BeginScene(a1, v82);
      v83 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v83->member.super.SceneState2 == 1)
        && v83->member.super.IsReady == 1 )
      {
        v83->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v83, 0);
      }
      sub_709C60(a2);
      NiRenderer_EndScene();
      v117 = v121;
      this->unkD0 = 2;
      sub_802890((BSImageSpaceShader *)this, v117);
      v84 = BSRenderedTexture::UseTextureToRender(v70);
      NiRenderer_BeginScene(a1, v84);
      v85 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v85->member.super.SceneState2 == 1)
        && v85->member.super.IsReady == 1 )
      {
        v85->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v85, 0);
      }
      sub_709C60(a2);
      NiRenderer_EndScene();
      --v81;
    }
    while ( v81 );
  }
  this->unkD0 = dword_B2C1E4 != 2 ? 0 : 9;
  sub_802890((BSImageSpaceShader *)this, v70);
  if ( *a3 )
  {
    v86 = a4a;
    v87 = v124;
    p_RenderedTexture = &(*a3)->members.RenderedTexture;
  }
  else
  {
    v86 = 0;
    a4a = 0;
    p_RenderedTexture = &a4a;
    v87 = 1;
  }
  v89 = *p_RenderedTexture;
  if ( (v87 & 1) != 0 )
  {
    v87 &= ~1u;
    if ( v86 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v86->member) )
        v86->__vftable->super.super.super.Destructor((NiRefObject *)v86, 1);
    }
  }
  unk118 = this->unk118;
  if ( (NiRenderedTexture *)unk118 != v89 )
  {
    if ( unk118 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk118 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1);
    }
    this->unk118 = (UInt32)v89;
    if ( v89 )
      InterlockedIncrement((volatile LONG *)&v89->member);
  }
  if ( dword_B43328 )
  {
    v91 = a4a;
    p_a4a = &dword_B43328->members.RenderedTexture;
  }
  else
  {
    v91 = 0;
    a4a = 0;
    p_a4a = &a4a;
    v87 |= 2u;
  }
  v93 = (UInt32)*p_a4a;
  if ( (v87 & 2) != 0 )
  {
    v87 &= ~2u;
    if ( v91 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v91->member) )
        v91->__vftable->super.super.super.Destructor((NiRefObject *)v91, 1);
    }
  }
  unk11C = this->unk11C;
  if ( unk11C != v93 )
  {
    if ( unk11C )
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk11C + 4)) )
        (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1);
    }
    this->unk11C = v93;
    if ( v93 )
      InterlockedIncrement((volatile LONG *)(v93 + 4));
  }
  v95 = 1.0;
  flt_B2C784 = 1.0;
  flt_B2C788 = 1.0;
  v96 = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( v96 )
  {
    v97 = v96->__vftable->GetWidth(v96);
    v95 = 1.0;
  }
  else
  {
    v97 = 0;
  }
  v124 = v97;
  v98 = (double)v97;
  if ( v97 < 0 )
    v98 = v98 + flt_A2FC78;
  flt_B2C78C = dbl_A2FAA0 / v98 + dbl_A2FC68;
  v99 = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( v99 )
  {
    v100 = v99->__vftable->GetHeight(v99);
    v95 = 1.0;
  }
  else
  {
    v100 = 0;
  }
  v101 = (double)v100;
  if ( v100 < 0 )
    v101 = v101 + flt_A2FC78;
  v23 = (_BYTE)a5 == 0;
  flt_B2C790 = dbl_A2FAA0 / v101 + dbl_A2FC68;
  if ( v23 )
  {
    v126.r = v122;
    v95 = v123;
  }
  else
  {
    v126.r = v95;
  }
  v126.t = v95;
  if ( *a4 )
  {
    v102 = BSRenderedTexture::UseTextureToRender(*a4);
    NiRenderer_BeginScene(kClear_ALL, v102);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_ALL, 0);
  }
  v103 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v103->member.super.SceneState2 == 1)
    && v103->member.super.IsReady == 1 )
  {
    v103->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v103, &v126);
  }
  sub_709C60(a2);
  if ( *a4 )
    NiRenderer_EndScene();
  if ( byte_B431E4 )
  {
    if ( v118 )
    {
      v104 = a5;
      v105 = &v118->members.RenderedTexture;
    }
    else
    {
      v104 = 0;
      a5 = 0;
      v105 = (NiRenderedTexture **)&a5;
      v87 |= 4u;
    }
    v106 = *v105;
    if ( (v87 & 4) != 0 )
    {
      v87 &= ~4u;
      if ( v104 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v104 + 4)) )
          (**(void (__thiscall ***)(int, int))v104)(v104, 1);
      }
    }
    v107 = GetShaderDefinition(9u);
    sub_7FA470((BSImageSpaceShader *)v107->shader, v106);
    if ( dword_B43328 )
    {
      v108 = a5;
      v109 = &dword_B43328->members.RenderedTexture;
    }
    else
    {
      v108 = 0;
      a5 = 0;
      v109 = (NiRenderedTexture **)&a5;
      v87 |= 8u;
    }
    v110 = *v109;
    if ( (v87 & 8) != 0 )
    {
      if ( v108 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v108 + 4)) )
          (**(void (__thiscall ***)(int, int))v108)(v108, 1);
      }
    }
    v111 = GetShaderDefinition(9u);
    sub_7FA470((BSImageSpaceShader *)v111->shader, v110);
  }
  sub_7C1EE0(g_textureManager, v121);
  sub_7C1EE0(g_textureManager, a2a);
  if ( v118 != dword_B43328 )
    sub_7C1EE0(g_textureManager, v118);
  if ( byte_B43075 && (sub_7C1EE0(g_textureManager, dword_B43328), (v112 = dword_B43328) != 0) )
  {
    v113 = InterlockedDecrement;
    if ( !InterlockedDecrement((volatile LONG *)&v112->members) )
    {
      if ( v112 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v112->vtbl)(v112, 1);
    }
    dword_B43328 = 0;
  }
  else
  {
    v113 = InterlockedDecrement;
  }
  v114 = this->unk118;
  if ( v114 )
  {
    if ( !v113((volatile LONG *)(v114 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v114)(v114, 1);
    this->unk118 = 0;
  }
  v115 = this->unk11C;
  if ( v115 )
  {
    if ( !v113((volatile LONG *)(v115 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v115)(v115, 1);
    this->unk11C = 0;
  }
}
