LONG __userpurge WaterDisplacementPass@<eax>(
        void *this@<ecx>,
        double st7_0@<st0>,
        NiScreenElements *a3,
        int *a4,
        Ni2DBuffer **a5,
        char a6)
{
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  double v10; // st7
  double v11; // st6
  NiDX9Renderer *v12; // ecx
  NiRenderTargetGroup *(__thiscall *GetDefaultRTGroup)(NiRenderer *); // eax
  int v14; // esi
  int v15; // ecx
  int v16; // edi
  double v17; // st7
  double v18; // st6
  bool v19; // zf
  double v20; // st7
  double v21; // st6
  Ni2DBuffer *DefaultRenderTarget; // eax
  Ni2DBuffer *v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  double v27; // st6
  int v28; // ecx
  int v29; // eax
  double v30; // st6
  double v31; // st7
  int v32; // edi
  int v33; // eax
  void (__thiscall ***v34)(_DWORD, int); // esi
  BSRenderedTexture *v35; // ecx
  NiRenderTargetGroup *v36; // eax
  NiDX9Renderer *v37; // ecx
  NiScreenElements *v38; // edi
  NiRenderTargetGroup *v39; // eax
  NiDX9Renderer *v40; // ecx
  NiRenderTargetGroup *v41; // eax
  ShaderDefinition *ShaderDefinition; // eax
  float *v43; // eax
  int v44; // ebp
  double v45; // st6
  double v46; // st6
  int v47; // ecx
  float v48; // eax
  int v49; // eax
  float v50; // edx
  float v51; // ecx
  int v52; // edx
  float v53; // ecx
  NiTriShapeData *v54; // eax
  NiTriShapeData *v55; // esi
  NiGeometry *v56; // eax
  NiAVObject *v57; // eax
  NiObjectNET *v58; // eax
  BSShaderProperty *v59; // eax
  NiNode *v60; // ecx
  double v61; // st7
  double v62; // rt1
  int v63; // ecx
  int v64; // eax
  int v65; // ebp
  NiDX9Renderer *v66; // ecx
  int v67; // ebp
  int v68; // edi
  int v69; // esi
  int v70; // edi
  int v71; // esi
  NiRenderTargetGroup *v72; // eax
  int v73; // edi
  int v74; // esi
  double v75; // st7
  Ni2DBuffer *v76; // eax
  BSRenderedTexture *v77; // ecx
  NiRenderTargetGroup *v78; // eax
  int v79; // esi
  NiRenderTargetGroup *v80; // eax
  int v81; // edi
  LONG result; // eax
  int (__thiscall ***v83)(_DWORD, int); // esi
  NiDX9Renderer *v84; // [esp+Ch] [ebp-9Ch]
  char v85; // [esp+27h] [ebp-81h]
  float v86; // [esp+28h] [ebp-80h]
  int v87; // [esp+28h] [ebp-80h]
  int v88; // [esp+2Ch] [ebp-7Ch]
  int v89; // [esp+2Ch] [ebp-7Ch]
  float v90; // [esp+2Ch] [ebp-7Ch]
  void *v91; // [esp+38h] [ebp-70h]
  double v92; // [esp+38h] [ebp-70h]
  float v93; // [esp+38h] [ebp-70h]
  float v94; // [esp+38h] [ebp-70h]
  float v95; // [esp+40h] [ebp-68h] BYREF
  float v96; // [esp+44h] [ebp-64h]
  float v97; // [esp+48h] [ebp-60h]
  float v98; // [esp+4Ch] [ebp-5Ch]
  float v99; // [esp+50h] [ebp-58h]
  int a1; // [esp+54h] [ebp-54h]
  float v101; // [esp+58h] [ebp-50h]
  BSShader *shader; // [esp+5Ch] [ebp-4Ch]
  Ni2DBuffer **v103; // [esp+60h] [ebp-48h]
  UInt16 *v104; // [esp+64h] [ebp-44h]
  float v105; // [esp+68h] [ebp-40h]
  _DWORD v106[8]; // [esp+6Ch] [ebp-3Ch] BYREF
  float v107; // [esp+8Ch] [ebp-1Ch] BYREF
  float v108; // [esp+90h] [ebp-18h]
  int v109; // [esp+94h] [ebp-14h]
  unsigned int v110; // [esp+A4h] [ebp-4h]

  v103 = a5;
  v7 = ((int (__usercall *)@<eax>(NiDX9Renderer *@<ecx>, double@<st0>))g_Renderer->__vftable->super.GetDefaultRTGroup)(
         g_Renderer,
         st7_0);
  v8 = *(_DWORD *)(*a4 + 0x20);
  if ( v8 )
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x4C))(v8);
  else
    v9 = 0;
  v88 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x4C))(v7, 0);
  v10 = (double)v88;
  if ( v88 < 0 )
    v10 = v10 + flt_A2FC78;
  v11 = (double)v9;
  if ( v9 < 0 )
    v11 = v11 + flt_A2FC78;
  v12 = g_Renderer;
  GetDefaultRTGroup = g_Renderer->__vftable->super.GetDefaultRTGroup;
  v99 = v10 / v11;
  v14 = (int)GetDefaultRTGroup((NiRenderer *)v12);
  v15 = *(_DWORD *)(*a4 + 0x20);
  if ( v15 )
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x50))(v15);
  else
    v16 = 0;
  v89 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x50))(v14, 0);
  v17 = (double)v89;
  if ( v89 < 0 )
    v17 = v17 + flt_A2FC78;
  v18 = (double)v16;
  if ( v16 < 0 )
    v18 = v18 + flt_A2FC78;
  v19 = byte_B42E96 == 0;
  v101 = v17 / v18;
  v95 = 0.0;
  v96 = 1.0;
  v97 = 1.0;
  v20 = 1.0;
  v98 = 0.0;
  if ( !v19 )
  {
    v99 = 1.0;
    v101 = 1.0;
  }
  v19 = byte_B45F4C == 0;
  a1 = byte_B43075 != 0 ? 7 : 0;
  if ( v19 )
    v21 = flt_A47E78;
  else
    v21 = flt_A91B4C;
  *((float *)this + 0x48) = v21;
  if ( !*((_DWORD *)this + 0x40) )
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 7);
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x40, DefaultRenderTarget);
    v20 = 1.0;
  }
  if ( !*((_DWORD *)this + 0x41) )
  {
    v23 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 7);
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x41, v23);
    v20 = 1.0;
  }
  v24 = *a4;
  v95 = 0.0;
  v98 = 0.0;
  v96 = v20;
  v97 = v20;
  v25 = *(_DWORD *)(v24 + 0x20);
  if ( v25 )
  {
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x4C))(v25);
    v20 = 1.0;
  }
  else
  {
    v26 = 0;
  }
  v27 = (double)v26;
  if ( v26 < 0 )
    v27 = v27 + flt_A2FC78;
  v28 = *(_DWORD *)(*a4 + 0x20);
  v105 = dbl_A2FAA0 / v27;
  if ( v28 )
  {
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x50))(v28);
    v20 = 1.0;
  }
  else
  {
    v29 = 0;
  }
  v30 = (double)v29;
  if ( v29 < 0 )
    v30 = v30 + flt_A2FC78;
  v90 = dbl_A2FAA0 / v30;
  if ( a6 )
  {
    v96 = v20;
  }
  else
  {
    v96 = v99;
    v20 = v101;
  }
  v19 = dword_B42D78 == 0;
  v97 = v20;
  if ( v19 )
    v20 = 0.0;
  else
    ((void (__cdecl *)(int, int))dword_B42D78)(1, 1);
  v86 = v20;
  v31 = v86;
  v87 = 0;
  *((float *)this + 0x44) = v31;
  *((float *)this + 0x47) = *((float *)this + 0x47) + v31;
  *((float *)this + 0x49) = v31 + *((float *)this + 0x49);
  v19 = byte_B45F4C == 0;
  v110 = 0;
  if ( v19 )
  {
    v38 = a3;
LABEL_58:
    v41 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*a4);
    NiRenderer_BeginScene(kClear_NONE, v41);
    goto LABEL_59;
  }
  v32 = *a4;
  v33 = dword_B45FA8;
  if ( dword_B45FA8 != *a4 )
  {
    if ( v33 )
    {
      v34 = (void (__thiscall ***)(_DWORD, int))dword_B45FA8;
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
      {
        if ( v34 )
          (**v34)(v34, 1);
      }
    }
    dword_B45FA8 = v32;
    if ( v32 )
      InterlockedIncrement((volatile LONG *)(v32 + 4));
  }
  v35 = *((BSRenderedTexture **)this + 0x40);
  *((_DWORD *)this + 0x3D) = 7;
  v36 = BSRenderedTexture::UseTextureToRender(v35);
  NiRenderer_BeginScene((ClearFlags)a1, v36);
  v37 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v37->member.super.SceneState2 == 1)
    && v37->member.super.IsReady == 1 )
  {
    v37->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v37, (NiViewport *)&v95);
  }
  v38 = a3;
  sub_709C60(a3);
  NiRenderer_EndScene();
  if ( !byte_B45F4C )
    goto LABEL_58;
  v39 = BSRenderedTexture::UseTextureToRender(*((BSRenderedTexture **)this + 0x40));
  NiRenderer_BeginScene(kClear_NONE, v39);
  v40 = g_Renderer;
  if ( (g_Renderer->member.super.SceneState1 == 1 || v40->member.super.SceneState2 == 1)
    && v40->member.super.IsReady == 1 )
  {
    v40->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v40, (NiViewport *)&v95);
  }
