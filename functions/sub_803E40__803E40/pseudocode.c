char __thiscall sub_803E40(
        BSImageSpaceShader *this,
        NiScreenElements *a2,
        BSRenderedTexture **a3,
        BSRenderedTexture **a4,
        char a5)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  NiRenderedTexture *RenderedTexture; // ecx
  int v11; // eax
  double v12; // st7
  NiRenderedTexture *v13; // ecx
  int v14; // eax
  double v16; // st7
  NiRenderedTexture *v17; // ecx
  int v18; // eax
  double v19; // st7
  NiRenderedTexture *v20; // ecx
  int v21; // eax
  double v22; // st7
  NiRenderTargetGroup *v23; // eax
  double v24; // st7
  NiRenderTargetGroup *v25; // eax
  double v26; // st4
  NiDX9Renderer *v27; // eax
  NiRenderTargetGroup *v28; // eax
  NiDX9Renderer *v29; // ecx
  char result; // al
  float v31; // [esp+10h] [ebp-18h]
  int v32; // [esp+14h] [ebp-14h]
  int v33; // [esp+14h] [ebp-14h]
  float v34; // [esp+14h] [ebp-14h]
  float v35; // [esp+14h] [ebp-14h]
  float v36; // [esp+18h] [ebp-10h] BYREF
  float v37; // [esp+1Ch] [ebp-Ch]
  float v38; // [esp+20h] [ebp-8h]
  float v39; // [esp+24h] [ebp-4h]
  int v40; // [esp+30h] [ebp+8h]
  float v41; // [esp+30h] [ebp+8h]
  int v42; // [esp+30h] [ebp+8h]
  float v43; // [esp+30h] [ebp+8h]
  float v44; // [esp+30h] [ebp+8h]
  float v45; // [esp+34h] [ebp+Ch]
  int v46; // [esp+34h] [ebp+Ch]
  int v47; // [esp+34h] [ebp+Ch]
  char v48; // [esp+38h] [ebp+10h]

  if ( dword_B474F0 )
  {
    v40 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_B474F0 + 0x4C))(dword_B474F0);
    v7 = (double)v40;
    if ( v40 < 0 )
      v7 = v7 + flt_A2FC78;
    v41 = v7;
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_B474F0 + 0x50))(dword_B474F0);
    v8 = (double)v32;
    if ( v32 < 0 )
      v8 = v8 + flt_A2FC78;
  }
  else if ( dword_B474EC )
  {
    v42 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)dword_B474EC + 0x4C))(dword_B474EC);
    v9 = (double)v42;
    if ( v42 < 0 )
      v9 = v9 + flt_A2FC78;
    v41 = v9;
    v33 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)dword_B474EC + 0x50))(dword_B474EC);
    v8 = (double)v33;
    if ( v33 < 0 )
      v8 = v8 + flt_A2FC78;
  }
  else if ( *a3 )
  {
    RenderedTexture = (*a3)->members.RenderedTexture;
    if ( RenderedTexture )
      v11 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture);
    else
      v11 = 0;
    v12 = (double)v11;
    if ( v11 < 0 )
      v12 = v12 + flt_A2FC78;
    v41 = v12;
    v13 = (*a3)->members.RenderedTexture;
    if ( v13 )
      v14 = v13->__vftable->super.GetHeight((NiTexture *)v13);
    else
      v14 = 0;
    v8 = (double)v14;
    if ( v14 < 0 )
      v8 = v8 + flt_A2FC78;
  }
  else
  {
    v8 = flt_A56670;
    v41 = flt_A56670;
  }
  v31 = v8;
  v16 = 1.0;
  if ( byte_B42E96 )
  {
    v45 = 1.0;
    v34 = 1.0;
  }
  else
  {
    if ( *a4 )
    {
      v17 = (*a4)->members.RenderedTexture;
      if ( v17 )
        v18 = v17->__vftable->super.GetWidth((NiTexture *)v17);
      else
        v18 = 0;
      v19 = (double)v18;
      if ( v18 < 0 )
        v19 = v19 + flt_A2FC78;
      *(float *)&v46 = v19;
      v20 = (*a4)->members.RenderedTexture;
      if ( v20 )
      {
        v21 = v20->__vftable->super.GetHeight((NiTexture *)v20);
        v22 = (double)v21;
      }
      else
      {
        v21 = 0;
        v22 = (double)0;
      }
    }
    else
    {
      v23 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v47 = v23->vtbl->GetWidth(v23, 0);
      v24 = (double)v47;
      if ( v47 < 0 )
        v24 = v24 + flt_A2FC78;
      *(float *)&v46 = v24;
      v25 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v21 = v25->vtbl->GetHeight(v25, 0);
      v22 = (double)v21;
    }
    if ( v21 < 0 )
      v22 = v22 + flt_A2FC78;
    v35 = v22;
    v45 = *(float *)&v46 / v41;
    v34 = v35 / v31;
    v16 = 1.0;
  }
  *((float *)this + 0x2A) = v45;
  *((float *)this + 0x2B) = v34;
  v26 = dbl_A2FAA0;
  v43 = v26 / v41;
  *((float *)this + 0x2C) = v43 + 0.0;
  v44 = v26 / v31;
  *((float *)this + 0x2D) = v44 + 0.0;
  v36 = 0.0;
  v39 = 0.0;
  if ( a5 )
  {
    v37 = v16;
  }
  else
  {
    v16 = v34;
    v37 = v45;
  }
  v27 = g_Renderer;
  v38 = v16;
  v48 = 0;
  if ( !v27->member.super.SceneState1 && !v27->member.super.SceneState2 )
  {
    v48 = 1;
    if ( *a4 )
    {
      v28 = BSRenderedTexture::UseTextureToRender(*a4);
      NiRenderer_BeginScene(kClear_BACKBUFFER, v28);
    }
    else
    {
      NiRenderer_BeginScene1(kClear_BACKBUFFER, 0);
    }
  }
  if ( dword_B474EC )
  {
    *((_DWORD *)this + 0x29) = 2;
  }
  else
  {
    if ( dword_B474F0 )
    {
      *((_DWORD *)this + 0x29) = 1;
      v29 = g_Renderer;
      if ( (g_Renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1)
        && v29->member.super.IsReady == 1 )
      {
        goto LABEL_59;
      }
      goto LABEL_60;
    }
    *((_DWORD *)this + 0x29) = 0;
    sub_802890(this, *a3);
  }
  v29 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1)
    && v29->member.super.IsReady == 1 )
  {
LABEL_59:
    v29->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v29, (NiViewport *)&v36);
  }
LABEL_60:
  result = sub_709C60(a2);
  if ( v48 )
  {
    if ( *a4 )
      return NiRenderer_EndScene();
  }
  return result;
}
