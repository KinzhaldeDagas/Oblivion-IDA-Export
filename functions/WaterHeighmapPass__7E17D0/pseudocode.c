void __thiscall WaterHeighmapPass(
        WaterShaderHeightMap *this,
        NiScreenElements *a2,
        BSRenderedTexture **a3,
        BSRenderedTexture **a4,
        char a5)
{
  NiRenderTargetGroup *v6; // esi
  NiTexture *RenderedTexture; // ecx
  int v8; // edi
  double v9; // st7
  double v10; // st6
  NiRenderTargetGroup *v11; // esi
  NiRenderedTexture *v12; // ecx
  int v13; // edi
  double v14; // st7
  double v15; // st6
  bool v16; // zf
  double v17; // st7
  NiTexture *v18; // ecx
  int v19; // eax
  double v20; // st6
  NiTexture *v21; // ecx
  int v22; // eax
  double v23; // st6
  unsigned __int8 v24; // al
  Ni2DBuffer *DefaultRenderTarget; // eax
  BSRenderedTexture **p_Unk0F0; // esi
  Ni2DBuffer *v27; // eax
  BSRenderedTexture **p_Unk0F4; // edi
  Ni2DBuffer *v29; // eax
  void (__stdcall *v30)(volatile LONG *); // ebx
  BSRenderedTexture *Unk0EC; // esi
  BSRenderedTexture *v32; // eax
  BSRenderedTexture *v33; // ebx
  BSRenderedTexture *v34; // ecx
  NiRenderTargetGroup *v35; // eax
  NiRenderer *v36; // ecx
  BSRenderedTexture *v37; // esi
  BSRenderedTexture *v38; // eax
  BSRenderedTexture *v39; // edi
  NiRenderTargetGroup *v40; // eax
  NiRenderer *v41; // ecx
  BSRenderedTexture *v42; // esi
  NiRenderTargetGroup *v43; // eax
  NiDX9Renderer *v44; // ecx
  BSRenderedTexture *v45; // edi
  NiRenderTargetGroup *v46; // eax
  NiRenderer *v47; // ecx
  BSRenderedTexture *v48; // esi
  NiRenderTargetGroup *v49; // eax
  NiDX9Renderer *v50; // ecx
  BSRenderedTexture *v51; // edi
  BSRenderedTexture *v52; // esi
  int v53; // eax
  int v54; // esi
  int v55; // edi
  NiDX9Renderer *v56; // ecx
  BSRenderedTexture *v57; // edi
  BSRenderedTexture *v58; // esi
  BSRenderedTexture *v59; // esi
  NiRenderTargetGroup *v60; // eax
  NiRenderer *v61; // ecx
  BSRenderedTexture *v62; // esi
  BSRenderedTexture *v63; // esi
  LONG (__stdcall *v64)(volatile LONG *); // edi
  BSRenderedTexture *v65; // esi
  NiRenderTargetGroup *v66; // [esp+78h] [ebp-54h]
  BSRenderedTexture *v67; // [esp+90h] [ebp-3Ch]
  ClearFlags a1; // [esp+94h] [ebp-38h]
  int v69; // [esp+98h] [ebp-34h]
  float v70; // [esp+98h] [ebp-34h]
  float v71; // [esp+9Ch] [ebp-30h]
  float v72; // [esp+A0h] [ebp-2Ch]
  int v73; // [esp+A0h] [ebp-2Ch]
  float v74; // [esp+A4h] [ebp-28h]
  BSRenderedTexture **p_Unk0E8; // [esp+A4h] [ebp-28h]
  float v76; // [esp+A8h] [ebp-24h]
  BSRenderedTexture **v77; // [esp+A8h] [ebp-24h]
  int v78; // [esp+ACh] [ebp-20h]
  int v79; // [esp+ACh] [ebp-20h]
  BSRenderedTexture **v80; // [esp+ACh] [ebp-20h]
  NiViewport v81; // [esp+B0h] [ebp-1Ch] BYREF
  unsigned int v82; // [esp+C8h] [ebp-4h]
  BSRenderedTexture *v83; // [esp+DCh] [ebp+10h]

  if ( !LOBYTE(this->Unk108) ) /*0x7e17f9*/
    sub_7E1710(this); /*0x7e1802*/
  v6 = renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)renderer); /*0x7e1818*/
  RenderedTexture = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7e181c*/
  if ( RenderedTexture ) /*0x7e1821*/
    v8 = RenderedTexture->__vftable->GetWidth(RenderedTexture); /*0x7e182a*/
  else
    v8 = 0; /*0x7e182e*/
  v78 = v6->vtbl->GetWidth(v6, 0); /*0x7e183d*/
  v9 = (double)v78; /*0x7e1841*/
  if ( v78 < 0 ) /*0x7e1845*/
    v9 = v9 + flt_A2FC78; /*0x7e1847*/
  v10 = (double)v8; /*0x7e1853*/
  if ( v8 < 0 ) /*0x7e1857*/
    v10 = v10 + flt_A2FC78; /*0x7e1859*/
  v72 = v9 / v10; /*0x7e186c*/
  v11 = renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)renderer); /*0x7e1872*/
  v12 = (*a3)->members.RenderedTexture; /*0x7e1876*/
  if ( v12 ) /*0x7e187b*/
    v13 = v12->__vftable->super.GetHeight((NiTexture *)v12); /*0x7e1884*/
  else
    v13 = 0; /*0x7e1888*/
  v79 = v11->vtbl->GetHeight(v11, 0); /*0x7e1897*/
  v14 = (double)v79; /*0x7e189b*/
  if ( v79 < 0 ) /*0x7e189f*/
    v14 = v14 + flt_A2FC78; /*0x7e18a1*/
  v15 = (double)v13; /*0x7e18ad*/
  if ( v13 < 0 ) /*0x7e18b1*/
    v15 = v15 + flt_A2FC78; /*0x7e18b3*/
  v16 = unk_B42E96 == 0; /*0x7e18b9*/
  v71 = v14 / v15; /*0x7e18c2*/
  v81.l = 0.0; /*0x7e18c8*/
  v81.r = 1.0; /*0x7e18ce*/
  v81.t = 1.0; /*0x7e18d2*/
  v17 = 1.0; /*0x7e18d6*/
  v81.b = 0.0; /*0x7e18d8*/
  if ( !v16 ) /*0x7e18dc*/
  {
    v72 = 1.0; /*0x7e18de*/
    v71 = 1.0; /*0x7e18e2*/
  }
  v18 = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7e18e8*/
  if ( v18 ) /*0x7e18ed*/
  {
    v19 = v18->__vftable->GetWidth(v18); /*0x7e18f6*/
    v17 = 1.0; /*0x7e18f8*/
  }
  else
  {
    v19 = 0; /*0x7e18fc*/
  }
  v20 = (double)v19; /*0x7e1904*/
  if ( v19 < 0 ) /*0x7e1908*/
    v20 = v20 + flt_A2FC78; /*0x7e190a*/
  v21 = (NiTexture *)(*a3)->members.RenderedTexture; /*0x7e1918*/
  v76 = dbl_A2FAA0 / v20; /*0x7e191d*/
  if ( v21 ) /*0x7e1921*/
  {
    v22 = v21->__vftable->GetHeight(v21); /*0x7e192a*/
    v17 = 1.0; /*0x7e192c*/
  }
  else
  {
    v22 = 0; /*0x7e1930*/
  }
  v23 = (double)v22; /*0x7e1938*/
  if ( v22 < 0 ) /*0x7e193c*/
    v23 = v23 + flt_A2FC78; /*0x7e193e*/
  v74 = dbl_A2FAA0 / v23; /*0x7e194f*/
  this->Unk090 = v72; /*0x7e1957*/
  this->Unk094 = v71; /*0x7e1961*/
  this->Unk098 = v76 + 0.0; /*0x7e1971*/
  this->Unk09C = v74 + 0.0; /*0x7e197b*/
  if ( a5 ) /*0x7e1981*/
  {
    v81.r = v17; /*0x7e1987*/
  }
  else
  {
    v17 = v71; /*0x7e198d*/
    v81.r = v72; /*0x7e198f*/
  }
  v24 = OB_RendererGlobalState_010201A0.pad_1DB[1]; /*0x7e1993*/
  v81.t = v17; /*0x7e1998*/
  v73 = LODWORD(OB_ShaderConstantStorage_010201A0[0x6E]); /*0x7e19aa*/
  p_Unk0E8 = &this->Unk0E8; /*0x7e19ae*/
  a1 = v24 != 0 ? kClear_ALL : kClear_NONE;
  if ( !this->Unk0E8 ) /*0x7e19bb*/
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e19d0*/
                                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                          unk_B43104,
                                          6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0E8, DefaultRenderTarget); /*0x7e19d8*/
  }
  p_Unk0F0 = &this->Unk0F0; /*0x7e19e4*/
  v80 = &this->Unk0F0; /*0x7e19ea*/
  if ( !this->Unk0F0 ) /*0x7e19dd*/
  {
    v27 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e19fe*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                          unk_B43104,
                          6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0F0, v27); /*0x7e1a06*/
  }
  p_Unk0F4 = &this->Unk0F4; /*0x7e1a12*/
  v77 = &this->Unk0F4; /*0x7e1a18*/
  if ( !this->Unk0F4 ) /*0x7e1a0b*/
  {
    v29 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x7e1a2d*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                          unk_B43104,
                          6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0F4, v29); /*0x7e1a35*/
  }
  v30 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x7e1a3e*/
  v83 = *p_Unk0F0; /*0x7e1a44*/
  if ( *p_Unk0F0 ) /*0x7e1a3a*/
    v30((volatile LONG *)&(*p_Unk0F0)->members); /*0x7e1a4e*/
  Unk0EC = this->Unk0EC; /*0x7e1a50*/
  v16 = Unk0EC == *p_Unk0F4; /*0x7e1a56*/
  v82 = 0; /*0x7e1a58*/
  if ( !v16 ) /*0x7e1a60*/
  {
    if ( Unk0EC ) /*0x7e1a64*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk0EC->members) ) /*0x7e1a6a*/
        ((void (__thiscall *)(BSRenderedTexture *, int))*Unk0EC->vtbl)(Unk0EC, 1); /*0x7e1a80*/
    }
    v32 = *p_Unk0F4; /*0x7e1a82*/
    v16 = *p_Unk0F4 == 0; /*0x7e1a84*/
    this->Unk0EC = *p_Unk0F4; /*0x7e1a86*/
    if ( !v16 ) /*0x7e1a8c*/
      v30((volatile LONG *)&v32->members); /*0x7e1a92*/
  }
  v33 = this->Unk0EC; /*0x7e1a94*/
  if ( v33 ) /*0x7e1aa2*/
    InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1aa8*/
  v67 = 0; /*0x7e1aae*/
  v34 = *p_Unk0E8; /*0x7e1ab6*/
  LOBYTE(v82) = 2; /*0x7e1ab8*/
  this->CurrentPixelIndex = 0; /*0x7e1abd*/
  v35 = BSRenderedTexture::UseTextureToRender(v34); /*0x7e1ac3*/
  NiRenderer_BeginScene(a1, v35); /*0x7e1ace*/
  v36 = (NiRenderer *)renderer; /*0x7e1ad3*/
  if ( (renderer->member.super.SceneState1 == 1 || v36->members.SceneState2 == 1) && v36->members.IsReady == 1 ) /*0x7e1af7*/
    v36->__vftable->SetupScreenSpaceCamera(v36, &v81); /*0x7e1b06*/
  sub_709C60(a2); /*0x7e1b13*/
  NiRenderer_EndScene(); /*0x7e1b18*/
  v37 = this->Unk0EC; /*0x7e1b1d*/
  if ( v37 != *p_Unk0E8 ) /*0x7e1b25*/
  {
    if ( v37 ) /*0x7e1b29*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v37->members) ) /*0x7e1b2f*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v37->vtbl)(v37, 1); /*0x7e1b45*/
    }
    v38 = *p_Unk0E8; /*0x7e1b47*/
    v16 = *p_Unk0E8 == 0; /*0x7e1b49*/
    this->Unk0EC = *p_Unk0E8; /*0x7e1b4b*/
    if ( !v16 ) /*0x7e1b51*/
      InterlockedIncrement((volatile LONG *)&v38->members); /*0x7e1b57*/
  }
  v39 = v83; /*0x7e1b5d*/
  this->CurrentPixelIndex = 3; /*0x7e1b63*/
  v40 = BSRenderedTexture::UseTextureToRender(v83); /*0x7e1b6d*/
  NiRenderer_BeginScene(a1, v40); /*0x7e1b78*/
  v41 = (NiRenderer *)renderer; /*0x7e1b7d*/
  if ( (renderer->member.super.SceneState1 == 1 || v41->members.SceneState2 == 1) && v41->members.IsReady == 1 ) /*0x7e1ba1*/
    v41->__vftable->SetupScreenSpaceCamera(v41, &v81); /*0x7e1bb0*/
  sub_709C60(a2); /*0x7e1bbd*/
  NiRenderer_EndScene(); /*0x7e1bc2*/
  if ( v33 ) /*0x7e1bc9*/
  {
    v67 = v33; /*0x7e1bcf*/
    InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1bd3*/
  }
  v42 = this->Unk0EC; /*0x7e1bd9*/
  if ( v42 != v83 ) /*0x7e1be1*/
  {
    if ( v42 ) /*0x7e1be5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v42->members) ) /*0x7e1beb*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v42->vtbl)(v42, 1); /*0x7e1c01*/
    }
    this->Unk0EC = v83; /*0x7e1c05*/
    if ( v83 ) /*0x7e1c0b*/
      InterlockedIncrement((volatile LONG *)&v83->members); /*0x7e1c11*/
  }
  if ( v33 != this->Unk0EC ) /*0x7e1c1d*/
  {
    if ( v33 ) /*0x7e1c21*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v33->members) ) /*0x7e1c27*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1); /*0x7e1c39*/
    }
    v33 = this->Unk0EC; /*0x7e1c3b*/
    if ( v33 ) /*0x7e1c47*/
      InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1c4d*/
  }
  if ( v83 != v67 ) /*0x7e1c59*/
  {
    if ( v83 ) /*0x7e1c5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v83->members) ) /*0x7e1c63*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1); /*0x7e1c75*/
    }
    v39 = v67; /*0x7e1c79*/
    v83 = v67; /*0x7e1c7b*/
    if ( v67 ) /*0x7e1c7f*/
      InterlockedIncrement((volatile LONG *)&v67->members); /*0x7e1c85*/
  }
  this->CurrentPixelIndex = 1; /*0x7e1c92*/
  v43 = BSRenderedTexture::UseTextureToRender(v39); /*0x7e1c98*/
  NiRenderer_BeginScene(a1, v43); /*0x7e1ca3*/
  v44 = renderer; /*0x7e1ca8*/
  if ( (renderer->member.super.SceneState1 == 1 || v44->member.super.SceneState2 == 1) && v44->member.super.IsReady == 1 ) /*0x7e1cc8*/
    v44->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v44, &v81); /*0x7e1cd7*/
  sub_709C60(a2); /*0x7e1ce4*/
  NiRenderer_EndScene(); /*0x7e1ce9*/
  v69 = 0; /*0x7e1cf3*/
  if ( v73 > 0 ) /*0x7e1cfb*/
  {
    v45 = v83; /*0x7e1d01*/
    do /*0x7e1e6e*/
    {
      this->fPassNum = (double)v69 * dbl_A40350 + dbl_A46038; /*0x7e1d17*/
      v46 = BSRenderedTexture::UseTextureToRender(v45); /*0x7e1d1d*/
      NiRenderer_BeginScene(a1, v46); /*0x7e1d28*/
      v47 = (NiRenderer *)renderer; /*0x7e1d2d*/
      if ( (renderer->member.super.SceneState1 == 1 || v47->members.SceneState2 == 1) && v47->members.IsReady == 1 ) /*0x7e1d51*/
        v47->__vftable->SetupScreenSpaceCamera(v47, &v81); /*0x7e1d60*/
      sub_709C60(a2); /*0x7e1d6d*/
      if ( v67 != v33 ) /*0x7e1d78*/
      {
        if ( v67 ) /*0x7e1d7c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v67->members) ) /*0x7e1d82*/
            (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1); /*0x7e1d94*/
        }
        v67 = v33; /*0x7e1d98*/
        if ( v33 ) /*0x7e1d9c*/
          InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1da2*/
      }
      v48 = this->Unk0EC; /*0x7e1da8*/
      if ( v48 != v45 ) /*0x7e1db0*/
      {
        if ( v48 ) /*0x7e1db4*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v48->members) ) /*0x7e1dba*/
            (*(void (__thiscall **)(BSRenderedTexture *, int))v48->vtbl)(v48, 1); /*0x7e1dd0*/
        }
        this->Unk0EC = v45; /*0x7e1dd4*/
        if ( v45 ) /*0x7e1dda*/
          InterlockedIncrement((volatile LONG *)&v45->members); /*0x7e1de0*/
      }
      if ( v33 != this->Unk0EC ) /*0x7e1dec*/
      {
        if ( v33 ) /*0x7e1df0*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v33->members) ) /*0x7e1df6*/
            (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1); /*0x7e1e08*/
        }
        v33 = this->Unk0EC; /*0x7e1e0a*/
        if ( v33 ) /*0x7e1e16*/
          InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1e1c*/
      }
      if ( v45 != v67 ) /*0x7e1e28*/
      {
        if ( v45 ) /*0x7e1e2c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v45->members) ) /*0x7e1e32*/
            (*(void (__thiscall **)(BSRenderedTexture *, int))v45->vtbl)(v45, 1); /*0x7e1e44*/
        }
        v45 = v67; /*0x7e1e48*/
        v83 = v67; /*0x7e1e4a*/
        if ( v67 ) /*0x7e1e4e*/
          InterlockedIncrement((volatile LONG *)&v67->members); /*0x7e1e54*/
      }
      NiRenderer_EndScene(); /*0x7e1e5a*/
      ++v69; /*0x7e1e6a*/
    }
    while ( v69 < v73 ); /*0x7e1e6e*/
  }
  this->CurrentPixelIndex = 4; /*0x7e1e78*/
  v49 = BSRenderedTexture::UseTextureToRender(v83); /*0x7e1e82*/
  NiRenderer_BeginScene(a1, v49); /*0x7e1e8d*/
  v50 = renderer; /*0x7e1e92*/
  if ( (renderer->member.super.SceneState1 == 1 || v50->member.super.SceneState2 == 1) && v50->member.super.IsReady == 1 ) /*0x7e1eb7*/
    v50->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v50, &v81); /*0x7e1ec6*/
  sub_709C60(a2); /*0x7e1ed3*/
  NiRenderer_EndScene(); /*0x7e1ed8*/
  v51 = v67; /*0x7e1edd*/
  if ( v67 != v33 ) /*0x7e1ee3*/
  {
    if ( v67 ) /*0x7e1ee7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v67->members) ) /*0x7e1eed*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1); /*0x7e1efe*/
    }
    v51 = v33; /*0x7e1f02*/
    v67 = v33; /*0x7e1f04*/
    if ( v33 ) /*0x7e1f08*/
      InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1f0e*/
  }
  v52 = this->Unk0EC; /*0x7e1f14*/
  if ( v52 != v83 ) /*0x7e1f1e*/
  {
    if ( v52 ) /*0x7e1f22*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v52->members) ) /*0x7e1f28*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v52->vtbl)(v52, 1); /*0x7e1f3e*/
    }
    this->Unk0EC = v83; /*0x7e1f46*/
    if ( v83 ) /*0x7e1f4c*/
      InterlockedIncrement((volatile LONG *)&v83->members); /*0x7e1f52*/
  }
  if ( v33 != this->Unk0EC ) /*0x7e1f5e*/
  {
    if ( v33 ) /*0x7e1f62*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v33->members) ) /*0x7e1f68*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1); /*0x7e1f7a*/
    }
    v33 = this->Unk0EC; /*0x7e1f7c*/
    if ( v33 ) /*0x7e1f88*/
      InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e1f8e*/
  }
  if ( v83 != v51 ) /*0x7e1f9a*/
  {
    if ( v83 ) /*0x7e1f9e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v83->members) ) /*0x7e1fa4*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1); /*0x7e1fb6*/
    }
    v83 = v51; /*0x7e1fba*/
    if ( v51 ) /*0x7e1fbe*/
      InterlockedIncrement((volatile LONG *)&v51->members); /*0x7e1fc4*/
  }
  v53 = v73; /*0x7e1fca*/
  v54 = 0; /*0x7e1fce*/
  this->CurrentPixelIndex = 2; /*0x7e1fd2*/
  v70 = 0.0; /*0x7e1fdc*/
  if ( v73 > 0 ) /*0x7e1fe0*/
  {
    do /*0x7e21be*/
    {
      v55 = v53 - 1; /*0x7e1fea*/
      this->fPassNum = (double)SLODWORD(v70) * dbl_A40350 + dbl_A46038; /*0x7e1ffb*/
      if ( v54 == v53 - 1 ) /*0x7e2001*/
        v66 = BSRenderedTexture::UseTextureToRender(*a3); /*0x7e2012*/
      else
        v66 = BSRenderedTexture::UseTextureToRender(v83); /*0x7e2023*/
      NiRenderer_BeginScene(a1, v66); /*0x7e2014*/
      v56 = renderer; /*0x7e202a*/
      if ( (renderer->member.super.SceneState1 == 1 || v56->member.super.SceneState2 == 1) /*0x7e204e*/
        && v56->member.super.IsReady == 1 )
      {
        v56->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v56, &v81); /*0x7e205d*/
      }
      sub_709C60(a2); /*0x7e206a*/
      if ( v54 == v55 ) /*0x7e2071*/
      {
        v57 = *a3; /*0x7e2077*/
        v58 = this->Unk0EC; /*0x7e2079*/
        if ( v58 != *a3 ) /*0x7e2081*/
        {
          if ( v58 ) /*0x7e2089*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v58->members) ) /*0x7e208f*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v58->vtbl)(v58, 1); /*0x7e20a5*/
          }
          this->Unk0EC = v57; /*0x7e20a9*/
          if ( v57 ) /*0x7e20af*/
            InterlockedIncrement((volatile LONG *)&v57->members); /*0x7e20b9*/
        }
      }
      else
      {
        if ( v67 != v33 ) /*0x7e20c4*/
        {
          if ( v67 ) /*0x7e20c8*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v67->members) ) /*0x7e20ce*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1); /*0x7e20e0*/
          }
          v67 = v33; /*0x7e20e4*/
          if ( v33 ) /*0x7e20e8*/
            InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e20ee*/
        }
        v59 = this->Unk0EC; /*0x7e20f4*/
        if ( v59 != v83 ) /*0x7e2100*/
        {
          if ( v59 ) /*0x7e2104*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v59->members) ) /*0x7e210a*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v59->vtbl)(v59, 1); /*0x7e2120*/
          }
          this->Unk0EC = v83; /*0x7e2124*/
          if ( v83 ) /*0x7e212a*/
            InterlockedIncrement((volatile LONG *)&v83->members); /*0x7e2130*/
        }
        if ( v33 != this->Unk0EC ) /*0x7e213c*/
        {
          if ( v33 ) /*0x7e2140*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v33->members) ) /*0x7e2146*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1); /*0x7e2158*/
          }
          v33 = this->Unk0EC; /*0x7e215a*/
          if ( v33 ) /*0x7e2166*/
            InterlockedIncrement((volatile LONG *)&v33->members); /*0x7e216c*/
        }
        if ( v83 != v67 ) /*0x7e2178*/
        {
          if ( v83 ) /*0x7e217c*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v83->members) ) /*0x7e2182*/
              (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1); /*0x7e2194*/
          }
          v83 = v67; /*0x7e2198*/
          if ( v67 ) /*0x7e219c*/
            InterlockedIncrement((volatile LONG *)&v67->members); /*0x7e21a2*/
        }
      }
      NiRenderer_EndScene(); /*0x7e21a8*/
      v53 = v73; /*0x7e21b1*/
      v54 = ++LODWORD(v70); /*0x7e21b5*/
    }
    while ( SLODWORD(v70) < v73 ); /*0x7e21be*/
  }
  if ( BYTE1(OB_ShaderConstantStorage_010201A0[0x6F]) ) /*0x7e21c4*/
    this->CurrentPixelIndex = 5; /*0x7e21d1*/
  else
    this->CurrentPixelIndex = 6; /*0x7e21dd*/
  v60 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7e21e9*/
  NiRenderer_BeginScene(a1, v60); /*0x7e21f4*/
  v61 = (NiRenderer *)renderer; /*0x7e21f9*/
  if ( (renderer->member.super.SceneState1 == 1 || v61->members.SceneState2 == 1) && v61->members.IsReady == 1 ) /*0x7e221d*/
    v61->__vftable->SetupScreenSpaceCamera(v61, &v81); /*0x7e222c*/
  sub_709C60(a2); /*0x7e2239*/
  NiRenderer_EndScene(); /*0x7e223e*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], *p_Unk0E8); /*0x7e2250*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], *v80); /*0x7e2263*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], *v77); /*0x7e2275*/
  v62 = *p_Unk0E8; /*0x7e227a*/
  if ( *p_Unk0E8 ) /*0x7e227a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v62->members) ) /*0x7e2284*/
    {
      if ( v62 ) /*0x7e2290*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v62->vtbl)(v62, 1); /*0x7e229a*/
    }
    *p_Unk0E8 = 0; /*0x7e229c*/
  }
  v63 = *v80; /*0x7e22a2*/
  v64 = InterlockedDecrement; /*0x7e22a7*/
  if ( *v80 ) /*0x7e22a2*/
  {
    if ( !v64((volatile LONG *)&v63->members) ) /*0x7e22b3*/
    {
      if ( v63 ) /*0x7e22bb*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v63->vtbl)(v63, 1); /*0x7e22c5*/
    }
    *v80 = 0; /*0x7e22c7*/
  }
  v65 = *v77; /*0x7e22d2*/
  if ( *v77 ) /*0x7e22d2*/
  {
    if ( !v64((volatile LONG *)&v65->members) ) /*0x7e22dd*/
    {
      if ( v65 ) /*0x7e22e5*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v65->vtbl)(v65, 1); /*0x7e22ef*/
    }
    *v77 = 0; /*0x7e22f1*/
  }
  LOBYTE(v82) = 1; /*0x7e22fe*/
  if ( v67 ) /*0x7e2303*/
  {
    if ( !v64((volatile LONG *)&v67->members) ) /*0x7e2309*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1); /*0x7e2317*/
  }
  LOBYTE(v82) = 0; /*0x7e231b*/
  if ( v33 ) /*0x7e2320*/
  {
    if ( !v64((volatile LONG *)&v33->members) ) /*0x7e2326*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1); /*0x7e2334*/
  }
  v82 = 0xFFFFFFFF; /*0x7e233c*/
  if ( v83 ) /*0x7e2344*/
  {
    if ( !v64((volatile LONG *)&v83->members) ) /*0x7e234a*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1); /*0x7e2358*/
  }
}
