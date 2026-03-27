int __thiscall MenuPass(float *this, NiScreenElements *a2, BSRenderedTexture **a3, BSRenderedTexture **a4, int a5)
{
  double v6; // st7
  NiRenderedTexture *RenderedTexture; // ecx
  int v9; // esi
  NiRenderedTexture *v10; // ecx
  int v11; // eax
  double v12; // st7
  double v13; // st6
  NiRenderedTexture *v14; // ecx
  int v15; // esi
  NiRenderedTexture *v16; // ecx
  int v17; // eax
  double v18; // st7
  double v19; // st6
  bool v20; // sf
  NiRenderTargetGroup *v21; // esi
  NiRenderedTexture *v22; // ecx
  int v23; // edi
  double v24; // st7
  double v25; // st6
  NiRenderTargetGroup *v26; // esi
  NiRenderedTexture *v27; // ecx
  int v28; // edi
  BSRenderedTexture *v29; // eax
  NiRenderedTexture *v30; // ecx
  int v31; // eax
  double v32; // st7
  NiRenderedTexture *v33; // ecx
  int v34; // eax
  double v35; // st7
  bool v36; // zf
  double v37; // st7
  double v38; // st7
  BSRenderedTexture *v39; // eax
  LONG (__stdcall *v40)(volatile LONG *); // ebp
  int *v41; // eax
  float *v42; // edi
  void (__thiscall ***v43)(_DWORD, int); // esi
  NiDX9Renderer *v44; // ecx
  NiRenderTargetGroup *v45; // eax
  int result; // eax
  int v47; // esi
  float v48; // [esp+14h] [ebp-2Ch]
  float v50; // [esp+1Ch] [ebp-24h]
  int v51; // [esp+20h] [ebp-20h]
  float v52; // [esp+20h] [ebp-20h]
  float v53; // [esp+24h] [ebp-1Ch] BYREF
  float v54; // [esp+28h] [ebp-18h]
  float v55; // [esp+2Ch] [ebp-14h]
  float v56; // [esp+30h] [ebp-10h]
  unsigned int v57; // [esp+3Ch] [ebp-4h]
  float v58; // [esp+48h] [ebp+8h]
  int v59; // [esp+48h] [ebp+8h]

  v6 = 1.0;
  if ( byte_B42E96 )
  {
    v58 = 1.0;
  }
  else
  {
    if ( *a4 )
    {
      RenderedTexture = (*a4)->members.RenderedTexture;
      if ( RenderedTexture )
        v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
      else
        v9 = 0;
      v10 = (*a3)->members.RenderedTexture;
      if ( v10 )
        v11 = v10->__vftable->super.GetWidth((NiTexture *)v10);
      else
        v11 = 0;
      v12 = (double)v9;
      if ( v9 < 0 )
        v12 = v12 + flt_A2FC78;
      v13 = (double)v11;
      if ( v11 < 0 )
        v13 = v13 + flt_A2FC78;
      v14 = (*a4)->members.RenderedTexture;
      v58 = v12 / v13;
      if ( v14 )
        v15 = v14->__vftable->super.GetHeight((NiTexture *)v14);
      else
        v15 = 0;
      v16 = (*a3)->members.RenderedTexture;
      if ( v16 )
        v17 = v16->__vftable->super.GetHeight((NiTexture *)v16);
      else
        v17 = 0;
      v18 = (double)v15;
      if ( v15 < 0 )
        v18 = v18 + flt_A2FC78;
      v19 = (double)v17;
      v20 = v17 < 0;
    }
    else
    {
      v21 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v22 = (*a3)->members.RenderedTexture;
      if ( v22 )
        v23 = v22->__vftable->super.GetWidth((NiTexture *)v22);
      else
        v23 = 0;
      v59 = v21->vtbl->GetWidth(v21, 0);
      v24 = (double)v59;
      if ( v59 < 0 )
        v24 = v24 + flt_A2FC78;
      v25 = (double)v23;
      if ( v23 < 0 )
        v25 = v25 + flt_A2FC78;
      v58 = v24 / v25;
      v26 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v27 = (*a3)->members.RenderedTexture;
      if ( v27 )
        v28 = v27->__vftable->super.GetHeight((NiTexture *)v27);
      else
        v28 = 0;
      v51 = v26->vtbl->GetHeight(v26, 0);
      v18 = (double)v51;
      if ( v51 < 0 )
        v18 = v18 + flt_A2FC78;
      v19 = (double)v28;
      v20 = v28 < 0;
    }
    if ( v20 )
      v19 = v19 + flt_A2FC78;
    v6 = v18 / v19;
  }
  v29 = *a3;
  v48 = v6;
  v53 = 0.0;
  v54 = 1.0;
  v55 = 1.0;
  v56 = 0.0;
  v30 = v29->members.RenderedTexture;
  if ( v30 )
    v31 = v30->__vftable->super.GetWidth((NiTexture *)v30);
  else
    v31 = 0;
  v32 = (double)v31;
  if ( v31 < 0 )
    v32 = v32 + flt_A2FC78;
  v33 = (*a3)->members.RenderedTexture;
  v50 = dbl_A2FAA0 / v32;
  if ( v33 )
    v34 = v33->__vftable->super.GetHeight((NiTexture *)v33);
  else
    v34 = 0;
  v35 = (double)v34;
  if ( v34 < 0 )
    v35 = v35 + flt_A2FC78;
  v36 = (_BYTE)a5 == 0;
  v37 = dbl_A2FAA0 / v35;
  *(this + 0x24) = 0.0;
  v52 = v37;
  *(this + 0x28) = v58;
  *(this + 0x29) = v48;
  *(this + 0x2A) = v50 + 0.0;
  *(this + 0x2B) = v52 + 0.0;
  if ( v36 )
  {
    v38 = v48;
    v54 = v58;
  }
  else
  {
    v38 = 1.0;
    v54 = 1.0;
  }
  v39 = *a3;
  v55 = v38;
  sub_802890((BSImageSpaceShader *)this, v39);
  v40 = InterlockedDecrement;
  if ( UseHDR )
  {
    v42 = this;
  }
  else
  {
    v41 = sub_7B8200(&a5, "Data\\Textures\\Menus\\Misc\\sepia.dds", 1, 0);
    v42 = this;
    sub_55E2A0((int *)this + 0x2D, v41);
    v57 = 0xFFFFFFFF;
    if ( a5 )
    {
      v43 = (void (__thiscall ***)(_DWORD, int))a5;
      if ( !v40((volatile LONG *)(a5 + 4)) )
        (**v43)(v43, 1);
    }
  }
  v44 = g_Renderer;
  if ( !g_Renderer->member.super.SceneState1 && !v44->member.super.SceneState2 )
  {
    if ( *a4 )
    {
      v45 = BSRenderedTexture::UseTextureToRender(*a4);
      NiRenderer_BeginScene(kClear_BACKBUFFER, v45);
    }
    else
    {
      NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
    }
    v44 = g_Renderer;
  }
  if ( (v44->member.super.SceneState1 == 1 || v44->member.super.SceneState2 == 1) && v44->member.super.IsReady == 1 )
    v44->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v44, (NiViewport *)&v53);
  result = sub_709C60(a2);
  v47 = *((_DWORD *)v42 + 0x2D);
  if ( v47 )
  {
    result = v40((volatile LONG *)(v47 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v47)(v47, 1);
    v42[0x2D] = 0.0;
  }
  return result;
}
