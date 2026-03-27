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
  char v24; // al
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

  if ( !LOBYTE(this->Unk108) )
    sub_7E1710(this);
  v6 = g_Renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)g_Renderer);
  RenderedTexture = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( RenderedTexture )
    v8 = RenderedTexture->__vftable->GetWidth(RenderedTexture);
  else
    v8 = 0;
  v78 = v6->vtbl->GetWidth(v6, 0);
  v9 = (double)v78;
  if ( v78 < 0 )
    v9 = v9 + flt_A2FC78;
  v10 = (double)v8;
  if ( v8 < 0 )
    v10 = v10 + flt_A2FC78;
  v72 = v9 / v10;
  v11 = g_Renderer->__vftable->super.GetDefaultRTGroup((NiRenderer *)g_Renderer);
  v12 = (*a3)->members.RenderedTexture;
  if ( v12 )
    v13 = v12->__vftable->super.GetHeight((NiTexture *)v12);
  else
    v13 = 0;
  v79 = v11->vtbl->GetHeight(v11, 0);
  v14 = (double)v79;
  if ( v79 < 0 )
    v14 = v14 + flt_A2FC78;
  v15 = (double)v13;
  if ( v13 < 0 )
    v15 = v15 + flt_A2FC78;
  v16 = byte_B42E96 == 0;
  v71 = v14 / v15;
  v81.l = 0.0;
  v81.r = 1.0;
  v81.t = 1.0;
  v17 = 1.0;
  v81.b = 0.0;
  if ( !v16 )
  {
    v72 = 1.0;
    v71 = 1.0;
  }
  v18 = (NiTexture *)(*a3)->members.RenderedTexture;
  if ( v18 )
  {
    v19 = v18->__vftable->GetWidth(v18);
    v17 = 1.0;
  }
  else
  {
    v19 = 0;
  }
  v20 = (double)v19;
  if ( v19 < 0 )
    v20 = v20 + flt_A2FC78;
  v21 = (NiTexture *)(*a3)->members.RenderedTexture;
  v76 = dbl_A2FAA0 / v20;
  if ( v21 )
  {
    v22 = v21->__vftable->GetHeight(v21);
    v17 = 1.0;
  }
  else
  {
    v22 = 0;
  }
  v23 = (double)v22;
  if ( v22 < 0 )
    v23 = v23 + flt_A2FC78;
  v74 = dbl_A2FAA0 / v23;
  this->Unk090 = v72;
  this->Unk094 = v71;
  this->Unk098 = v76 + 0.0;
  this->Unk09C = v74 + 0.0;
  if ( a5 )
  {
    v81.r = v17;
  }
  else
  {
    v17 = v71;
    v81.r = v72;
  }
  v24 = byte_B43075;
  v81.t = v17;
  v73 = widthStaticSquareForSomeSurface2log2__;
  p_Unk0E8 = &this->Unk0E8;
  a1 = v24 != 0 ? kClear_ALL : kClear_NONE;
  if ( !this->Unk0E8 )
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0E8, DefaultRenderTarget);
  }
  p_Unk0F0 = &this->Unk0F0;
  v80 = &this->Unk0F0;
  if ( !this->Unk0F0 )
  {
    v27 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0F0, v27);
  }
  p_Unk0F4 = &this->Unk0F4;
  v77 = &this->Unk0F4;
  if ( !this->Unk0F4 )
  {
    v29 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 6);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->Unk0F4, v29);
  }
  v30 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  v83 = *p_Unk0F0;
  if ( *p_Unk0F0 )
    v30((volatile LONG *)&(*p_Unk0F0)->members);
  Unk0EC = this->Unk0EC;
  v16 = Unk0EC == *p_Unk0F4;
  v82 = 0;
  if ( !v16 )
  {
    if ( Unk0EC )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk0EC->members) )
        ((void (__thiscall *)(BSRenderedTexture *, int))*Unk0EC->vtbl)(Unk0EC, 1);
    }
    v32 = *p_Unk0F4;
    v16 = *p_Unk0F4 == 0;
    this->Unk0EC = *p_Unk0F4;
    if ( !v16 )
      v30((volatile LONG *)&v32->members);
  }
  v33 = this->Unk0EC;
  if ( v33 )
    InterlockedIncrement((volatile LONG *)&v33->members);
  v67 = 0;
  v34 = *p_Unk0E8;
  LOBYTE(v82) = 2;
  this->CurrentPixelIndex = 0;
  v35 = BSRenderedTexture::UseTextureToRender(v34);
  NiRenderer_BeginScene(a1, v35);
  v36 = (NiRenderer *)g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v36->members.SceneState2 == 1) && v36->members.IsReady == 1 )
    v36->__vftable->SetupScreenSpaceCamera(v36, &v81);
  sub_709C60(a2);
  NiRenderer_EndScene();
  v37 = this->Unk0EC;
  if ( v37 != *p_Unk0E8 )
  {
    if ( v37 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v37->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v37->vtbl)(v37, 1);
    }
    v38 = *p_Unk0E8;
    v16 = *p_Unk0E8 == 0;
    this->Unk0EC = *p_Unk0E8;
    if ( !v16 )
      InterlockedIncrement((volatile LONG *)&v38->members);
  }
  v39 = v83;
  this->CurrentPixelIndex = 3;
  v40 = BSRenderedTexture::UseTextureToRender(v83);
  NiRenderer_BeginScene(a1, v40);
  v41 = (NiRenderer *)g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v41->members.SceneState2 == 1) && v41->members.IsReady == 1 )
    v41->__vftable->SetupScreenSpaceCamera(v41, &v81);
  sub_709C60(a2);
  NiRenderer_EndScene();
  if ( v33 )
  {
    v67 = v33;
    InterlockedIncrement((volatile LONG *)&v33->members);
  }
  v42 = this->Unk0EC;
  if ( v42 != v83 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v42->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v42->vtbl)(v42, 1);
    }
    this->Unk0EC = v83;
    if ( v83 )
      InterlockedIncrement((volatile LONG *)&v83->members);
  }
  if ( v33 != this->Unk0EC )
  {
    if ( v33 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v33->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1);
    }
    v33 = this->Unk0EC;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)&v33->members);
  }
  if ( v83 != v67 )
  {
    if ( v83 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v83->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1);
    }
    v39 = v67;
    v83 = v67;
    if ( v67 )
      InterlockedIncrement((volatile LONG *)&v67->members);
  }
  this->CurrentPixelIndex = 1;
  v43 = BSRenderedTexture::UseTextureToRender(v39);
  NiRenderer_BeginScene(a1, v43);
  v44 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v44->member.super.SceneState2 == 1)
    && v44->member.super.IsReady == 1 )
  {
    v44->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v44, &v81);
  }
  sub_709C60(a2);
  NiRenderer_EndScene();
  v69 = 0;
  if ( v73 > 0 )
  {
    v45 = v83;
    do
    {
      this->fPassNum = (double)v69 * dbl_A40350 + dbl_A46038;
      v46 = BSRenderedTexture::UseTextureToRender(v45);
      NiRenderer_BeginScene(a1, v46);
      v47 = (NiRenderer *)g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v47->members.SceneState2 == 1) && v47->members.IsReady == 1 )
        v47->__vftable->SetupScreenSpaceCamera(v47, &v81);
      sub_709C60(a2);
      if ( v67 != v33 )
      {
        if ( v67 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v67->members) )
            (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1);
        }
        v67 = v33;
        if ( v33 )
          InterlockedIncrement((volatile LONG *)&v33->members);
      }
      v48 = this->Unk0EC;
      if ( v48 != v45 )
      {
        if ( v48 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v48->members) )
            (*(void (__thiscall **)(BSRenderedTexture *, int))v48->vtbl)(v48, 1);
        }
        this->Unk0EC = v45;
        if ( v45 )
          InterlockedIncrement((volatile LONG *)&v45->members);
      }
      if ( v33 != this->Unk0EC )
      {
        if ( v33 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v33->members) )
            (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1);
        }
        v33 = this->Unk0EC;
        if ( v33 )
          InterlockedIncrement((volatile LONG *)&v33->members);
      }
      if ( v45 != v67 )
      {
        if ( v45 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v45->members) )
            (*(void (__thiscall **)(BSRenderedTexture *, int))v45->vtbl)(v45, 1);
        }
        v45 = v67;
        v83 = v67;
        if ( v67 )
          InterlockedIncrement((volatile LONG *)&v67->members);
      }
      NiRenderer_EndScene();
      ++v69;
    }
    while ( v69 < v73 );
  }
  this->CurrentPixelIndex = 4;
  v49 = BSRenderedTexture::UseTextureToRender(v83);
  NiRenderer_BeginScene(a1, v49);
  v50 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v50->member.super.SceneState2 == 1)
    && v50->member.super.IsReady == 1 )
  {
    v50->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v50, &v81);
  }
  sub_709C60(a2);
  NiRenderer_EndScene();
  v51 = v67;
  if ( v67 != v33 )
  {
    if ( v67 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v67->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1);
    }
    v51 = v33;
    v67 = v33;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)&v33->members);
  }
  v52 = this->Unk0EC;
  if ( v52 != v83 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v52->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v52->vtbl)(v52, 1);
    }
    this->Unk0EC = v83;
    if ( v83 )
      InterlockedIncrement((volatile LONG *)&v83->members);
  }
  if ( v33 != this->Unk0EC )
  {
    if ( v33 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v33->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1);
    }
    v33 = this->Unk0EC;
    if ( v33 )
      InterlockedIncrement((volatile LONG *)&v33->members);
  }
  if ( v83 != v51 )
  {
    if ( v83 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v83->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1);
    }
    v83 = v51;
    if ( v51 )
      InterlockedIncrement((volatile LONG *)&v51->members);
  }
  v53 = v73;
  v54 = 0;
  this->CurrentPixelIndex = 2;
  v70 = 0.0;
  if ( v73 > 0 )
  {
    do
    {
      v55 = v53 - 1;
      this->fPassNum = (double)SLODWORD(v70) * dbl_A40350 + dbl_A46038;
      if ( v54 == v53 - 1 )
        v66 = BSRenderedTexture::UseTextureToRender(*a3);
      else
        v66 = BSRenderedTexture::UseTextureToRender(v83);
      NiRenderer_BeginScene(a1, v66);
      v56 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v56->member.super.SceneState2 == 1)
        && v56->member.super.IsReady == 1 )
      {
        v56->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v56, &v81);
      }
      sub_709C60(a2);
      if ( v54 == v55 )
      {
        v57 = *a3;
        v58 = this->Unk0EC;
        if ( v58 != *a3 )
        {
          if ( v58 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v58->members) )
              (*(void (__thiscall **)(BSRenderedTexture *, int))v58->vtbl)(v58, 1);
          }
          this->Unk0EC = v57;
          if ( v57 )
            InterlockedIncrement((volatile LONG *)&v57->members);
        }
      }
      else
      {
        if ( v67 != v33 )
        {
          if ( v67 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v67->members) )
              (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1);
          }
          v67 = v33;
          if ( v33 )
            InterlockedIncrement((volatile LONG *)&v33->members);
        }
        v59 = this->Unk0EC;
        if ( v59 != v83 )
        {
          if ( v59 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v59->members) )
              (*(void (__thiscall **)(BSRenderedTexture *, int))v59->vtbl)(v59, 1);
          }
          this->Unk0EC = v83;
          if ( v83 )
            InterlockedIncrement((volatile LONG *)&v83->members);
        }
        if ( v33 != this->Unk0EC )
        {
          if ( v33 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v33->members) )
              (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1);
          }
          v33 = this->Unk0EC;
          if ( v33 )
            InterlockedIncrement((volatile LONG *)&v33->members);
        }
        if ( v83 != v67 )
        {
          if ( v83 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v83->members) )
              (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1);
          }
          v83 = v67;
          if ( v67 )
            InterlockedIncrement((volatile LONG *)&v67->members);
        }
      }
      NiRenderer_EndScene();
      v53 = v73;
      v54 = ++LODWORD(v70);
    }
    while ( SLODWORD(v70) < v73 );
  }
  if ( boh_ )
    this->CurrentPixelIndex = 5;
  else
    this->CurrentPixelIndex = 6;
  v60 = BSRenderedTexture::UseTextureToRender(*a4);
  NiRenderer_BeginScene(a1, v60);
  v61 = (NiRenderer *)g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v61->members.SceneState2 == 1) && v61->members.IsReady == 1 )
    v61->__vftable->SetupScreenSpaceCamera(v61, &v81);
  sub_709C60(a2);
  NiRenderer_EndScene();
  sub_7C1EE0(g_textureManager, *p_Unk0E8);
  sub_7C1EE0(g_textureManager, *v80);
  sub_7C1EE0(g_textureManager, *v77);
  v62 = *p_Unk0E8;
  if ( *p_Unk0E8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v62->members) )
    {
      if ( v62 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v62->vtbl)(v62, 1);
    }
    *p_Unk0E8 = 0;
  }
  v63 = *v80;
  v64 = InterlockedDecrement;
  if ( *v80 )
  {
    if ( !v64((volatile LONG *)&v63->members) )
    {
      if ( v63 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v63->vtbl)(v63, 1);
    }
    *v80 = 0;
  }
  v65 = *v77;
  if ( *v77 )
  {
    if ( !v64((volatile LONG *)&v65->members) )
    {
      if ( v65 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v65->vtbl)(v65, 1);
    }
    *v77 = 0;
  }
  LOBYTE(v82) = 1;
  if ( v67 )
  {
    if ( !v64((volatile LONG *)&v67->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v67->vtbl)(v67, 1);
  }
  LOBYTE(v82) = 0;
  if ( v33 )
  {
    if ( !v64((volatile LONG *)&v33->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v33->vtbl)(v33, 1);
  }
  v82 = 0xFFFFFFFF;
  if ( v83 )
  {
    if ( !v64((volatile LONG *)&v83->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v83->vtbl)(v83, 1);
  }
}
