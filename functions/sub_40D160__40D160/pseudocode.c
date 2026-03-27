void __usercall sub_40D160(NiDX9Renderer *this@<ecx>, int a2@<edi>, int a3@<esi>)
{
  Ni2DBuffer *DefaultRenderTarget; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // eax
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  double v21; // st7
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  unsigned int v25; // edi
  unsigned int v26; // eax
  NiRenderTargetGroup *v27; // eax
  int v28; // ecx
  NiRenderTargetGroup *v29; // esi
  unsigned int v30; // edi
  unsigned int v31; // eax
  double v32; // st7
  bool v33; // c0
  bool v34; // c3
  double v35; // st7
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  unsigned int v39; // edi
  unsigned int v40; // eax
  NiCamera *camera; // eax
  volatile LONG *v42; // ecx
  float v43; // edx
  volatile LONG **v44; // eax
  volatile LONG *v45; // esi
  NiTexturingProperty *v46; // edi
  NiRenderedTexture *InnerTexture; // eax
  float *v48; // eax
  int v49; // [esp+Ch] [ebp-24h]
  int v50; // [esp+Ch] [ebp-24h]
  int v52; // [esp+10h] [ebp-20h]
  volatile LONG *v53; // [esp+18h] [ebp-18h] BYREF
  float v54; // [esp+1Ch] [ebp-14h]
  float v55; // [esp+20h] [ebp-10h]
  float v56; // [esp+24h] [ebp-Ch]
  float v57; // [esp+28h] [ebp-8h]
  float v58; // [esp+2Ch] [ebp-4h]

  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    if ( TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetNiNode(TESDataHandler_g_PlayerRef) )
    {
      nullsub_returnTrue_0arg();
      if ( menuRenderedTexture )
        sub_7C1EE0(g_textureManager, (BSRenderedTexture *)menuRenderedTexture);
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, g_Renderer, 5);
      NiSmartPointer_Set__((Ni2DBuffer **)&menuRenderedTexture, DefaultRenderTarget);
      v5 = ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.GetDefaultRTGroup)(g_Renderer, a2);
      v6 = *(_DWORD *)(menuRenderedTexture + 0x20);
      v7 = v5;
      if ( v6 )
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x4C))(v6);
      else
        v8 = 0;
      if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0) != v8
        || ((v9 = ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.GetDefaultRTGroup)(
                    g_Renderer,
                    v49),
             v10 = *(_DWORD *)(menuRenderedTexture + 0x20),
             v11 = v9,
             !v10)
          ? (v12 = 0)
          : (v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x50))(v10)),
            (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x50))(v11, 0) != v12) )
      {
        v13 = ((int (__thiscall *)(NiDX9Renderer *, int, int))g_Renderer->__vftable->super.GetDefaultRTGroup)(
                g_Renderer,
                v49,
                a3);
        v14 = *(_DWORD *)(menuRenderedTexture + 0x20);
        v15 = v13;
        if ( v14 )
          *(float *)&v16 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x4C))(v14));
        else
          *(float *)&v16 = 0.0;
        v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 0x4C))(v15, 0);
        v54 = *(float *)&v16;
        v18 = (double)v17 / (double)v16;
        v19 = v18 > 1.0;
        v20 = 1.0 == v18;
        v21 = 1.0;
        if ( !v19 && !v20 )
        {
          v22 = ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.GetDefaultRTGroup)(
                  g_Renderer,
                  v52);
          v23 = *(_DWORD *)(menuRenderedTexture + 0x20);
          v24 = v22;
          if ( v23 )
            *(float *)&v25 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x4C))(v23));
          else
            *(float *)&v25 = 0.0;
          v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 0x4C))(v24, 0);
          v54 = *(float *)&v25;
          v21 = (double)v26 / (double)v25;
        }
        v54 = v21;
        v27 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
        v28 = *(_DWORD *)(menuRenderedTexture + 0x20);
        v29 = v27;
        if ( v28 )
          *(float *)&v30 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x50))(v28));
        else
          *(float *)&v30 = 0.0;
        v31 = v29->vtbl->GetHeight(v29, 0);
        v54 = *(float *)&v30;
        v32 = (double)v31 / (double)v30;
        v33 = v32 > 1.0;
        v34 = 1.0 == v32;
        v35 = 1.0;
        if ( !v33 && !v34 )
        {
          v36 = ((int (__thiscall *)(NiDX9Renderer *, int))g_Renderer->__vftable->super.GetDefaultRTGroup)(
                  g_Renderer,
                  v50);
          v37 = *(_DWORD *)(menuRenderedTexture + 0x20);
          v38 = v36;
          if ( v37 )
            *(float *)&v39 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x50))(v37));
          else
            *(float *)&v39 = 0.0;
          v40 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v38 + 0x50))(v38, 0);
          v54 = *(float *)&v39;
          v35 = (double)v40 / (double)v39;
        }
        camera = g_worldScenegraph->camera;
        v55 = 0.0;
        v56 = *(float *)&v53;
        camera = (NiCamera *)((char *)camera + 0x110);
        v42 = v53;
        v57 = v35;
        *(float *)&camera->vtbl = 0.0;
        v43 = v57;
        camera->members.super.super.super.m_uiRefCount = (UInt32)v42;
        v58 = 0.0;
        *(float *)&camera->members.super.super.m_pcName = v43;
        *(float *)&camera->members.super.super.m_controller = 0.0;
      }
      NiRenderer_Render(this, (BSRenderedTexture *)menuRenderedTexture);
      byte_B33397 = 1;
      if ( !ImageSpaceEffectEnabled )
      {
        v44 = sub_405760((NiGeometry *)ScreenElementsRoot_, &v53);
        v45 = v53;
        v46 = *((NiTexturingProperty **)*v44 + 8);
        if ( *(float *)&v53 != 0.0 && !InterlockedDecrement(v53 + 1) )
        {
          if ( v45 )
            (**(void (__thiscall ***)(volatile LONG *, int))v45)(v45, 1);
        }
        InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)menuRenderedTexture);
        NiTexturingProperty::SetUnk08(v46, InnerTexture);
      }
      v48 = (float *)g_worldScenegraph->camera;
      v55 = 0.0;
      v48 += 0x44;
      v56 = 1.0;
      *v48 = 0.0;
      v57 = 1.0;
      v48[1] = v56;
      v58 = 0.0;
      v48[2] = 1.0;
      v48[3] = 0.0;
      nullsub_returnTrue_0arg();
    }
  }
}
