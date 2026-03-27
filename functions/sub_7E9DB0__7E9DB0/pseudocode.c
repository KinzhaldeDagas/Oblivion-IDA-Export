void __thiscall sub_7E9DB0(BSImageSpaceShader *this, NiScreenElements *arg0, int *a3, BSRenderedTexture **a4, int a5)
{
  int v6; // ebp
  BSRenderedTexture *DefaultRenderTarget; // eax
  char v8; // cl
  BSRenderedTexture *v9; // edi
  double v10; // st7
  int *v11; // ebx
  NiRenderTargetGroup *v12; // eax
  NiRenderTargetGroup *v13; // edi
  int v14; // ecx
  double v15; // st7
  double v16; // st6
  NiRenderTargetGroup *v17; // edi
  int v18; // ecx
  int v19; // ebp
  double v20; // st7
  double v21; // st6
  int v22; // ecx
  int v23; // eax
  double v24; // st7
  int v25; // ecx
  int v26; // eax
  double v27; // st7
  NiRenderedTexture *RenderedTexture; // ecx
  int v29; // eax
  double v30; // st7
  NiRenderedTexture *v31; // ecx
  int v32; // eax
  double v33; // st7
  UInt32 Unk070; // ecx
  int v35; // edi
  int v36; // ebp
  _DWORD *v37; // edi
  int v38; // eax
  BSRenderedTexture **v39; // edx
  BSRenderedTexture *v40; // edi
  NiRenderTargetGroup *v41; // eax
  NiDX9Renderer *v42; // ecx
  NiRenderedTexture *InnerTexture; // ebp
  ShaderDefinition *ShaderDefinition; // eax
  BSRenderedTexture **v45; // ecx
  NiRenderTargetGroup *v46; // eax
  NiDX9Renderer *v47; // ecx
  BSRenderedTexture *v48; // eax
  bool v49; // zf
  BSRenderedTexture *v50; // edi
  double v51; // st7
  int *v52; // edi
  int **v53; // eax
  NiRenderTargetGroup *v54; // eax
  NiDX9Renderer *v55; // ecx
  NiRenderTargetGroup *v56; // eax
  NiDX9Renderer *v57; // ecx
  int *v58; // ebx
  int v59; // ebp
  int v60; // edi
  int **v61; // ebp
  int v62; // eax
  double v63; // st5
  double v64; // st7
  BSRenderedTexture **v65; // edi
  BSRenderedTexture *v66; // ecx
  NiRenderTargetGroup *v67; // eax
  NiDX9Renderer *v68; // ecx
  int v69; // esi
  int v70; // edi
  _DWORD *v71; // esi
  BSRenderedTexture *a2; // [esp+2Ch] [ebp-38h]
  float v73; // [esp+30h] [ebp-34h]
  float v74; // [esp+34h] [ebp-30h]
  float v75; // [esp+38h] [ebp-2Ch]
  float v76; // [esp+38h] [ebp-2Ch]
  float v77; // [esp+3Ch] [ebp-28h]
  int v78; // [esp+3Ch] [ebp-28h]
  char v79; // [esp+40h] [ebp-24h]
  float v80; // [esp+44h] [ebp-20h]
  ClearFlags a1; // [esp+48h] [ebp-1Ch]
  float v82; // [esp+4Ch] [ebp-18h]
  int v83; // [esp+50h] [ebp-14h]
  int v84; // [esp+50h] [ebp-14h]
  float v85; // [esp+50h] [ebp-14h]
  float v86; // [esp+54h] [ebp-10h] BYREF
  float v87; // [esp+58h] [ebp-Ch]
  float v88; // [esp+5Ch] [ebp-8h]
  float v89; // [esp+60h] [ebp-4h]

  v6 = 0;
  v79 = 0;
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0x10);
  v8 = byte_B43075;
  v86 = 0.0;
  v87 = 1.0;
  v9 = DefaultRenderTarget;
  v88 = 1.0;
  a2 = DefaultRenderTarget;
  v10 = 1.0;
  v89 = 0.0;
  a1 = v8 != 0 ? kClear_ALL : kClear_NONE;
  if ( byte_B42E96 )
  {
    v11 = a3;
    v73 = 1.0;
  }
  else
  {
    v12 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v11 = a3;
    v13 = v12;
    v14 = *(_DWORD *)(*a3 + 0x20);
    if ( v14 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x4C))(v14);
    v83 = v13->vtbl->GetWidth(v13, 0);
    v15 = (double)v83;
    if ( v83 < 0 )
      v15 = v15 + flt_A2FC78;
    v16 = (double)v6;
    if ( v6 < 0 )
      v16 = v16 + flt_A2FC78;
    v73 = v15 / v16;
    v17 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
    v18 = *(_DWORD *)(*v11 + 0x20);
    if ( v18 )
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x50))(v18);
    else
      v19 = 0;
    v84 = v17->vtbl->GetHeight(v17, 0);
    v20 = (double)v84;
    if ( v84 < 0 )
      v20 = v20 + flt_A2FC78;
    v21 = (double)v19;
    if ( v19 < 0 )
      v21 = v21 + flt_A2FC78;
    v9 = a2;
    v10 = v20 / v21;
  }
  v74 = v10;
  v22 = *(_DWORD *)(*v11 + 0x20);
  if ( v22 )
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x4C))(v22);
  else
    v23 = 0;
  v24 = (double)v23;
  if ( v23 < 0 )
    v24 = v24 + flt_A2FC78;
  v25 = *(_DWORD *)(*v11 + 0x20);
  v75 = dbl_A2FAA0 / v24;
  if ( v25 )
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x50))(v25);
  else
    v26 = 0;
  v27 = (double)v26;
  if ( v26 < 0 )
    v27 = v27 + flt_A2FC78;
  RenderedTexture = v9->members.RenderedTexture;
  v77 = dbl_A2FAA0 / v27;
  if ( RenderedTexture )
    v29 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
  else
    v29 = 0;
  v30 = (double)v29;
  if ( v29 < 0 )
    v30 = v30 + flt_A2FC78;
  v31 = v9->members.RenderedTexture;
  v82 = dbl_A2FAA0 / v30;
  if ( v31 )
    v32 = v31->__vftable->super.GetHeight((NiTexture *)v31);
  else
    v32 = 0;
  v33 = (double)v32;
  if ( v32 < 0 )
    v33 = v33 + flt_A2FC78;
  Unk070 = this->member.super.Unk070;
  v85 = dbl_A2FAA0 / v33;
  *((float *)this + 0x33) = 0.0;
  *((float *)this + 0x32) = 0.0;
  *((float *)this + 0x31) = 0.0;
  *((float *)this + 0x30) = 0.0;
  *((float *)this + 0x31) = flt_B2C2B0;
  *((float *)this + 0x32) = flt_B2C2B4;
  v35 = *(_DWORD *)(*(_DWORD *)(Unk070 + 0x24) + 4);
  v36 = *(_DWORD *)(v35 + 4);
  v37 = (_DWORD *)(v35 + 4);
  if ( v36 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) )
      (**(void (__thiscall ***)(int, int))v36)(v36, 1);
    *v37 = 0;
  }
  if ( byte_B4610C )
  {
    v38 = sub_7C2420(g_textureManager, dword_B43104, 0, 6u, 0, 0);
    v39 = (BSRenderedTexture **)a3;
    flt_B2D898 = v73;
    v40 = (BSRenderedTexture *)v38;
    flt_B2D89C = v74;
    flt_B2D8A0 = v75 + 0.0;
    flt_B2D8A4 = v77 + 0.0;
    *((_DWORD *)this + 0x2F) = 0;
    *((_DWORD *)this + 0x24) = 4;
    sub_802890(this, *v39);
    v41 = BSRenderedTexture::UseTextureToRender(v40);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v41);
    v42 = g_Renderer;
    if ( (g_Renderer->member.super.SceneState1 == 1 || v42->member.super.SceneState2 == 1)
      && v42->member.super.IsReady == 1 )
    {
      v42->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v42, 0);
    }
    sub_709C60(arg0);
    NiRenderer_EndScene();
    InnerTexture = BSRenderedTexture::GetInnerTexture(v40);
    ShaderDefinition = GetShaderDefinition(9u);
    sub_7FA470((BSImageSpaceShader *)ShaderDefinition->shader, InnerTexture);
    sub_7C1EE0(g_textureManager, v40);
  }
  v45 = (BSRenderedTexture **)a3;
  flt_B2D898 = v73;
  flt_B2D89C = v74;
  v76 = v75 + 0.0;
  flt_B2D8A0 = v76;
  v80 = v77 + 0.0;
  flt_B2D8A4 = v80;
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x24) = 0;
  sub_802890(this, *v45);
  v46 = BSRenderedTexture::UseTextureToRender(a2);
  NiRenderer_BeginScene(kClear_BACKBUFFER, v46);
  v47 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v47->member.super.SceneState2 == 1)
    && v47->member.super.IsReady == 1 )
  {
    v47->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v47, 0);
  }
  sub_709C60(arg0);
  NiRenderer_EndScene();
  v48 = BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0x10);
  v49 = dword_B2C1E8 == 0;
  flt_B2D898 = 1.0;
  flt_B2D89C = 1.0;
  v50 = v48;
  v51 = 0.0;
  v78 = 0;
  flt_B2D8A0 = 0.0;
  flt_B2D8A4 = 0.0;
  if ( !v49 )
  {
    while ( 1 )
    {
      flt_B2D8B8 = v51;
      flt_B2D8BC = flt_B2C1EC + flt_B2C1EC;
      v54 = BSRenderedTexture::UseTextureToRender(v50);
      NiRenderer_BeginScene(a1, v54);
      sub_802890(this, a2);
      *((_DWORD *)this + 0x2F) = 1;
      *((_DWORD *)this + 0x24) = 2;
      v55 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v55->member.super.SceneState2 == 1)
        && v55->member.super.IsReady == 1 )
      {
        v55->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v55, 0);
      }
      sub_709C60(arg0);
      sub_802890(this, v50);
      NiRenderer_EndScene();
      v56 = BSRenderedTexture::UseTextureToRender(a2);
      NiRenderer_BeginScene(a1, v56);
      flt_B2D8B8 = flt_B2C1EC + flt_B2C1EC;
      flt_B2D8BC = 0.0;
      *((_DWORD *)this + 0x2F) = 2;
      v57 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v57->member.super.SceneState2 == 1)
        && v57->member.super.IsReady == 1 )
      {
        v57->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v57, 0);
      }
      sub_709C60(arg0);
      NiRenderer_EndScene();
      if ( ++v78 >= (unsigned int)dword_B2C1E8 )
        break;
      v51 = 0.0;
    }
  }
  sub_7C1EE0(g_textureManager, v50);
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x24) = 3;
  sub_802890(this, a2);
  if ( *a3 )
  {
    v52 = a3;
    v53 = (int **)(*a3 + 0x20);
  }
  else
  {
    v52 = 0;
    a3 = 0;
    v53 = &a3;
    v79 = 1;
  }
  v58 = *v53;
  if ( (v79 & 1) != 0 )
  {
    if ( v52 )
    {
      if ( !InterlockedDecrement(v52 + 1) )
        (*(void (__thiscall **)(int *, int))*v52)(v52, 1);
    }
  }
  v59 = *(_DWORD *)(*(_DWORD *)(this->member.super.Unk070 + 0x24) + 4);
  v60 = *(_DWORD *)(v59 + 4);
  v61 = (int **)(v59 + 4);
  if ( (int *)v60 != v58 )
  {
    if ( v60 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v60 + 4)) )
        (**(void (__thiscall ***)(int, int))v60)(v60, 1);
    }
    *v61 = v58;
    if ( v58 )
      InterlockedIncrement(v58 + 1);
  }
  v62 = dword_B2C1E4;
  v49 = dword_B2C1E4 == 0;
  flt_B2D898 = 1.0;
  flt_B2D89C = 1.0;
  flt_B2D8A0 = v82 + 0.0;
  flt_B2D8A4 = v85 + 0.0;
  flt_B2D8A8 = v73;
  flt_B2D8AC = v74;
  flt_B2D8B0 = v76;
  flt_B2D8B4 = v80;
  if ( v49 )
  {
    flt_B2D888 = 0.0;
    v63 = 1.0;
    v64 = v74;
  }
  else
  {
    v63 = 1.0;
    v64 = v74;
    flt_B2D888 = 1.0;
    if ( v62 == 1 )
    {
      flt_B2D88C = 0.0;
      goto LABEL_82;
    }
  }
  flt_B2D88C = v63;
LABEL_82:
  v65 = a4;
  v66 = *a4;
  if ( *a4 )
  {
    v87 = v73;
  }
  else
  {
    v64 = v63;
    v87 = v63;
  }
  v88 = v64;
  if ( v66 )
  {
    v67 = BSRenderedTexture::UseTextureToRender(v66);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v67);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
  }
  v68 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v68->member.super.SceneState2 == 1)
    && v68->member.super.IsReady == 1 )
  {
    v68->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v68, (NiViewport *)&v86);
  }
  sub_709C60(arg0);
  if ( *v65 )
    NiRenderer_EndScene();
  v69 = *(_DWORD *)(*(_DWORD *)(this->member.super.Unk070 + 0x24) + 4);
  v70 = *(_DWORD *)(v69 + 4);
  v71 = (_DWORD *)(v69 + 4);
  if ( v70 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v70 + 4)) )
      (**(void (__thiscall ***)(int, int))v70)(v70, 1);
    *v71 = 0;
  }
  sub_7C1EE0(g_textureManager, a2);
}
