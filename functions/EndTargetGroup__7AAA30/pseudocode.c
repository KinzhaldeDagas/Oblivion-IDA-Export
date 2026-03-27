bool __thiscall EndTargetGroup(NiDX9Renderer *this, NiCamera *a2, NiRenderTargetGroup *a3)
{
  NiAccumulator *accumulator; // eax
  NiDX9Renderer *v5; // edi
  NiAccumulator *v6; // eax
  NiAccumulator *v7; // esi
  int v8; // eax
  BSRenderedTexture *v9; // eax
  BSRenderedTexture *v10; // ebp
  NiRenderTargetGroup *v11; // ebx
  NiRenderTargetGroup *v12; // ebp
  void (__thiscall **p_AttachDepthStencilBuffer)(NiRenderTargetGroup *, NiDepthStencilBuffer *); // esi
  NiDepthStencilBuffer *v14; // eax
  NiDX9RendererVtbl *vftable; // eax
  void (__thiscall *SetClearColor4)(NiRenderer *, NiRenderer *, float *); // edx
  NiRenderTargetGroup *v17; // eax
  int v18; // esi
  IDirect3DSurface9 **v19; // eax
  NiRenderTargetGroup *v20; // eax
  float *v21; // eax
  float *v22; // ecx
  NiFrustum *v23; // edx
  double v24; // st7
  NiPoint3 *v25; // eax
  bool v26; // zf
  _DWORD *v27; // eax
  NiNode *v28; // ebp
  void **vtlb; // esi
  bool v30; // bl
  int *v31; // edi
  NiDX9Renderer *v32; // eax
  int v33; // esi
  NiRenderTargetGroup *v34; // ebp
  void (__thiscall **v35)(NiRenderTargetGroup *, int); // esi
  int v36; // eax
  NiDX9RendererVtbl *v37; // eax
  void (__thiscall *v38)(NiRenderer *, NiRenderer *, float *); // edx
  NiRenderTargetGroup *v39; // eax
  int v40; // esi
  int v41; // eax
  NiRenderTargetGroup *v42; // eax
  NiAccumulator *v43; // eax
  float *v44; // ecx
  NiFrustum *v45; // edx
  double v46; // st7
  NiPoint3 *v47; // eax
  unsigned int v48; // ebx
  _DWORD *v49; // eax
  NiNode *v50; // ebp
  void **v51; // esi
  UInt32 m_uiRefCount; // eax
  bool v53; // bl
  int v54; // edi
  NiDX9Renderer *v55; // eax
  NiRenderedTexture *InnerTexture; // esi
  ShaderDefinition *ShaderDefinition; // eax
  NiRenderTargetGroup *v58; // eax
  NiAccumulator *v59; // ebx
  char v61; // [esp+44h] [ebp-62h]
  char v62; // [esp+45h] [ebp-61h]
  int v64; // [esp+4Ah] [ebp-5Ch]
  _DWORD *v65; // [esp+4Eh] [ebp-58h]
  _DWORD *v66; // [esp+4Eh] [ebp-58h]
  NiDX9Renderer *v67; // [esp+52h] [ebp-54h]
  int v68; // [esp+56h] [ebp-50h]
  volatile LONG *v69; // [esp+5Ah] [ebp-4Ch]
  NiAccumulator *v70; // [esp+5Eh] [ebp-48h]
  float v71; // [esp+62h] [ebp-44h] BYREF
  float v72; // [esp+66h] [ebp-40h]
  float v73; // [esp+6Ah] [ebp-3Ch]
  float y; // [esp+6Eh] [ebp-38h] BYREF
  float v75; // [esp+72h] [ebp-34h]
  float v76; // [esp+76h] [ebp-30h]
  float x; // [esp+7Ah] [ebp-2Ch] BYREF
  float v78; // [esp+7Eh] [ebp-28h]
  float v79; // [esp+82h] [ebp-24h]
  float v80; // [esp+86h] [ebp-20h]
  float v81[4]; // [esp+8Ah] [ebp-1Ch] BYREF
  unsigned int v82; // [esp+A2h] [ebp-4h]
  NiCamera *v83; // [esp+AAh] [ebp+4h]
  char v84; // [esp+AEh] [ebp+8h]
  bool v85; // [esp+AEh] [ebp+8h]

  accumulator = this->member.super.accumulator;
  v81[0] = 0.0;
  v81[1] = 0.0;
  this->member.super.accumulator = (NiAccumulator *)a2;
  v5 = g_Renderer;
  v81[2] = 0.0;
  v81[3] = 0.0;
  v70 = accumulator;
  v6 = v5->member.super.accumulator;
  v62 = 0;
  v61 = 0;
  v67 = v5;
  v69 = (volatile LONG *)v6;
  if ( v6 )
    InterlockedIncrement((volatile LONG *)v6 + 1);
  v7 = v5->member.super.accumulator;
  v82 = 0;
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) )
      (**(void (__thiscall ***)(NiAccumulator *, int))v7)(v7, 1);
    v5->member.super.accumulator = 0;
  }
  v8 = FormHeapAlloc(0x10u);
  LOBYTE(v82) = 1;
  if ( v8 )
    v64 = sub_7E2370(v8, 0, 0, 1, 0, 0);
  else
    v64 = 0;
  LOBYTE(v82) = 0;
  v9 = (BSRenderedTexture *)sub_800B30(0);
  v10 = v9;
  v83 = (NiCamera *)v9;
  if ( v9 && *((_DWORD *)this + 0x889) )
  {
    v11 = a3;
    v12 = BSRenderedTexture::UseTextureToRender(v9);
    p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, NiDepthStencilBuffer *))&v12->vtbl->AttachDepthStencilBuffer;
    v14 = a3->vtbl->GetDepthStencilBuffer(a3);
    (*p_AttachDepthStencilBuffer)(v12, v14);
    ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.GetClearColor)(v5, v81);
    vftable = v5->__vftable;
    x = flt_A3D65C;
    SetClearColor4 = vftable->super.SetClearColor4;
    v78 = x;
    v79 = 0.0;
    v80 = 0.0;
    ((void (__thiscall *)(NiDX9Renderer *, float *))SetClearColor4)(v5, &x);
    v62 = 1;
    NiRenderer_EndScene();
    if ( iMultisample >= 2 )
    {
      v17 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
      v18 = (int)v17->vtbl->GetDepthStencilBufferRendererData(v17);
      v19 = (IDirect3DSurface9 **)a3->vtbl->GetDepthStencilBufferRendererData(a3);
      g_Renderer->member.device->lpVtbl->StretchRect(
        g_Renderer->member.device,
        *(IDirect3DSurface9 **)(v18 + 0xC),
        0,
        v19[3],
        0,
        D3DTEXF_NONE);
    }
    v20 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v83);
    NiRenderer_BeginScene(kClear_NONE, v20);
    v21 = (float *)this->member.super.accumulator;
    v22 = v21 + 0x44;
    v71 = v21[0x1B];
    v23 = (NiFrustum *)(v21 + 0x3B);
    v72 = v21[0x1E];
    v24 = v21[0x21];
    v25 = (NiPoint3 *)(v21 + 0x22);
    v26 = v5->member.super.SceneState1 == 1;
    v73 = v24;
    y = v25[0xFFFFFFFD].y;
    v75 = v25[0xFFFFFFFE].y;
    v76 = v25[0xFFFFFFFF].y;
    x = v25[0xFFFFFFFD].x;
    v78 = v25[0xFFFFFFFE].x;
    v79 = v25[0xFFFFFFFF].x;
    if ( (v26 || v5->member.super.SceneState2 == 1) && v5->member.super.IsReady == 1 )
      v5->__vftable->super.SetupCamera(
        (NiRenderer *)v5,
        v25,
        (NiPoint3 *)&x,
        (NiPoint3 *)&y,
        (NiPoint3 *)&v71,
        v23,
        v22);
    v27 = *((_DWORD **)this + 0x886);
    if ( v27 )
    {
      while ( 1 )
      {
        v28 = (NiNode *)v27[2];
        vtlb = v28->members.effects.vtlb;
        v65 = (_DWORD *)*v27;
        if ( !vtlb )
          goto LABEL_29;
        v30 = (NiNode_GetNiPropertyByID(v28, 4)[1].members.super.m_uiRefCount & 2) != 0;
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) >= 1
          && (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) <= 5 )
        {
          break;
        }
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) == 0x1B )
        {
          v31 = (int *)(v30 + 0x159);
          sub_7FD260(v30 + 0x159);
          goto LABEL_27;
        }
