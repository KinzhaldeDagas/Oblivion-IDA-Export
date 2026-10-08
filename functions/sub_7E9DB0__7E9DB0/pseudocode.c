// MoonSugarEffect decode: native Blur render pass uses default render target type 0x10 and ping-pong passes driven by BlurShader globals/SetImageSpaceGlow/SunDamage ownership.
void __thiscall sub_7E9DB0(BSImageSpaceShader *this, NiScreenElements *arg0, int *a3, BSRenderedTexture **a4, int a5)
{
  int v6; // ebp
  BSRenderedTexture *DefaultRenderTarget; // eax
  unsigned __int8 v8; // cl
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
  BSRenderedTexture *v38; // eax
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

  v6 = 0; /*0x7e9dc6*/
  v79 = 0; /*0x7e9dc9*/
  DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget( /*0x7e9dcd*/
                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                          unk_B43104,
                          0x10);
  v8 = OB_RendererGlobalState_010201A0.pad_1DB[1]; /*0x7e9dd4*/
  v86 = 0.0; /*0x7e9dda*/
  v87 = 1.0; /*0x7e9de2*/
  v9 = DefaultRenderTarget; /*0x7e9de6*/
  v88 = 1.0; /*0x7e9de8*/
  a2 = DefaultRenderTarget; /*0x7e9dec*/
  v10 = 1.0; /*0x7e9df0*/
  v89 = 0.0; /*0x7e9df2*/
  a1 = v8 != 0 ? kClear_ALL : kClear_NONE;
  if ( unk_B42E96 ) /*0x7e9dfb*/
  {
    v11 = a3; /*0x7e9e08*/
    v73 = 1.0; /*0x7e9e0c*/
  }
  else
  {
    v12 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7e9e22*/
    v11 = a3; /*0x7e9e24*/
    v13 = v12; /*0x7e9e28*/
    v14 = *(_DWORD *)(*a3 + 0x20); /*0x7e9e2c*/
    if ( v14 ) /*0x7e9e31*/
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x4C))(v14); /*0x7e9e3a*/
    v83 = v13->vtbl->GetWidth(v13, 0); /*0x7e9e49*/
    v15 = (double)v83; /*0x7e9e4d*/
    if ( v83 < 0 ) /*0x7e9e51*/
      v15 = v15 + flt_A2FC78; /*0x7e9e53*/
    v16 = (double)v6; /*0x7e9e5f*/
    if ( v6 < 0 ) /*0x7e9e63*/
      v16 = v16 + flt_A2FC78; /*0x7e9e65*/
    v73 = v15 / v16; /*0x7e9e78*/
    v17 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7e9e7e*/
    v18 = *(_DWORD *)(*v11 + 0x20); /*0x7e9e82*/
    if ( v18 ) /*0x7e9e87*/
      v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 0x50))(v18); /*0x7e9e90*/
    else
      v19 = 0; /*0x7e9e94*/
    v84 = v17->vtbl->GetHeight(v17, 0); /*0x7e9ea3*/
    v20 = (double)v84; /*0x7e9ea7*/
    if ( v84 < 0 ) /*0x7e9eab*/
      v20 = v20 + flt_A2FC78; /*0x7e9ead*/
    v21 = (double)v19; /*0x7e9eb9*/
    if ( v19 < 0 ) /*0x7e9ebd*/
      v21 = v21 + flt_A2FC78; /*0x7e9ebf*/
    v9 = a2; /*0x7e9ec5*/
    v10 = v20 / v21; /*0x7e9ec9*/
  }
  v74 = v10; /*0x7e9ecd*/
  v22 = *(_DWORD *)(*v11 + 0x20); /*0x7e9ed1*/
  if ( v22 ) /*0x7e9ed6*/
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x4C))(v22); /*0x7e9edd*/
  else
    v23 = 0; /*0x7e9ee1*/
  v24 = (double)v23; /*0x7e9ee9*/
  if ( v23 < 0 ) /*0x7e9eed*/
    v24 = v24 + flt_A2FC78; /*0x7e9eef*/
  v25 = *(_DWORD *)(*v11 + 0x20); /*0x7e9efd*/
  v75 = dbl_A2FAA0 / v24; /*0x7e9f02*/
  if ( v25 ) /*0x7e9f06*/
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x50))(v25); /*0x7e9f0d*/
  else
    v26 = 0; /*0x7e9f11*/
  v27 = (double)v26; /*0x7e9f19*/
  if ( v26 < 0 ) /*0x7e9f1d*/
    v27 = v27 + flt_A2FC78; /*0x7e9f1f*/
  RenderedTexture = v9->members.RenderedTexture; /*0x7e9f2b*/
  v77 = dbl_A2FAA0 / v27; /*0x7e9f30*/
  if ( RenderedTexture ) /*0x7e9f34*/
    v29 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x7e9f3b*/
  else
    v29 = 0; /*0x7e9f3f*/
  v30 = (double)v29; /*0x7e9f47*/
  if ( v29 < 0 ) /*0x7e9f4b*/
    v30 = v30 + flt_A2FC78; /*0x7e9f4d*/
  v31 = v9->members.RenderedTexture; /*0x7e9f59*/
  v82 = dbl_A2FAA0 / v30; /*0x7e9f5e*/
  if ( v31 ) /*0x7e9f62*/
    v32 = v31->__vftable->super.GetHeight((NiTexture *)v31); /*0x7e9f69*/
  else
    v32 = 0; /*0x7e9f6d*/
  v33 = (double)v32; /*0x7e9f75*/
  if ( v32 < 0 ) /*0x7e9f79*/
    v33 = v33 + flt_A2FC78; /*0x7e9f7b*/
  Unk070 = this->member.super.Unk070; /*0x7e9f87*/
  v85 = dbl_A2FAA0 / v33; /*0x7e9f8a*/
  *((float *)this + 0x33) = 0.0; /*0x7e9f90*/
  *((float *)this + 0x32) = 0.0; /*0x7e9f96*/
  *((float *)this + 0x31) = 0.0; /*0x7e9f9c*/
  *((float *)this + 0x30) = 0.0; /*0x7e9fa2*/
  *((float *)this + 0x31) = flt_B2C2B0; /*0x7e9fae*/
  *((float *)this + 0x32) = flt_B2C2B4; /*0x7e9fba*/
  v35 = *(_DWORD *)(*(_DWORD *)(Unk070 + 0x24) + 4); /*0x7e9fc3*/
  v36 = *(_DWORD *)(v35 + 4); /*0x7e9fc6*/
  v37 = (_DWORD *)(v35 + 4); /*0x7e9fc9*/
  if ( v36 ) /*0x7e9fce*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x7e9fd4*/
      (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x7e9fef*/
    *v37 = 0; /*0x7e9ff3*/
  }
  if ( unk_B4610C ) /*0x7ea009*/
  {
    v38 = sub_7C2420(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], unk_B43104, 0, 6u, 0, 0); /*0x7ea028*/
    v39 = (BSRenderedTexture **)a3; /*0x7ea031*/
    flt_B2D898 = v73; /*0x7ea035*/
    v40 = v38; /*0x7ea03f*/
    flt_B2D89C = v74; /*0x7ea041*/
    flt_B2D8A0 = v75 + 0.0; /*0x7ea053*/
    flt_B2D8A4 = v77 + 0.0; /*0x7ea05d*/
    *((_DWORD *)this + 0x2F) = 0; /*0x7ea063*/
    *((_DWORD *)this + 0x24) = 4; /*0x7ea069*/
    sub_802890(this, *v39); /*0x7ea076*/
    v41 = BSRenderedTexture::UseTextureToRender(v40); /*0x7ea07d*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v41); /*0x7ea084*/
    v42 = renderer; /*0x7ea089*/
    if ( (renderer->member.super.SceneState1 == 1 || v42->member.super.SceneState2 == 1) /*0x7ea0a9*/
      && v42->member.super.IsReady == 1 )
    {
      v42->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v42, 0); /*0x7ea0b4*/
    }
    sub_709C60(arg0); /*0x7ea0c1*/
    NiRenderer_EndScene(); /*0x7ea0c6*/
    InnerTexture = BSRenderedTexture::GetInnerTexture(v40); /*0x7ea0d4*/
    ShaderDefinition = GetShaderDefinition(9u); /*0x7ea0d6*/
    BSImageSpaceShader_BindFirstFreeRenderedTexture(ShaderDefinition->shader, InnerTexture); /*0x7ea0e5*/
    BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v40); /*0x7ea0f1*/
  }
  v45 = (BSRenderedTexture **)a3; /*0x7ea0fc*/
  flt_B2D898 = v73; /*0x7ea100*/
  flt_B2D89C = v74; /*0x7ea10a*/
  v76 = v75 + 0.0; /*0x7ea11a*/
  flt_B2D8A0 = v76; /*0x7ea122*/
  v80 = v77 + 0.0; /*0x7ea12c*/
  flt_B2D8A4 = v80; /*0x7ea134*/
  *((_DWORD *)this + 0x2F) = 0; /*0x7ea13a*/
  *((_DWORD *)this + 0x24) = 0; /*0x7ea140*/
  sub_802890(this, *v45); /*0x7ea14b*/
  v46 = BSRenderedTexture::UseTextureToRender(a2); /*0x7ea154*/
  NiRenderer_BeginScene(kClear_BACKBUFFER, v46); /*0x7ea15b*/
  v47 = renderer; /*0x7ea160*/
  if ( (renderer->member.super.SceneState1 == 1 || v47->member.super.SceneState2 == 1) && v47->member.super.IsReady == 1 ) /*0x7ea180*/
    v47->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v47, 0); /*0x7ea18b*/
  sub_709C60(arg0); /*0x7ea198*/
  NiRenderer_EndScene(); /*0x7ea19d*/
  v48 = BSTextureManager_GetDefaultRenderTarget( /*0x7ea1b0*/
          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
          unk_B43104,
          0x10);
  v49 = dword_B2C1E8 == 0; /*0x7ea1b7*/
  flt_B2D898 = 1.0; /*0x7ea1bd*/
  flt_B2D89C = 1.0; /*0x7ea1c3*/
  v50 = v48; /*0x7ea1c9*/
  v51 = 0.0; /*0x7ea1cb*/
  v78 = 0; /*0x7ea1cd*/
  flt_B2D8A0 = 0.0; /*0x7ea1d1*/
  flt_B2D8A4 = 0.0; /*0x7ea1d7*/
  if ( !v49 ) /*0x7ea1dd*/
  {
    while ( 1 ) /*0x7ea225*/
    {
      flt_B2D8B8 = v51; /*0x7ea225*/
      flt_B2D8BC = flt_B2C1EC + flt_B2C1EC; /*0x7ea235*/
      v54 = BSRenderedTexture::UseTextureToRender(v50); /*0x7ea23b*/
      NiRenderer_BeginScene(a1, v54); /*0x7ea246*/
      sub_802890(this, a2); /*0x7ea255*/
      *((_DWORD *)this + 0x2F) = 1; /*0x7ea25a*/
      *((_DWORD *)this + 0x24) = 2; /*0x7ea260*/
      v55 = renderer; /*0x7ea26a*/
      if ( (renderer->member.super.SceneState1 == 1 || v55->member.super.SceneState2 == 1) /*0x7ea287*/
        && v55->member.super.IsReady == 1 )
      {
        v55->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v55, 0); /*0x7ea293*/
      }
      sub_709C60(arg0); /*0x7ea2a0*/
      sub_802890(this, v50); /*0x7ea2a8*/
      NiRenderer_EndScene(); /*0x7ea2ad*/
      v56 = BSRenderedTexture::UseTextureToRender(a2); /*0x7ea2b6*/
      NiRenderer_BeginScene(a1, v56); /*0x7ea2bd*/
      flt_B2D8B8 = flt_B2C1EC + flt_B2C1EC; /*0x7ea2cd*/
      flt_B2D8BC = 0.0; /*0x7ea2d5*/
      *((_DWORD *)this + 0x2F) = 2; /*0x7ea2db*/
      v57 = renderer; /*0x7ea2e5*/
      if ( (renderer->member.super.SceneState1 == 1 || v57->member.super.SceneState2 == 1) /*0x7ea302*/
        && v57->member.super.IsReady == 1 )
      {
        v57->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v57, 0); /*0x7ea30e*/
      }
      sub_709C60(arg0); /*0x7ea31b*/
      NiRenderer_EndScene(); /*0x7ea320*/
      if ( ++v78 >= (unsigned int)dword_B2C1E8 ) /*0x7ea335*/
        break; /*0x7ea335*/
      v51 = 0.0; /*0x7ea223*/
    }
  }
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], v50); /*0x7ea1e8*/
  *((_DWORD *)this + 0x2F) = 0; /*0x7ea1f4*/
  *((_DWORD *)this + 0x24) = 3; /*0x7ea1fa*/
  sub_802890(this, a2); /*0x7ea204*/
  if ( *a3 ) /*0x7ea20d*/
  {
    v52 = a3; /*0x7ea217*/
    v53 = (int **)(*a3 + 0x20); /*0x7ea21b*/
  }
  else
  {
    v52 = 0; /*0x7ea342*/
    a3 = 0; /*0x7ea344*/
    v53 = &a3; /*0x7ea348*/
    v79 = 1; /*0x7ea34c*/
  }
  v58 = *v53; /*0x7ea355*/
  if ( (v79 & 1) != 0 ) /*0x7ea357*/
  {
    if ( v52 ) /*0x7ea35b*/
    {
      if ( !InterlockedDecrement(v52 + 1) ) /*0x7ea361*/
        (*(void (__thiscall **)(int *, int))*v52)(v52, 1); /*0x7ea373*/
    }
  }
  v59 = *(_DWORD *)(*(_DWORD *)(this->member.super.Unk070 + 0x24) + 4); /*0x7ea37b*/
  v60 = *(_DWORD *)(v59 + 4); /*0x7ea37e*/
  v61 = (int **)(v59 + 4); /*0x7ea381*/
  if ( (int *)v60 != v58 ) /*0x7ea386*/
  {
    if ( v60 ) /*0x7ea38a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v60 + 4)) ) /*0x7ea390*/
        (**(void (__thiscall ***)(int, int))v60)(v60, 1); /*0x7ea3a6*/
    }
    *v61 = v58; /*0x7ea3aa*/
    if ( v58 ) /*0x7ea3ad*/
      InterlockedIncrement(v58 + 1); /*0x7ea3b3*/
  }
  v62 = dword_B2C1E4; /*0x7ea3bb*/
  v49 = dword_B2C1E4 == 0; /*0x7ea3c0*/
  flt_B2D898 = 1.0; /*0x7ea3c3*/
  flt_B2D89C = 1.0; /*0x7ea3c9*/
  flt_B2D8A0 = v82 + 0.0; /*0x7ea3d9*/
  flt_B2D8A4 = v85 + 0.0; /*0x7ea3e3*/
  flt_B2D8A8 = v73; /*0x7ea3ed*/
  flt_B2D8AC = v74; /*0x7ea3f7*/
  flt_B2D8B0 = v76; /*0x7ea401*/
  flt_B2D8B4 = v80; /*0x7ea40b*/
  if ( v49 ) /*0x7ea411*/
  {
    flt_B2D888 = 0.0; /*0x7ea42c*/
    v63 = 1.0; /*0x7ea432*/
    v64 = v74; /*0x7ea432*/
  }
  else
  {
    v63 = 1.0; /*0x7ea416*/
    v64 = v74; /*0x7ea416*/
    flt_B2D888 = 1.0; /*0x7ea418*/
    if ( v62 == 1 ) /*0x7ea41e*/
    {
      flt_B2D88C = 0.0; /*0x7ea422*/
      goto LABEL_82; /*0x7ea428*/
    }
  }
  flt_B2D88C = v63; /*0x7ea434*/
