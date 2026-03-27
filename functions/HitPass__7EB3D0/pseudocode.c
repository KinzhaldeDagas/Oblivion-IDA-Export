void __thiscall HitPass(_DWORD *this, NiScreenElements *arg0, float a3, _DWORD **a4, char a5)
{
  NiDX9Renderer *v5; // eax
  BSTextureManager *v6; // ecx
  BSRenderedTexture *DefaultRenderTarget; // eax
  NiDX9Renderer *v8; // ecx
  BSTextureManager *v9; // ecx
  BSRenderedTexture *v10; // eax
  char v11; // dl
  BSRenderedTexture **v12; // ebx
  double v13; // st7
  bool v14; // zf
  NiRenderTargetGroup *v15; // esi
  int v16; // ecx
  NiRenderTargetGroup *v17; // esi
  int v18; // ecx
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
  BSRenderedTexture *v97; // [esp+0h] [ebp-B4h]
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

  v5 = dword_B43104;
  p_member = 0x13;
  v121 = (ClearFlags)this;
  v6 = g_textureManager;
  v120 = 0;
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(v6, v5, 0x13);
  v8 = dword_B43104;
  p_member = 0x13;
  v116 = (int)v8;
  v9 = g_textureManager;
  a2 = DefaultRenderTarget;
  v10 = BSTextureManager_GetDefaultRenderTarget(v9, (NiDX9Renderer *)v116, 0x13);
  v11 = byte_B43075;
  v129 = 0.0;
  v12 = (BSRenderedTexture **)LODWORD(a3);
  *(float *)&v130 = 1.0;
  v131 = 1.0;
  v125 = v10;
  v13 = 1.0;
  v132 = 0.0;
  v14 = byte_B42E96 == 0;
  a1 = v11 != 0 ? 7 : 0;
  if ( v14 )
  {
    v15 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v16 = *(_DWORD *)(*(_DWORD *)LODWORD(a3) + 0x20);
    if ( v16 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 0x4C))(v16);
    v15->vtbl->GetWidth(v15, 0);
    v17 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v18 = *(_DWORD *)(*(_DWORD *)LODWORD(a3) + 0x20);
    if ( v18 )
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x50))(v18);
    else
      v19 = 0;
    a1 = v17->vtbl->GetHeight(v17, 0);
    v20 = (double)a1;
    if ( a1 < 0 )
      v20 = v20 + flt_A2FC78;
    a1 = v19;
    v21 = (double)v19;
    if ( v19 < 0 )
      v21 = v21 + flt_A2FC78;
    v13 = v20 / v21;
  }
  else
  {
    a3 = 1.0;
  }
  v22 = *v12;
  v122 = v13;
  RenderedTexture = v22->members.RenderedTexture;
  if ( RenderedTexture )
    v24 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
  else
    v24 = 0;
  v128 = *(float *)&v24;
  v25 = (double)v24;
  if ( v24 < 0 )
    v25 = v25 + flt_A2FC78;
  v26 = (*v12)->members.RenderedTexture;
  v128 = dbl_A2FAA0 / v25;
  if ( v26 )
    v27 = v26->__vftable->super.GetHeight((NiTexture *)v26);
  else
    v27 = 0;
  v127 = *(float *)&v27;
  v28 = (double)v27;
  if ( v27 < 0 )
    v28 = v28 + flt_A2FC78;
  v29 = v121;
  v124 = dbl_A2FAA0 / v28;
  flt_B2D8EC = a3;
  flt_B2D8F0 = v122;
  v127 = v128 + 0.0;
  flt_B2D8F4 = v127;
  v128 = v124 + 0.0;
  flt_B2D8F8 = v128;
  *(_DWORD *)(v29 + 0x90) = 0;
  v30 = **(_DWORD **)(*(_DWORD *)(v29 + 0xB0) + 0x24);
  InnerTexture = BSRenderedTexture::GetInnerTexture(*v12);
  v32 = *(NiRenderedTexture **)(v30 + 4);
  v33 = InnerTexture;
  if ( v32 != InnerTexture )
  {
    if ( v32 )
    {
      p_member = (int)&v32->member;
      if ( !((int (*)(void))InterlockedDecrement)() )
      {
        Destructor = v32->__vftable->super.super.super.Destructor;
        v116 = 1;
        ((void (__thiscall *)(NiRenderedTexture *))Destructor)(v32);
      }
    }
    *(_DWORD *)(v30 + 4) = v33;
    if ( v33 )
    {
      v115 = &v33->member;
      ((void (*)(void))InterlockedIncrement)();
    }
  }
  v35 = v120;
  v36 = BSRenderedTexture::UseTextureToRender(v120);
  NiRenderer_BeginScene(kClear_BACKBUFFER, v36);
  v37 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v37->member.super.SceneState2 == 1)
    && v37->member.super.IsReady == 1 )
  {
    SetupScreenSpaceCamera = v37->__vftable->super.SetupScreenSpaceCamera;
    v114 = 0;
    ((void (__thiscall *)(NiDX9Renderer *))SetupScreenSpaceCamera)(v37);
    v37 = g_Renderer;
  }
  v113 = v37;
  sub_709C60(v130);
  NiRenderer_EndScene();
  v39 = v118;
  flt_B2D8EC = 1.0;
  v40 = v120;
  flt_B2D8F0 = 1.0;
  flt_B2D8F4 = 0.0;
  flt_B2D8F8 = 0.0;
  *((_DWORD *)v39 + 0x24) = 1;
  flt_B46114 = 0.0;
  flt_B46118 = flt_A92380;
  v41 = BSRenderedTexture::UseTextureToRender(v40);
  NiRenderer_BeginScene(v121, v41);
  if ( v35 )
  {
    p_RenderedTexture = &v35->members.RenderedTexture;
    v43 = v119;
  }
  else
  {
    v43 = 0;
    v119 = 0;
    p_RenderedTexture = (NiRenderedTexture **)&v119;
    p_member = 1;
  }
  v44 = *p_RenderedTexture;
  if ( (p_member & 1) != 0 )
  {
    p_member &= ~1u;
    if ( v43 )
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD), NiDX9Renderer *))InterlockedDecrement)(v43 + 1, v113) )
      {
        v45 = **v43;
        v112 = kClear_BACKBUFFER;
        v45(v43);
      }
    }
  }
  v46 = *(_DWORD *)(*(_DWORD *)(v116 + 0xAC) + 0x24);
  v47 = *(NiRenderedTexture **)(*(_DWORD *)v46 + 4);
  v48 = (NiRenderedTexture **)(*(_DWORD *)v46 + 4);
  if ( v47 != v44 )
  {
    if ( v47 )
    {
      LODWORD(v111) = &v47->member;
      if ( !((int (*)(void))InterlockedDecrement)() )
      {
        v49 = v47->__vftable->super.super.super.Destructor;
        v110 = 1;
        ((void (__thiscall *)(NiRenderedTexture *))v49)(v47);
      }
    }
    *v48 = v44;
    if ( v44 )
    {
      v109 = (BSRenderedTexture *)&v44->member;
      ((void (*)(void))InterlockedIncrement)();
    }
  }
  v50 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v50->member.super.SceneState2 == 1)
    && v50->member.super.IsReady == 1 )
  {
    v50->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v50, 0);
    v50 = g_Renderer;
  }
  v107 = (NiScreenElements *)v50;
  sub_709C60((NiScreenElements *)a2);
  NiRenderer_EndScene();
  v51 = v115;
  flt_B46114 = flt_A92380;
  flt_B46118 = 0.0;
  if ( v51 )
  {
    v52 = v114;
    p_rendererData = &v51->super.rendererData;
  }
  else
  {
    v52 = 0;
    LODWORD(v111) |= 2u;
    v114 = 0;
    p_rendererData = (NiDX9TextureData **)&v114;
  }
  v54 = *p_rendererData;
  if ( (LOBYTE(v111) & 2) != 0 )
  {
    LODWORD(v111) &= ~2u;
    if ( v52 )
    {
      v106 = v52 + 1;
      if ( !((int (*)(void))InterlockedDecrement)() )
      {
        v55 = **v52;
        v105 = 1;
        v55(v52);
      }
    }
  }
  v56 = *(_DWORD *)(*(_DWORD *)(v110 + 0xAC) + 0x24);
  v57 = *(NiDX9TextureData **)(*(_DWORD *)v56 + 4);
  v58 = (NiDX9TextureData **)(*(_DWORD *)v56 + 4);
  if ( v57 != v54 )
  {
    if ( v57 )
    {
      LODWORD(v104) = &v57->parent;
      if ( !((int (*)(void))InterlockedDecrement)() )
      {
        v59 = (void (__thiscall *)(NiDX9TextureData *))*v57->_vtbl;
        v103 = 1;
        v59(v57);
      }
    }
    *v58 = v54;
    if ( v54 )
    {
      p_parent = &v54->parent;
      ((void (*)(void))InterlockedIncrement)();
    }
  }
  v60 = BSRenderedTexture::UseTextureToRender(v109);
  NiRenderer_BeginScene(v112, v60);
  v61 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v61->member.super.SceneState2 == 1)
    && v61->member.super.IsReady == 1 )
  {
    v61->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v61, 0);
    v61 = g_Renderer;
  }
  v101 = v61;
  sub_709C60(v118);
  NiRenderer_EndScene();
  v14 = dword_B42D78 == 0;
  flt_B2D8EC = *(float *)&v118;
  flt_B2D8F0 = *(float *)&v106;
  flt_B2D8F4 = v111;
  flt_B2D8F8 = *(float *)&v112;
  flt_B2D8FC = 1.0;
  flt_B2D900 = 1.0;
  v62 = 0.0;
  flt_B2D904 = 0.0;
  flt_B2D908 = 0.0;
  if ( v14 )
  {
    *(float *)&v112 = 0.0;
  }
  else
  {
    *(float *)&v112 = ((double (__cdecl *)(_DWORD, int, NiDX9Renderer *))dword_B42D78)(0, 1, v101);
    v62 = 0.0;
  }
  v14 = dword_B42D78 == 0;
  *(float *)&v112 = *(float *)&v112 / dbl_A2F938 * dbl_A56E20;
  if ( v14 )
  {
    v108 = v62;
  }
  else
  {
    v108 = ((double (__cdecl *)(int, int))dword_B42D78)(1, 1);
    v62 = 0.0;
  }
  flt_B46124 = flt_B46124 - v108 * dbl_A73E80;
  if ( v62 >= flt_B46124 )
    flt_B46124 = v62;
  v111 = sin(*(float *)&v112);
  flt_B2D90C = v111 * flt_B46124;
  *(float *)&v112 = cos(*(float *)&v112);
  flt_B2D910 = *(float *)&v112 * flt_B46124;
  flt_B2D914 = *(float *)&v118;
  flt_B2D918 = *(float *)&v106;
  v63 = flt_B46120 - v108 * dbl_A2FAA0;
  if ( v63 <= 0.0 )
    v63 = 0.0;
  v64 = v105;
  flt_B46120 = v63;
  flt_B4611C = flt_B46130 * flt_B46120;
  *(_DWORD *)(v64 + 0x90) = 2;
  v65 = *v12;
  v14 = *v12 == 0;
  v66 = LOBYTE(v104);
  if ( v14 )
  {
    v67 = 0;
    *(float *)&v112 = 0.0;
    v68 = &v112;
    v66 = LOBYTE(v104) | 4;
  }
  else
  {
    v67 = (void (__thiscall ***)(_DWORD))v112;
    v68 = (ClearFlags *)&v65->members.RenderedTexture;
  }
  v69 = (void (__thiscall ***)(_DWORD))*v68;
  if ( (v66 & 4) != 0 )
  {
    v66 &= ~4u;
    if ( v67 )
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedDecrement)(v67 + 1) )
      {
        v100 = 1;
        (**v67)(v67);
      }
    }
  }
  v70 = *(_DWORD *)(*(_DWORD *)(v103 + 0x70) + 0x24);
  v71 = *(void (__thiscall ****)(_DWORD))(*(_DWORD *)v70 + 4);
  v72 = (_DWORD *)(*(_DWORD *)v70 + 4);
  if ( v71 != v69 )
  {
    if ( v71 )
    {
      if ( !((int (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedDecrement)(v71 + 1) )
      {
        v99 = 1;
        (**v71)(v71);
      }
    }
    *v72 = v69;
    if ( v69 )
      ((void (__cdecl *)(void (__thiscall ***)(_DWORD)))InterlockedIncrement)(v69 + 1);
  }
  if ( p_parent )
  {
    v73 = v107;
    v74 = (NiScreenElements **)(p_parent + 8);
  }
  else
  {
    v73 = 0;
    v107 = 0;
    v74 = &v107;
    v66 |= 8u;
  }
  v75 = *v74;
  if ( (v66 & 8) != 0 )
  {
    if ( v73 )
    {
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v73 + 4) )
      {
        v98 = (BSRenderedTexture *)1;
        (**(void (__thiscall ***)(NiScreenElements *))v73)(v73);
      }
    }
  }
  v76 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24) + 4);
  v77 = *(NiScreenElements **)(v76 + 4);
  v78 = (NiScreenElements **)(v76 + 4);
  if ( v77 != v75 )
  {
    if ( v77 )
    {
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v77 + 4) )
      {
        v97 = (BSRenderedTexture *)1;
        (**(void (__thiscall ***)(NiScreenElements *))v77)(v77);
      }
    }
    *v78 = v75;
    if ( v75 )
      ((void (__cdecl *)(char *))InterlockedIncrement)((char *)v75 + 4);
  }
  if ( LOBYTE(v111) )
  {
    v79 = 1.0;
    v104 = 1.0;
  }
  else
  {
    v104 = *(float *)&v109;
    v79 = *(float *)&v99;
  }
  v80 = (_DWORD *)v110;
  *(float *)&v105 = v79;
  if ( *(_DWORD *)v110 )
  {
    v81 = BSRenderedTexture::UseTextureToRender(*(BSRenderedTexture **)v110);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v81);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
  }
  v82 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v82->member.super.SceneState2 == 1)
    && v82->member.super.IsReady == 1 )
  {
    v82->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v82, (NiViewport *)&v103);
    v82 = g_Renderer;
  }
  v96 = v82;
  sub_709C60(v107);
  if ( *v80 )
    NiRenderer_EndScene();
  v83 = *(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24);
  v84 = *(_DWORD *)(*(_DWORD *)v83 + 4);
  v85 = InterlockedDecrement;
  v86 = (_DWORD *)(*(_DWORD *)v83 + 4);
  if ( v84 )
  {
    if ( !v85((volatile LONG *)(v84 + 4)) )
      (**(void (__thiscall ***)(int, int, NiDX9Renderer *))v84)(v84, 1, v96);
    *v86 = 0;
  }
  v87 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v100 + 0x70) + 0x24) + 4);
  v88 = *(_DWORD *)(v87 + 4);
  v89 = (_DWORD *)(v87 + 4);
  if ( v88 )
  {
    if ( !v85((volatile LONG *)(v88 + 4)) )
      (**(void (__thiscall ***)(int, int))v88)(v88, 1);
    *v89 = 0;
  }
  v90 = *(_DWORD *)(*(_DWORD *)(v100 + 0xAC) + 0x24);
  v91 = *(_DWORD *)(*(_DWORD *)v90 + 4);
  v92 = (_DWORD *)(*(_DWORD *)v90 + 4);
  if ( v91 )
  {
    if ( !v85((volatile LONG *)(v91 + 4)) )
      (**(void (__thiscall ***)(int, int))v91)(v91, 1);
    *v92 = 0;
  }
  v93 = *(_DWORD *)(*(_DWORD *)(v100 + 0xB0) + 0x24);
  v94 = *(_DWORD *)(*(_DWORD *)v93 + 4);
  v95 = (_DWORD *)(*(_DWORD *)v93 + 4);
  if ( v94 )
  {
    if ( !v85((volatile LONG *)(v94 + 4)) )
      (**(void (__thiscall ***)(int, int))v94)(v94, 1);
    *v95 = 0;
  }
  sub_7C1EE0(g_textureManager, v97);
  sub_7C1EE0(g_textureManager, v98);
}
