// MoonSugarEffect decode: viewport-aware image-space shader render helper; computes source/default target ratios, binds source texture, starts target/default with kClear_BACKBUFFER, SetupScreenSpaceCamera(viewport), draws quad, then pops RT stack.
void __thiscall sub_7AF5B0(
        BSImageSpaceShader *this,
        NiScreenElements *a2,
        BSRenderedTexture **a3,
        BSRenderedTexture **a4,
        char a5)
{
  NiRenderTargetGroup *v7; // esi
  NiRenderedTexture *RenderedTexture; // ecx
  int v9; // ebp
  double v10; // st7
  double v11; // st6
  NiRenderTargetGroup *v12; // esi
  NiRenderedTexture *v13; // ecx
  int v14; // ebp
  double v15; // st7
  double v16; // st6
  bool v17; // zf
  double v18; // st7
  NiRenderedTexture *v19; // ecx
  int v20; // eax
  double v21; // st6
  NiRenderedTexture *v22; // ecx
  int v23; // eax
  double v24; // st6
  double v25; // st3
  double v26; // st3
  BSRenderedTexture *v27; // eax
  NiRenderTargetGroup *v28; // eax
  NiDX9Renderer *v29; // ecx
  int v30; // esi
  float v31; // [esp+10h] [ebp-18h]
  int v32; // [esp+14h] [ebp-14h]
  float v33; // [esp+14h] [ebp-14h]
  float v34; // [esp+18h] [ebp-10h] BYREF
  float v35; // [esp+1Ch] [ebp-Ch]
  float v36; // [esp+20h] [ebp-8h]
  float v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+30h] [ebp+8h]
  float v39; // [esp+30h] [ebp+8h]
  float v40; // [esp+30h] [ebp+8h]

  v7 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7af5ca*/
  RenderedTexture = (*a3)->members.RenderedTexture; /*0x7af5ce*/
  if ( RenderedTexture ) /*0x7af5d3*/
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x7af5dc*/
  else
    v9 = 0; /*0x7af5e0*/
  v38 = v7->vtbl->GetWidth(v7, 0); /*0x7af5ef*/
  v10 = (double)v38; /*0x7af5f3*/
  if ( v38 < 0 ) /*0x7af5f7*/
    v10 = v10 + flt_A2FC78; /*0x7af5f9*/
  v11 = (double)v9; /*0x7af605*/
  if ( v9 < 0 ) /*0x7af609*/
    v11 = v11 + flt_A2FC78; /*0x7af60b*/
  v39 = v10 / v11; /*0x7af61e*/
  v12 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7af624*/
  v13 = (*a3)->members.RenderedTexture; /*0x7af628*/
  if ( v13 ) /*0x7af62d*/
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13); /*0x7af636*/
  else
    v14 = 0; /*0x7af63a*/
  v32 = v12->vtbl->GetHeight(v12, 0); /*0x7af649*/
  v15 = (double)v32; /*0x7af64d*/
  if ( v32 < 0 ) /*0x7af651*/
    v15 = v15 + flt_A2FC78; /*0x7af653*/
  v16 = (double)v14; /*0x7af65f*/
  if ( v14 < 0 ) /*0x7af663*/
    v16 = v16 + flt_A2FC78; /*0x7af665*/
  v17 = unk_B42E96 == 0; /*0x7af66b*/
  v31 = v15 / v16; /*0x7af674*/
  v34 = 0.0; /*0x7af67a*/
  v35 = 1.0; /*0x7af680*/
  v36 = 1.0; /*0x7af684*/
  v18 = 1.0; /*0x7af688*/
  v37 = 0.0; /*0x7af68a*/
  if ( !v17 ) /*0x7af68e*/
  {
    v39 = 1.0; /*0x7af690*/
    v31 = 1.0; /*0x7af694*/
  }
  v19 = (*a3)->members.RenderedTexture; /*0x7af69a*/
  if ( v19 ) /*0x7af6a1*/
  {
    v20 = v19->__vftable->super.GetWidth((NiTexture *)v19); /*0x7af6aa*/
    v18 = 1.0; /*0x7af6ac*/
  }
  else
  {
    v20 = 0; /*0x7af6b0*/
  }
  v21 = (double)v20; /*0x7af6b8*/
  if ( v20 < 0 ) /*0x7af6bc*/
    v21 = v21 + flt_A2FC78; /*0x7af6be*/
  v22 = (*a3)->members.RenderedTexture; /*0x7af6cc*/
  v33 = dbl_A2FAA0 / v21; /*0x7af6d1*/
  if ( v22 ) /*0x7af6d5*/
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22); /*0x7af6de*/
    v18 = 1.0; /*0x7af6e0*/
  }
  else
  {
    v23 = 0; /*0x7af6e4*/
  }
  v24 = v39; /*0x7af6e8*/
  *((float *)this + 0x28) = v39; /*0x7af6ec*/
  *((float *)this + 0x29) = v31; /*0x7af6fa*/
  *((float *)this + 0x2A) = v33 + 0.0; /*0x7af70a*/
  v25 = (double)v23; /*0x7af710*/
  if ( v23 < 0 ) /*0x7af714*/
    v25 = v25 + flt_A2FC78; /*0x7af716*/
  v26 = dbl_A2FAA0 / v25; /*0x7af721*/
  *((_DWORD *)this + 0x24) = 0; /*0x7af727*/
  v40 = v26; /*0x7af72d*/
  *((float *)this + 0x2B) = v40 + 0.0; /*0x7af735*/
  if ( a5 ) /*0x7af73b*/
  {
    v35 = v18; /*0x7af741*/
  }
  else
  {
    v18 = v31; /*0x7af747*/
    v35 = v24; /*0x7af749*/
  }
  v27 = *a3; /*0x7af74d*/
  v36 = v18; /*0x7af74f*/
  sub_802890(this, v27); /*0x7af756*/
  if ( *a4 ) /*0x7af75f*/
    v28 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7af765*/
  else
    v28 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7af777*/
  NiRenderer_PushAndBeginRenderTargetGroup(v28, kClear_BACKBUFFER); /*0x7af780*/
  v29 = renderer; /*0x7af785*/
  if ( (renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1) && v29->member.super.IsReady == 1 ) /*0x7af7a5*/
    v29->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v29, (NiViewport *)&v34); /*0x7af7b4*/
  sub_709C60(a2); /*0x7af7c1*/
  NiRenderer_PopRenderTargetGroupAndRestore(); /*0x7af7c6*/
  v30 = *((_DWORD *)this + 0x30); /*0x7af7cb*/
  if ( v30 ) /*0x7af7d3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) ) /*0x7af7d9*/
      (**(void (__thiscall ***)(int, int))v30)(v30, 1); /*0x7af7ee*/
    *((_DWORD *)this + 0x30) = 0; /*0x7af7f0*/
  }
}
