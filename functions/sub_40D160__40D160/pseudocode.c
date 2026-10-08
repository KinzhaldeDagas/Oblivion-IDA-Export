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

  if ( Shared_GetDwordAtOffset40((TESObjectREFR *)reference) )
  {
    if ( reference->vtbl->super.super.super.GetNiNode(reference) )
    {
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40d193*/
      if ( texture ) /*0x40d1a2*/
        BSTextureManager__ReturnRenderedTexture(MEMORY[0xB42F50], (BSRenderedTexture *)texture); /*0x40d1ab*/
      DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(MEMORY[0xB42F50], renderer, 5);// Menu rendered texture path: creates menuRenderedTexture through BSTextureManager_GetDefaultRenderTarget(..., 5), then NiRenderer_Render uses that texture. /*0x40d1c0*/
      NiSmartPointer_Set__((Ni2DBuffer **)&texture, DefaultRenderTarget); /*0x40d1cb*/
      v5 = ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.GetDefaultRTGroup)(renderer, a2);// Requests default render-target type 5 for the captured world/menu background. This is not the XML UI render surface. /*0x40d1db*/
      v6 = *(_DWORD *)(texture + 0x20); /*0x40d1e3*/
      v7 = v5; /*0x40d1e8*/
      if ( v6 ) /*0x40d1ea*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x4C))(v6); /*0x40d1f3*/
      else
        v8 = 0; /*0x40d1f7*/
      if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0) != v8
        || ((v9 = ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.GetDefaultRTGroup)(
                    renderer,
                    v49),
             v10 = *(_DWORD *)(texture + 0x20),
             v11 = v9,
             !v10)
          ? (v12 = 0)
          : (v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x50))(v10)),
            (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x50))(v11, 0) != v12) )
      {
        v13 = ((int (__thiscall *)(NiDX9Renderer *, int, int))renderer->__vftable->super.GetDefaultRTGroup)( /*0x40d24f*/
                renderer,
                v49,
                a3);
        v14 = *(_DWORD *)(texture + 0x20); /*0x40d257*/
        v15 = v13; /*0x40d25c*/
        if ( v14 ) /*0x40d25e*/
          *(float *)&v16 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x4C))(v14)); /*0x40d267*/
        else
          *(float *)&v16 = 0.0; /*0x40d26b*/
        v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 0x4C))(v15, 0); /*0x40d276*/
        v54 = *(float *)&v16; /*0x40d28c*/
        v18 = (double)v17 / (double)v16; /*0x40d29c*/
        v19 = v18 > 1.0; /*0x40d2a0*/
        v20 = 1.0 == v18; /*0x40d2a0*/
        v21 = 1.0; /*0x40d2a4*/
        if ( !v19 && !v20 ) /*0x40d2a6*/
        {
          v22 = ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.GetDefaultRTGroup)(renderer, v52); /*0x40d2b8*/
          v23 = *(_DWORD *)(texture + 0x20); /*0x40d2c0*/
          v24 = v22; /*0x40d2c5*/
          if ( v23 ) /*0x40d2c7*/
            *(float *)&v25 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x4C))(v23)); /*0x40d2d0*/
          else
            *(float *)&v25 = 0.0; /*0x40d2d4*/
          v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 0x4C))(v24, 0); /*0x40d2df*/
          v54 = *(float *)&v25; /*0x40d2f5*/
          v21 = (double)v26 / (double)v25; /*0x40d305*/
        }
        v54 = v21; /*0x40d30d*/
        v27 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x40d316*/
        v28 = *(_DWORD *)(texture + 0x20); /*0x40d31e*/
        v29 = v27; /*0x40d323*/
        if ( v28 ) /*0x40d325*/
          *(float *)&v30 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x50))(v28)); /*0x40d32e*/
        else
          *(float *)&v30 = 0.0; /*0x40d332*/
        v31 = v29->vtbl->GetHeight(v29, 0); /*0x40d33d*/
        v54 = *(float *)&v30; /*0x40d353*/
        v32 = (double)v31 / (double)v30; /*0x40d363*/
        v33 = v32 > 1.0; /*0x40d367*/
        v34 = 1.0 == v32; /*0x40d367*/
        v35 = 1.0; /*0x40d36b*/
        if ( !v33 && !v34 ) /*0x40d36d*/
        {
          v36 = ((int (__thiscall *)(NiDX9Renderer *, int))renderer->__vftable->super.GetDefaultRTGroup)(renderer, v50); /*0x40d37f*/
          v37 = *(_DWORD *)(texture + 0x20); /*0x40d387*/
          v38 = v36; /*0x40d38c*/
          if ( v37 ) /*0x40d38e*/
            *(float *)&v39 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x50))(v37)); /*0x40d397*/
          else
            *(float *)&v39 = 0.0; /*0x40d39b*/
          v40 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v38 + 0x50))(v38, 0); /*0x40d3a6*/
          v54 = *(float *)&v39; /*0x40d3bc*/
          v35 = (double)v40 / (double)v39; /*0x40d3cc*/
        }
        camera = g_WorldSceneReceiverRoot->camera; /*0x40d3d6*/
        v55 = 0.0; /*0x40d3dc*/
        v56 = *(float *)&v53; /*0x40d3e8*/
        camera = (NiCamera *)((char *)camera + 0x110); /*0x40d3ec*/
        v42 = v53; /*0x40d3f1*/
        v57 = v35; /*0x40d3f7*/
        *(float *)&camera->vtbl = 0.0; /*0x40d3fb*/
        v43 = v57; /*0x40d3fd*/
        camera->members.super.super.super.m_uiRefCount = (UInt32)v42; /*0x40d401*/
        v58 = 0.0; /*0x40d404*/
        *(float *)&camera->members.super.super.m_pcName = v43; /*0x40d40c*/
        *(float *)&camera->members.super.super.m_controller = 0.0; /*0x40d40f*/
      }
      NiRenderer_Render(this, (BSRenderedTexture *)texture); /*0x40d41b*/
      unk_B33397 = 1; /*0x40d427*/
      if ( !MEMORY[0xB42F3E] ) /*0x40d42e*/
      {
        v44 = NiGeometry_GetPropertyState((NiGeometry *)MEMORY[0xB333EC], &v53); /*0x40d43b*/
        v45 = v53; /*0x40d440*/
        v46 = *((NiTexturingProperty **)*v44 + 8); /*0x40d448*/
        if ( *(float *)&v53 != 0.0 && !InterlockedDecrement(v53 + 1) ) /*0x40d451*/
        {
          if ( v45 ) /*0x40d45d*/
            (**(void (__thiscall ***)(volatile LONG *, int))v45)(v45, 1); /*0x40d467*/
        }
        InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)texture);// Gets the captured background texture's inner NiRenderedTexture before binding it to menu-background geometry. /*0x40d46f*/
        OB_NiTexturingProperty_SetBaseTexture_010201A0(v46, InnerTexture); /*0x40d477*/
      }
      v48 = (float *)g_WorldSceneReceiverRoot->camera; /*0x40d483*/
      v55 = 0.0; /*0x40d489*/
      v48 += 0x44; /*0x40d493*/
      v56 = 1.0; /*0x40d498*/
      *v48 = 0.0; /*0x40d49c*/
      v57 = 1.0; /*0x40d49e*/
      v48[1] = v56; /*0x40d4aa*/
      v58 = 0.0; /*0x40d4ad*/
      v48[2] = 1.0; /*0x40d4b5*/
      v48[3] = 0.0; /*0x40d4ba*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40d4bd*/
    }
  }
}
