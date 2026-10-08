// MoonSugarEffect decode: Refraction active pass; stores source at +0x7C, binds dword_B474AC inner texture at +0xA0 as second sampler, draws, then releases/returns the one-frame refraction target.
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

  v7 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x80045a*/
  RenderedTexture = (*a3)->members.RenderedTexture; /*0x80045f*/
  if ( RenderedTexture ) /*0x800464*/
    v9 = RenderedTexture->__vftable->super.GetWidth((NiTexture *)RenderedTexture); /*0x80046d*/
  else
    v9 = 0; /*0x800471*/
  v45 = v7->vtbl->GetWidth(v7, 0); /*0x800480*/
  v10 = (double)v45; /*0x800484*/
  if ( v45 < 0 ) /*0x800488*/
    v10 = v10 + flt_A2FC78; /*0x80048a*/
  v11 = (double)v9; /*0x800496*/
  if ( v9 < 0 ) /*0x80049a*/
    v11 = v11 + flt_A2FC78; /*0x80049c*/
  v46 = v10 / v11; /*0x8004af*/
  v12 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x8004b5*/
  v13 = (*a3)->members.RenderedTexture; /*0x8004ba*/
  if ( v13 ) /*0x8004bf*/
    v14 = v13->__vftable->super.GetHeight((NiTexture *)v13); /*0x8004c8*/
  else
    v14 = 0; /*0x8004cc*/
  v39 = v12->vtbl->GetHeight(v12, 0); /*0x8004db*/
  v15 = (double)v39; /*0x8004df*/
  if ( v39 < 0 ) /*0x8004e3*/
    v15 = v15 + flt_A2FC78; /*0x8004e5*/
  v16 = (double)v14; /*0x8004f1*/
  if ( v14 < 0 ) /*0x8004f5*/
    v16 = v16 + flt_A2FC78; /*0x8004f7*/
  v37 = v15 / v16; /*0x800506*/
  v17 = 1.0; /*0x80050a*/
  if ( unk_B42E96 ) /*0x8004fd*/
  {
    v46 = 1.0; /*0x80050e*/
    v37 = 1.0; /*0x800512*/
  }
  v18 = *a3; /*0x800518*/
  v41 = 0.0; /*0x80051b*/
  v44 = 0.0; /*0x80051f*/
  v42 = 1.0; /*0x800523*/
  v43 = 1.0; /*0x800527*/
  v19 = v18->members.RenderedTexture; /*0x80052b*/
  if ( v19 ) /*0x800530*/
  {
    v20 = v19->__vftable->super.GetWidth((NiTexture *)v19); /*0x800539*/
    v17 = 1.0; /*0x80053b*/
  }
  else
  {
    v20 = 0; /*0x80053f*/
  }
  v21 = (double)v20; /*0x800547*/
  if ( v20 < 0 ) /*0x80054b*/
    v21 = v21 + flt_A2FC78; /*0x80054d*/
  v22 = (*a3)->members.RenderedTexture; /*0x80055c*/
  v38 = dbl_A2FAA0 / v21; /*0x800561*/
  if ( v22 ) /*0x800565*/
  {
    v23 = v22->__vftable->super.GetHeight((NiTexture *)v22); /*0x80056e*/
    v17 = 1.0; /*0x800570*/
  }
  else
  {
    v23 = 0; /*0x800574*/
  }
  v24 = (double)v23; /*0x80057c*/
  if ( v23 < 0 ) /*0x800580*/
    v24 = v24 + flt_A2FC78; /*0x800582*/
  v25 = dbl_A2FAA0 / v24; /*0x80058d*/
  *((_DWORD *)this + 0x26) = 0; /*0x800593*/
  v40 = v25; /*0x80059d*/
  v26 = v46; /*0x8005a1*/
  *((float *)this + 0x29) = v46; /*0x8005a5*/
  *((float *)this + 0x2A) = v37; /*0x8005af*/
  v47 = v38 + 0.0; /*0x8005bf*/
  *((float *)this + 0x2B) = v47; /*0x8005c7*/
  v27 = v47; /*0x8005d3*/
  v48 = v40 + 0.0; /*0x8005d5*/
  *((float *)this + 0x2C) = v48; /*0x8005dd*/
  *((float *)this + 0x30) = v48; /*0x8005e3*/
  *((float *)this + 0x2D) = v26; /*0x8005eb*/
  *((float *)this + 0x2E) = v37; /*0x8005f3*/
  *((float *)this + 0x2F) = v27; /*0x8005fb*/
  if ( a5 ) /*0x800601*/
  {
    v42 = v17; /*0x800607*/
  }
  else
  {
    v17 = v37; /*0x80060f*/
    v42 = v26; /*0x800611*/
  }
  v28 = *a3; /*0x800615*/
  v43 = v17; /*0x800618*/
  sub_802890(this, v28); /*0x80061f*/
  InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)unk_B474AC); /*0x80062a*/
  v30 = *((NiRenderedTexture **)this + 0x28); /*0x80062f*/
  v31 = InterlockedDecrement; /*0x800635*/
  v32 = InnerTexture; /*0x80063b*/
  if ( v30 != InnerTexture ) /*0x80063f*/
  {
    if ( v30 ) /*0x800643*/
    {
      if ( !v31((volatile LONG *)&v30->member) ) /*0x800649*/
        v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1); /*0x80065b*/
    }
    *((_DWORD *)this + 0x28) = v32; /*0x80065f*/
    if ( v32 ) /*0x800665*/
      InterlockedIncrement((volatile LONG *)&v32->member); /*0x80066b*/
  }
  if ( *a4 ) /*0x800675*/
  {
    v33 = BSRenderedTexture::UseTextureToRender(*a4); /*0x80067b*/
    NiRenderer_BeginScene(kClear_BACKBUFFER, v33); /*0x800683*/
  }
  else
  {
    NiRenderer_BeginScene1(kClear_BACKBUFFER, 0); /*0x80068e*/
  }
  v34 = renderer; /*0x800693*/
  if ( (renderer->member.super.SceneState1 == 1 || v34->member.super.SceneState2 == 1) && v34->member.super.IsReady == 1 ) /*0x8006b7*/
    v34->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v34, (NiViewport *)&v41); /*0x8006c6*/
  sub_709C60(a2); /*0x8006d3*/
  if ( *a4 ) /*0x8006da*/
    NiRenderer_EndScene(); /*0x8006de*/
  v35 = *((_DWORD *)this + 0x28); /*0x8006e3*/
  if ( v35 ) /*0x8006eb*/
  {
    if ( !v31((volatile LONG *)(v35 + 4)) ) /*0x8006f1*/
      (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x800703*/
    *((_DWORD *)this + 0x28) = 0; /*0x800705*/
  }
  BSTextureManager__ReturnRenderedTexture( /*0x800718*/
    *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
    (BSRenderedTexture *)unk_B474AC);
  v36 = unk_B474AC; /*0x80071d*/
  if ( unk_B474AC ) /*0x80071d*/
  {
    if ( !v31((volatile LONG *)(v36 + 4)) ) /*0x80072b*/
    {
      if ( v36 ) /*0x800733*/
        (**(void (__thiscall ***)(UInt32, int))v36)(v36, 1); /*0x80073d*/
    }
    unk_B474AC = 0; /*0x80073f*/
  }
}