LABEL_82:
  v65 = a4; /*0x7ea43a*/
  v66 = *a4; /*0x7ea43e*/
  if ( *a4 ) /*0x7ea43e*/
  {
    v87 = v73; /*0x7ea450*/
  }
  else
  {
    v64 = v63; /*0x7ea446*/
    v87 = v63; /*0x7ea448*/
  }
  v88 = v64; /*0x7ea456*/
  if ( v66 ) /*0x7ea45a*/
  {
    v67 = BSRenderedTexture::UseTextureToRender(v66); /*0x7ea45c*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v67); /*0x7ea464*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x7ea46f*/
  }
  v68 = renderer; /*0x7ea474*/
  if ( (renderer->member.super.SceneState1 == 1 || v68->member.super.SceneState2 == 1) && v68->member.super.IsReady == 1 ) /*0x7ea496*/
    v68->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v68, (NiViewport *)&v86); /*0x7ea4a5*/
  sub_709C60(arg0); /*0x7ea4b2*/
  if ( *v65 ) /*0x7ea4b7*/
    NiRenderer_EndScene(); /*0x7ea4bc*/
  v69 = *(_DWORD *)(*(_DWORD *)(this->member.super.Unk070 + 0x24) + 4); /*0x7ea4c7*/
  v70 = *(_DWORD *)(v69 + 4); /*0x7ea4ca*/
  v71 = (_DWORD *)(v69 + 4); /*0x7ea4cd*/
  if ( v70 ) /*0x7ea4d2*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v70 + 4)) ) /*0x7ea4d8*/
      (**(void (__thiscall ***)(int, int))v70)(v70, 1); /*0x7ea4ee*/
    *v71 = 0; /*0x7ea4f0*/
  }
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], a2); /*0x7ea501*/
}
