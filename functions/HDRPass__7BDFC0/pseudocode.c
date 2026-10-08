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
  BSRenderedTexture *v47; // ebp
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
  void **v105; // eax
  void *v106; // ebp
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
  BSRenderedTexture *texture; // [esp+78h] [ebp-30h]
  ClearFlags a1; // [esp+7Ch] [ebp-2Ch]
  NiRenderedTexture *a4a; // [esp+80h] [ebp-28h] BYREF
  BSRenderedTexture *v121; // [esp+84h] [ebp-24h]
  float v122; // [esp+88h] [ebp-20h]
  float v123; // [esp+8Ch] [ebp-1Ch]
  int v124; // [esp+90h] [ebp-18h]
  BSRenderedTexture *a2a; // [esp+94h] [ebp-14h]
  NiViewport v126; // [esp+98h] [ebp-10h] BYREF

  flt_B2C774 = 1.0; /*0x7bdfc6*/
  flt_B2C778 = 1.0; /*0x7bdfcd*/
  flt_B2C77C = 0.0; /*0x7bdfd7*/
  v6 = (NiRenderer *)renderer; /*0x7bdfdf*/
  flt_B2C780 = 0.0; /*0x7bdfe5*/
  v7 = 0; /*0x7bdfeb*/
  GetDefaultRTGroup = v6->__vftable->GetDefaultRTGroup; /*0x7bdfef*/
  v124 = 0; /*0x7bdff2*/
  v9 = GetDefaultRTGroup(v6); /*0x7bdffc*/
  RenderedTexture = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7be000*/
  if ( RenderedTexture ) /*0x7be005*/
    v7 = (BSRenderedTexture *)RenderedTexture->__vftable->GetWidth(RenderedTexture); /*0x7be00e*/
  a2a = (BSRenderedTexture *)v9->vtbl->GetWidth(v9, 0); /*0x7be01d*/
  v11 = (double)(int)a2a; /*0x7be021*/
  if ( (int)a2a < 0 ) /*0x7be025*/
    v11 = v11 + flt_A2FC78; /*0x7be027*/
  a2a = v7; /*0x7be02f*/
  v12 = (double)(int)v7; /*0x7be033*/
  if ( (int)v7 < 0 ) /*0x7be037*/
    v12 = v12 + flt_A2FC78; /*0x7be039*/
  v13 = (NiRenderer *)renderer; /*0x7be041*/
  v14 = renderer->__vftable->super.GetDefaultRTGroup; /*0x7be049*/
  v122 = v11 / v12; /*0x7be04c*/
  v15 = v14(v13); /*0x7be052*/
  v16 = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7be056*/
  if ( v16 ) /*0x7be05b*/
    v17 = (BSRenderedTexture *)v16->__vftable->GetHeight(v16); /*0x7be064*/
  else
    v17 = 0; /*0x7be068*/
  a2a = (BSRenderedTexture *)v15->vtbl->GetHeight(v15, 0); /*0x7be077*/
  v18 = (double)(int)a2a; /*0x7be07b*/
  if ( (int)a2a < 0 ) /*0x7be07f*/
    v18 = v18 + flt_A2FC78; /*0x7be081*/
  a2a = v17; /*0x7be089*/
  v19 = (double)(int)v17; /*0x7be08d*/
  if ( (int)v17 < 0 ) /*0x7be091*/
    v19 = v19 + flt_A2FC78; /*0x7be093*/
  v20 = (NiRenderer *)renderer; /*0x7be09b*/
  v21 = renderer->__vftable->super.GetDefaultRTGroup; /*0x7be0a3*/
  v123 = v18 / v19; /*0x7be0a6*/
  v22 = v21(v20); /*0x7be0aa*/
  v22->vtbl->GetWidth(v22, 0); /*0x7be0b5*/
  v23 = unk_B42E96 == 0; /*0x7be0b9*/
  v126.l = 0.0; /*0x7be0c0*/
  v126.r = 1.0; /*0x7be0c6*/
  v126.t = 1.0; /*0x7be0ca*/
  v126.b = 0.0; /*0x7be0d0*/
  if ( !v23 ) /*0x7be0d4*/
  {
    v122 = 1.0; /*0x7be0d6*/
    v123 = 1.0; /*0x7be0da*/
  }
  a1 = OB_RendererGlobalState_010201A0.pad_1DB[1] != 0 ? kClear_ALL : kClear_NONE;
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget( /*0x7be102*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                          unk_B43104,
                          0);
  v25 = (NiTexture *)DefaultRenderTarget->members.RenderedTexture; /*0x7be107*/
  texture = DefaultRenderTarget; /*0x7be10c*/
  if ( v25 ) /*0x7be110*/
    v26 = v25->__vftable->GetWidth(v25); /*0x7be119*/
  else
    v26 = 0; /*0x7be11d*/
  v27 = (NiTexture *)texture->members.RenderedTexture; /*0x7be123*/
  if ( v27 ) /*0x7be128*/
    a4a = (NiRenderedTexture *)v27->__vftable->GetHeight(v27); /*0x7be131*/
  else
    a4a = 0; /*0x7be137*/
  v28 = *a3; /*0x7be14a*/
  if ( LOBYTE(this->unk120) ) /*0x7be13f*/
  {
    sub_802890((BSImageSpaceShader *)this, *a3); /*0x7be155*/
    v126.r = 1.0 / v122; /*0x7be166*/
    v126.t = 1.0 / v123; /*0x7be16e*/
    v29 = (NiTexture *)v28->members.RenderedTexture; /*0x7be172*/
    if ( v29 ) /*0x7be177*/
      v30 = (BSRenderedTexture *)v29->__vftable->GetWidth(v29); /*0x7be17e*/
    else
      v30 = 0; /*0x7be182*/
    a2a = v30; /*0x7be186*/
    v31 = (double)(int)v30; /*0x7be18a*/
    if ( (int)v30 < 0 ) /*0x7be18e*/
      v31 = v31 + flt_A2FC78; /*0x7be190*/
    flt_B2C77C = dbl_A2FAA0 / v31 + dbl_A2FC68; /*0x7be1a2*/
    v32 = (NiTexture *)v28->members.RenderedTexture; /*0x7be1a8*/
    if ( v32 ) /*0x7be1ad*/
      v33 = (BSRenderedTexture *)v32->__vftable->GetHeight(v32); /*0x7be1b4*/
    else
      v33 = 0; /*0x7be1b8*/
    a2a = v33; /*0x7be1bc*/
    v34 = (double)(int)v33; /*0x7be1c0*/
    if ( (int)v33 < 0 ) /*0x7be1c4*/
      v34 = v34 + flt_A2FC78; /*0x7be1c6*/
    flt_B2C780 = dbl_A2FAA0 / v34 + dbl_A2FC68; /*0x7be1de*/
    this->unkD0 = 7; /*0x7be1e4*/
    renderer->member.device->lpVtbl->SetSamplerState(renderer->member.device, 0, D3DSAMP_MAXANISOTROPY, 8); /*0x7be203*/
    v35 = BSTextureManager_GetDefaultRenderTarget( /*0x7be219*/
            *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
            unk_B43104,
            1);
    v36 = BSRenderedTexture::UseTextureToRender(v35); /*0x7be21d*/
    NiRenderer_BeginScene(a1, v36); /*0x7be228*/
    v37 = (NiRenderer *)renderer; /*0x7be22d*/
    if ( (renderer->member.super.SceneState1 == 1 || v37->members.SceneState2 == 1) && v37->members.IsReady == 1 ) /*0x7be24f*/
      v37->__vftable->SetupScreenSpaceCamera(v37, &v126); /*0x7be25e*/
    sub_709C60(a2); /*0x7be26b*/
    NiRenderer_EndScene(); /*0x7be270*/
    sub_802890((BSImageSpaceShader *)this, v35); /*0x7be278*/
    v38 = (NiTexture *)texture->members.RenderedTexture; /*0x7be281*/
    if ( v38 ) /*0x7be286*/
      v39 = (BSRenderedTexture *)v38->__vftable->GetHeight(v38); /*0x7be28d*/
    else
      v39 = 0; /*0x7be291*/
    a2a = v39; /*0x7be295*/
    v40 = (double)(int)v39; /*0x7be299*/
    if ( (int)v39 < 0 ) /*0x7be29d*/
      v40 = v40 + flt_A2FC78; /*0x7be29f*/
    flt_B2C780 = dbl_A2FAA0 / v40 + dbl_A2FC68; /*0x7be2b5*/
    v41 = BSRenderedTexture::UseTextureToRender(texture); /*0x7be2bb*/
    NiRenderer_BeginScene(a1, v41); /*0x7be2c6*/
    v42 = (NiRenderer *)renderer; /*0x7be2cb*/
    if ( (renderer->member.super.SceneState1 == 1 || v42->members.SceneState2 == 1) && v42->members.IsReady == 1 ) /*0x7be2ed*/
      v42->__vftable->SetupScreenSpaceCamera(v42, 0); /*0x7be2f9*/
    sub_709C60(a2); /*0x7be306*/
    NiRenderer_EndScene(); /*0x7be30b*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v35); /*0x7be317*/
    renderer->member.device->lpVtbl->SetSamplerState(renderer->member.device, 0, D3DSAMP_MAXANISOTROPY, 1); /*0x7be337*/
    flt_B2C77C = 0.0; /*0x7be33b*/
    flt_B2C780 = 0.0; /*0x7be341*/
  }
  else
  {
    v43 = (NiTexture *)v28->members.RenderedTexture; /*0x7be34c*/
    if ( v43 && v43->__vftable->GetWidth(v43) == 0x400 ) /*0x7be35f*/
    {
      this->unkD0 = 4; /*0x7be361*/
    }
    else
    {
      v44 = (NiTexture *)v28->members.RenderedTexture; /*0x7be36d*/
      if ( v44 && v44->__vftable->GetWidth(v44) == 0x280 ) /*0x7be380*/
        this->unkD0 = 6; /*0x7be382*/
      else
        this->unkD0 = 3; /*0x7be38e*/
    }
    sub_802890((BSImageSpaceShader *)this, v28); /*0x7be39b*/
    v126.r = 1.0 / v122; /*0x7be3ae*/
    v126.t = 1.0 / v123; /*0x7be3b6*/
    v45 = BSRenderedTexture::UseTextureToRender(texture); /*0x7be3ba*/
    NiRenderer_BeginScene(a1, v45); /*0x7be3c5*/
    v46 = (NiRenderer *)renderer; /*0x7be3ca*/
    if ( (renderer->member.super.SceneState1 == 1 || v46->members.SceneState2 == 1) && v46->members.IsReady == 1 ) /*0x7be3ee*/
      v46->__vftable->SetupScreenSpaceCamera(v46, &v126); /*0x7be3fd*/
    sub_709C60(a2); /*0x7be40a*/
    NiRenderer_EndScene(); /*0x7be40f*/
  }
  if ( v28 != *a3 ) /*0x7be41a*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v28); /*0x7be423*/
  v23 = BYTE4(qword_B43178[0xD]) == 0; /*0x7be428*/
  v47 = texture; /*0x7be42f*/
  v48 = texture; /*0x7be433*/
  v121 = texture; /*0x7be435*/
  if ( !v23 ) /*0x7be439*/
  {
    InnerTexture = BSRenderedTexture::GetInnerTexture(*a3); /*0x7be448*/
    ShaderDefinition = GetShaderDefinition(9u); /*0x7be44a*/
    BSImageSpaceShader_BindFirstFreeRenderedTexture(ShaderDefinition->shader, InnerTexture); /*0x7be459*/
    v47 = texture; /*0x7be45e*/
  }
  if ( v26 > 1 ) /*0x7be463*/
  {
    do /*0x7be557*/
    {
      v51 = a4a; /*0x7be470*/
      if ( (int)a4a <= 1 ) /*0x7be477*/
        break; /*0x7be477*/
      v26 /= 4; /*0x7be488*/
      if ( v26 < 1 ) /*0x7be48d*/
        v26 = 1; /*0x7be48f*/
      a4a = (NiRenderedTexture *)((int)a4a / 4); /*0x7be4a2*/
      if ( (int)v51 / 4 < 1 ) /*0x7be4a6*/
        a4a = (NiRenderedTexture *)1; /*0x7be4a8*/
      v47 = BSTextureManager_GetOrCreateRenderedTexture( /*0x7be4d0*/
              *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
              unk_B43104,
              v26,
              (int)a4a,
              4u,
              0x71,
              0);
      this->unkD0 = 3; /*0x7be4d2*/
      sub_802890((BSImageSpaceShader *)this, v48); /*0x7be4dc*/
      v52 = BSRenderedTexture::UseTextureToRender(v47); /*0x7be4e3*/
      NiRenderer_BeginScene(a1, v52); /*0x7be4ee*/
      v53 = (NiRenderer *)renderer; /*0x7be4f3*/
      if ( (renderer->member.super.SceneState1 == 1 || v53->members.SceneState2 == 1) && v53->members.IsReady == 1 ) /*0x7be515*/
        v53->__vftable->SetupScreenSpaceCamera(v53, 0); /*0x7be521*/
      sub_709C60(a2); /*0x7be52e*/
      NiRenderer_EndScene(); /*0x7be533*/
      if ( v48 != *a3 && v48 != v121 ) /*0x7be544*/
        BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v48); /*0x7be54d*/
      v48 = v47; /*0x7be555*/
    }
    while ( v26 > 1 ); /*0x7be557*/
    texture = v47; /*0x7be55d*/
  }
  v54 = InterlockedDecrement; /*0x7be568*/
  if ( unk_B43328 ) /*0x7be561*/
  {
    v62 = (NiTexture *)unk_B43328->members.RenderedTexture; /*0x7be649*/
    if ( v62 ) /*0x7be64e*/
      v63 = v62->__vftable->GetWidth(v62); /*0x7be655*/
    else
      v63 = 0; /*0x7be659*/
    v64 = sub_7C2420(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], unk_B43104, v63, 4u, 0x71, 0); /*0x7be66e*/
    this->unkD0 = 0xB; /*0x7be673*/
    v57 = (BSRenderedTexture *)v64; /*0x7be686*/
    sub_802890((BSImageSpaceShader *)this, unk_B43328); /*0x7be688*/
    v65 = BSRenderedTexture::GetInnerTexture(v47); /*0x7be68f*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->unk118, (Ni2DBuffer *)v65); /*0x7be69b*/
    v66 = BSRenderedTexture::UseTextureToRender(v57); /*0x7be6a2*/
    NiRenderer_BeginScene(a1, v66); /*0x7be6ad*/
    v67 = (NiRenderer *)renderer; /*0x7be6b2*/
    if ( (renderer->member.super.SceneState1 == 1 || v67->members.SceneState2 == 1) && v67->members.IsReady == 1 ) /*0x7be6d6*/
      v67->__vftable->SetupScreenSpaceCamera(v67, 0); /*0x7be6e2*/
    sub_709C60(a2); /*0x7be6ef*/
    NiRenderer_EndScene(); /*0x7be6f4*/
    BSTextureManager__ReturnRenderedTexture( /*0x7be705*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      unk_B43328);
    v68 = unk_B43328; /*0x7be70a*/
    if ( unk_B43328 != v57 ) /*0x7be711*/
    {
      if ( !v68 ) /*0x7be715*/
        goto LABEL_103; /*0x7be715*/
      v61 = unk_B43328; /*0x7be717*/
      if ( v54((volatile LONG *)&v68->members) || !v61 ) /*0x7be725*/
        goto LABEL_103; /*0x7be725*/
LABEL_102:
      (*(void (__thiscall **)(BSRenderedTexture *, int))v61->vtbl)(v61, 1); /*0x7be727*/
LABEL_103:
      unk_B43328 = v57; /*0x7be732*/
      if ( v57 ) /*0x7be73a*/
        InterlockedIncrement((volatile LONG *)&v57->members); /*0x7be740*/
    }
  }
  else
  {
    v55 = (NiTexture *)v47->members.RenderedTexture; /*0x7be574*/
    if ( v55 ) /*0x7be579*/
      v56 = v55->__vftable->GetWidth(v55); /*0x7be580*/
    else
      v56 = 0; /*0x7be584*/
    v57 = (BSRenderedTexture *)sub_7C2420( /*0x7be5a2*/
                                 *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                 unk_B43104,
                                 v56,
                                 4u,
                                 0x71,
                                 0);
    this->unkD0 = 0xC; /*0x7be5a4*/
    sub_802890((BSImageSpaceShader *)this, v47); /*0x7be5ae*/
    v58 = BSRenderedTexture::UseTextureToRender(v57); /*0x7be5b5*/
    NiRenderer_BeginScene(a1, v58); /*0x7be5c0*/
    v59 = (NiRenderer *)renderer; /*0x7be5c5*/
    if ( (renderer->member.super.SceneState1 == 1 || v59->members.SceneState2 == 1) && v59->members.IsReady == 1 ) /*0x7be5e9*/
      v59->__vftable->SetupScreenSpaceCamera(v59, 0); /*0x7be5f5*/
    sub_709C60(a2); /*0x7be602*/
    NiRenderer_EndScene(); /*0x7be607*/
    v60 = unk_B43328; /*0x7be60c*/
    if ( unk_B43328 != v57 ) /*0x7be613*/
    {
      if ( !v60 ) /*0x7be61b*/
        goto LABEL_103; /*0x7be61b*/
      v61 = unk_B43328; /*0x7be621*/
      if ( v54((volatile LONG *)&v60->members) || !v61 ) /*0x7be633*/
        goto LABEL_103; /*0x7be633*/
      goto LABEL_102; /*0x7be633*/
    }
  }
  v69 = v121; /*0x7be746*/
  v70 = BSTextureManager_GetDefaultRenderTarget( /*0x7be75e*/
          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
          unk_B43104,
          2);
  v116 = v121; /*0x7be760*/
  a2a = v70; /*0x7be763*/
  this->unkD0 = 0xA; /*0x7be767*/
  sub_802890((BSImageSpaceShader *)this, v116); /*0x7be771*/
  flt_B2C774 = 1.0; /*0x7be778*/
  flt_B2C778 = 1.0; /*0x7be77e*/
  v71 = (NiTexture *)v69->members.RenderedTexture; /*0x7be784*/
  if ( v71 ) /*0x7be789*/
    v72 = (NiRenderedTexture *)v71->__vftable->GetWidth(v71); /*0x7be790*/
  else
    v72 = 0; /*0x7be794*/
  a4a = v72; /*0x7be798*/
  v73 = (double)(int)v72; /*0x7be79c*/
  if ( (int)v72 < 0 ) /*0x7be7a0*/
    v73 = v73 + flt_A2FC78; /*0x7be7a2*/
  flt_B2C77C = dbl_A2FAA0 / v73 + dbl_A2FC68; /*0x7be7b4*/
  v74 = (NiTexture *)v69->members.RenderedTexture; /*0x7be7ba*/
  if ( v74 ) /*0x7be7bf*/
    v75 = (NiRenderedTexture *)v74->__vftable->GetHeight(v74); /*0x7be7c6*/
  else
    v75 = 0; /*0x7be7ca*/
  a4a = v75; /*0x7be7ce*/
  v76 = (double)(int)v75; /*0x7be7d2*/
  if ( (int)v75 < 0 ) /*0x7be7d6*/
    v76 = v76 + flt_A2FC78; /*0x7be7d8*/
  flt_B2C780 = dbl_A2FAA0 / v76 + dbl_A2FC68; /*0x7be7ec*/
  v77 = BSRenderedTexture::UseTextureToRender(v70); /*0x7be7f2*/
  NiRenderer_BeginScene(a1, v77); /*0x7be7fd*/
  v78 = (NiRenderer *)renderer; /*0x7be802*/
  if ( (renderer->member.super.SceneState1 == 1 || v78->members.SceneState2 == 1) && v78->members.IsReady == 1 ) /*0x7be826*/
    v78->__vftable->SetupScreenSpaceCamera(v78, 0); /*0x7be832*/
  sub_709C60(a2); /*0x7be83f*/
  NiRenderer_EndScene(); /*0x7be844*/
  v79 = unk_B43224; /*0x7be850*/
  if ( !OB_RendererGlobalState_010201A0.pad_1DB[0] ) /*0x7be849*/
    v79 = unk_B43220; /*0x7be857*/
  v80 = abs32(v79); /*0x7be85f*/
  if ( v80 > 0 ) /*0x7be863*/
  {
    v81 = v80; /*0x7be869*/
    do /*0x7be943*/
    {
      this->unkD0 = 1; /*0x7be873*/
      sub_802890((BSImageSpaceShader *)this, v70); /*0x7be87d*/
      v82 = BSRenderedTexture::UseTextureToRender(v121); /*0x7be886*/
      NiRenderer_BeginScene(a1, v82); /*0x7be88d*/
      v83 = renderer; /*0x7be892*/
      if ( (renderer->member.super.SceneState1 == 1 || v83->member.super.SceneState2 == 1) /*0x7be8b4*/
        && v83->member.super.IsReady == 1 )
      {
        v83->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v83, 0); /*0x7be8c0*/
      }
      sub_709C60(a2); /*0x7be8cd*/
      NiRenderer_EndScene(); /*0x7be8d2*/
      v117 = v121; /*0x7be8db*/
      this->unkD0 = 2; /*0x7be8de*/
      sub_802890((BSImageSpaceShader *)this, v117); /*0x7be8e8*/
      v84 = BSRenderedTexture::UseTextureToRender(v70); /*0x7be8ef*/
      NiRenderer_BeginScene(a1, v84); /*0x7be8f6*/
      v85 = renderer; /*0x7be8fb*/
      if ( (renderer->member.super.SceneState1 == 1 || v85->member.super.SceneState2 == 1) /*0x7be91d*/
        && v85->member.super.IsReady == 1 )
      {
        v85->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v85, 0); /*0x7be929*/
      }
      sub_709C60(a2); /*0x7be936*/
      NiRenderer_EndScene(); /*0x7be93b*/
      --v81; /*0x7be940*/
    }
    while ( v81 ); /*0x7be943*/
  }
  this->unkD0 = dword_B2C1E4 != 2 ? 0 : 9;
  sub_802890((BSImageSpaceShader *)this, v70); /*0x7be964*/
  if ( *a3 ) /*0x7be96d*/
  {
    v86 = a4a; /*0x7be973*/
    v87 = v124; /*0x7be977*/
    p_RenderedTexture = &(*a3)->members.RenderedTexture; /*0x7be97b*/
  }
  else
  {
    v86 = 0; /*0x7be980*/
    a4a = 0; /*0x7be982*/
    p_RenderedTexture = &a4a; /*0x7be986*/
    v87 = 1; /*0x7be98a*/
  }
  v89 = *p_RenderedTexture; /*0x7be992*/
  if ( (v87 & 1) != 0 ) /*0x7be994*/
  {
    v87 &= ~1u; /*0x7be996*/
    if ( v86 ) /*0x7be99b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v86->member) ) /*0x7be9a1*/
        v86->__vftable->super.super.super.Destructor((NiRefObject *)v86, 1); /*0x7be9b3*/
    }
  }
  unk118 = this->unk118; /*0x7be9b5*/
  if ( (NiRenderedTexture *)unk118 != v89 ) /*0x7be9bd*/
  {
    if ( unk118 ) /*0x7be9c1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk118 + 4)) ) /*0x7be9c7*/
        (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1); /*0x7be9dd*/
    }
    this->unk118 = (UInt32)v89; /*0x7be9e1*/
    if ( v89 ) /*0x7be9e7*/
      InterlockedIncrement((volatile LONG *)&v89->member); /*0x7be9ed*/
  }
  if ( unk_B43328 ) /*0x7be9f3*/
  {
    v91 = a4a; /*0x7be9fc*/
    p_a4a = &unk_B43328->members.RenderedTexture; /*0x7bea00*/
  }
  else
  {
    v91 = 0; /*0x7bea05*/
    a4a = 0; /*0x7bea07*/
    p_a4a = &a4a; /*0x7bea0b*/
    v87 |= 2u; /*0x7bea0f*/
  }
  v93 = (UInt32)*p_a4a; /*0x7bea15*/
  if ( (v87 & 2) != 0 ) /*0x7bea17*/
  {
    v87 &= ~2u; /*0x7bea19*/
    if ( v91 ) /*0x7bea1e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v91->member) ) /*0x7bea24*/
        v91->__vftable->super.super.super.Destructor((NiRefObject *)v91, 1); /*0x7bea36*/
    }
  }
  unk11C = this->unk11C; /*0x7bea38*/
  if ( unk11C != v93 ) /*0x7bea40*/
  {
    if ( unk11C ) /*0x7bea44*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk11C + 4)) ) /*0x7bea4a*/
        (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1); /*0x7bea60*/
    }
    this->unk11C = v93; /*0x7bea64*/
    if ( v93 ) /*0x7bea6a*/
      InterlockedIncrement((volatile LONG *)(v93 + 4)); /*0x7bea70*/
  }
  v95 = 1.0; /*0x7bea76*/
  flt_B2C784 = 1.0; /*0x7bea7c*/
  flt_B2C788 = 1.0; /*0x7bea82*/
  v96 = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7bea8a*/
  if ( v96 ) /*0x7bea8f*/
  {
    v97 = v96->__vftable->GetWidth(v96); /*0x7bea98*/
    v95 = 1.0; /*0x7bea9a*/
  }
  else
  {
    v97 = 0; /*0x7bea9e*/
  }
  v124 = v97; /*0x7beaa2*/
  v98 = (double)v97; /*0x7beaa6*/
  if ( v97 < 0 ) /*0x7beaaa*/
    v98 = v98 + flt_A2FC78; /*0x7beaac*/
  flt_B2C78C = dbl_A2FAA0 / v98 + dbl_A2FC68; /*0x7beac4*/
  v99 = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7beacc*/
  if ( v99 ) /*0x7bead1*/
  {
    v100 = v99->__vftable->GetHeight(v99); /*0x7beada*/
    v95 = 1.0; /*0x7beadc*/
  }
  else
  {
    v100 = 0; /*0x7beae0*/
  }
  v101 = (double)v100; /*0x7beae8*/
  if ( v100 < 0 ) /*0x7beaec*/
    v101 = v101 + flt_A2FC78; /*0x7beaee*/
  v23 = (_BYTE)a5 == 0; /*0x7beaf4*/
  flt_B2C790 = dbl_A2FAA0 / v101 + dbl_A2FC68; /*0x7beb05*/
  if ( v23 ) /*0x7beb0b*/
  {
    v126.r = v122; /*0x7beb19*/
    v95 = v123; /*0x7beb1d*/
  }
  else
  {
    v126.r = v95; /*0x7beb0d*/
  }
  v126.t = v95; /*0x7beb25*/
  if ( *a4 ) /*0x7beb29*/
  {
    v102 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7beb2f*/
    NiRenderer_BeginScene(kClear_ALL, v102); /*0x7beb37*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_ALL, 0); /*0x7beb41*/
  }
  v103 = renderer; /*0x7beb46*/
  if ( (renderer->member.super.SceneState1 == 1 || v103->member.super.SceneState2 == 1) /*0x7beb6a*/
    && v103->member.super.IsReady == 1 )
  {
    v103->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v103, &v126); /*0x7beb79*/
  }
  sub_709C60(a2); /*0x7beb86*/
  if ( *a4 ) /*0x7beb8b*/
    NiRenderer_EndScene(); /*0x7beb8f*/
  if ( BYTE4(qword_B43178[0xD]) ) /*0x7beb94*/
  {
    if ( texture ) /*0x7beba7*/
    {
      v104 = a5; /*0x7beba9*/
      v105 = (void **)&texture->members.RenderedTexture; /*0x7bebad*/
    }
    else
    {
      v104 = 0; /*0x7bebb2*/
      a5 = 0; /*0x7bebb4*/
      v105 = (void **)&a5; /*0x7bebb8*/
      v87 |= 4u; /*0x7bebbc*/
    }
    v106 = *v105; /*0x7bebc2*/
    if ( (v87 & 4) != 0 ) /*0x7bebc4*/
    {
      v87 &= ~4u; /*0x7bebc6*/
      if ( v104 ) /*0x7bebcb*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v104 + 4)) ) /*0x7bebd1*/
          (**(void (__thiscall ***)(int, int))v104)(v104, 1); /*0x7bebe3*/
      }
    }
    v107 = GetShaderDefinition(9u); /*0x7bebe7*/
    BSImageSpaceShader_BindFirstFreeRenderedTexture(v107->shader, v106); /*0x7bebf6*/
    if ( unk_B43328 ) /*0x7bebfb*/
    {
      v108 = a5; /*0x7bec04*/
      v109 = &unk_B43328->members.RenderedTexture; /*0x7bec08*/
    }
    else
    {
      v108 = 0; /*0x7bec0d*/
      a5 = 0; /*0x7bec0f*/
      v109 = (NiRenderedTexture **)&a5; /*0x7bec13*/
      v87 |= 8u; /*0x7bec17*/
    }
    v110 = *v109; /*0x7bec1d*/
    if ( (v87 & 8) != 0 ) /*0x7bec1f*/
    {
      if ( v108 ) /*0x7bec23*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v108 + 4)) ) /*0x7bec29*/
          (**(void (__thiscall ***)(int, int))v108)(v108, 1); /*0x7bec3b*/
      }
    }
    v111 = GetShaderDefinition(9u); /*0x7bec3f*/
    BSImageSpaceShader_BindFirstFreeRenderedTexture(v111->shader, v110); /*0x7bec4e*/
  }
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v121); /*0x7bec60*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], a2a); /*0x7bec70*/
  if ( texture != unk_B43328 ) /*0x7bec7f*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], texture); /*0x7bec88*/
  if ( OB_RendererGlobalState_010201A0.pad_1DB[1] /*0x7beca7*/
    && (BSTextureManager__ReturnRenderedTexture(
          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
          unk_B43328),
        (v112 = unk_B43328) != 0) )
  {
    v113 = InterlockedDecrement; /*0x7becb1*/
    if ( !InterlockedDecrement((volatile LONG *)&v112->members) ) /*0x7becbb*/
    {
      if ( v112 ) /*0x7becc3*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v112->vtbl)(v112, 1); /*0x7beccd*/
    }
    unk_B43328 = 0; /*0x7beccf*/
  }
  else
  {
    v113 = InterlockedDecrement; /*0x7becd7*/
  }
  v114 = this->unk118; /*0x7becdd*/
  if ( v114 ) /*0x7bece5*/
  {
    if ( !v113((volatile LONG *)(v114 + 4)) ) /*0x7beceb*/
      (**(void (__thiscall ***)(UInt32, int))v114)(v114, 1); /*0x7becfd*/
    this->unk118 = 0; /*0x7becff*/
  }
  v115 = this->unk11C; /*0x7bed05*/
  if ( v115 ) /*0x7bed0d*/
  {
    if ( !v113((volatile LONG *)(v115 + 4)) ) /*0x7bed13*/
      (**(void (__thiscall ***)(UInt32, int))v115)(v115, 1); /*0x7bed25*/
    this->unk11C = 0; /*0x7bed27*/
  }
}
