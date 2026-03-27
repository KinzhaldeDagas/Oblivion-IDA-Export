void __thiscall ShadowSceneLight_Render___(int this, int _240)
{
  int v2; // ebx
  int ShadowMap; // eax
  _DWORD *v4; // eax
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  NiDX9Renderer *v10; // ecx
  BSShaderAccumulator *v11; // edx
  float *v12; // eax
  BSShaderAccumulator *v13; // edx
  BSShaderAccumulator *v14; // edx
  float *v15; // eax
  float *v16; // esi
  double v17; // st7
  bool v18; // zf
  double v19; // st7
  double v20; // st5
  NiDX9Renderer *v21; // esi
  double v22; // st5
  double v23; // st6
  BSShaderAccumulator *inited; // eax
  Ni2DBuffer **v25; // ebx
  NiCamera *v26; // eax
  NiCamera *v27; // eax
  float *v28; // eax
  int v29; // esi
  int v30; // ecx
  float *ExtraData; // eax
  float v32; // ecx
  float v33; // edx
  double v34; // rt2
  float *v35; // ecx
  double v36; // st7
  double v37; // st7
  double v38; // st7
  int v39; // eax
  Ni2DBuffer *v40; // eax
  int v41; // edi
  Ni2DBuffer *v42; // ecx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  NiDX9Renderer *v46; // ecx
  NiDX9Renderer *v47; // ecx
  NiRenderTargetGroup *v48; // eax
  BSShaderAccumulator *v49; // esi
  SceneGraph *v50; // edi
  Ni2DBuffer *v51; // ebx
  NiDX9Renderer *v52; // esi
  NiDX9Renderer *v53; // ebx
  int v54; // esi
  NiRenderedTexture *InnerTexture; // eax
  float v56; // edx
  float v57; // ecx
  float v58; // eax
  double v59; // st7
  double v60; // st6
  double v61; // st5
  double v62; // st4
  double v63; // st4
  double v64; // st6
  int v65; // esi
  int accumulator; // [esp+20h] [ebp-218h]
  BSShaderAccumulator *v67; // [esp+40h] [ebp-1F8h] BYREF
  float Near; // [esp+44h] [ebp-1F4h]
  float v69; // [esp+48h] [ebp-1F0h]
  BSShaderAccumulator *v70; // [esp+4Ch] [ebp-1ECh] BYREF
  NiDX9Renderer *v71; // [esp+50h] [ebp-1E8h]
  BSShaderAccumulator *v72; // [esp+54h] [ebp-1E4h] BYREF
  float v73; // [esp+58h] [ebp-1E0h]
  BSShaderAccumulator *v74; // [esp+5Ch] [ebp-1DCh]
  unsigned __int64 v75; // [esp+60h] [ebp-1D8h] BYREF
  float v76; // [esp+68h] [ebp-1D0h]
  BSShaderAccumulator *v77; // [esp+6Ch] [ebp-1CCh] BYREF
  NiDX9Renderer *v78; // [esp+70h] [ebp-1C8h]
  BSShaderAccumulator *v79; // [esp+74h] [ebp-1C4h]
  BSShaderAccumulator *width; // [esp+78h] [ebp-1C0h] BYREF
  float v81; // [esp+7Ch] [ebp-1BCh]
  float v82; // [esp+80h] [ebp-1B8h]
  float v83; // [esp+84h] [ebp-1B4h]
  BSShaderAccumulator *v84; // [esp+88h] [ebp-1B0h] BYREF
  NiDX9Renderer *v85; // [esp+8Ch] [ebp-1ACh]
  BSShaderAccumulator *v86; // [esp+90h] [ebp-1A8h]
  float Far; // [esp+94h] [ebp-1A4h]
  int v88; // [esp+98h] [ebp-1A0h]
  NiFrustum a2; // [esp+9Ch] [ebp-19Ch] BYREF
  float v90[4]; // [esp+B8h] [ebp-180h] BYREF
  _DWORD v91[4]; // [esp+C8h] [ebp-170h] BYREF
  float v92[16]; // [esp+D8h] [ebp-160h] BYREF
  float v93[16]; // [esp+118h] [ebp-120h] BYREF
  float v94[13]; // [esp+164h] [ebp-D4h] BYREF
  BSCullingProcess v95; // [esp+198h] [ebp-A0h] BYREF

  v2 = this;
  v88 = this;
  if ( (*(_BYTE *)(this + 0xF4) && ShaderPackage >= 3 && (dword_B42F40 & 0x10) != 0 || *(_BYTE *)(this + 0x120))
    && *(_WORD *)(this + 0x118) != 0xFF
    && *(float *)(this + 0xD8) > dbl_A30068 )
  {
    if ( !*(_DWORD *)(this + 0x114) )
    {
      ShadowMap = BSTextureManager_FetchShadowMap(g_textureManager);
      if ( !ShadowMap )
      {
        v4 = sub_405AD0((_DWORD *)v2, &v67);
        *(_WORD *)(*v4 + 0x18) |= 1u;
        sub_7016A0((NiD3DVertexShader *)&v67);
        return;
      }
      sub_499310((_DWORD *)v2, ShadowMap);
    }
    v5 = *(float **)(v2 + 0x130);
    qmemcpy(v94, (const void *)(*(_DWORD *)(v2 + 0x100) + 0x64), sizeof(v94));
    *(float *)&v67 = v5[8] - v94[9];
    *(float *)&v71 = v5[9] - v94[0xA];
    *(float *)&v70 = v5[0xA] - v94[0xB];
    v84 = v67;
    v85 = v71;
    v86 = v70;
    sub_43F350((float *)&v84);
    *(float *)&v67 = -*(float *)&dword_B258E8;
    *(float *)&v71 = -*(float *)&dword_B258EC;
    *(float *)&v70 = -*(float *)&dword_B258F0;
    v72 = v67;
    v73 = *(float *)&v71;
    v74 = v70;
    sub_4BF9E0((float *)&v84, (float *)&v77, (float *)&v72);
    v6 = dbl_A3D8E8;
    v7 = *(float *)&v79;
    v8 = *(float *)&v78;
    if ( v6 > *(float *)&v77 )
    {
      v9 = dbl_A91288;
      if ( v9 < *(float *)&v77 && v8 < v6 && v8 > v9 && v7 < v6 && v7 > v9 )
      {
        v10 = (NiDX9Renderer *)dword_B258D4;
        v11 = (BSShaderAccumulator *)dword_B258D8;
        v72 = (BSShaderAccumulator *)dword_B258D0;
        v73 = *(float *)&v10;
        v74 = v11;
      }
    }
    v12 = sub_4BF9E0((float *)&v84, (float *)&width, (float *)&v77);
    v13 = *(BSShaderAccumulator **)v12;
    *(float *)&v67 = -*(float *)&v77;
    v72 = v13;
    v73 = v12[1];
    v14 = *((BSShaderAccumulator **)v12 + 2);
    *(float *)&v71 = -*(float *)&v78;
    v74 = v14;
    *(float *)&v70 = -*(float *)&v79;
    *(float *)&v75 = *(float *)&v67;
    v77 = v67;
    *((float *)&v75 + 1) = *(float *)&v71;
    v78 = v71;
    v76 = *(float *)&v70;
    v79 = v70;
    NiFrustum::SetOrtho(&a2, 0);
    v15 = *(float **)(v2 + 0x130);
    v16 = *(float **)(v2 + 0x100);
    a2.Ortho = 0;
    v69 = v15[0xB];
    *(float *)&v71 = v16[0x22] - v15[8];
    *(float *)&v67 = v16[0x23] - v15[9];
    *(float *)&v70 = v16[0x24] - v15[0xA];
    *(float *)&v67 = *(float *)&v67 * *(float *)&v67 + *(float *)&v71 * *(float *)&v71 + *(float *)&v70 * *(float *)&v70;
    *(float *)&v67 = sqrt(*(float *)&v67);
    v69 = v69 / *(float *)&v67 * dbl_A91280;
    v17 = v69;
    *(float *)(v2 + 0x124) = v69;
    v69 = v17 * dbl_A2FAA0 * dbl_A91278;
    v69 = tan(v69);
    *(float *)&v67 = v69;
    v18 = *(_BYTE *)(v2 + 0xF4) == 0;
    v19 = v69;
    v69 = -v69;
    a2.Left = v69;
    a2.Bottom = v69;
    a2.Right = v19;
    a2.Top = v19;
    a2.Near = 1.0;
    v20 = v16[0x3E];
    v21 = dword_B43104;
    a2.Far = v20;
    v71 = v21;
    v90[0] = 0.0;
    v90[3] = 0.0;
    v22 = 1.0;
    v23 = 0.0;
    v90[1] = 1.0;
    v90[2] = 1.0;
    if ( !v18 )
    {
      if ( sub_405A80() )
      {
        inited = InitBSShaderAccumulator();
        sub_405070(&v70, (int)inited);
        accumulator = (int)v21->member.super.accumulator;
        v95.unk9C = 0;
        sub_405070(&v67, accumulator);
        LOBYTE(v95.unk9C) = 1;
        NiDX9Renderer::SetShaderAccumulator(v21, v70);
        v25 = (Ni2DBuffer **)(v2 + 0x14C);
        if ( !*v25 )
        {
          *(float *)&v26 = COERCE_FLOAT(FormHeapAlloc(0x124u));
          Near = *(float *)&v26;
          LOBYTE(v95.unk9C) = 2;
          if ( *(float *)&v26 == 0.0 )
            v27 = 0;
          else
            v27 = sub_70D590(v26);
          LOBYTE(v95.unk9C) = 1;
          NiSmartPointer_Set__(v25, (Ni2DBuffer *)v27);
        }
        v28 = (float *)*v25;
        v28[0x15] = v94[9];
        v28[0x16] = v94[0xA];
        v28[0x17] = v94[0xB];
        NiAVObject_UpdateNiAVObject((NiAVObject *)*v25, 0.0, 1);
        v29 = v88;
        v30 = *(_DWORD *)(v88 + 0x130);
        v75 = *(_QWORD *)(v30 + 0x20);
        v76 = *(float *)(v30 + 0x28);
        ExtraData = (float *)NiObjectNET_GetExtraData((NiObjectNET *)v30, (const char *)&off_A7D2CC);
        v32 = ExtraData[6];
        v33 = ExtraData[7];
        v82 = ExtraData[8];
        v81 = v33;
        *(float *)&width = v32;
        if ( v33 + v32 < v82 )
        {
          v34 = dbl_A3F3E8;
          v69 = *(float *)&dword_B258E8 * v34;
          Far = *(float *)&dword_B258EC * v34;
          Near = v34 * *(float *)&dword_B258F0;
          *(float *)&v75 = v69 + *(float *)&v75;
          *((float *)&v75 + 1) = *((float *)&v75 + 1) + Far;
          v76 = v76 + Near;
        }
        sub_70C340((float *)*v25, (float *)&v75, (float *)&v72);
        Camera_SetFrustum((NiCamera *)*v25, (int)&a2);
        sub_404D30(*v25, v90);
        NiAVObject_UpdateNiAVObject((NiAVObject *)*v25, 0.0, 1);
        v35 = (float *)*v25;
        width = (BSShaderAccumulator *)(*v25)[5].members.width;
        v81 = v35[0x1E];
        v36 = v35[0x21];
        v77 = width;
        v82 = v36;
        *(float *)&v78 = v81;
        *(float *)&v79 = v82;
        width = *((BSShaderAccumulator **)v35 + 0x1A);
        v81 = v35[0x1D];
        v37 = v35[0x20];
        v72 = width;
        v82 = v37;
        *(float *)&v74 = v82;
        v73 = v81;
        width = *((BSShaderAccumulator **)v35 + 0x19);
        v81 = v35[0x1C];
        v38 = v35[0x1F];
        *(float *)&v85 = v81;
        v39 = *(_DWORD *)(v29 + 0x130);
        v82 = v38;
        v84 = width;
        Near = a2.Near;
        Far = a2.Far;
        *(float *)&v86 = v82;
        sub_70C230(v35, (float *)(v39 + 0x20));
        v40 = *v25;
        qmemcpy(&a2, &(*v25)[0xB].members.data, sizeof(a2));
        a2.Far = a2.Far + dbl_A6BEA0;
        v41 = v88;
        sub_717A40((NiFrustumPlanes *)(v88 + 0x150), &a2, (NiTransform *)&v40[5]);
        v42 = *v25;
        a2.Near = Near;
        a2.Far = Far;
        Camera_SetFrustum((NiCamera *)v42, (int)&a2);
        v43 = dword_B25AD4;
        v44 = dword_B25AD8;
        v91[0] = dword_B25AD0;
        v45 = dword_B25ADC;
        v91[1] = v43;
        v46 = g_Renderer;
        v91[2] = v44;
        v91[3] = v45;
        ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))v46->__vftable->super.GetClearColor)(v46, v91);
        v47 = g_Renderer;
        *(float *)&width = 1.0;
        v81 = 1.0;
        v82 = 1.0;
        v83 = 1.0;
        ((void (__thiscall *)(NiDX9Renderer *, BSShaderAccumulator **))v47->__vftable->super.SetClearColor4)(
          v47,
          &width);
        v48 = BSRenderedTexture::UseTextureToRender(*(BSRenderedTexture **)(v41 + 0x114));
        NiRenderer_BeginScene(kClear_ALL, v48);
        ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))g_Renderer->__vftable->super.SetClearColor4)(g_Renderer, v91);
        if ( (v71->member.super.SceneState1 == 1 || v71->member.super.SceneState2 == 1)
          && v71->member.super.IsReady == 1 )
        {
          ((void (__stdcall *)(float *, BSShaderAccumulator **, BSShaderAccumulator **, BSShaderAccumulator **, NiFrustum *, float *))v71->__vftable->super.SetupCamera)(
            &v94[9],
            &v84,
            &v72,
            &v77,
            &a2,
            v90);
        }
        v49 = v70;
        (*(void (__thiscall **)(BSShaderAccumulator *, Ni2DBuffer *))(*(_DWORD *)v70 + 0x4C))(v70, *v25);
        *((_BYTE *)v49 + 0x21E0) = 1;
        NiCullingProcess_NiCullingProcess(&v95.super, 0);
        v95.super.Camera = (NiCamera *)*v25;
        LOBYTE(v95.unk9C) = 3;
        NiCullingProcess::SetFrustum(&v95.super, &a2);
        v50 = *(SceneGraph **)(v41 + 0x130);
        v51 = *v25;
        v95.super.Planes.ActivePlanes = 0;
        sub_70C0B0((NiCamera *)v51, v50, &v95.super, 0);
        *((_BYTE *)v49 + 0x21E1) = 1;
        (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v49 + 0x50))(v49);
        v52 = v71;
        if ( (v71->member.super.SceneState1 == 1 || v71->member.super.SceneState2 == 1)
          && v71->member.super.IsReady == 1 )
        {
          v71->__vftable->super.SetupCamera(
            (NiRenderer *)v71,
            (NiPoint3 *)&Vector3_InitValue_,
            (NiPoint3 *)&v84,
            (NiPoint3 *)&v72,
            (NiPoint3 *)&v77,
            &a2,
            v90);
        }
        v53 = v71;
        qmemcpy(v93, &v52->member.viewMatrix, sizeof(v93));
        qmemcpy(v92, &v71->member.projMatrix, sizeof(v92));
        NiRenderer_EndScene();
        NiDX9Renderer::SetShaderAccumulator(v53, v67);
        if ( *((_DWORD *)v70 + 1) < 2u )
          InterlockedIncrement((volatile LONG *)v70 + 1);
        v54 = v88;
        if ( *(_BYTE *)(v88 + 0x12C) )
        {
          InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v88 + 0x114));
          sub_7A9CD0(InnerTexture);
        }
        *(_BYTE *)(v54 + 0x214) = 0;
        LOBYTE(v95.unk9C) = 1;
        BSCullingProcess::~BSCullingProcess(&v95);
        LOBYTE(v95.unk9C) = 0;
        sub_7016A0((NiD3DVertexShader *)&v67);
        v95.unk9C = 0xFFFFFFFF;
        sub_7016A0((NiD3DVertexShader *)&v70);
        v2 = v54;
        goto LABEL_43;
      }
      v19 = *(float *)&v67;
      v22 = 1.0;
      v23 = 0.0;
    }
    v56 = *(&Vector3_InitValue_ + 1);
    v93[0] = *(float *)&v77;
    v57 = Vector3_InitValue_;
    v58 = dword_B3F9B0;
    v93[1] = *(float *)&v72;
    v75 = __PAIR64__(LODWORD(v56), LODWORD(v57));
    v93[2] = *(float *)&v84;
    v76 = v58;
    v93[3] = v23;
    v93[4] = *(float *)&v78;
    v93[5] = v73;
    v93[6] = *(float *)&v85;
    v93[7] = v23;
    v93[8] = *(float *)&v79;
    v93[9] = *(float *)&v74;
    v93[0xA] = *(float *)&v86;
    v93[0xB] = v93[7];
    Near = *(float *)&v77 * v57 + *(float *)&v78 * v56 + v58 * *(float *)&v79;
    v93[0xC] = -Near;
    Near = v56 * v73 + v57 * *(float *)&v72 + v58 * *(float *)&v74;
    v93[0xD] = -Near;
    Near = v57 * *(float *)&v84 + v56 * *(float *)&v85 + v58 * *(float *)&v86;
    v93[0xE] = -Near;
    v93[0xF] = v22;
    *(float *)&v67 = v19 - a2.Left;
    Far = v19 - a2.Bottom;
    Near = a2.Far - 1.0;
    v69 = 1.0 / Near;
    v92[0] = dbl_A3D0C0 / *(float *)&v67;
    v92[4] = v23;
    Near = a2.Left + v19;
    v92[8] = -Near / *(float *)&v67;
    v92[0xC] = v23;
    v92[1] = v92[0xC];
    v92[5] = dbl_A3D0C0 / Far;
    Near = v19 + a2.Bottom;
    v92[9] = -Near / Far;
    v92[0xD] = v23;
    v92[2] = v92[0xD];
    v92[6] = v92[0xD];
    v92[0xA] = v69 * a2.Far;
    v92[0xE] = -(a2.Far * v69);
    v92[3] = v23;
    v92[7] = v92[3];
    v92[0xF] = v92[3];
    v92[0xB] = v22;
