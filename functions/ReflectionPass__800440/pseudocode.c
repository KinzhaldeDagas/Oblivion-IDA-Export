void __thiscall ReflectionPass(
        BSImageSpaceShader *this,
        NiScreenElements *a2,
        BSRenderedTexture **a3,
        BSRenderedTexture **a4,
        char a5)
{
  NiRenderTargetGroup *v7; // esi
  NiRenderedTexture *RenderedTexture; // ecx
  int v9; // ebx
  double v10; // st7
  double v11; // st6
  NiRenderTargetGroup *v12; // esi
  NiRenderedTexture *v13; // ecx
  int v14; // ebx
  double v15; // st7
  double v16; // st6
  double v17; // st7
  BSRenderedTexture *v18; // eax
  NiRenderedTexture *v19; // ecx
  int v20; // eax
  double v21; // st6
  NiRenderedTexture *v22; // ecx
  int v23; // eax
  double v24; // st6
  double v25; // st6
  double v26; // st6
  double v27; // rt1
  BSRenderedTexture *v28; // eax
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v30; // esi
  LONG (__stdcall *v31)(volatile LONG *); // ebx
  NiRenderedTexture *v32; // ebp
  NiRenderTargetGroup *v33; // eax
  NiDX9Renderer *v34; // ecx
  int v35; // esi
  UInt32 v36; // esi
  float v37; // [esp+10h] [ebp-1Ch]
  float v38; // [esp+14h] [ebp-18h]
  int v39; // [esp+18h] [ebp-14h]
  float v40; // [esp+18h] [ebp-14h]
  float v41; // [esp+1Ch] [ebp-10h] BYREF
  float v42; // [esp+20h] [ebp-Ch]
  float v43; // [esp+24h] [ebp-8h]
  float v44; // [esp+28h] [ebp-4h]
  int v45; // [esp+34h] [ebp+8h]
  float v46; // [esp+34h] [ebp+8h]
  float v47; // [esp+34h] [ebp+8h]
  float v48; // [esp+34h] [ebp+8h]

  v7 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  RenderedTexture = (*a3)->members.RenderedTexture;
  if ( RenderedTexture )
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
  else
    v9 = 0;
  v45 = v7->vtbl->GetWidth(v7, 0);
  v10 = (double)v45;
  if ( v45 < 0 )
    v10 = v10 + flt_A2FC78;
  v11 = (double)v9;
  if ( v9 < 0 )
    v11 = v11 + flt_A2FC78;
  v46 = v10 / v11;
  v12 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v13 = (*a3)->members.RenderedTexture;
  if ( v13 )
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13);
  else
    v14 = 0;
  v39 = v12->vtbl->GetHeight(v12, 0);
  v15 = (double)v39;
  if ( v39 < 0 )
    v15 = v15 + flt_A2FC78;
  v16 = (double)v14;
  if ( v14 < 0 )
    v16 = v16 + flt_A2FC78;
  v37 = v15 / v16;
  v17 = 1.0;
  if ( byte_B42E96 )
  {
    v46 = 1.0;
    v37 = 1.0;
  }
  v18 = *a3;
  v41 = 0.0;
  v44 = 0.0;
  v42 = 1.0;
  v43 = 1.0;
  v19 = v18->members.RenderedTexture;
  if ( v19 )
  {
    v20 = v19->__vftable->super.GetWidth((NiTexture *)v19);
    v17 = 1.0;
  }
  else
  {
    v20 = 0;
  }
  v21 = (double)v20;
  if ( v20 < 0 )
    v21 = v21 + flt_A2FC78;
  v22 = (*a3)->members.RenderedTexture;
  v38 = dbl_A2FAA0 / v21;
  if ( v22 )
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22);
    v17 = 1.0;
  }
  else
  {
    v23 = 0;
  }
  v24 = (double)v23;
  if ( v23 < 0 )
    v24 = v24 + flt_A2FC78;
  v25 = dbl_A2FAA0 / v24;
  *((_DWORD *)this + 0x26) = 0;
  v40 = v25;
  v26 = v46;
  *((float *)this + 0x29) = v46;
  *((float *)this + 0x2A) = v37;
  v47 = v38 + 0.0;
  *((float *)this + 0x2B) = v47;
  v27 = v47;
  v48 = v40 + 0.0;
  *((float *)this + 0x2C) = v48;
  *((float *)this + 0x30) = v48;
  *((float *)this + 0x2D) = v26;
  *((float *)this + 0x2E) = v37;
  *((float *)this + 0x2F) = v27;
  if ( a5 )
  {
    v42 = v17;
  }
  else
  {
    v17 = v37;
    v42 = v26;
  }
  v28 = *a3;
  v43 = v17;
  sub_802890(this, v28);
  InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)dword_B474AC);
  v30 = *((NiRenderedTexture **)this + 0x28);
  v31 = InterlockedDecrement;
  v32 = InnerTexture;
  if ( v30 != InnerTexture )
  {
    if ( v30 )
    {
      if ( !v31((volatile LONG *)&v30->member) )
        v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1);
    }
    *((_DWORD *)this + 0x28) = v32;
    if ( v32 )
      InterlockedIncrement((volatile LONG *)&v32->member);
  }
  if ( *a4 )
  {
    v33 = BSRenderedTexture::UseTextureToRender(*a4);
    NiRenderer_BeginScene(kClear_BACKBUFFER, v33);
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
  }
  v34 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v34->member.super.SceneState2 == 1)
    && v34->member.super.IsReady == 1 )
  {
    v34->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v34, (NiViewport *)&v41);
  }
  sub_709C60(a2);
  if ( *a4 )
    NiRenderer_EndScene();
  v35 = *((_DWORD *)this + 0x28);
  if ( v35 )
  {
    if ( !v31((volatile LONG *)(v35 + 4)) )
      (**(void (__thiscall ***)(int, int))v35)(v35, 1);
    *((_DWORD *)this + 0x28) = 0;
  }
  sub_7C1EE0(g_textureManager, (BSRenderedTexture *)dword_B474AC);
  v36 = dword_B474AC;
  if ( dword_B474AC )
  {
    if ( !v31((volatile LONG *)(v36 + 4)) )
    {
      if ( v36 )
        (**(void (__thiscall ***)(UInt32, int))v36)(v36, 1);
    }
    dword_B474AC = 0;
  }
}
