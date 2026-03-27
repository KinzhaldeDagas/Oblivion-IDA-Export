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

  v7 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  RenderedTexture = (*a3)->members.RenderedTexture;
  if ( RenderedTexture )
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
  else
    v9 = 0;
  v38 = v7->vtbl->GetWidth(v7, 0);
  v10 = (double)v38;
  if ( v38 < 0 )
    v10 = v10 + flt_A2FC78;
  v11 = (double)v9;
  if ( v9 < 0 )
    v11 = v11 + flt_A2FC78;
  v39 = v10 / v11;
  v12 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v13 = (*a3)->members.RenderedTexture;
  if ( v13 )
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13);
  else
    v14 = 0;
  v32 = v12->vtbl->GetHeight(v12, 0);
  v15 = (double)v32;
  if ( v32 < 0 )
    v15 = v15 + flt_A2FC78;
  v16 = (double)v14;
  if ( v14 < 0 )
    v16 = v16 + flt_A2FC78;
  v17 = byte_B42E96 == 0;
  v31 = v15 / v16;
  v34 = 0.0;
  v35 = 1.0;
  v36 = 1.0;
  v18 = 1.0;
  v37 = 0.0;
  if ( !v17 )
  {
    v39 = 1.0;
    v31 = 1.0;
  }
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
  v33 = dbl_A2FAA0 / v21;
  if ( v22 )
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22);
    v18 = 1.0;
  }
  else
  {
    v23 = 0;
  }
  v24 = v39;
  *((float *)this + 0x28) = v39;
  *((float *)this + 0x29) = v31;
  *((float *)this + 0x2A) = v33 + 0.0;
  v25 = (double)v23;
  if ( v23 < 0 )
    v25 = v25 + flt_A2FC78;
  v26 = dbl_A2FAA0 / v25;
  *((_DWORD *)this + 0x24) = 0;
  v40 = v26;
  *((float *)this + 0x2B) = v40 + 0.0;
  if ( a5 )
  {
    v35 = v18;
  }
  else
  {
    v18 = v31;
    v35 = v24;
  }
  v27 = *a3;
  v36 = v18;
  sub_802890(this, v27);
  if ( *a4 )
    v28 = BSRenderedTexture::UseTextureToRender(*a4);
  else
    v28 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  StartUsingRenderTarget(v28, kClear_BACKBUFFER);
  v29 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1)
    && v29->member.super.IsReady == 1 )
  {
    v29->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v29, (NiViewport *)&v34);
  }
  sub_709C60(a2);
  sub_7D7110();
  v30 = *((_DWORD *)this + 0x30);
  if ( v30 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) )
      (**(void (__thiscall ***)(int, int))v30)(v30, 1);
    *((_DWORD *)this + 0x30) = 0;
  }
}
