// MoonSugarEffect decode: Hit/doublevision pass; uses two type-0x13 temporary targets, copy/blur intermediates, frame-time decay, fDoubleVis sin/cos offsets, final doublevis_P20 composite, then clears/returns temps.
void __thiscall HitPass(_DWORD *this, NiScreenElements *arg0, float a3, _DWORD **a4, char a5)
{
  NiDX9Renderer *v5; // eax
  BSTextureManager *v6; // ecx
  BSRenderedTexture *DefaultRenderTarget; // eax
  NiDX9Renderer *v8; // ecx
  BSTextureManager *v9; // ecx
  BSRenderedTexture *v10; // eax
  unsigned __int8 v11; // dl
  float v12; // ebx
  double v13; // st7
  bool v14; // zf
  NiRenderTargetGroup *v15; // esi
  NiRenderedTexture *v16; // ecx
  NiRenderTargetGroup *v17; // esi
  NiRenderedTexture *v18; // ecx
  int v19; // edi
  double v20; // st7
  double v21; // st6
  BSRenderedTexture *v22; // eax
  NiRenderedTexture *RenderedTexture; // ecx
  int v24; // eax
  double v25; // st7
  NiRenderedTexture *v26; // ecx
  int v27; // eax
  double v28; // st7
  ClearFlags v29; // eax
  int v30; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v32; // esi
  NiRenderedTexture *v33; // edi
  void (__thiscall *Destructor)(NiRefObject *, bool); // edx
  BSRenderedTexture *v35; // esi
  NiRenderTargetGroup *v36; // eax
  NiDX9Renderer *v37; // ecx
  void (__thiscall *SetupScreenSpaceCamera)(NiRenderer *, NiViewport *); // edx
  NiScreenElements *v39; // eax
  BSRenderedTexture *v40; // ecx
  NiRenderTargetGroup *v41; // eax
  NiRenderedTexture **p_RenderedTexture; // eax
  void (__thiscall ***v43)(_DWORD); // esi
  NiRenderedTexture *v44; // ebp
  void (__thiscall *v45)(_DWORD); // edx
  int v46; // edx
  NiRenderedTexture *v47; // esi
  NiRenderedTexture **v48; // edi
  void (__thiscall *v49)(NiRefObject *, bool); // eax
  NiDX9Renderer *v50; // ecx
  NiRenderedTextureMembr *v51; // eax
  void (__thiscall ***v52)(_DWORD); // esi
  NiDX9TextureData **p_rendererData; // eax
  NiDX9TextureData *v54; // ebp
  void (__thiscall *v55)(_DWORD); // eax
  int v56; // eax
  NiDX9TextureData *v57; // esi
  NiDX9TextureData **v58; // edi
  void (__thiscall *v59)(NiDX9TextureData *); // eax
  NiRenderTargetGroup *v60; // eax
  NiDX9Renderer *v61; // ecx
  double v62; // st7
  double v63; // st7
  int v64; // ecx
  BSRenderedTexture *v65; // eax
  char v66; // bl
  void (__thiscall ***v67)(_DWORD); // esi
  ClearFlags *v68; // eax
  void (__thiscall ***v69)(_DWORD); // ebp
  int v70; // edx
  void (__thiscall ***v71)(_DWORD); // esi
  _DWORD *v72; // edi
  NiScreenElements *v73; // esi
  NiScreenElements **v74; // eax
  NiScreenElements *v75; // ebp
  int v76; // edi
  NiScreenElements *v77; // esi
  NiScreenElements **v78; // edi
  double v79; // st7
  _DWORD *v80; // esi
  NiRenderTargetGroup *v81; // eax
  NiDX9Renderer *v82; // ecx
  int v83; // ecx
  int v84; // edi
  LONG (__stdcall *v85)(volatile LONG *); // ebp
  _DWORD *v86; // esi
  int v87; // esi
  int v88; // edi
  _DWORD *v89; // esi
  int v90; // ecx
  int v91; // edi
  _DWORD *v92; // esi
  int v93; // ecx
  int v94; // edi
  _DWORD *v95; // esi
  NiDX9Renderer *v96; // [esp-Ch] [ebp-C0h]
  BSRenderedTexture *texture; // [esp+0h] [ebp-B4h]
  BSRenderedTexture *v98; // [esp+8h] [ebp-ACh]
  int v99; // [esp+14h] [ebp-A0h]
  int v100; // [esp+1Ch] [ebp-98h]
  NiDX9Renderer *v101; // [esp+24h] [ebp-90h]
  NiTexture **p_parent; // [esp+2Ch] [ebp-88h]
  int v103; // [esp+30h] [ebp-84h] BYREF
  float v104; // [esp+34h] [ebp-80h]
  int v105; // [esp+38h] [ebp-7Ch]
  void (__thiscall ***v106)(_DWORD); // [esp+3Ch] [ebp-78h]
  NiScreenElements *v107; // [esp+40h] [ebp-74h] BYREF
  float v108; // [esp+44h] [ebp-70h]
  BSRenderedTexture *v109; // [esp+48h] [ebp-6Ch]
  int v110; // [esp+4Ch] [ebp-68h]
  float v111; // [esp+50h] [ebp-64h]
  ClearFlags v112; // [esp+54h] [ebp-60h] BYREF
  NiDX9Renderer *v113; // [esp+5Ch] [ebp-58h]
  void (__thiscall ***v114)(_DWORD); // [esp+60h] [ebp-54h] BYREF
  NiRenderedTextureMembr *v115; // [esp+64h] [ebp-50h]
  int v116; // [esp+68h] [ebp-4Ch]
  int p_member; // [esp+6Ch] [ebp-48h]
  NiScreenElements *v118; // [esp+70h] [ebp-44h]
  void (__thiscall ***v119)(_DWORD); // [esp+7Ch] [ebp-38h] BYREF
  BSRenderedTexture *v120; // [esp+80h] [ebp-34h]
  ClearFlags v121; // [esp+84h] [ebp-30h]
  float v122; // [esp+88h] [ebp-2Ch]
  BSRenderedTexture *a2; // [esp+8Ch] [ebp-28h]
  float v124; // [esp+90h] [ebp-24h]
  BSRenderedTexture *v125; // [esp+94h] [ebp-20h]
  int a1; // [esp+98h] [ebp-1Ch]
  float v127; // [esp+9Ch] [ebp-18h]
  float v128; // [esp+A0h] [ebp-14h]
  float v129; // [esp+A4h] [ebp-10h]
  NiScreenElements *v130; // [esp+A8h] [ebp-Ch]
  float v131; // [esp+ACh] [ebp-8h]
  float v132; // [esp+B0h] [ebp-4h]

  v5 = unk_B43104; /*0x7eb3d3*/
  p_member = 0x13; /*0x7eb3dc*/
  v121 = (ClearFlags)this; /*0x7eb3de*/
  v6 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x7eb3e2*/
  v120 = 0; /*0x7eb3e9*/
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v6, v5, 0x13); /*0x7eb3f1*/
  v8 = unk_B43104; /*0x7eb3f6*/
  p_member = 0x13; /*0x7eb3fc*/
  v116 = (int)v8; /*0x7eb3fe*/
  v9 = *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4]; /*0x7eb3ff*/
  a2 = DefaultRenderTarget; /*0x7eb405*/
  v10 = BSTextureManager_GetDefaultRenderTarget(v9, (NiDX9Renderer *)v116, 0x13); /*0x7eb409*/
  v11 = OB_RendererGlobalState_010201A0.pad_1DB[1]; /*0x7eb410*/
  v129 = 0.0; /*0x7eb416*/
  v12 = a3; /*0x7eb41c*/
  *(float *)&v130 = 1.0; /*0x7eb422*/
  v131 = 1.0; /*0x7eb426*/
  v125 = v10; /*0x7eb42a*/
  v13 = 1.0; /*0x7eb42e*/
  v132 = 0.0; /*0x7eb430*/
  v14 = unk_B42E96 == 0; /*0x7eb439*/
  a1 = v11 != 0 ? 7 : 0;
  if ( v14 ) /*0x7eb444*/
  {
    v15 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7eb45e*/
    v16 = *(NiRenderedTexture **)(*(_DWORD *)LODWORD(a3) + 0x20); /*0x7eb462*/
    if ( v16 ) /*0x7eb467*/
      v16->__vftable->super.GetWidth((NiTexture *)v16); /*0x7eb46e*/
    v15->vtbl->GetWidth(v15, 0); /*0x7eb47f*/
    v17 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7eb4b8*/
    v18 = *(NiRenderedTexture **)(*(_DWORD *)LODWORD(a3) + 0x20); /*0x7eb4bc*/
    if ( v18 ) /*0x7eb4c1*/
      v19 = v18->__vftable->super.GetHeight((NiTexture *)v18); /*0x7eb4ca*/
    else
      v19 = 0; /*0x7eb4ce*/
    a1 = v17->vtbl->GetHeight(v17, 0); /*0x7eb4dd*/
    v20 = (double)a1; /*0x7eb4e1*/
    if ( a1 < 0 ) /*0x7eb4e5*/
      v20 = v20 + flt_A2FC78; /*0x7eb4e7*/
    a1 = v19; /*0x7eb4ef*/
    v21 = (double)v19; /*0x7eb4f3*/
    if ( v19 < 0 ) /*0x7eb4f7*/
      v21 = v21 + flt_A2FC78; /*0x7eb4f9*/
    v13 = v20 / v21; /*0x7eb4ff*/
  }
  else
  {
    a3 = 1.0; /*0x7eb446*/
  }
  v22 = *(BSRenderedTexture **)LODWORD(v12); /*0x7eb501*/
  v122 = v13; /*0x7eb503*/
  RenderedTexture = v22->members.RenderedTexture; /*0x7eb507*/
  if ( RenderedTexture ) /*0x7eb50c*/
    *(float *)&v24 = COERCE_FLOAT(RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture)); /*0x7eb513*/
  else
    *(float *)&v24 = 0.0; /*0x7eb517*/
  v128 = *(float *)&v24; /*0x7eb51b*/
  v25 = (double)v24; /*0x7eb51f*/
  if ( v24 < 0 ) /*0x7eb523*/
    v25 = v25 + flt_A2FC78; /*0x7eb525*/
  v26 = *(NiRenderedTexture **)(*(_DWORD *)LODWORD(v12) + 0x20); /*0x7eb533*/
  v128 = dbl_A2FAA0 / v25; /*0x7eb538*/
  if ( v26 ) /*0x7eb53c*/
    *(float *)&v27 = COERCE_FLOAT(v26->__vftable->super.GetHeight((NiTexture *)v26)); /*0x7eb543*/
  else
    *(float *)&v27 = 0.0; /*0x7eb547*/
  v127 = *(float *)&v27; /*0x7eb54b*/
  v28 = (double)v27; /*0x7eb54f*/
  if ( v27 < 0 ) /*0x7eb553*/
    v28 = v28 + flt_A2FC78; /*0x7eb555*/
  v29 = v121; /*0x7eb561*/
  v124 = dbl_A2FAA0 / v28; /*0x7eb565*/
  flt_B2D8EC = a3; /*0x7eb56d*/
  flt_B2D8F0 = v122; /*0x7eb577*/
  v127 = v128 + 0.0; /*0x7eb587*/
  flt_B2D8F4 = v127; /*0x7eb58f*/
  v128 = v124 + 0.0; /*0x7eb599*/
  flt_B2D8F8 = v128; /*0x7eb5a1*/
  *(_DWORD *)(v29 + 0x90) = 0; /*0x7eb5a7*/
  v30 = **(_DWORD **)(*(_DWORD *)(v29 + 0xB0) + 0x24); /*0x7eb5ba*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)LODWORD(v12)); /*0x7eb5be*/
  v32 = *(NiRenderedTexture **)(v30 + 4); /*0x7eb5c3*/
  v33 = InnerTexture; /*0x7eb5c6*/
  if ( v32 != InnerTexture ) /*0x7eb5ca*/
  {
    if ( v32 ) /*0x7eb5ce*/
    {
      p_member = (int)&v32->member; /*0x7eb5d3*/
      if ( !((int (*)(void))InterlockedDecrement)() ) /*0x7eb5d4*/
      {
        Destructor = v32->__vftable->super.super.super.Destructor; /*0x7eb5e4*/
        v116 = 1; /*0x7eb5e6*/
        ((void (__thiscall *)(NiRenderedTexture *))Destructor)(v32); /*0x7eb5ea*/
      }
    }
    *(_DWORD *)(v30 + 4) = v33; /*0x7eb5ee*/
    if ( v33 ) /*0x7eb5f1*/
    {
      v115 = &v33->member; /*0x7eb5f6*/
      ((void (*)(void))InterlockedIncrement)(); /*0x7eb5f7*/
    }
  }
  v35 = v120; /*0x7eb5fd*/
  v36 = BSRenderedTexture::UseTextureToRender(v120); /*0x7eb603*/
  NiRenderer_BeginScene(kClear_BACKBUFFER, v36); /*0x7eb60f*/
  v37 = renderer; /*0x7eb614*/
  if ( (renderer->member.super.SceneState1 == 1 || v37->member.super.SceneState2 == 1) && v37->member.super.IsReady == 1 ) /*0x7eb634*/
  {
    SetupScreenSpaceCamera = v37->__vftable->super.SetupScreenSpaceCamera; /*0x7eb638*/
    v114 = 0; /*0x7eb63e*/
    ((void (__thiscall *)(NiDX9Renderer *))SetupScreenSpaceCamera)(v37); /*0x7eb640*/
    v37 = renderer; /*0x7eb642*/
  }
  v113 = v37; /*0x7eb648*/
  sub_709C60(v130); /*0x7eb64d*/
  NiRenderer_EndScene(); /*0x7eb652*/
  v39 = v118; /*0x7eb659*/
  flt_B2D8EC = 1.0; /*0x7eb65d*/
  v40 = v120; /*0x7eb663*/
  flt_B2D8F0 = 1.0; /*0x7eb667*/
  flt_B2D8F4 = 0.0; /*0x7eb66f*/
  flt_B2D8F8 = 0.0; /*0x7eb675*/
  *((_DWORD *)v39 + 0x24) = 1; /*0x7eb67b*/
  unk_B46114 = 0.0; /*0x7eb681*/
  unk_B46118 = flt_A92380; /*0x7eb68d*/
  v41 = BSRenderedTexture::UseTextureToRender(v40); /*0x7eb693*/
  NiRenderer_BeginScene(v121, v41); /*0x7eb69e*/
  if ( v35 ) /*0x7eb6a8*/
  {
    p_RenderedTexture = &v35->members.RenderedTexture; /*0x7eb6aa*/
    v43 = v119; /*0x7eb6ad*/
  }
  else
  {
    v43 = 0; /*0x7eb6b3*/
    v119 = 0; /*0x7eb6b5*/
    p_RenderedTexture = (NiRenderedTexture **)&v119; /*0x7eb6b9*/
    p_member = 1; /*0x7eb6bd*/
  }
  v44 = *p_RenderedTexture; /*0x7eb6c6*/
  if ( (p_member & 1) != 0 ) /*0x7eb6c8*/
  {
    p_member &= ~1u; /*0x7eb6ca*/
    if ( v43 ) /*0x7eb6d1*/
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD), NiDX9Renderer *))InterlockedDecrement)(v43 + 1, v113) ) /*0x7eb6d7*/
      {
        v45 = **v43; /*0x7eb6e3*/
        v112 = kClear_BACKBUFFER; /*0x7eb6e5*/
        v45(v43); /*0x7eb6e9*/
      }
    }
  }
  v46 = *(_DWORD *)(*(_DWORD *)(v116 + 0xAC) + 0x24); /*0x7eb6f5*/
  v47 = *(NiRenderedTexture **)(*(_DWORD *)v46 + 4); /*0x7eb6fa*/
  v48 = (NiRenderedTexture **)(*(_DWORD *)v46 + 4); /*0x7eb6fd*/
  if ( v47 != v44 ) /*0x7eb702*/
  {
    if ( v47 ) /*0x7eb706*/
    {
      LODWORD(v111) = &v47->member; /*0x7eb70b*/
      if ( !((int (*)(void))InterlockedDecrement)() ) /*0x7eb70c*/
      {
        v49 = v47->__vftable->super.super.super.Destructor; /*0x7eb71c*/
        v110 = 1; /*0x7eb71e*/
        ((void (__thiscall *)(NiRenderedTexture *))v49)(v47); /*0x7eb722*/
      }
    }
    *v48 = v44; /*0x7eb726*/
    if ( v44 ) /*0x7eb728*/
    {
      v109 = (BSRenderedTexture *)&v44->member; /*0x7eb72d*/
      ((void (*)(void))InterlockedIncrement)(); /*0x7eb72e*/
    }
  }
  v50 = renderer; /*0x7eb734*/
  if ( (renderer->member.super.SceneState1 == 1 || v50->member.super.SceneState2 == 1) && v50->member.super.IsReady == 1 ) /*0x7eb755*/
  {
    v50->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v50, 0); /*0x7eb761*/
    v50 = renderer; /*0x7eb763*/
  }
  v107 = (NiScreenElements *)v50; /*0x7eb769*/
  sub_709C60((NiScreenElements *)a2); /*0x7eb76e*/
  NiRenderer_EndScene(); /*0x7eb773*/
  v51 = v115; /*0x7eb77e*/
  unk_B46114 = flt_A92380; /*0x7eb782*/
  unk_B46118 = 0.0; /*0x7eb78c*/
  if ( v51 ) /*0x7eb792*/
  {
    v52 = v114; /*0x7eb794*/
    p_rendererData = &v51->super.rendererData; /*0x7eb798*/
  }
  else
  {
    v52 = 0; /*0x7eb79d*/
    LODWORD(v111) |= 2u; /*0x7eb79f*/
    v114 = 0; /*0x7eb7a4*/
    p_rendererData = (NiDX9TextureData **)&v114; /*0x7eb7a8*/
  }
  v54 = *p_rendererData; /*0x7eb7b1*/
  if ( (LOBYTE(v111) & 2) != 0 ) /*0x7eb7b3*/
  {
    LODWORD(v111) &= ~2u; /*0x7eb7b5*/
    if ( v52 ) /*0x7eb7bc*/
    {
      v106 = v52 + 1; /*0x7eb7c1*/
      if ( !((int (*)(void))InterlockedDecrement)() ) /*0x7eb7c2*/
      {
        v55 = **v52; /*0x7eb7ce*/
        v105 = 1; /*0x7eb7d0*/
        v55(v52); /*0x7eb7d4*/
      }
    }
  }
  v56 = *(_DWORD *)(*(_DWORD *)(v110 + 0xAC) + 0x24); /*0x7eb7e0*/
  v57 = *(NiDX9TextureData **)(*(_DWORD *)v56 + 4); /*0x7eb7e5*/
  v58 = (NiDX9TextureData **)(*(_DWORD *)v56 + 4); /*0x7eb7e8*/
  if ( v57 != v54 ) /*0x7eb7ed*/
  {
    if ( v57 ) /*0x7eb7f1*/
    {
      LODWORD(v104) = &v57->parent; /*0x7eb7f6*/
      if ( !((int (*)(void))InterlockedDecrement)() ) /*0x7eb7f7*/
      {
        v59 = (void (__thiscall *)(NiDX9TextureData *))*v57->_vtbl; /*0x7eb807*/
        v103 = 1; /*0x7eb809*/
        v59(v57); /*0x7eb80d*/
      }
    }
    *v58 = v54; /*0x7eb811*/
    if ( v54 ) /*0x7eb813*/
    {
      p_parent = &v54->parent; /*0x7eb818*/
      ((void (*)(void))InterlockedIncrement)(); /*0x7eb819*/
    }
  }
  v60 = BSRenderedTexture::UseTextureToRender(v109); /*0x7eb823*/
  NiRenderer_BeginScene(v112, v60); /*0x7eb82e*/
  v61 = renderer; /*0x7eb833*/
  if ( (renderer->member.super.SceneState1 == 1 || v61->member.super.SceneState2 == 1) && v61->member.super.IsReady == 1 ) /*0x7eb858*/
  {
    v61->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v61, 0); /*0x7eb864*/
    v61 = renderer; /*0x7eb866*/
  }
  v101 = v61; /*0x7eb86c*/
  sub_709C60(v118); /*0x7eb871*/
  NiRenderer_EndScene(); /*0x7eb876*/
  v14 = unk_B42D78 == 0; /*0x7eb87f*/
  flt_B2D8EC = *(float *)&v118; /*0x7eb886*/
  flt_B2D8F0 = *(float *)&v106; /*0x7eb890*/
  flt_B2D8F4 = v111; /*0x7eb89a*/
  flt_B2D8F8 = *(float *)&v112; /*0x7eb8a4*/
  flt_B2D8FC = 1.0; /*0x7eb8ac*/
  flt_B2D900 = 1.0; /*0x7eb8b2*/
  v62 = 0.0; /*0x7eb8b8*/
  flt_B2D904 = 0.0; /*0x7eb8ba*/
  flt_B2D908 = 0.0; /*0x7eb8c0*/
  if ( v14 ) /*0x7eb8c6*/
  {
    *(float *)&v112 = 0.0; /*0x7eb8de*/
  }
  else
  {
    *(float *)&v112 = ((double (__cdecl *)(_DWORD, int, NiDX9Renderer *))unk_B42D78)(0, 1, v101); /*0x7eb8d3*/
    v62 = 0.0; /*0x7eb8d7*/
  }
  v14 = unk_B42D78 == 0; /*0x7eb8e2*/
  *(float *)&v112 = *(float *)&v112 / dbl_A2F938 * dbl_A56E20; /*0x7eb8f9*/
  if ( v14 ) /*0x7eb8fd*/
  {
    v108 = v62; /*0x7eb914*/
  }
  else
  {
    v108 = ((double (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x7eb909*/
    v62 = 0.0; /*0x7eb90d*/
  }
  unk_B46124 = unk_B46124 - v108 * dbl_A73E80; /*0x7eb92a*/
  if ( v62 >= unk_B46124 ) /*0x7eb93b*/
    unk_B46124 = v62; /*0x7eb93d*/
  v111 = sin(*(float *)&v112); /*0x7eb950*/
  flt_B2D90C = v111 * unk_B46124; /*0x7eb95e*/
  *(float *)&v112 = cos(*(float *)&v112); /*0x7eb96d*/
  flt_B2D910 = *(float *)&v112 * unk_B46124; /*0x7eb97b*/
  flt_B2D914 = *(float *)&v118; /*0x7eb985*/
  flt_B2D918 = *(float *)&v106; /*0x7eb98f*/
  v63 = unk_B46120 - v108 * dbl_A2FAA0; /*0x7eb9a5*/
  if ( v63 <= 0.0 ) /*0x7eb9b0*/
    v63 = 0.0; /*0x7eb9b6*/
  v64 = v105; /*0x7eb9b8*/
  unk_B46120 = v63; /*0x7eb9bc*/
  unk_B4611C = unk_B46130 * unk_B46120; /*0x7eb9ce*/
  *(_DWORD *)(v64 + 0x90) = 2; /*0x7eb9d4*/
  v65 = *(BSRenderedTexture **)LODWORD(v12); /*0x7eb9de*/
  v14 = *(_DWORD *)LODWORD(v12) == 0; /*0x7eb9e0*/
  v66 = LOBYTE(v104); /*0x7eb9e2*/
  if ( v14 ) /*0x7eb9e6*/
  {
    v67 = 0; /*0x7eb9f1*/
    *(float *)&v112 = 0.0; /*0x7eb9f3*/
    v68 = &v112; /*0x7eb9f7*/
    v66 = LOBYTE(v104) | 4; /*0x7eb9fb*/
  }
  else
  {
    v67 = (void (__thiscall ***)(_DWORD))v112; /*0x7eb9e8*/
    v68 = (ClearFlags *)&v65->members.RenderedTexture; /*0x7eb9ec*/
  }
  v69 = (void (__thiscall ***)(_DWORD))*v68; /*0x7eba01*/
  if ( (v66 & 4) != 0 ) /*0x7eba03*/
  {
    v66 &= ~4u; /*0x7eba05*/
    if ( v67 ) /*0x7eba0a*/
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedDecrement)(v67 + 1) ) /*0x7eba10*/
      {
        v100 = 1; /*0x7eba1e*/
        (**v67)(v67); /*0x7eba21*/
      }
    }
  }
  v70 = *(_DWORD *)(*(_DWORD *)(v103 + 0x70) + 0x24); /*0x7eba2a*/
  v71 = *(void (__thiscall ****)(_DWORD))(*(_DWORD *)v70 + 4); /*0x7eba2f*/
  v72 = (_DWORD *)(*(_DWORD *)v70 + 4); /*0x7eba32*/
  if ( v71 != v69 ) /*0x7eba37*/
  {
    if ( v71 ) /*0x7eba3b*/
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedDecrement)(v71 + 1) ) /*0x7eba41*/
      {
        v99 = 1; /*0x7eba53*/
        (**v71)(v71); /*0x7eba57*/
      }
    }
    *v72 = v69; /*0x7eba5b*/
    if ( v69 ) /*0x7eba5d*/
      ((void (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedIncrement)(v69 + 1); /*0x7eba63*/
  }
  if ( p_parent ) /*0x7eba6f*/
  {
    v73 = v107; /*0x7eba71*/
    v74 = (NiScreenElements **)(p_parent + 8); /*0x7eba75*/
  }
  else
  {
    v73 = 0; /*0x7eba7a*/
    v107 = 0; /*0x7eba7c*/
    v74 = &v107; /*0x7eba80*/
    v66 |= 8u; /*0x7eba84*/
  }
  v75 = *v74; /*0x7eba8a*/
  if ( (v66 & 8) != 0 ) /*0x7eba8c*/
  {
    if ( v73 ) /*0x7eba90*/
    {
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v73 + 4) ) /*0x7eba96*/
      {
        v98 = (BSRenderedTexture *)1; /*0x7ebaa4*/
        (**(void (__thiscall ***)(NiScreenElements *))v73)(v73); /*0x7ebaa8*/
      }
    }
  }
  v76 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24) + 4); /*0x7ebab4*/
  v77 = *(NiScreenElements **)(v76 + 4); /*0x7ebab7*/
  v78 = (NiScreenElements **)(v76 + 4); /*0x7ebaba*/
  if ( v77 != v75 ) /*0x7ebabf*/
  {
    if ( v77 ) /*0x7ebac3*/
    {
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v77 + 4) ) /*0x7ebac9*/
      {
        texture = (BSRenderedTexture *)1; /*0x7ebadb*/
        (**(void (__thiscall ***)(NiScreenElements *))v77)(v77); /*0x7ebadf*/
      }
    }
    *v78 = v75; /*0x7ebae3*/
    if ( v75 ) /*0x7ebae5*/
      ((void (__cdecl *)(char *))InterlockedIncrement)((char *)v75 + 4); /*0x7ebaeb*/
  }
  if ( LOBYTE(v111) ) /*0x7ebaf6*/
  {
    v79 = 1.0; /*0x7ebaf8*/
    v104 = 1.0; /*0x7ebafa*/
  }
  else
  {
    v104 = *(float *)&v109; /*0x7ebb04*/
    v79 = *(float *)&v99; /*0x7ebb08*/
  }
  v80 = (_DWORD *)v110; /*0x7ebb0c*/
  *(float *)&v105 = v79; /*0x7ebb10*/
  if ( *(_DWORD *)v110 ) /*0x7ebb14*/
  {
    v81 = BSRenderedTexture::UseTextureToRender(*(BSRenderedTexture **)v110); /*0x7ebb1a*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v81); /*0x7ebb22*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x7ebb2d*/
  }
  v82 = renderer; /*0x7ebb32*/
  if ( (renderer->member.super.SceneState1 == 1 || v82->member.super.SceneState2 == 1) && v82->member.super.IsReady == 1 ) /*0x7ebb56*/
  {
    v82->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v82, (NiViewport *)&v103); /*0x7ebb65*/
    v82 = renderer; /*0x7ebb67*/
  }
  v96 = v82; /*0x7ebb6d*/
  sub_709C60(v107); /*0x7ebb72*/
  if ( *v80 ) /*0x7ebb77*/
    NiRenderer_EndScene(); /*0x7ebb7c*/
  v83 = *(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24); /*0x7ebb84*/
  v84 = *(_DWORD *)(*(_DWORD *)v83 + 4); /*0x7ebb89*/
  v85 = InterlockedDecrement; /*0x7ebb8c*/
  v86 = (_DWORD *)(*(_DWORD *)v83 + 4); /*0x7ebb92*/
  if ( v84 ) /*0x7ebb97*/
  {
    if ( !v85((volatile LONG *)(v84 + 4)) ) /*0x7ebb9d*/
      (**(void (__thiscall ***)(int, int, NiDX9Renderer *))v84)(v84, 1, v96); /*0x7ebbaf*/
    *v86 = 0; /*0x7ebbb1*/
  }
  v87 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24) + 4); /*0x7ebbbd*/
  v88 = *(_DWORD *)(v87 + 4); /*0x7ebbc0*/
  v89 = (_DWORD *)(v87 + 4); /*0x7ebbc3*/
  if ( v88 ) /*0x7ebbc8*/
  {
    if ( !v85((volatile LONG *)(v88 + 4)) ) /*0x7ebbce*/
      (**(void (__thiscall ***)(int, int))v88)(v88, 1); /*0x7ebbe0*/
    *v89 = 0; /*0x7ebbe2*/
  }
  v90 = *(_DWORD *)(*(_DWORD *)(v100 + 0xAC) + 0x24); /*0x7ebbee*/
  v91 = *(_DWORD *)(*(_DWORD *)v90 + 4); /*0x7ebbf3*/
  v92 = (_DWORD *)(*(_DWORD *)v90 + 4); /*0x7ebbf6*/
  if ( v91 ) /*0x7ebbfb*/
  {
    if ( !v85((volatile LONG *)(v91 + 4)) ) /*0x7ebc01*/
      (**(void (__thiscall ***)(int, int))v91)(v91, 1); /*0x7ebc13*/
    *v92 = 0; /*0x7ebc15*/
  }
  v93 = *(_DWORD *)(*(_DWORD *)(v100 + 0xB0) + 0x24); /*0x7ebc21*/
  v94 = *(_DWORD *)(*(_DWORD *)v93 + 4); /*0x7ebc26*/
  v95 = (_DWORD *)(*(_DWORD *)v93 + 4); /*0x7ebc29*/
  if ( v94 ) /*0x7ebc2e*/
  {
    if ( !v85((volatile LONG *)(v94 + 4)) ) /*0x7ebc34*/
      (**(void (__thiscall ***)(int, int))v94)(v94, 1); /*0x7ebc46*/
    *v95 = 0; /*0x7ebc48*/
  }
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], texture); /*0x7ebc59*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v98); /*0x7ebc69*/
}
