void __userpurge sub_7C2450(BSTextureManager *a1@<ecx>, int ebp0@<ebp>, int a3)
{
  BSRenderedTexture *RenderedSurface; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
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
  int v24; // eax
  NiDX9Renderer *v25; // ecx
  NiDX9RendererVtbl *vftable; // edx
  NiTPointerList_Node_void *v27; // edi
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
  int v44; // [esp+18h] [ebp-30h]
  int v45; // [esp+1Ch] [ebp-2Ch]
  int v46; // [esp+20h] [ebp-28h]
  int v47; // [esp+24h] [ebp-24h]
  int v48; // [esp+28h] [ebp-20h]
  BSRenderedTexture *v49; // [esp+2Ch] [ebp-1Ch]
  BSRenderedTexture *v50; // [esp+30h] [ebp-18h]
  BSRenderedTexture *v51; // [esp+34h] [ebp-14h]
  BSRenderedTexture *v52; // [esp+38h] [ebp-10h]
  int v53; // [esp+3Ch] [ebp-Ch]
  int v54; // [esp+44h] [ebp-4h]

  if ( UseHDR )
  {
    RenderedSurface = (BSRenderedTexture *)NiRenderer_GetRenderedSurface(
                                             a1,
                                             (NiTPointerList_Node_void *)dword_B43104,
                                             1,
                                             1,
                                             0x24u,
                                             0x71,
                                             0);
    v35 = dword_B43104;
    a2 = RenderedSurface;
    v5 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)v35, 1, 1, 0x24u, 0x71, 0);
    v36 = dword_B43104;
    v44 = v5;
    v45 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)v36, 1, 1, 0x24u, 0x71, 0);
    v6 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)dword_B43104, 4, 4, 0x26u, 0x71, 0);
    v37 = dword_B43104;
    v46 = v6;
    v7 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)v37, 0x10, 0x10, 0x26u, 0x71, 0);
    v38 = dword_B43104;
    v47 = v7;
    v48 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)v38, 0x40, 0x40, 0x26u, 0x71, 0);
    DefaultRenderTarget = BSTextureManager_GetDefaultRenderTarget(a1, dword_B43104, 2);
    v39 = dword_B43104;
    v49 = DefaultRenderTarget;
    v9 = BSTextureManager_GetDefaultRenderTarget(a1, v39, 0);
    v40 = dword_B43104;
    v50 = v9;
    v10 = BSTextureManager_GetDefaultRenderTarget(a1, v40, 4);
    v11 = byte_B43071 == 0;
    v51 = v10;
    if ( !v11 && byte_B43072 )
    {
      v52 = BSTextureManager_GetDefaultRenderTarget(a1, dword_B43104, 1);
      goto LABEL_7;
    }
  }
  else
  {
    a2 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
  }
  v52 = 0;
LABEL_7:
  v41 = ebp0;
  if ( ImageSpaceEffectEnabled )
  {
    v12 = dword_B43104;
    v13 = ((int (__cdecl *)(int))dword_B43104->__vftable->super.GetDefaultRTGroup)(ebp0);
    v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 0x4C))(v13, 0);
    v15 = (int)v12->__vftable->super.GetDefaultRTGroup((NiRenderer *)v12);
    v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 0x50))(v15, 0);
    v53 = NiRenderer_GetRenderedSurface(a1, (NiTPointerList_Node_void *)v12, v14, v16, 0x26u, 0, 0);
  }
  else
  {
    v53 = 0;
  }
  v17 = dword_B43104;
  v18 = ((int (__stdcall *)(int))dword_B43104->__vftable->super.GetDefaultRTGroup)(v41);
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 0x4C))(v18, 0);
  v19 = (double)(int)a2;
  if ( (int)a2 < 0 )
    v19 = v19 + flt_A2FC78;
  v20 = Double_To_SInt32(v19);
  v21 = (int)v17->__vftable->super.GetDefaultRTGroup((NiRenderer *)v17);
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 0x50))(v21, 0);
  v22 = (double)(int)a2;
  if ( (int)a2 < 0 )
    v22 = v22 + flt_A2FC78;
  v23 = Double_To_SInt32(v22);
  v24 = NiRenderer_GetRenderedSurface(
          a1,
          (NiTPointerList_Node_void *)v17,
          v20,
          v23,
          4 * (ImageSpaceEffectEnabled != 0) + 0x22,
          0,
          0);
  v25 = dword_B43104;
  vftable = dword_B43104->__vftable;
  v54 = v24;
  v27 = (NiTPointerList_Node_void *)v25;
  v28 = ((int (*)(void))vftable->super.GetDefaultRTGroup)();
  a2 = (BSRenderedTexture *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v28 + 0x4C))(v28, 0);
  v29 = (double)(int)a2;
  if ( (int)a2 < 0 )
    v29 = v29 + flt_A2FC78;
  v30 = Double_To_SInt32(v29);
  v31 = ((int (__thiscall *)(NiTPointerList_Node_void *))v27->next[0xA].prev)(v27);
  v42 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v31 + 0x50))(v31, 0);
  v32 = (double)v42;
  if ( v42 < 0 )
    v32 = v32 + flt_A2FC78;
  v33 = Double_To_SInt32(v32);
  v54 = NiRenderer_GetRenderedSurface(a1, v27, v30, v33, 4 * (ImageSpaceEffectEnabled != 0) + 0x22, 0, 0);
  for ( i = 0; i < 0xD; ++i )
  {
    if ( *(&a2 + i) )
      sub_7C1EE0(a1, *(&a2 + i));
  }
}