LABEL_59:
  if ( byte_B45F4C )
  {
    if ( byte_B45F4D )
    {
      *((float *)this + 0x26) = 1.0;
      *((float *)this + 0x25) = 1.0;
      *((_DWORD *)this + 0x3D) = 0;
      shader = 0;
      *((float *)this + 0x27) = 0.0;
      *((float *)this + 0x28) = 0.0;
      ShaderDefinition = GetShaderDefinition(0x14u);
      if ( ShaderDefinition )
        shader = ShaderDefinition->shader;
      if ( !*((_DWORD *)this + 0x24) )
      {
        v43 = (float *)FormHeapAlloc(0x30u);
        v107 = 0.0;
        v44 = (int)v43;
        v45 = flt_A34BA0;
        v108 = flt_A34BA0;
        *v43 = 0.0;
        *(float *)&v109 = 0.0;
        v43[1] = v108;
        v107 = 1.0;
        v43[2] = *(float *)&v109;
        v108 = v45;
        v43[3] = v107;
        v43[4] = v108;
        *(float *)&v109 = 0.0;
        v43[5] = 0.0;
        v107 = 1.0;
        v46 = flt_A59E38;
        v43[6] = 1.0;
        v108 = v46;
        v43[7] = v108;
        *(float *)&v109 = 0.0;
        v43[8] = 0.0;
        v47 = v109;
        v108 = v46;
        v48 = v108;
        *(float *)(v44 + 0x24) = 0.0;
        *(float *)(v44 + 0x28) = v48;
        *(_DWORD *)(v44 + 0x2C) = v47;
        LODWORD(v107) = 0x10000;
        LODWORD(v108) = 2;
        v109 = 0x30002;
        v49 = FormHeapAlloc(0xCu);
        v50 = v107;
        v107 = 0.0;
        v51 = v108;
        v108 = 0.0;
        *(float *)v49 = v50;
        v52 = v109;
        *(float *)(v49 + 4) = v51;
        v53 = v108;
        v104 = (UInt16 *)v49;
        *(_DWORD *)(v49 + 8) = v52;
        *(float *)v106 = v107;
        *(float *)&v106[1] = v53;
        *(float *)&v106[2] = v107;
        *(float *)&v106[3] = v53;
        *(float *)&v106[4] = v107;
        *(float *)&v106[5] = v53;
        *(float *)&v106[6] = v107;
        *(float *)&v106[7] = v53;
        v91 = (void *)FormHeapAlloc(0x20u);
        qmemcpy(v91, v106, 0x20u);
        *(float *)&v54 = COERCE_FLOAT(FormHeapAlloc(0x58u));
        v107 = *(float *)&v54;
        LOBYTE(v110) = 1;
        if ( *(float *)&v54 == 0.0 )
          v55 = 0;
        else
          v55 = sub_71FB40(v54, 4, v44, 0, 0, (int)v91, 1, 0, 2u, v104);
        LOBYTE(v110) = 0;
        *(float *)&v56 = COERCE_FLOAT(FormHeapAlloc(0xC0u));
        v107 = *(float *)&v56;
        LOBYTE(v110) = 2;
        if ( *(float *)&v56 == 0.0 )
          v57 = 0;
        else
          v57 = NiTriShape_NiTriShape(v56, (NiScreenElementsData *)v55);
        LOBYTE(v110) = 0;
        *((_DWORD *)this + 0x24) = v57;
        *(float *)&v58 = COERCE_FLOAT(FormHeapAlloc(0x24u));
        v107 = *(float *)&v58;
        LOBYTE(v110) = 3;
        if ( *(float *)&v58 == 0.0 )
          v59 = 0;
        else
          v59 = (BSShaderProperty *)sub_482590(v58);
        v59->member.super.flags |= 0xC00u;
        v60 = *((NiNode **)this + 0x24);
        LOBYTE(v110) = 0;
        sub_405680(v60, v59);
        NiAVObject_InitializePropertyState(*((NiAVObject **)this + 0x24));
        NiAVObject_UpdateNiAVObject(*((NiAVObject **)this + 0x24), 0.0, 1);
        v38 = a3;
      }
      sub_4EC910(*((NiGeometry **)this + 0x24), shader);
      v61 = *(float *)&dword_B45F98 - flt_B45FAC;
      flt_B45F78 = flt_B45FB8 - v61;
      v92 = flt_B45FB0 + *(float *)&dword_B45F9C;
      flt_B45F88 = flt_B45FBC - v92;
      flt_B45F80 = v61;
      v107 = -flt_B45F88;
      v108 = flt_B45F78;
      sub_499020(&v107);
      v84 = g_Renderer;
      v62 = dbl_A563D0;
      v107 = v107 * v62;
      v108 = v62 * v108;
      flt_B45F7C = v107;
      flt_B45F8C = v108;
      flt_B45F90 = v92;
      v63 = *((_DWORD *)this + 0x24);
      if ( v63 )
        (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v63 + 0x84))(v63, v84);
      else
        sub_709C60(v38);
    }
  }
  else
  {
    *((_DWORD *)this + 0x3D) = 1;
    *((float *)this + 0x26) = WaterShader_RainSize;
    *((float *)this + 0x25) = WaterShader_RainSize;
    v64 = Double_To_SInt32((double)dword_B45F48 * *((float *)this + 0x47));
    *((float *)this + 0x47) = 0.0;
    if ( v64 > 0 )
    {
      v65 = v64;
      do
      {
        v93 = (double)rand() / dbl_A3D5A8;
        *((float *)this + 0x27) = v93 + v93 - dbl_A2F928;
        v94 = (double)rand() / dbl_A3D5A8;
        *((float *)this + 0x28) = v94 + v94 - dbl_A2F928;
        v66 = g_Renderer;
        if ( (g_Renderer->member.super.SceneState1 == 1 || v66->member.super.SceneState2 == 1)
          && v66->member.super.IsReady == 1 )
        {
          v66->__vftable->super.SetupScreenSpaceCamera((NiRenderer *)v66, (NiViewport *)&v95);
        }
        sub_709C60(v38);
        --v65;
      }
      while ( v65 );
    }
  }
  NiRenderer_EndScene();
  *((float *)this + 0x25) = v99;
  *((float *)this + 0x26) = v101;
  *((float *)this + 0x27) = v105 + 0.0;
  *((float *)this + 0x28) = v90 + 0.0;
  if ( byte_B45F4C )
    *((_DWORD *)this + 0x3D) = 2;
  else
    *((_DWORD *)this + 0x3D) = 3;
  v85 = 1;
  if ( *((float *)this + 0x48) < (double)*((float *)this + 0x49) )
  {
    v67 = 0;
    do
    {
      if ( v85 )
      {
        if ( !byte_B45F4C )
        {
LABEL_105:
          if ( v67 != *((_DWORD *)this + 0x41) )
          {
            if ( v67 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v67 + 4)) )
                (**(void (__thiscall ***)(int, int))v67)(v67, 1);
            }
            v67 = *((_DWORD *)this + 0x41);
            v87 = v67;
            if ( v67 )
              InterlockedIncrement((volatile LONG *)(v67 + 4));
          }
          v70 = *a4;
          v71 = *((_DWORD *)this + 0x41);
          if ( v71 != *a4 )
          {
            if ( v71 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v71 + 4)) )
                (**(void (__thiscall ***)(int, int))v71)(v71, 1);
            }
            *((_DWORD *)this + 0x41) = v70;
            if ( v70 )
              InterlockedIncrement((volatile LONG *)(v70 + 4));
          }
          *a4 = v67;
          goto LABEL_119;
        }
        v85 = 0;
      }
      else
      {
        if ( !byte_B45F4C )
          goto LABEL_105;
        if ( v67 != *((_DWORD *)this + 0x40) )
        {
          if ( v67 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v67 + 4)) )
              (**(void (__thiscall ***)(int, int))v67)(v67, 1);
          }
          v67 = *((_DWORD *)this + 0x40);
          v87 = v67;
          if ( v67 )
            InterlockedIncrement((volatile LONG *)(v67 + 4));
        }
        v68 = *a4;
        v69 = *((_DWORD *)this + 0x40);
        if ( v69 != *a4 )
        {
          if ( v69 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v69 + 4)) )
              (**(void (__thiscall ***)(int, int))v69)(v69, 1);
          }
          *((_DWORD *)this + 0x40) = v68;
          if ( v68 )
            InterlockedIncrement((volatile LONG *)(v68 + 4));
        }
        *a4 = v67;
      }
