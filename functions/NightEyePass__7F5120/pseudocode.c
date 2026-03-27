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

  v7 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  RenderedTexture = (*a3)->members.RenderedTexture;
  if ( RenderedTexture )
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
  else
    v9 = 0;
  v37 = v7->vtbl->GetWidth(v7, 0);
  v10 = (double)v37;
  if ( v37 < 0 )
    v10 = v10 + flt_A2FC78;
  v11 = (double)v9;
  if ( v9 < 0 )
    v11 = v11 + flt_A2FC78;
  v38 = v10 / v11;
  v12 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v13 = (*a3)->members.RenderedTexture;
  if ( v13 )
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13);
  else
    v14 = 0;
  v31 = v12->vtbl->GetHeight(v12, 0);
  v15 = (double)v31;
  if ( v31 < 0 )
    v15 = v15 + flt_A2FC78;
  v16 = (double)v14;
  if ( v14 < 0 )
    v16 = v16 + flt_A2FC78;
  v17 = byte_B42E96 == 0;
  v30 = v15 / v16;
  v33 = 0.0;
  v34 = 1.0;
  v35 = 1.0;
  v18 = 1.0;
  v36 = 0.0;
  if ( !v17 )
  {
    v38 = 1.0;
    v30 = 1.0;
  }
  *((_DWORD *)this + 0x26) = 0;
  v19 = (*a3)->members.RenderedTexture;
  if ( v19 )
  {
    v20 = v19->__vftable->super.GetWidth((NiTexture *)v19);
    v18 = 1.0;
  }
  else
  {
    v20 = 0;
  }
  v21 = (double)v20;
  if ( v20 < 0 )
    v21 = v21 + flt_A2FC78;
  v22 = (*a3)->members.RenderedTexture;
  v32 = dbl_A2FAA0 / v21;
  if ( v22 )
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22);
    v18 = 1.0;
  }
  else
  {
    v23 = 0;
  }
  v24 = v38;
  *((float *)this + 0x28) = v38;
  *((float *)this + 0x29) = v30;
  *((float *)this + 0x2A) = v32 + 0.0;
  v25 = (double)v23;
  if ( v23 < 0 )
    v25 = v25 + flt_A2FC78;
  v39 = dbl_A2FAA0 / v25;
  *((float *)this + 0x2B) = v39 + 0.0;
  if ( a5 )
  {
    v34 = v18;
  }
  else
  {
    v18 = v30;
    v34 = v24;
  }
  v26 = *a3;
  v35 = v18;
  sub_802890(this, v26);
  if ( *a4 )
  {
    v27 = BSRenderedTexture::UseTextureToRender(*a4);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v27);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
  }
  v28 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v28->member.super.SceneState2 == 1)
    && v28->member.super.IsReady == 1 )
  {
    v28->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v28, (NiViewport *)&v33);
  }
  result = sub_709C60(a2);
  if ( *a4 )
    return NiRenderer_EndScene();
  return result;
}
