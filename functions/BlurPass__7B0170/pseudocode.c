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
  BSRenderedTexture *DefaultRenderTarget; // [esp+20h] [ebp-24h]
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

  v6 = 0;
  a2 = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xF);
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0xF);
  v7 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v8 = a3;
  v9 = v7;
  v10 = *(_DWORD *)(*a3 + 0x20);
  if ( v10 )
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x4C))(v10);
  v46 = v9->vtbl->GetWidth(v9, 0);
  v11 = (double)v46;
  if ( v46 < 0 )
    v11 = v11 + flt_A2FC78;
  v12 = (double)v6;
  if ( v6 < 0 )
    v12 = v12 + flt_A2FC78;
  v45 = v11 / v12;
  v13 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v14 = *(_DWORD *)(*v8 + 0x20);
  if ( v14 )
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x50))(v14);
  else
    v15 = 0;
  v47 = v13->vtbl->GetHeight(v13, 0);
  v16 = (double)v47;
  if ( v47 < 0 )
    v16 = v16 + flt_A2FC78;
  v17 = (double)v15;
  if ( v15 < 0 )
    v17 = v17 + flt_A2FC78;
  a1 = byte_B43075 != 0 ? kClear_ALL : kClear_NONE;
  v48 = v16 / v17;
  v49 = 0.0;
  v50 = 1.0;
  v51 = 1.0;
  v52 = 0.0;
  *((float *)this + 0x37) = 0.0;
  *((float *)this + 0x36) = 0.0;
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x34) = 0.0;
  if ( dword_B2C1E8 )
  {
    v19 = (BSRenderedTexture **)a3;
    flt_B2C2D4 = v45;
    flt_B2C2D8 = v48;
    flt_B2C2DC = 0.0;
    flt_B2C2E0 = 1.0 - v48;
    *((_DWORD *)this + 0x2B) = 0;
    *((_DWORD *)this + 0x24) = 0;
    sub_802890(this, *v19);
    v20 = a2;
    v21 = BSRenderedTexture::UseTextureToRender(a2);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v21);
    v22 = g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v22->member.super.SceneState2 == 1)
      && v22->member.super.IsReady == 1 )
    {
      v22->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v22, 0);
    }
    sub_709C60(arg0);
    NiRenderer_EndScene();
    v23 = dword_B2C1E8 == 0;
    flt_B2C2D4 = 1.0;
    flt_B2C2D8 = 1.0;
    v53 = 0;
    flt_B2C2DC = 0.0;
    flt_B2C2E0 = 0.0;
    flt_B2C2EC = 0.0;
    flt_B2C2F0 = 0.0;
    flt_B2C2E4 = 1.0;
    flt_B2C2E8 = 1.0;
    if ( !v23 )
    {
      do
      {
        v24 = BSRenderedTexture::UseTextureToRender(DefaultRenderTarget);
        NiRenderer_BeginScene(a1, v24);
        v25 = g_Renderer;
        if ( (g_Renderer->member.super.SceneState1 == 1 || v25->member.super.SceneState2 == 1)
          && v25->member.super.IsReady == 1 )
        {
          v25->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v25, 0);
        }
        sub_802890(this, a2);
        *((_DWORD *)this + 0x2B) = 1;
        *((_DWORD *)this + 0x24) = 1;
        sub_709C60(arg0);
        *((_DWORD *)this + 0x2B) = 2;
        sub_709C60(arg0);
        NiRenderer_EndScene();
        v26 = BSRenderedTexture::UseTextureToRender(a2);
        NiRenderer_BeginScene(a1, v26);
        v27 = g_Renderer;
        if ( (g_Renderer->member.super.SceneState1 == 1 || v27->member.super.SceneState2 == 1)
          && v27->member.super.IsReady == 1 )
        {
          v27->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v27, 0);
        }
        sub_802890(this, DefaultRenderTarget);
        *((_DWORD *)this + 0x2B) = 3;
        sub_709C60(arg0);
        *((_DWORD *)this + 0x2B) = 4;
        sub_709C60(arg0);
        NiRenderer_EndScene();
        v53 = (NiScreenElements *)((char *)v53 + 1);
      }
      while ( (unsigned int)v53 < dword_B2C1E8 );
    }
  }
  else
  {
    v20 = a2;
  }
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0x24) = 2;
  sub_802890(this, v20);
  if ( *a3 )
  {
    v28 = a3;
    v29 = 0;
    v30 = (int **)(*a3 + 0x20);
  }
  else
  {
    v28 = 0;
    a3 = 0;
    v30 = &a3;
    v29 = 1;
  }
  a3 = *v30;
  if ( (v29 & 1) != 0 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement(v28 + 1) )
        (*(void (__thiscall **)(int *, int))*v28)(v28, 1);
    }
  }
  v31 = *((_DWORD *)this + 0x38);
  if ( (int *)v31 != a3 )
  {
    if ( v31 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**(void (__thiscall ***)(int, int))v31)(v31, 1);
    }
    v32 = a3;
    v23 = a3 == 0;
    *((_DWORD *)this + 0x38) = a3;
    if ( !v23 )
      InterlockedIncrement(v32 + 1);
  }
  v33 = dword_B2C1E4;
  v23 = dword_B2C1E4 == 0;
  flt_B2C2D4 = 1.0;
  flt_B2C2D8 = 1.0;
  flt_B2C2DC = 0.0;
  flt_B2C2E0 = 0.0;
  flt_B2C2E4 = v45;
  flt_B2C2E8 = v48;
  flt_B2C2EC = 0.0;
  flt_B2C2F0 = 1.0 - v48;
  if ( v23 )
  {
    flt_B2C2C4 = 0.0;
    v34 = 1.0;
    v35 = v45;
    flt_B2C2C8 = 1.0;
  }
  else if ( v33 == 1 )
  {
    flt_B2C2C4 = 1.0;
    flt_B2C2C8 = 0.0;
    v34 = 1.0;
    v35 = v45;
  }
  else
  {
    v34 = 1.0;
    v35 = v45;
    flt_B2C2C4 = 1.0;
    flt_B2C2C8 = 1.0;
  }
  if ( a5 )
  {
    v36 = v34;
    v50 = v34;
  }
  else
  {
    v37 = v35;
    v36 = v48;
    v50 = v37;
  }
  v38 = a4;
  v51 = v36;
  if ( *a4 )
  {
    v39 = BSRenderedTexture::UseTextureToRender(*a4);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v39);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
  }
  v40 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v40->member.super.SceneState2 == 1)
    && v40->member.super.IsReady == 1 )
  {
    v40->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v40, (NiViewport *)&v49);
  }
  sub_709C60(arg0);
  if ( *v38 )
    NiRenderer_EndScene();
  v41 = *((_DWORD *)this + 0x38);
  if ( v41 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) )
      (**(void (__thiscall ***)(int, int))v41)(v41, 1);
    *((_DWORD *)this + 0x38) = 0;
  }
  sub_7C1EE0(g_textureManager, a2);
  sub_7C1EE0(g_textureManager, DefaultRenderTarget);
}