LABEL_119:
      *((float *)this + 0x49) = *((float *)this + 0x49) - *((float *)this + 0x48);
      v72 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)*a4);
      NiRenderer_BeginScene(kClear_NONE, v72);
      sub_709C60(a3);
      NiRenderer_EndScene();
    }
    while ( *((float *)this + 0x48) < (double)*((float *)this + 0x49) );
  }
  v73 = *a4;
  v74 = *((_DWORD *)this + 0x3F);
  if ( v74 != *a4 )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v74 + 4)) )
        (**(void (__thiscall ***)(int, int))v74)(v74, 1);
    }
    *((_DWORD *)this + 0x3F) = v73;
    if ( v73 )
      InterlockedIncrement((volatile LONG *)(v73 + 4));
  }
  v75 = flt_B45F44;
  if ( byte_B45F4C || v75 <= 0.0 || v75 >= 1.0 )
  {
    if ( *((_DWORD *)this + 0x43) )
    {
      if ( 1.0 == v75 )
      {
        sub_7C1EE0(g_textureManager, *((BSRenderedTexture **)this + 0x43));
        v79 = *((_DWORD *)this + 0x43);
        if ( v79 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v79 + 4)) )
            (**(void (__thiscall ***)(int, int))v79)(v79, 1);
          *((_DWORD *)this + 0x43) = 0;
        }
      }
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 0x43) )
    {
      v76 = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 7);
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x43, v76);
    }
    NiSmartPointer_Set__((Ni2DBuffer **)this + 0x42, *v103);
    v77 = *((BSRenderedTexture **)this + 0x43);
    *((_DWORD *)this + 0x3D) = 6;
    v78 = BSRenderedTexture::UseTextureToRender(v77);
    NiRenderer_BeginScene((ClearFlags)a1, v78);
    sub_709C60(a3);
    NiRenderer_EndScene();
    sub_55E2A0((int *)this + 0x3F, (int *)this + 0x43);
  }
  if ( dword_B45FB4 )
  {
    *((_DWORD *)this + 0x3D) = 5;
    v80 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)dword_B45FB4);
    NiRenderer_BeginScene((ClearFlags)a1, v80);
    sub_709C60(a3);
    NiRenderer_EndScene();
  }
  v81 = *a4;
  v95 = 0.0;
  result = dword_B45FA8;
  v19 = dword_B45FA8 == v81;
  v96 = 1.0;
  v97 = 1.0;
  v98 = 0.0;
  if ( !v19 )
  {
    if ( result )
    {
      v83 = (int (__thiscall ***)(_DWORD, int))result;
      result = InterlockedDecrement((volatile LONG *)(result + 4));
      if ( !result )
        result = (**v83)(v83, 1);
    }
    dword_B45FA8 = v81;
    if ( v81 )
      result = InterlockedIncrement((volatile LONG *)(v81 + 4));
  }
  v110 = 0xFFFFFFFF;
  if ( v87 )
  {
    result = InterlockedDecrement((volatile LONG *)(v87 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v87)(v87, 1);
  }
  return result;
}
