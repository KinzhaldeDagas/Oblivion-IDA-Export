// MoonSugarEffect decode: texture-manager render-target prewarm/release. Allocates/retrieves common HDR/image-space/default surfaces then returns them to the manager cache with sub_7C1EE0.
void __userpurge sub_7C2450(BSTextureManager *a1@<ecx>, int ebp0@<ebp>, int a3)
{
  BSRenderedTexture *RenderedTexture; // eax
  BSRenderedTexture *v5; // eax
  BSRenderedTexture *v6; // eax
  BSRenderedTexture *v7; // eax
  BSRenderedTexture *DefaultRenderTarget; // eax
  BSRenderedTexture *v9; // eax
  BSRenderedTexture *v10; // eax
  bool v11; // zf
  NiDX9Renderer *v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  NiDX9Renderer *v17; // edi
  int v18; // eax
  double v19; // st7
  int v20; // ebp
  int v21; // eax
  double v22; // st7
  int v23; // eax
  BSRenderedTexture *v24; // eax
  NiDX9Renderer *v25; // ecx
  NiDX9RendererVtbl *vftable; // edx
  NiDX9Renderer *v27; // edi
  int v28; // eax
  double v29; // st7
  int v30; // ebp
  int v31; // eax
  double v32; // st7
  int v33; // eax
  int i; // edi
  NiDX9Renderer *v35; // [esp-14h] [ebp-5Ch]
  NiDX9Renderer *v36; // [esp-14h] [ebp-5Ch]
  NiDX9Renderer *v37; // [esp-14h] [ebp-5Ch]
  NiDX9Renderer *v38; // [esp-14h] [ebp-5Ch]
  NiDX9Renderer *v39; // [esp-4h] [ebp-4Ch]
  NiDX9Renderer *v40; // [esp-4h] [ebp-4Ch]
  int v41; // [esp+0h] [ebp-48h]
  int v42; // [esp+10h] [ebp-38h]
  BSRenderedTexture *a2; // [esp+14h] [ebp-34h]
  BSRenderedTexture *v44; // [esp+18h] [ebp-30h]
  BSRenderedTexture *v45; // [esp+1Ch] [ebp-2Ch]
  BSRenderedTexture *v46; // [esp+20h] [ebp-28h]
  BSRenderedTexture *v47; // [esp+24h] [ebp-24h]
  BSRenderedTexture *v48; // [esp+28h] [ebp-20h]
  BSRenderedTexture *v49; // [esp+2Ch] [ebp-1Ch]
  BSRenderedTexture *v50; // [esp+30h] [ebp-18h]
  BSRenderedTexture *v51; // [esp+34h] [ebp-14h]
  BSRenderedTexture *v52; // [esp+38h] [ebp-10h]
  BSRenderedTexture *v53; // [esp+3Ch] [ebp-Ch]
  BSRenderedTexture *v54; // [esp+44h] [ebp-4h]

  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x7c2457*/
  {
    RenderedTexture = BSTextureManager_GetOrCreateRenderedTexture(a1, unk_B43104, 1, 1, 0x24u, 0x71, 0); /*0x7c2475*/
    v35 = unk_B43104; /*0x7c2489*/
    a2 = RenderedTexture; /*0x7c248c*/
    v5 = BSTextureManager_GetOrCreateRenderedTexture(a1, v35, 1, 1, 0x24u, 0x71, 0); /*0x7c2490*/
    v36 = unk_B43104; /*0x7c24a4*/
    v44 = v5; /*0x7c24a7*/
    v45 = BSTextureManager_GetOrCreateRenderedTexture(a1, v36, 1, 1, 0x24u, 0x71, 0); /*0x7c24b7*/
    v6 = BSTextureManager_GetOrCreateRenderedTexture(a1, unk_B43104, 4, 4, 0x26u, 0x71, 0); /*0x7c24c5*/
    v37 = unk_B43104; /*0x7c24d9*/
    v46 = v6; /*0x7c24dc*/
    v7 = BSTextureManager_GetOrCreateRenderedTexture(a1, v37, 0x10, 0x10, 0x26u, 0x71, 0); /*0x7c24e0*/
    v38 = unk_B43104; /*0x7c24f4*/
    v47 = v7; /*0x7c24f7*/
    v48 = BSTextureManager_GetOrCreateRenderedTexture(a1, v38, 0x40, 0x40, 0x26u, 0x71, 0); /*0x7c2500*/
    DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(a1, unk_B43104, 2); /*0x7c250e*/
    v39 = unk_B43104; /*0x7c251a*/
    v49 = DefaultRenderTarget; /*0x7c251d*/
    v9 = BSTextureManager_GetDefaultRenderTarget(a1, v39, 0); /*0x7c2521*/
    v40 = unk_B43104; /*0x7c252e*/
    v50 = v9; /*0x7c2531*/
    v10 = BSTextureManager_GetDefaultRenderTarget(a1, v40, 4); /*0x7c2535*/
    v11 = OB_RendererGlobalState_010201A0.bFP16ARGBFiltering == 0; /*0x7c253a*/
    v51 = v10; /*0x7c2540*/
    if ( !v11 && OB_RendererGlobalState_010201A0.bMinAnisotropicFilterSupport ) /*0x7c2546*/
    {
      v52 = BSTextureManager_GetDefaultRenderTarget(a1, unk_B43104, 1); /*0x7c255d*/
      goto LABEL_7; /*0x7c2561*/
    }
  }
  else
  {
    a2 = 0; /*0x7c2563*/
    v44 = 0; /*0x7c2567*/
    v45 = 0; /*0x7c256b*/
    v46 = 0; /*0x7c256f*/
    v47 = 0; /*0x7c2573*/
    v48 = 0; /*0x7c2577*/
    v49 = 0; /*0x7c257b*/
    v50 = 0; /*0x7c257f*/
    v51 = 0; /*0x7c2583*/
  }
  v52 = 0; /*0x7c2587*/
LABEL_7:
  v41 = ebp0; /*0x7c258b*/
  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x7c258b*/
  {
    v12 = unk_B43104; /*0x7c259f*/
    v13 = ((int (__cdecl *)(int))unk_B43104->__vftable->super.GetDefaultRTGroup)(ebp0); /*0x7c25a1*/
    v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 0x4C))(v13, 0); /*0x7c25af*/
    v15 = (int)v12->__vftable->super.GetDefaultRTGroup((NiRenderer *)v12); /*0x7c25b6*/
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 0x50))(v15, 0); /*0x7c25c0*/
    v53 = BSTextureManager_GetOrCreateRenderedTexture(a1, v12, v14, v16, 0x26u, 0, 0); /*0x7c25d0*/
  }
  else
  {
    v53 = 0; /*0x7c25d6*/
  }
  v17 = unk_B43104; /*0x7c25e5*/
  v18 = ((int (__stdcall *)(int))unk_B43104->__vftable->super.GetDefaultRTGroup)(v41); /*0x7c25e7*/
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 0x4C))(v18, 0); /*0x7c25f5*/
  v19 = (double)(int)a2; /*0x7c25f9*/
  if ( (int)a2 < 0 ) /*0x7c25fd*/
    v19 = v19 + flt_A2FC78; /*0x7c25ff*/
  v20 = Double_To_SInt32(v19); /*0x7c260c*/
  v21 = (int)v17->__vftable->super.GetDefaultRTGroup((NiRenderer *)v17); /*0x7c2613*/
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 0x50))(v21, 0); /*0x7c2621*/
  v22 = (double)(int)a2; /*0x7c2625*/
  if ( (int)a2 < 0 ) /*0x7c2629*/
    v22 = v22 + flt_A2FC78; /*0x7c262b*/
  v23 = Double_To_SInt32(v22); /*0x7c2631*/
  v24 = BSTextureManager_GetOrCreateRenderedTexture( /*0x7c2650*/
          a1,
          v17,
          v20,
          v23,
          4 * (OB_RendererGlobalState_010201A0.pad_00D[0x98] != 0) + 0x22,
          0,
          0);
  v25 = unk_B43104; /*0x7c2655*/
  vftable = unk_B43104->__vftable; /*0x7c265b*/
  v54 = v24; /*0x7c265d*/
  v27 = v25; /*0x7c2664*/
  v28 = ((int (*)(void))vftable->super.GetDefaultRTGroup)(); /*0x7c2666*/
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v28 + 0x4C))(v28, 0); /*0x7c2674*/
  v29 = (double)(int)a2; /*0x7c2678*/
  if ( (int)a2 < 0 ) /*0x7c267c*/
    v29 = v29 + flt_A2FC78; /*0x7c267e*/
  v30 = Double_To_SInt32(v29); /*0x7c268b*/
  v31 = (int)v27->__vftable->super.GetDefaultRTGroup((NiRenderer *)v27); /*0x7c2692*/
  v42 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v31 + 0x50))(v31, 0); /*0x7c26a0*/
  v32 = (double)v42; /*0x7c26a4*/
  if ( v42 < 0 ) /*0x7c26a8*/
    v32 = v32 + flt_A2FC78; /*0x7c26aa*/
  v33 = Double_To_SInt32(v32); /*0x7c26b0*/
  v54 = BSTextureManager_GetOrCreateRenderedTexture( /*0x7c26d4*/
          a1,
          v27,
          v30,
          v33,
          4 * (OB_RendererGlobalState_010201A0.pad_00D[0x98] != 0) + 0x22,
          0,
          0);
  for ( i = 0; i < 0xD; ++i ) /*0x7c26d8*/
  {
    if ( *(&a2 + i) ) /*0x7c26e0*/
      BSTextureManager__ReturnRenderedTexture(a1, *(&a2 + i)); /*0x7c26eb*/
  }
}
