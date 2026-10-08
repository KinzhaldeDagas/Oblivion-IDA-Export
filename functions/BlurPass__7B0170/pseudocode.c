void __thiscall BlurPass(BSImageSpaceShader *this, NiScreenElements *arg0, int *a3, BSRenderedTexture **a4, char a5)
{
  int v6; // ebp
  NiRenderTargetGroup *v7; // eax
  int *v8; // ebx
  NiRenderTargetGroup *v9; // edi
  int v10; // ecx
  double v11; // st7
  double v12; // st6
  NiRenderTargetGroup *v13; // edi
  int v14; // ecx
  int v15; // ebp
  double v16; // st7
  double v17; // st6
  BSRenderedTexture **v19; // edx
  BSRenderedTexture *v20; // edi
  NiRenderTargetGroup *v21; // eax
  NiDX9Renderer *v22; // ecx
  bool v23; // zf
  NiRenderTargetGroup *v24; // eax
  NiDX9Renderer *v25; // ecx
  NiRenderTargetGroup *v26; // eax
  NiDX9Renderer *v27; // ecx
  int *v28; // edi
  char v29; // cl
  int **v30; // eax
  int v31; // edi
  int *v32; // eax
  int v33; // eax
  double v34; // st5
  double v35; // st7
  double v36; // st7
  double v37; // st6
  BSRenderedTexture **v38; // edi
  NiRenderTargetGroup *v39; // eax
  NiDX9Renderer *v40; // ecx
  int v41; // edi
  BSRenderedTexture *a2; // [esp+1Ch] [ebp-28h]
  BSRenderedTexture *texture; // [esp+20h] [ebp-24h]
  ClearFlags a1; // [esp+24h] [ebp-20h]
  float v45; // [esp+28h] [ebp-1Ch]
  int v46; // [esp+2Ch] [ebp-18h]
  int v47; // [esp+2Ch] [ebp-18h]
  float v48; // [esp+2Ch] [ebp-18h]
  float v49; // [esp+34h] [ebp-10h] BYREF
  float v50; // [esp+38h] [ebp-Ch]
  float v51; // [esp+3Ch] [ebp-8h]
  float v52; // [esp+40h] [ebp-4h]
  NiScreenElements *v53; // [esp+48h] [ebp+4h]

  v6 = 0; /*0x7b0186*/
  a2 = BSTextureManager_GetDefaultRenderTarget( /*0x7b01a1*/
         *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
         unk_B43104,
         0xF);
  texture = BSTextureManager_GetDefaultRenderTarget( /*0x7b01b2*/
              *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
              unk_B43104,
              0xF);
  v7 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7b01b9*/
  v8 = a3; /*0x7b01bb*/
  v9 = v7; /*0x7b01bf*/
  v10 = *(_DWORD *)(*a3 + 0x20); /*0x7b01c3*/
  if ( v10 ) /*0x7b01c8*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x4C))(v10); /*0x7b01d1*/
  v46 = v9->vtbl->GetWidth(v9, 0); /*0x7b01e0*/
  v11 = (double)v46; /*0x7b01e4*/
  if ( v46 < 0 ) /*0x7b01e8*/
    v11 = v11 + flt_A2FC78; /*0x7b01ea*/
  v12 = (double)v6; /*0x7b01f6*/
  if ( v6 < 0 ) /*0x7b01fa*/
    v12 = v12 + flt_A2FC78; /*0x7b01fc*/
  v45 = v11 / v12; /*0x7b020f*/
  v13 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7b0215*/
  v14 = *(_DWORD *)(*v8 + 0x20); /*0x7b0219*/
  if ( v14 ) /*0x7b021e*/
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x50))(v14); /*0x7b0227*/
  else
    v15 = 0; /*0x7b022b*/
  v47 = v13->vtbl->GetHeight(v13, 0); /*0x7b023a*/
  v16 = (double)v47; /*0x7b023e*/
  if ( v47 < 0 ) /*0x7b0242*/
    v16 = v16 + flt_A2FC78; /*0x7b0244*/
  v17 = (double)v15; /*0x7b0250*/
  if ( v15 < 0 ) /*0x7b0254*/
    v17 = v17 + flt_A2FC78; /*0x7b0256*/
  a1 = OB_RendererGlobalState_010201A0.pad_1DB[1] != 0 ? kClear_ALL : kClear_NONE;
  v48 = v16 / v17; /*0x7b027a*/
  v49 = 0.0; /*0x7b0280*/
  v50 = 1.0; /*0x7b0286*/
  v51 = 1.0; /*0x7b028a*/
  v52 = 0.0; /*0x7b028e*/
  *((float *)this + 0x37) = 0.0; /*0x7b0292*/
  *((float *)this + 0x36) = 0.0; /*0x7b0298*/
  *((float *)this + 0x35) = 0.0; /*0x7b029e*/
  *((float *)this + 0x34) = 0.0; /*0x7b02a4*/
  if ( dword_B2C1E8 ) /*0x7b02aa*/
  {
    v19 = (BSRenderedTexture **)a3; /*0x7b02be*/
    flt_B2C2D4 = v45; /*0x7b02c2*/
    flt_B2C2D8 = v48; /*0x7b02ca*/
    flt_B2C2DC = 0.0; /*0x7b02d2*/
    flt_B2C2E0 = 1.0 - v48; /*0x7b02dc*/
    *((_DWORD *)this + 0x2B) = 0; /*0x7b02e2*/
    *((_DWORD *)this + 0x24) = 0; /*0x7b02e8*/
    sub_802890(this, *v19); /*0x7b02f1*/
    v20 = a2; /*0x7b02f6*/
    v21 = BSRenderedTexture::UseTextureToRender(a2); /*0x7b02fc*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v21); /*0x7b0303*/
    v22 = renderer; /*0x7b0308*/
    if ( (renderer->member.super.SceneState1 == 1 || v22->member.super.SceneState2 == 1) /*0x7b0327*/
      && v22->member.super.IsReady == 1 )
    {
      v22->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v22, 0); /*0x7b0333*/
    }
    sub_709C60(arg0); /*0x7b033e*/
    NiRenderer_EndScene(); /*0x7b0343*/
    v23 = dword_B2C1E8 == 0; /*0x7b034a*/
    flt_B2C2D4 = 1.0; /*0x7b0351*/
    flt_B2C2D8 = 1.0; /*0x7b0357*/
    v53 = 0; /*0x7b035d*/
    flt_B2C2DC = 0.0; /*0x7b0367*/
    flt_B2C2E0 = 0.0; /*0x7b036d*/
    flt_B2C2EC = 0.0; /*0x7b0373*/
    flt_B2C2F0 = 0.0; /*0x7b0379*/
    flt_B2C2E4 = 1.0; /*0x7b037f*/
    flt_B2C2E8 = 1.0; /*0x7b0385*/
    if ( !v23 ) /*0x7b038b*/
    {
      do /*0x7b04a0*/
      {
        v24 = BSRenderedTexture::UseTextureToRender(texture); /*0x7b0395*/
        NiRenderer_BeginScene(a1, v24); /*0x7b03a0*/
        v25 = renderer; /*0x7b03a5*/
        if ( (renderer->member.super.SceneState1 == 1 || v25->member.super.SceneState2 == 1) /*0x7b03c4*/
          && v25->member.super.IsReady == 1 )
        {
          v25->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v25, 0); /*0x7b03d0*/
        }
        sub_802890(this, a2); /*0x7b03d5*/
        *((_DWORD *)this + 0x2B) = 1; /*0x7b03da*/
        *((_DWORD *)this + 0x24) = 1; /*0x7b03e0*/
        sub_709C60(arg0); /*0x7b03ef*/
        *((_DWORD *)this + 0x2B) = 2; /*0x7b03f4*/
        sub_709C60(arg0); /*0x7b0407*/
        NiRenderer_EndScene(); /*0x7b040c*/
        v26 = BSRenderedTexture::UseTextureToRender(a2); /*0x7b0413*/
        NiRenderer_BeginScene(a1, v26); /*0x7b041e*/
        v27 = renderer; /*0x7b0423*/
        if ( (renderer->member.super.SceneState1 == 1 || v27->member.super.SceneState2 == 1) /*0x7b0442*/
          && v27->member.super.IsReady == 1 )
        {
          v27->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v27, 0); /*0x7b044e*/
        }
        sub_802890(this, texture); /*0x7b0457*/
        *((_DWORD *)this + 0x2B) = 3; /*0x7b045c*/
        sub_709C60(arg0); /*0x7b046f*/
        *((_DWORD *)this + 0x2B) = 4; /*0x7b0474*/
        sub_709C60(arg0); /*0x7b0486*/
        NiRenderer_EndScene(); /*0x7b048b*/
        v53 = (NiScreenElements *)((char *)v53 + 1); /*0x7b049c*/
      }
      while ( (unsigned int)v53 < dword_B2C1E8 ); /*0x7b04a0*/
    }
  }
  else
  {
    v20 = a2; /*0x7b04a8*/
  }
  *((_DWORD *)this + 0x2B) = 0; /*0x7b04b3*/
  *((_DWORD *)this + 0x24) = 2; /*0x7b04bd*/
  sub_802890(this, v20); /*0x7b04c7*/
  if ( *a3 ) /*0x7b04d0*/
  {
    v28 = a3; /*0x7b04d6*/
    v29 = 0; /*0x7b04da*/
    v30 = (int **)(*a3 + 0x20); /*0x7b04de*/
  }
  else
  {
    v28 = 0; /*0x7b04e3*/
    a3 = 0; /*0x7b04e5*/
    v30 = &a3; /*0x7b04e9*/
    v29 = 1; /*0x7b04ed*/
  }
  a3 = *v30; /*0x7b04f3*/
  if ( (v29 & 1) != 0 ) /*0x7b04f7*/
  {
    if ( v28 ) /*0x7b04fb*/
    {
      if ( !InterlockedDecrement(v28 + 1) ) /*0x7b0501*/
        (*(void (__thiscall **)(int *, int))*v28)(v28, 1); /*0x7b0512*/
    }
  }
  v31 = *((_DWORD *)this + 0x38); /*0x7b0514*/
  if ( (int *)v31 != a3 ) /*0x7b051e*/
  {
    if ( v31 ) /*0x7b0522*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) ) /*0x7b0528*/
        (**(void (__thiscall ***)(int, int))v31)(v31, 1); /*0x7b053d*/
    }
    v32 = a3; /*0x7b053f*/
    v23 = a3 == 0; /*0x7b0543*/
    *((_DWORD *)this + 0x38) = a3; /*0x7b0545*/
    if ( !v23 ) /*0x7b054b*/
      InterlockedIncrement(v32 + 1); /*0x7b0551*/
  }
  v33 = dword_B2C1E4; /*0x7b0559*/
  v23 = dword_B2C1E4 == 0; /*0x7b055e*/
  flt_B2C2D4 = 1.0; /*0x7b0561*/
  flt_B2C2D8 = 1.0; /*0x7b0567*/
  flt_B2C2DC = 0.0; /*0x7b056f*/
  flt_B2C2E0 = 0.0; /*0x7b0575*/
  flt_B2C2E4 = v45; /*0x7b057f*/
  flt_B2C2E8 = v48; /*0x7b0589*/
  flt_B2C2EC = 0.0; /*0x7b0591*/
  flt_B2C2F0 = 1.0 - v48; /*0x7b059d*/
  if ( v23 ) /*0x7b05a3*/
  {
    flt_B2C2C4 = 0.0; /*0x7b05de*/
    v34 = 1.0; /*0x7b05e4*/
    v35 = v45; /*0x7b05e4*/
    flt_B2C2C8 = 1.0; /*0x7b05e6*/
  }
  else if ( v33 == 1 ) /*0x7b05a7*/
  {
    flt_B2C2C4 = 1.0; /*0x7b05bd*/
    flt_B2C2C8 = 0.0; /*0x7b05c5*/
    v34 = 1.0; /*0x7b05cb*/
    v35 = v45; /*0x7b05cb*/
  }
  else
  {
    v34 = 1.0; /*0x7b05ab*/
    v35 = v45; /*0x7b05ab*/
    flt_B2C2C4 = 1.0; /*0x7b05ad*/
    flt_B2C2C8 = 1.0; /*0x7b05b3*/
  }
  if ( a5 ) /*0x7b05d2*/
  {
    v36 = v34; /*0x7b05d6*/
    v50 = v34; /*0x7b05d8*/
  }
  else
  {
    v37 = v35; /*0x7b05f0*/
    v36 = v48; /*0x7b05f0*/
    v50 = v37; /*0x7b05f2*/
  }
  v38 = a4; /*0x7b05f6*/
  v51 = v36; /*0x7b05fa*/
  if ( *a4 ) /*0x7b05fe*/
  {
    v39 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7b0604*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v39); /*0x7b060b*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x7b0615*/
  }
  v40 = renderer; /*0x7b061a*/
  if ( (renderer->member.super.SceneState1 == 1 || v40->member.super.SceneState2 == 1) && v40->member.super.IsReady == 1 ) /*0x7b0639*/
    v40->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v40, (NiViewport *)&v49); /*0x7b0648*/
  sub_709C60(arg0); /*0x7b0653*/
  if ( *v38 ) /*0x7b0658*/
    NiRenderer_EndScene(); /*0x7b065d*/
  v41 = *((_DWORD *)this + 0x38); /*0x7b0662*/
  if ( v41 ) /*0x7b066a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) ) /*0x7b0670*/
      (**(void (__thiscall ***)(int, int))v41)(v41, 1); /*0x7b0685*/
    *((_DWORD *)this + 0x38) = 0; /*0x7b0687*/
  }
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], a2); /*0x7b069c*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], texture); /*0x7b06ac*/
}