LABEL_28:
        v11 = a3;
LABEL_29:
        if ( !v65 )
          goto LABEL_30;
        v27 = v65;
      }
      v31 = (int *)(v30 + 0x163);
      sub_7D1320(v31);
LABEL_27:
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xC] + 0x48))(vtlb[0xC]);
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xB] + 0x48))(vtlb[0xB]);
      *(_WORD *)(v64 + 4) = (_WORD)v31;
      dword_B42EB8 = v64;
      v32 = g_Renderer;
      dword_B42E90 = (int)v31;
      ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v28->vtbl->AddObject)(v28, v32);
      v5 = v67;
      goto LABEL_28;
    }
LABEL_30:
    v10 = (BSRenderedTexture *)v83;
    v61 = 1;
  }
  else
  {
    v11 = a3;
  }
  sub_7A9C30((int)this + 0x2214);
  *((_DWORD *)this + 0x888) = *((_DWORD *)this + 0x886);
  *((_DWORD *)this + 0x886) = 0;
  *((_DWORD *)this + 0x887) = 0;
  *((_DWORD *)this + 0x889) = 0;
  v33 = *((_DWORD *)this + 0x884);
  v68 = v33;
  if ( v33 )
  {
    if ( !v61 )
    {
      v84 = 0;
      if ( !v10 )
      {
        v83 = (NiCamera *)sub_800B30(1);
        v84 = 1;
        v10 = (BSRenderedTexture *)v83;
      }
      v34 = BSRenderedTexture::UseTextureToRender(v10);
      v35 = (void (__thiscall **)(NiRenderTargetGroup *, int))&v34->vtbl->AttachDepthStencilBuffer;
      v36 = (int)v11->vtbl->GetDepthStencilBuffer(v11);
      (*v35)(v34, v36);
      ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.GetClearColor)(v5, v81);
      v37 = v5->__vftable;
      x = flt_A3D65C;
      v38 = v37->super.SetClearColor4;
      v78 = x;
      v79 = 0.0;
      v80 = 0.0;
      ((void (__thiscall *)(NiDX9Renderer *, float *))v38)(v5, &x);
      v62 = 1;
      NiRenderer_EndScene();
      if ( iMultisample >= 2 )
      {
        v39 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
        v40 = (int)v39->vtbl->GetDepthStencilBufferRendererData(v39);
        v41 = (int)v11->vtbl->GetDepthStencilBufferRendererData(v11);
        g_Renderer->member.device->lpVtbl->StretchRect(
          g_Renderer->member.device,
          *(IDirect3DSurface9 **)(v40 + 0xC),
          0,
          *(IDirect3DSurface9 **)(v41 + 0xC),
          0,
          D3DTEXF_NONE);
      }
      v42 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v83);
      NiRenderer_BeginScene((ClearFlags)(v84 != 0), v42);
      v43 = this->member.super.accumulator;
      v44 = (float *)((char *)v43 + 0x110);
      x = *((float *)v43 + 0x1B);
      v45 = (NiFrustum *)((char *)v43 + 0xEC);
      v78 = *((float *)v43 + 0x1E);
      v46 = *((float *)v43 + 0x21);
      v47 = (NiPoint3 *)((char *)v43 + 0x88);
      v26 = v5->member.super.SceneState1 == 1;
      v79 = v46;
      y = v47[0xFFFFFFFD].y;
      v75 = v47[0xFFFFFFFE].y;
      v76 = v47[0xFFFFFFFF].y;
      v71 = v47[0xFFFFFFFD].x;
      v72 = v47[0xFFFFFFFE].x;
      v73 = v47[0xFFFFFFFF].x;
      if ( (v26 || v5->member.super.SceneState2 == 1) && v5->member.super.IsReady == 1 )
        v5->__vftable->super.SetupCamera(
          (NiRenderer *)v5,
          v47,
          (NiPoint3 *)&v71,
          (NiPoint3 *)&y,
          (NiPoint3 *)&x,
          v45,
          v44);
      v10 = (BSRenderedTexture *)v83;
    }
    v48 = v64;
    *(_BYTE *)(v64 + 8) = 0;
    v49 = *((_DWORD **)this + 0x881);
    if ( v49 )
    {
      while ( 1 )
      {
        v50 = (NiNode *)v49[2];
        v51 = v50->members.effects.vtlb;
        v66 = (_DWORD *)*v49;
        if ( !v51 )
          goto LABEL_58;
        m_uiRefCount = NiNode_GetNiPropertyByID(v50, 4)[1].members.super.m_uiRefCount;
        v53 = (m_uiRefCount & 2) != 0;
        v85 = (m_uiRefCount & 0x10000) != 0;
        if ( (*((int (__thiscall **)(void **))*v51 + 7))(v51) < 1
          || (*((int (__thiscall **)(void **))*v51 + 7))(v51) > 5 )
        {
          if ( (*((int (__thiscall **)(void **))*v51 + 7))(v51) != 0x1B )
            goto LABEL_58;
          if ( v85 )
            v54 = 0x158;
          else
            v54 = v53 + 0x156;
          sub_7FD260(v54);
        }
        else if ( v85 )
        {
          v54 = 0x162;
          sub_7D1320((int *)0x162);
        }
        else
        {
          v54 = v53 + 0x160;
          sub_7D1320((int *)v54);
        }
        (*(void (__thiscall **)(void *))(*(_DWORD *)v51[0xC] + 0x48))(v51[0xC]);
        (*(void (__thiscall **)(void *))(*(_DWORD *)v51[0xB] + 0x48))(v51[0xB]);
        *(_WORD *)(v64 + 4) = v54;
        dword_B42EB8 = v64;
        v55 = g_Renderer;
        dword_B42E90 = v54;
        ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v50->vtbl->AddObject)(v50, v55);
        v5 = v67;
LABEL_58:
        if ( !v66 )
        {
          v10 = (BSRenderedTexture *)v83;
          v48 = v64;
          break;
        }
        v49 = v66;
      }
    }
    sub_7A9C30((int)this + 0x2200);
    *((_DWORD *)this + 0x883) = *((_DWORD *)this + 0x881);
    *((_DWORD *)this + 0x881) = 0;
    *((_DWORD *)this + 0x882) = 0;
    *((_DWORD *)this + 0x884) = 0;
    if ( byte_B42CDC )
    {
      InnerTexture = BSRenderedTexture::GetInnerTexture(v10);
      ShaderDefinition = GetShaderDefinition(9u);
      sub_7FA470((BSImageSpaceShader *)ShaderDefinition->shader, InnerTexture);
    }
    v33 = v68;
  }
  else
  {
    v48 = v64;
  }
  if ( v61 || v33 )
    NiRenderer_EndScene();
  if ( v10 )
  {
    v58 = BSRenderedTexture::UseTextureToRender(v10);
    v58->vtbl->AttachDepthStencilBuffer(v58, 0);
  }
  if ( v48 )
  {
    sub_7E2400(v48);
    FormHeapFree(v48);
  }
  v59 = v5->member.super.accumulator;
  if ( v59 != (NiAccumulator *)v69 )
  {
    if ( v59 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v59 + 1) )
        (**(void (__thiscall ***)(NiAccumulator *, int))v59)(v59, 1);
    }
    v5->member.super.accumulator = (NiAccumulator *)v69;
    if ( v69 )
      InterlockedIncrement(v69 + 1);
  }
  if ( v62 )
    ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.SetClearColor4)(v5, v81);
  this->member.super.accumulator = v70;
  v82 = 0xFFFFFFFF;
  if ( v69 )
  {
    if ( !InterlockedDecrement(v69 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v69)(v69, 1);
  }
  return v33 != 0;
}
