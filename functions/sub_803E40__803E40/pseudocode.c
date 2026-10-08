// MoonSugarEffect decode: CopyShader render computes ratios/texels, handles global override modes +0xA4, stores normal source at BSImageSpaceShader +0x7C, begins dest/default, draws screen quad.
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

  if ( LODWORD(flt_B474CC[9]) ) /*0x803e4c*/
  {
    v40 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(flt_B474CC[9]) + 0x4C))(LODWORD(flt_B474CC[9])); /*0x803e60*/
    v7 = (double)v40; /*0x803e64*/
    if ( v40 < 0 ) /*0x803e68*/
      v7 = v7 + flt_A2FC78; /*0x803e6a*/
    v41 = v7; /*0x803e76*/
    v32 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(flt_B474CC[9]) + 0x50))(LODWORD(flt_B474CC[9])); /*0x803e83*/
    v8 = (double)v32; /*0x803e87*/
    if ( v32 < 0 ) /*0x803e8b*/
      v8 = v8 + flt_A2FC78; /*0x803e91*/
  }
  else if ( LODWORD(flt_B474CC[8]) ) /*0x803e9c*/
  {
    v42 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(flt_B474CC[8]) + 0x4C))(LODWORD(flt_B474CC[8])); /*0x803eaf*/
    v9 = (double)v42; /*0x803eb3*/
    if ( v42 < 0 ) /*0x803eb7*/
      v9 = v9 + flt_A2FC78; /*0x803eb9*/
    v41 = v9; /*0x803ec5*/
    v33 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(flt_B474CC[8]) + 0x50))(LODWORD(flt_B474CC[8])); /*0x803ed2*/
    v8 = (double)v33; /*0x803ed6*/
    if ( v33 < 0 ) /*0x803eda*/
      v8 = v8 + flt_A2FC78; /*0x803edc*/
  }
  else if ( *a3 ) /*0x803ee4*/
  {
    RenderedTexture = (*a3)->members.RenderedTexture; /*0x803eeb*/
    if ( RenderedTexture ) /*0x803ef0*/
      v11 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x803ef7*/
    else
      v11 = 0; /*0x803efb*/
    v12 = (double)v11; /*0x803f03*/
    if ( v11 < 0 ) /*0x803f07*/
      v12 = v12 + flt_A2FC78; /*0x803f09*/
    v41 = v12; /*0x803f12*/
    v13 = (*a3)->members.RenderedTexture; /*0x803f16*/
    if ( v13 ) /*0x803f1b*/
      v14 = v13->__vftable->super.GetHeight((NiTexture *)v13); /*0x803f22*/
    else
      v14 = 0; /*0x803f26*/
    v8 = (double)v14; /*0x803f2e*/
    if ( v14 < 0 ) /*0x803f32*/
      v8 = v8 + flt_A2FC78; /*0x803f34*/
  }
  else
  {
    v8 = flt_A56670; /*0x803f3c*/
    v41 = flt_A56670; /*0x803f42*/
  }
  v31 = v8; /*0x803f4d*/
  v16 = 1.0; /*0x803f55*/
  if ( unk_B42E96 ) /*0x803f46*/
  {
    v45 = 1.0; /*0x803f59*/
    v34 = 1.0; /*0x803f5d*/
  }
  else
  {
    if ( *a4 ) /*0x803f66*/
    {
      v17 = (*a4)->members.RenderedTexture; /*0x803f6e*/
      if ( v17 ) /*0x803f73*/
        v18 = v17->__vftable->super.GetWidth((NiTexture *)v17); /*0x803f7a*/
      else
        v18 = 0; /*0x803f7e*/
      v19 = (double)v18; /*0x803f86*/
      if ( v18 < 0 ) /*0x803f8a*/
        v19 = v19 + flt_A2FC78; /*0x803f8c*/
      *(float *)&v46 = v19; /*0x803f94*/
      v20 = (*a4)->members.RenderedTexture; /*0x803f98*/
      if ( v20 ) /*0x803f9d*/
      {
        v21 = v20->__vftable->super.GetHeight((NiTexture *)v20); /*0x803fa4*/
        v22 = (double)v21; /*0x803faa*/
      }
      else
      {
        v21 = 0; /*0x803fb0*/
        v22 = (double)0; /*0x803fb6*/
      }
    }
    else
    {
      v23 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x803fc7*/
      v47 = v23->vtbl->GetWidth(v23, 0); /*0x803fd6*/
      v24 = (double)v47; /*0x803fda*/
      if ( v47 < 0 ) /*0x803fde*/
        v24 = v24 + flt_A2FC78; /*0x803fe0*/
      *(float *)&v46 = v24; /*0x803fec*/
      v25 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x803ff5*/
      v21 = v25->vtbl->GetHeight(v25, 0); /*0x804000*/
      v22 = (double)v21; /*0x804006*/
    }
    if ( v21 < 0 ) /*0x80400c*/
      v22 = v22 + flt_A2FC78; /*0x80400e*/
    v35 = v22; /*0x804014*/
    v45 = *(float *)&v46 / v41; /*0x804020*/
    v34 = v35 / v31; /*0x80402c*/
    v16 = 1.0; /*0x804030*/
  }
  *((float *)this + 0x2A) = v45; /*0x80403b*/
  *((float *)this + 0x2B) = v34; /*0x804045*/
  v26 = dbl_A2FAA0; /*0x804059*/
  v43 = v26 / v41; /*0x80405b*/
  *((float *)this + 0x2C) = v43 + 0.0; /*0x804069*/
  v44 = v26 / v31; /*0x804077*/
  *((float *)this + 0x2D) = v44 + 0.0; /*0x80407f*/
  v36 = 0.0; /*0x804087*/
  v39 = 0.0; /*0x80408b*/
  if ( a5 ) /*0x80408f*/
  {
    v37 = v16; /*0x804095*/
  }
  else
  {
    v16 = v34; /*0x80409b*/
    v37 = v45; /*0x80409d*/
  }
  v27 = renderer; /*0x8040a1*/
  v38 = v16; /*0x8040a6*/
  v48 = 0; /*0x8040b1*/
  if ( !v27->member.super.SceneState1 && !v27->member.super.SceneState2 ) /*0x8040bd*/
  {
    v48 = 1; /*0x8040ca*/
    if ( *a4 ) /*0x8040c6*/
    {
      v28 = BSRenderedTexture::UseTextureToRender(*a4); /*0x8040d0*/
      NiRenderer_BeginScene(kClear_BACKBUFFER, v28); /*0x8040d7*/
    }
    else
    {
      NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x8040e1*/
    }
  }
  if ( LODWORD(flt_B474CC[8]) ) /*0x8040e9*/
  {
    *((_DWORD *)this + 0x29) = 2; /*0x8040f2*/
  }
  else
  {
    if ( LODWORD(flt_B474CC[9]) ) /*0x8040fe*/
    {
      *((_DWORD *)this + 0x29) = 1; /*0x804107*/
      v29 = renderer; /*0x80410d*/
      if ( (renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1) /*0x804129*/
        && v29->member.super.IsReady == 1 )
      {
        goto LABEL_59; /*0x804129*/
      }
      goto LABEL_60; /*0x804129*/
    }
    *((_DWORD *)this + 0x29) = 0; /*0x80413c*/
    sub_802890(this, *a3); /*0x80414c*/
  }
  v29 = renderer; /*0x804151*/
  if ( (renderer->member.super.SceneState1 == 1 || v29->member.super.SceneState2 == 1) && v29->member.super.IsReady == 1 ) /*0x80416d*/
LABEL_59:
    v29->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v29, (NiViewport *)&v36); /*0x80416f*/
LABEL_60:
  result = sub_709C60(a2); /*0x804184*/
  if ( v48 ) /*0x804193*/
  {
    if ( *a4 ) /*0x804195*/
      return NiRenderer_EndScene(); /*0x80419a*/
  }
  return result; /*0x80419f*/
}