LABEL_43:
    v59 = v94[0xA];
    v60 = v94[0xA] * *(float *)&v78;
    v61 = v94[9];
    v62 = v94[9];
    qmemcpy((void *)(v2 + 0x50), v93, 0x40u);
    v63 = v60 + v62 * *(float *)&v77 + v94[0xB] * *(float *)&v79;
    v64 = v94[0xB];
    Near = v63;
    *(float *)(v2 + 0x80) = -Near;
    qmemcpy((void *)(v2 + 0x90), v92, 0x40u);
    Near = v73 * v59 + *(float *)&v72 * v61 + *(float *)&v74 * v64;
    *(float *)(v2 + 0x84) = -Near;
    Near = v59 * *(float *)&v85 + v61 * *(float *)&v84 + v64 * *(float *)&v86;
    *(float *)(v2 + 0x88) = -Near;
    D3DXMatrixMultiply_0(v92, v2 + 0x50, v2 + 0x90);
    qmemcpy((void *)(v2 + 0x10), v92, 0x40u);
    return;
  }
  if ( *(_DWORD *)(this + 0x114) )
  {
    BSTextureManager_DiscardShadowMap(g_textureManager, *(_DWORD *)(this + 0x114));
    v65 = *(_DWORD *)(v2 + 0x114);
    if ( v65 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v65 + 4)) )
        (**(void (__thiscall ***)(int, int))v65)(v65, 1);
      *(_DWORD *)(v2 + 0x114) = 0;
    }
  }
}
