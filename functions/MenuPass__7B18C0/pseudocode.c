int __thiscall MenuPass(
        float *this,
        NiScreenElements *a2,
        BSRenderedTexture **a3,
        BSRenderedTexture **a4,
        NiSourceTexture *outTexture)
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
  NiSourceTexture *v43; // esi
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

  v6 = 1.0; /*0x7b18f4*/
  if ( unk_B42E96 ) /*0x7b18ed*/
  {
    v58 = 1.0; /*0x7b18fc*/
  }
  else
  {
    if ( *a4 ) /*0x7b190b*/
    {
      RenderedTexture = (*a4)->members.RenderedTexture; /*0x7b1915*/
      if ( RenderedTexture ) /*0x7b191a*/
        v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x7b1923*/
      else
        v9 = 0; /*0x7b1927*/
      v10 = (*a3)->members.RenderedTexture; /*0x7b192c*/
      if ( v10 ) /*0x7b1931*/
        v11 = v10->__vftable->super.GetWidth((NiTexture *)v10); /*0x7b1938*/
      else
        v11 = 0; /*0x7b193c*/
      v12 = (double)v9; /*0x7b1944*/
      if ( v9 < 0 ) /*0x7b1948*/
        v12 = v12 + flt_A2FC78; /*0x7b194a*/
      v13 = (double)v11; /*0x7b1956*/
      if ( v11 < 0 ) /*0x7b195a*/
        v13 = v13 + flt_A2FC78; /*0x7b195c*/
      v14 = (*a4)->members.RenderedTexture; /*0x7b1966*/
      v58 = v12 / v13; /*0x7b196b*/
      if ( v14 ) /*0x7b196f*/
        v15 = v14->__vftable->super.GetHeight((NiTexture *)v14); /*0x7b1978*/
      else
        v15 = 0; /*0x7b197c*/
      v16 = (*a3)->members.RenderedTexture; /*0x7b1981*/
      if ( v16 ) /*0x7b1986*/
        v17 = v16->__vftable->super.GetHeight((NiTexture *)v16); /*0x7b198d*/
      else
        v17 = 0; /*0x7b1991*/
      v18 = (double)v15; /*0x7b1999*/
      if ( v15 < 0 ) /*0x7b199d*/
        v18 = v18 + flt_A2FC78; /*0x7b199f*/
      v19 = (double)v17; /*0x7b19a9*/
      v20 = v17 < 0; /*0x7b19ad*/
    }
    else
    {
      v21 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7b19c1*/
      v22 = (*a3)->members.RenderedTexture; /*0x7b19c6*/
      if ( v22 ) /*0x7b19cb*/
        v23 = v22->__vftable->super.GetWidth((NiTexture *)v22); /*0x7b19d4*/
      else
        v23 = 0; /*0x7b19d8*/
      v59 = v21->vtbl->GetWidth(v21, 0); /*0x7b19e7*/
      v24 = (double)v59; /*0x7b19eb*/
      if ( v59 < 0 ) /*0x7b19ef*/
        v24 = v24 + flt_A2FC78; /*0x7b19f1*/
      v25 = (double)v23; /*0x7b19fd*/
      if ( v23 < 0 ) /*0x7b1a01*/
        v25 = v25 + flt_A2FC78; /*0x7b1a03*/
      v58 = v24 / v25; /*0x7b1a16*/
      v26 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7b1a1c*/
      v27 = (*a3)->members.RenderedTexture; /*0x7b1a21*/
      if ( v27 ) /*0x7b1a26*/
        v28 = v27->__vftable->super.GetHeight((NiTexture *)v27); /*0x7b1a2f*/
      else
        v28 = 0; /*0x7b1a33*/
      v51 = v26->vtbl->GetHeight(v26, 0); /*0x7b1a42*/
      v18 = (double)v51; /*0x7b1a46*/
      if ( v51 < 0 ) /*0x7b1a4a*/
        v18 = v18 + flt_A2FC78; /*0x7b1a4c*/
      v19 = (double)v28; /*0x7b1a56*/
      v20 = v28 < 0; /*0x7b1a5a*/
    }
    if ( v20 ) /*0x7b1a5c*/
      v19 = v19 + flt_A2FC78; /*0x7b1a5e*/
    v6 = v18 / v19; /*0x7b1a64*/
  }
  v29 = *a3; /*0x7b1a66*/
  v48 = v6; /*0x7b1a69*/
  v53 = 0.0; /*0x7b1a6f*/
  v54 = 1.0; /*0x7b1a75*/
  v55 = 1.0; /*0x7b1a79*/
  v56 = 0.0; /*0x7b1a7d*/
  v30 = v29->members.RenderedTexture; /*0x7b1a81*/
  if ( v30 ) /*0x7b1a86*/
    v31 = v30->__vftable->super.GetWidth((NiTexture *)v30); /*0x7b1a8d*/
  else
    v31 = 0; /*0x7b1a91*/
  v32 = (double)v31; /*0x7b1a99*/
  if ( v31 < 0 ) /*0x7b1a9d*/
    v32 = v32 + flt_A2FC78; /*0x7b1a9f*/
  v33 = (*a3)->members.RenderedTexture; /*0x7b1aae*/
  v50 = dbl_A2FAA0 / v32; /*0x7b1ab3*/
  if ( v33 ) /*0x7b1ab7*/
    v34 = v33->__vftable->super.GetHeight((NiTexture *)v33); /*0x7b1abe*/
  else
    v34 = 0; /*0x7b1ac2*/
  v35 = (double)v34; /*0x7b1aca*/
  if ( v34 < 0 ) /*0x7b1ace*/
    v35 = v35 + flt_A2FC78; /*0x7b1ad0*/
  v36 = (_BYTE)outTexture == 0; /*0x7b1ad6*/
  v37 = dbl_A2FAA0 / v35; /*0x7b1adb*/
  *(this + 0x24) = 0.0; /*0x7b1ae1*/
  v52 = v37; /*0x7b1aeb*/
  *(this + 0x28) = v58; /*0x7b1af3*/
  *(this + 0x29) = v48; /*0x7b1afd*/
  *(this + 0x2A) = v50 + 0.0; /*0x7b1b0d*/
  *(this + 0x2B) = v52 + 0.0; /*0x7b1b17*/
  if ( v36 ) /*0x7b1b1d*/
  {
    v38 = v48; /*0x7b1b2b*/
    v54 = v58; /*0x7b1b2d*/
  }
  else
  {
    v38 = 1.0; /*0x7b1b23*/
    v54 = 1.0; /*0x7b1b25*/
  }
  v39 = *a3; /*0x7b1b31*/
  v55 = v38; /*0x7b1b34*/
  sub_802890((BSImageSpaceShader *)this, v39); /*0x7b1b3b*/
  v40 = InterlockedDecrement; /*0x7b1b47*/
  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x7b1b40*/
  {
    v42 = this; /*0x7b1bac*/
  }
  else
  {
    v41 = (int *)NiSourceTexture_LoadChecked(&outTexture, "Data\\Textures\\Menus\\Misc\\sepia.dds", 1, 0); /*0x7b1b61*/
    v42 = this; /*0x7b1b69*/
    OB_NiSmartPointer_Assign_010201A0((int *)this + 0x2D, v41); /*0x7b1b7c*/
    v57 = 0xFFFFFFFF; /*0x7b1b87*/
    if ( outTexture ) /*0x7b1b8f*/
    {
      v43 = outTexture; /*0x7b1b91*/
      if ( !v40((volatile LONG *)&outTexture->members) ) /*0x7b1b97*/
        v43->vtbl->super.super.super.Destructor((NiRefObject *)v43, 1); /*0x7b1ba8*/
    }
  }
  v44 = renderer; /*0x7b1bb0*/
  if ( !renderer->member.super.SceneState1 && !v44->member.super.SceneState2 ) /*0x7b1bbf*/
  {
    if ( *a4 ) /*0x7b1bcc*/
    {
      v45 = BSRenderedTexture::UseTextureToRender(*a4); /*0x7b1bd2*/
      NiRenderer_BeginScene(kClear_BACKBUFFER, v45); /*0x7b1bd9*/
    }
    else
    {
      NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x7b1be3*/
    }
    v44 = renderer; /*0x7b1be8*/
  }
  if ( (v44->member.super.SceneState1 == 1 || v44->member.super.SceneState2 == 1) && v44->member.super.IsReady == 1 ) /*0x7b1c07*/
    v44->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v44, (NiViewport *)&v53); /*0x7b1c16*/
  result = sub_709C60(a2); /*0x7b1c23*/
  v47 = *((_DWORD *)v42 + 0x2D); /*0x7b1c28*/
  if ( v47 ) /*0x7b1c30*/
  {
    result = v40((volatile LONG *)(v47 + 4)); /*0x7b1c36*/
    if ( !result ) /*0x7b1c3a*/
      result = (**(int (__thiscall ***)(int, int))v47)(v47, 1); /*0x7b1c47*/
    v42[0x2D] = 0.0; /*0x7b1c49*/
  }
  return result; /*0x7b1c53*/
}
