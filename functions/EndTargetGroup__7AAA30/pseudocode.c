// MoonSugarEffect build 24: EndTargetGroup xref to Lighting30 selector. Calls 0x007FD260 for 0x159+ and 0x156+ special routes after setting up render targets; used only to label selector routes, not as plugin-owned rendering.
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

  accumulator = this->member.super.accumulator; /*0x7aaa5f*/
  v81[0] = 0.0; /*0x7aaa66*/
  v81[1] = 0.0; /*0x7aaa6a*/
  this->member.super.accumulator = (NiAccumulator *)a2; /*0x7aaa6e*/
  v5 = renderer; /*0x7aaa71*/
  v81[2] = 0.0; /*0x7aaa77*/
  v81[3] = 0.0; /*0x7aaa7b*/
  v70 = accumulator; /*0x7aaa7f*/
  v6 = v5->member.super.accumulator; /*0x7aaa83*/
  v62 = 0; /*0x7aaa8a*/
  v61 = 0; /*0x7aaa8f*/
  v67 = v5; /*0x7aaa94*/
  v69 = (volatile LONG *)v6; /*0x7aaa98*/
  if ( v6 ) /*0x7aaa9c*/
    InterlockedIncrement((volatile LONG *)v6 + 1); /*0x7aaaa2*/
  v7 = v5->member.super.accumulator; /*0x7aaaa8*/
  v82 = 0; /*0x7aaaad*/
  if ( v7 ) /*0x7aaab1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7aaab7*/
      (**(void (__thiscall ***)(NiAccumulator *, int))v7)(v7, 1); /*0x7aaacd*/
    v5->member.super.accumulator = 0; /*0x7aaacf*/
  }
  v8 = FormHeapAlloc(0x10u); /*0x7aaad4*/
  LOBYTE(v82) = 1; /*0x7aaae2*/
  if ( v8 ) /*0x7aaae7*/
    v64 = RenderPass_Construct(v8, 0, 0, 1, 0, 0); /*0x7aaaf8*/
  else
    v64 = 0; /*0x7aaafe*/
  LOBYTE(v82) = 0; /*0x7aab03*/
  v9 = (BSRenderedTexture *)sub_800B30(0); /*0x7aab08*/
  v10 = v9; /*0x7aab0d*/
  v83 = (NiCamera *)v9; /*0x7aab14*/
  if ( v9 && *((_DWORD *)this + 0x889) ) /*0x7aab1e*/
  {
    v11 = a3; /*0x7aab32*/
    v12 = BSRenderedTexture::UseTextureToRender(v9); /*0x7aab39*/
    p_AttachDepthStencilBuffer = (void (__thiscall **)(NiRenderTargetGroup *, NiDepthStencilBuffer *))&v12->vtbl->AttachDepthStencilBuffer; /*0x7aab45*/
    v14 = a3->vtbl->GetDepthStencilBuffer(a3); /*0x7aab48*/
    (*p_AttachDepthStencilBuffer)(v12, v14); /*0x7aab4f*/
    ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.GetClearColor)(v5, v81); /*0x7aab5d*/
    vftable = v5->__vftable; /*0x7aab65*/
    x = kHeadBodyNormalMatchRadius; /*0x7aab67*/
    SetClearColor4 = vftable->super.SetClearColor4; /*0x7aab6b*/
    v78 = x; /*0x7aab6e*/
    v79 = 0.0; /*0x7aab79*/
    v80 = 0.0; /*0x7aab7f*/
    ((void (__thiscall *)(NiDX9Renderer *, float *))SetClearColor4)(v5, &x); /*0x7aab83*/
    v62 = 1; /*0x7aab85*/
    NiRenderer_EndScene(); /*0x7aab8a*/
    if ( MEMORY[0xB34FC0] >= 2 ) /*0x7aab96*/
    {
      v17 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7aaba3*/
      v18 = (int)v17->vtbl->GetDepthStencilBufferRendererData(v17); /*0x7aabb3*/
      v19 = (IDirect3DSurface9 **)a3->vtbl->GetDepthStencilBufferRendererData(a3); /*0x7aabbd*/
      renderer->member.device->lpVtbl->StretchRect( /*0x7aabe2*/
        renderer->member.device,
        *(IDirect3DSurface9 **)(v18 + 0xC),
        0,
        v19[3],
        0,
        D3DTEXF_NONE);
    }
    v20 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v83); /*0x7aabe8*/
    NiRenderer_BeginScene(kClear_NONE, v20); /*0x7aabf0*/
    v21 = (float *)this->member.super.accumulator; /*0x7aabf9*/
    v22 = v21 + 0x44; /*0x7aabff*/
    v71 = v21[0x1B]; /*0x7aac05*/
    v23 = (NiFrustum *)(v21 + 0x3B); /*0x7aac09*/
    v72 = v21[0x1E]; /*0x7aac17*/
    v24 = v21[0x21]; /*0x7aac1e*/
    v25 = (NiPoint3 *)(v21 + 0x22); /*0x7aac24*/
    v26 = v5->member.super.SceneState1 == 1; /*0x7aac29*/
    v73 = v24; /*0x7aac2f*/
    y = v25[0xFFFFFFFD].y; /*0x7aac36*/
    v75 = v25[0xFFFFFFFE].y; /*0x7aac3d*/
    v76 = v25[0xFFFFFFFF].y; /*0x7aac44*/
    x = v25[0xFFFFFFFD].x; /*0x7aac4b*/
    v78 = v25[0xFFFFFFFE].x; /*0x7aac52*/
    v79 = v25[0xFFFFFFFF].x; /*0x7aac59*/
    if ( (v26 || v5->member.super.SceneState2 == 1) && v5->member.super.IsReady == 1 ) /*0x7aac6e*/
      v5->__vftable->super.SetupCamera( /*0x7aac8c*/
        (NiRenderer *)v5,
        v25,
        (NiPoint3 *)&x,
        (NiPoint3 *)&y,
        (NiPoint3 *)&v71,
        v23,
        v22);
    v27 = *((_DWORD **)this + 0x886); /*0x7aac8e*/
    if ( v27 ) /*0x7aac96*/
    {
      while ( 1 ) /*0x7aaca4*/
      {
        v28 = (NiNode *)v27[2]; /*0x7aaca4*/
        vtlb = v28->members.effects.vtlb; /*0x7aaca7*/
        v65 = (_DWORD *)*v27; /*0x7aacb4*/
        if ( !vtlb ) /*0x7aacb8*/
          goto LABEL_29; /*0x7aacb8*/
        v30 = (NiNode_GetNiPropertyByID(v28, 4)[1].members.super.m_uiRefCount & 2) != 0; /*0x7aacd2*/
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) >= 1 /*0x7aace8*/
          && (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) <= 5 )
        {
          break; /*0x7aace8*/
        }
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) == 0x1B ) /*0x7aad0f*/
        {
          v31 = (int *)(v30 + 0x159); /*0x7aad20*/
          Lighting30Shader_SelectRenderPass(v30 + 0x159); /*0x7aad23*/
          goto LABEL_27; /*0x7aad23*/
        }
