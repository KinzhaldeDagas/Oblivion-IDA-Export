// MoonSugarEffect decode: NightEye active pass; one source texture, ratio/texel constants, +0x7C source ownership, direct begin/setup camera/draw/end cadence.
char __thiscall NightEyePass(
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
  BSRenderedTexture *v26; // eax
  NiRenderTargetGroup *v27; // eax
  NiDX9Renderer *v28; // ecx
  char result; // al
  float v30; // [esp+10h] [ebp-18h]
  int v31; // [esp+14h] [ebp-14h]
  float v32; // [esp+14h] [ebp-14h]
  float v33; // [esp+18h] [ebp-10h] BYREF
  float v34; // [esp+1Ch] [ebp-Ch]
  float v35; // [esp+20h] [ebp-8h]
  float v36; // [esp+24h] [ebp-4h]
  int v37; // [esp+30h] [ebp+8h]
  float v38; // [esp+30h] [ebp+8h]
  float v39; // [esp+30h] [ebp+8h]

  v7 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7f513a*/
  RenderedTexture = (*a3)->members.RenderedTexture; /*0x7f513e*/
  if ( RenderedTexture ) /*0x7f5143*/
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x7f514c*/
  else
    v9 = 0; /*0x7f5150*/
  v37 = v7->vtbl->GetWidth(v7, 0); /*0x7f515f*/
  v10 = (double)v37; /*0x7f5163*/
  if ( v37 < 0 ) /*0x7f5167*/
    v10 = v10 + flt_A2FC78; /*0x7f5169*/
  v11 = (double)v9; /*0x7f5175*/
  if ( v9 < 0 ) /*0x7f5179*/
    v11 = v11 + flt_A2FC78; /*0x7f517b*/
  v38 = v10 / v11; /*0x7f518e*/
  v12 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7f5194*/
  v13 = (*a3)->members.RenderedTexture; /*0x7f5198*/
  if ( v13 ) /*0x7f519d*/
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13); /*0x7f51a6*/
  else
    v14 = 0; /*0x7f51aa*/
  v31 = v12->vtbl->GetHeight(v12, 0); /*0x7f51b9*/
  v15 = (double)v31; /*0x7f51bd*/
  if ( v31 < 0 ) /*0x7f51c1*/
    v15 = v15 + flt_A2FC78; /*0x7f51c3*/
  v16 = (double)v14; /*0x7f51cf*/
  if ( v14 < 0 ) /*0x7f51d3*/
    v16 = v16 + flt_A2FC78; /*0x7f51d5*/
  v17 = unk_B42E96 == 0; /*0x7f51db*/
  v30 = v15 / v16; /*0x7f51e4*/
  v33 = 0.0; /*0x7f51ea*/
  v34 = 1.0; /*0x7f51f0*/
  v35 = 1.0; /*0x7f51f4*/
  v18 = 1.0; /*0x7f51f8*/
  v36 = 0.0; /*0x7f51fa*/
  if ( !v17 ) /*0x7f51fe*/
  {
    v38 = 1.0; /*0x7f5200*/
    v30 = 1.0; /*0x7f5204*/
  }
  *((_DWORD *)this + 0x26) = 0; /*0x7f5208*/
  v19 = (*a3)->members.RenderedTexture; /*0x7f5214*/
  if ( v19 ) /*0x7f5219*/
  {
    v20 = v19->__vftable->super.GetWidth((NiTexture *)v19); /*0x7f5222*/
    v18 = 1.0; /*0x7f5224*/
  }
  else
  {
    v20 = 0; /*0x7f5228*/
  }
  v21 = (double)v20; /*0x7f5230*/
  if ( v20 < 0 ) /*0x7f5234*/
    v21 = v21 + flt_A2FC78; /*0x7f5236*/
  v22 = (*a3)->members.RenderedTexture; /*0x7f5244*/
  v32 = dbl_A2FAA0 / v21; /*0x7f5249*/
  if ( v22 ) /*0x7f524d*/
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22); /*0x7f5256*/
    v18 = 1.0; /*0x7f5258*/
  }
  else
  {
    v23 = 0; /*0x7f525c*/
  }
  v24 = v38; /*0x7f5260*/
  *((float *)this + 0x28) = v38; /*0x7f5264*/
  *((float *)this + 0x29) = v30; /*0x7f5272*/
  *((float *)this + 0x2A) = v32 + 0.0; /*0x7f5282*/
  v25 = (double)v23; /*0x7f5288*/
  if ( v23 < 0 ) /*0x7f528c*/
    v25 = v25 + flt_A2FC78; /*0x7f528e*/
  v39 = dbl_A2FAA0 / v25; /*0x7f529f*/
  *((float *)this + 0x2B) = v39 + 0.0; /*0x7f52a7*/
  if ( a5 ) /*0x7f52ad*/
  {
    v34 = v18; /*0x7f52b3*/
  }
  else
  {
    v18 = v30; /*0x7f52b9*/
    v34 = v24; /*0x7f52bb*/
  }
  v26 = *a3; /*0x7f52bf*/
  v35 = v18; /*0x7f52c1*/
  sub_802890(this, v26); /*0x7f52c8*/
  if ( *a4 ) /*0x7f52d1*/
  {
    v27 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7f52d7*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v27); /*0x7f52e3*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x7f52f2*/
  }
  v28 = renderer; /*0x7f52f7*/
  if ( (renderer->member.super.SceneState1 == 1 || v28->member.super.SceneState2 == 1) && v28->member.super.IsReady == 1 ) /*0x7f5316*/
    v28->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v28, (NiViewport *)&v33); /*0x7f5325*/
  result = sub_709C60(a2); /*0x7f5332*/
  if ( *a4 ) /*0x7f5337*/
    return NiRenderer_EndScene(); /*0x7f5340*/
  return result; /*0x7f533a*/
}