LABEL_28:
        v11 = a3; /*0x7aad69*/
LABEL_29:
        if ( !v65 ) /*0x7aad75*/
          goto LABEL_30; /*0x7aad75*/
        v27 = v65; /*0x7aaca0*/
      }
      v31 = (int *)(v30 + 0x163); /*0x7aacf9*/
      sub_7D1320(v31); /*0x7aacfc*/
LABEL_27:
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xC] + 0x48))(vtlb[0xC]); /*0x7aad28*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xB] + 0x48))(vtlb[0xB]); /*0x7aad3d*/
      *(_WORD *)(v64 + 4) = (_WORD)v31; /*0x7aad43*/
      MEMORY[0xB42EB8] = v64; /*0x7aad47*/
      v32 = renderer; /*0x7aad4c*/
      unk_B42E90 = (int)v31; /*0x7aad51*/
      ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v28->vtbl->AddObject)(v28, v32); /*0x7aad63*/
      v5 = v67; /*0x7aad65*/
      goto LABEL_28; /*0x7aad65*/
    }
LABEL_30:
    v10 = (BSRenderedTexture *)v83; /*0x7aad7b*/
    v61 = 1; /*0x7aad7f*/
  }
  else
  {
    v11 = a3; /*0x7aad86*/
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x2214); /*0x7aad99*/
  *((_DWORD *)this + 0x888) = *((_DWORD *)this + 0x886); /*0x7aada5*/
  *((_DWORD *)this + 0x886) = 0; /*0x7aadaa*/
  *((_DWORD *)this + 0x887) = 0; /*0x7aadad*/
  *((_DWORD *)this + 0x889) = 0; /*0x7aadb0*/
  v33 = *((_DWORD *)this + 0x884); /*0x7aadb3*/
  v68 = v33; /*0x7aadbb*/
  if ( v33 ) /*0x7aadbf*/
  {
    if ( !v61 ) /*0x7aadc9*/
    {
      v84 = 0; /*0x7aadd1*/
      if ( !v10 ) /*0x7aadd8*/
      {
        v83 = (NiCamera *)sub_800B30(1);        // MoonSugarEffect decode: EndTargetGroup path lazily allocates dword_B474AC and renders queued refractive geometry into it. /*0x7aade4*/
        v84 = 1; /*0x7aade8*/
        v10 = (BSRenderedTexture *)v83; /*0x7aadf0*/
      }
      v34 = BSRenderedTexture::UseTextureToRender(v10); /*0x7aadfb*/
      v35 = (void (__thiscall **)(NiRenderTargetGroup *, int))&v34->vtbl->AttachDepthStencilBuffer; /*0x7aae05*/
      v36 = (int)v11->vtbl->GetDepthStencilBuffer(v11); /*0x7aae08*/
      (*v35)(v34, v36); /*0x7aae0f*/
      ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.GetClearColor)(v5, v81); /*0x7aae1d*/
      v37 = v5->__vftable; /*0x7aae25*/
      x = kHeadBodyNormalMatchRadius; /*0x7aae27*/
      v38 = v37->super.SetClearColor4; /*0x7aae2b*/
      v78 = x; /*0x7aae2e*/
      v79 = 0.0; /*0x7aae39*/
      v80 = 0.0; /*0x7aae3f*/
      ((void (__thiscall *)(NiDX9Renderer *, float *))v38)(v5, &x); /*0x7aae43*/
      v62 = 1; /*0x7aae45*/
      NiRenderer_EndScene(); /*0x7aae4a*/
      if ( MEMORY[0xB34FC0] >= 2 ) /*0x7aae56*/
      {
        v39 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7aae63*/
        v40 = (int)v39->vtbl->GetDepthStencilBufferRendererData(v39); /*0x7aae73*/
        v41 = (int)v11->vtbl->GetDepthStencilBufferRendererData(v11); /*0x7aae7d*/
        renderer->member.device->lpVtbl->StretchRect( /*0x7aaea2*/
          renderer->member.device,
          *(IDirect3DSurface9 **)(v40 + 0xC),
          0,
          *(IDirect3DSurface9 **)(v41 + 0xC),
          0,
          D3DTEXF_NONE);
      }
      v42 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)v83); /*0x7aaea8*/
      NiRenderer_BeginScene((ClearFlags)(v84 != 0), v42); /*0x7aaebb*/
      v43 = this->member.super.accumulator; /*0x7aaec4*/
      v44 = (float *)((char *)v43 + 0x110); /*0x7aaeca*/
      x = *((float *)v43 + 0x1B); /*0x7aaed0*/
      v45 = (NiFrustum *)((char *)v43 + 0xEC); /*0x7aaed4*/
      v78 = *((float *)v43 + 0x1E); /*0x7aaee2*/
      v46 = *((float *)v43 + 0x21); /*0x7aaee9*/
      v47 = (NiPoint3 *)((char *)v43 + 0x88); /*0x7aaeef*/
      v26 = v5->member.super.SceneState1 == 1; /*0x7aaef4*/
      v79 = v46; /*0x7aaefa*/
      y = v47[0xFFFFFFFD].y; /*0x7aaf01*/
      v75 = v47[0xFFFFFFFE].y; /*0x7aaf08*/
      v76 = v47[0xFFFFFFFF].y; /*0x7aaf0f*/
      v71 = v47[0xFFFFFFFD].x; /*0x7aaf16*/
      v72 = v47[0xFFFFFFFE].x; /*0x7aaf1d*/
      v73 = v47[0xFFFFFFFF].x; /*0x7aaf24*/
      if ( (v26 || v5->member.super.SceneState2 == 1) && v5->member.super.IsReady == 1 ) /*0x7aaf39*/
        v5->__vftable->super.SetupCamera( /*0x7aaf57*/
          (NiRenderer *)v5,
          v47,
          (NiPoint3 *)&v71,
          (NiPoint3 *)&y,
          (NiPoint3 *)&x,
          v45,
          v44);
      v10 = (BSRenderedTexture *)v83; /*0x7aaf59*/
    }
    v48 = v64; /*0x7aaf5d*/
    *(_BYTE *)(v64 + 8) = 0; /*0x7aaf65*/
    v49 = *((_DWORD **)this + 0x881); /*0x7aaf69*/
    if ( v49 ) /*0x7aaf71*/
    {
      while ( 1 ) /*0x7aaf84*/
      {
        v50 = (NiNode *)v49[2]; /*0x7aaf84*/
        v51 = v50->members.effects.vtlb; /*0x7aaf87*/
        v66 = (_DWORD *)*v49; /*0x7aaf94*/
        if ( !v51 ) /*0x7aaf98*/
          goto LABEL_58; /*0x7aaf98*/
        m_uiRefCount = NiNode_GetNiPropertyByID(v50, 4)[1].members.super.m_uiRefCount; /*0x7aafa7*/
        v53 = (m_uiRefCount & 2) != 0; /*0x7aafac*/
        v85 = (m_uiRefCount & 0x10000) != 0; /*0x7aafbb*/
        if ( (*((int (__thiscall **)(void **))*v51 + 7))(v51) < 1 /*0x7aafd6*/
          || (*((int (__thiscall **)(void **))*v51 + 7))(v51) > 5 )
        {
          if ( (*((int (__thiscall **)(void **))*v51 + 7))(v51) != 0x1B ) /*0x7ab015*/
            goto LABEL_58; /*0x7ab015*/
          if ( v85 ) /*0x7ab01f*/
            v54 = 0x158; /*0x7ab021*/
          else
            v54 = v53 + 0x156; /*0x7ab035*/
          Lighting30Shader_SelectRenderPass(v54); /*0x7ab03a*/
        }
        else if ( v85 ) /*0x7aafe0*/
        {
          v54 = 0x162; /*0x7aafe2*/
          sub_7D1320((int *)0x162); /*0x7aafea*/
        }
        else
        {
          v54 = v53 + 0x160; /*0x7aafff*/
          sub_7D1320((int *)v54); /*0x7ab002*/
        }
        (*(void (__thiscall **)(void *))(*(_DWORD *)v51[0xC] + 0x48))(v51[0xC]); /*0x7ab04a*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)v51[0xB] + 0x48))(v51[0xB]); /*0x7ab056*/
        *(_WORD *)(v64 + 4) = v54; /*0x7ab05c*/
        MEMORY[0xB42EB8] = v64; /*0x7ab060*/
        v55 = renderer; /*0x7ab065*/
        unk_B42E90 = v54; /*0x7ab06a*/
        ((void (__thiscall *)(NiNode *, NiDX9Renderer *))v50->vtbl->AddObject)(v50, v55); /*0x7ab07c*/
        v5 = v67; /*0x7ab07e*/
LABEL_58:
        if ( !v66 ) /*0x7ab087*/
        {
          v10 = (BSRenderedTexture *)v83; /*0x7ab08d*/
          v48 = v64; /*0x7ab091*/
          break; /*0x7ab091*/
        }
        v49 = v66; /*0x7aaf80*/
      }
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)this + 0x2200); /*0x7ab095*/
    *((_DWORD *)this + 0x883) = *((_DWORD *)this + 0x881); /*0x7ab0a9*/
    *((_DWORD *)this + 0x881) = 0; /*0x7ab0ae*/
    *((_DWORD *)this + 0x882) = 0; /*0x7ab0b1*/
    *((_DWORD *)this + 0x884) = 0; /*0x7ab0b4*/
    if ( unk_B42CDC ) /*0x7ab0b7*/
    {
      InnerTexture = BSRenderedTexture::GetInnerTexture(v10); /*0x7ab0c8*/
      ShaderDefinition = GetShaderDefinition(9u); /*0x7ab0ca*/
      BSImageSpaceShader_BindFirstFreeRenderedTexture((BSImageSpaceShader *)ShaderDefinition->shader, InnerTexture); /*0x7ab0da*/
    }
    v33 = v68; /*0x7ab0df*/
  }
  else
  {
    v48 = v64; /*0x7ab0e5*/
  }
  if ( v61 || v33 ) /*0x7ab0f2*/
    NiRenderer_EndScene(); /*0x7ab0f4*/
  if ( v10 ) /*0x7ab0fb*/
  {
    v58 = BSRenderedTexture::UseTextureToRender(v10); /*0x7ab0ff*/
    v58->vtbl->AttachDepthStencilBuffer(v58, 0); /*0x7ab10d*/
  }
  if ( v48 ) /*0x7ab111*/
  {
    RenderPass_Destroy(v48); /*0x7ab115*/
    FormHeapFree(v48); /*0x7ab11b*/
  }
  v59 = v5->member.super.accumulator; /*0x7ab123*/
  if ( v59 != (NiAccumulator *)v69 ) /*0x7ab12c*/
  {
    if ( v59 ) /*0x7ab130*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v59 + 1) ) /*0x7ab136*/
        (**(void (__thiscall ***)(NiAccumulator *, int))v59)(v59, 1); /*0x7ab14c*/
    }
    v5->member.super.accumulator = (NiAccumulator *)v69; /*0x7ab150*/
    if ( v69 ) /*0x7ab153*/
      InterlockedIncrement(v69 + 1); /*0x7ab159*/
  }
  if ( v62 ) /*0x7ab164*/
    ((void (__thiscall *)(NiDX9Renderer *, float *))v5->__vftable->super.SetClearColor4)(v5, v81); /*0x7ab172*/
  this->member.super.accumulator = v70; /*0x7ab183*/
  v82 = 0xFFFFFFFF; /*0x7ab186*/
  if ( v69 ) /*0x7ab18e*/
  {
    if ( !InterlockedDecrement(v69 + 1) ) /*0x7ab194*/
      (**(void (__thiscall ***)(volatile LONG *, int))v69)(v69, 1); /*0x7ab1a7*/
  }
  return v33 != 0; /*0x7ab1ab*/
}
