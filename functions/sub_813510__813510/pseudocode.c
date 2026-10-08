// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused cubemap route: temporary base process with null VisibleGeo is constructed at 0x813795; selected face camera and alternate root+0x148 pass through 0x70C0B0 at 0x8137C5. Not the live world process. Preserve face-specific visibility and accumulator lifetime.
int __thiscall BSCubeMapCamera_RenderMode0_ShadowObjectListFaces(BSCubeMapCamera_ShadowLayout *self)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  NiDX9Renderer *v5; // ecx
  signed int v6; // edi
  unsigned __int16 v7; // cx
  NiDX9Renderer *v8; // ecx
  char *renderTarget_140; // eax
  int v10; // esi
  int *v11; // eax
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  void (__stdcall *v15)(volatile LONG *); // ebx
  NiRenderTargetGroup *v16; // eax
  __int16 v17; // ax
  BSShaderAccumulator *inited; // eax
  BSShaderAccumulator *v19; // esi
  bool v20; // zf
  volatile LONG *v21; // ebx
  NiAccumulator *v22; // edi
  NiAccumulator **p_accumulator; // eax
  NiAccumulator *v24; // edi
  void *currentShadowLight_144; // eax
  volatile LONG *v27; // ebx
  volatile LONG *v28; // esi
  int v29; // [esp+1Ch] [ebp-D8h]
  NiAccumulator **v30; // [esp+20h] [ebp-D4h]
  NiAccumulator **v31; // [esp+20h] [ebp-D4h]
  signed int v32; // [esp+24h] [ebp-D0h]
  unsigned __int16 v33; // [esp+28h] [ebp-CCh]
  int v34; // [esp+2Ch] [ebp-C8h] BYREF
  _DWORD v35[4]; // [esp+30h] [ebp-C4h] BYREF
  float v36[5]; // [esp+40h] [ebp-B4h] BYREF
  NiAccumulator *accumulator; // [esp+54h] [ebp-A0h]
  _BYTE cullingProcess[156]; // [esp+58h] [ebp-9Ch] BYREF

  v2 = dword_B25AD4; /*0x813544*/
  v3 = dword_B25AD8; /*0x81354a*/
  v35[0] = dword_B25AD0; /*0x813550*/
  v4 = dword_B25ADC; /*0x813554*/
  v35[1] = v2; /*0x813559*/
  v5 = unk_B43104; /*0x81355d*/
  v35[2] = v3; /*0x813563*/
  v35[3] = v4; /*0x813567*/
  v6 = 0; /*0x813574*/
  v29 = 0; /*0x813577*/
  v33 = 0; /*0x81357b*/
  ((void (__thiscall *)(NiDX9Renderer *, _DWORD *))v5->__vftable->super.GetClearColor)(v5, v35); /*0x81357f*/
  if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 )// In render mode 5, read the current ShadowSceneLight face/status mask at camera+0x144->+0x118 and use the native shadow clear color. /*0x813589*/
  {
    v7 = *((_WORD *)self->currentShadowLight_144 + 0x8C); /*0x813597*/
    v36[0] = flt_A3765C; /*0x81359e*/
    v36[1] = v36[0]; /*0x8135a2*/
    v33 = v7; /*0x8135a6*/
    v8 = unk_B43104; /*0x8135aa*/
    v36[2] = v36[0]; /*0x8135b0*/
    v36[3] = 1.0; /*0x8135ba*/
    ((void (__thiscall *)(NiDX9Renderer *, float *))v8->__vftable->super.SetClearColor4)(v8, v36); /*0x8135c4*/
  }
  v32 = 0; /*0x8135c6*/
  do /*0x81388f*/
  {
    BSCubeMapCamera_OrientFace(self, v6);       // Orient the cube camera for the current face index. /*0x8135cd*/
    renderTarget_140 = (char *)self->renderTarget_140; /*0x8135d2*/
    if ( renderTarget_140 ) /*0x8135da*/
    {
      v10 = v34; /*0x8135dc*/
      v11 = (int *)(renderTarget_140 + 0x20); /*0x8135e0*/
    }
    else
    {
      v10 = 0; /*0x8135e5*/
      v29 |= 1u; /*0x8135e7*/
      v34 = 0; /*0x8135ec*/
      v11 = &v34; /*0x8135f0*/
    }
    v12 = *v11; /*0x8135f9*/
    if ( (v29 & 1) != 0 ) /*0x8135fb*/
    {
      v29 &= ~1u; /*0x8135fd*/
      if ( v10 ) /*0x813604*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x81360a*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x81361c*/
      }
    }
    *(_DWORD *)(v12 + 0x40) = v6;               // Select the current face index in the active cube render surface. /*0x81361e*/
    v13 = *(_DWORD *)(v12 + 0x30); /*0x813621*/
    if ( v13 == *(_DWORD *)(v12 + 4 * v6 + 0x44) ) /*0x813628*/
      goto LABEL_17; /*0x813628*/
    if ( v13 ) /*0x81362c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x813632*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x813648*/
    }
    v14 = *(_DWORD *)(v12 + 4 * v6 + 0x44); /*0x81364a*/
    *(_DWORD *)(v12 + 0x30) = v14; /*0x813650*/
    if ( !v14 ) /*0x813653*/
    {
LABEL_17:
      v15 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x813663*/
    }
    else
    {
      v15 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x813655*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x81365f*/
    }
    v16 = BSRenderedTexture::UseTextureToRender((BSRenderedTexture *)self->renderTarget_140);// Resolve BSCubeMapCamera+0x140 to the active render-target group for this face. /*0x81366f*/
    NiRenderer_BeginScene(kClear_ALL, v16);     // Begin one render scene for the current cube face with kClear_ALL. /*0x813677*/
    v17 = 0; /*0x81367f*/
    switch ( v6 ) /*0x813686*/
    {
      case 0: /*0x813686*/
        v17 = 1; /*0x813694*/
        break; /*0x813699*/
      case 1: /*0x813686*/
        v17 = 2; /*0x81368d*/
        break; /*0x813692*/
      case 2: /*0x813686*/
        v17 = 4; /*0x8136a2*/
        break; /*0x8136a7*/
      case 3: /*0x813686*/
        v17 = 8; /*0x81369b*/
        break; /*0x8136a0*/
      case 4: /*0x813686*/
        v17 = 0x10; /*0x8136b0*/
        break; /*0x8136b0*/
      case 5: /*0x813686*/
        v17 = 0x20; /*0x8136a9*/
        break; /*0x8136ae*/
      default:
        break;
    }
    if ( (v33 & (unsigned __int16)v17) == 0 )   // Skip drawing this face when its bit is set in the ShadowSceneLight+0x118 failure/status mask. /*0x8136bc*/
    {
      NiAVObject_UpdateNiAVObject((NiAVObject *)self, 0.0, 1); /*0x8136cc*/
      if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x8136d9*/
      {
        currentShadowLight_144 = self->currentShadowLight_144;// Mode-5 face rendering requires BSCubeMapCamera+0x144 currentShadowLight. /*0x8138c1*/
        if ( currentShadowLight_144 ) /*0x8138c9*/
        {
          OB_BSShader_DispatchLightConstantUpdate_010201A0(0, currentShadowLight_144, 1.0);// Upload the current ShadowSceneLight to the native shader-light constant path before category/object-list drawing. /*0x8138d4*/
          v27 = *((volatile LONG **)self->currentShadowLight_144 + 0x45);// Synchronize BSCubeMapCamera+0x140 to currentShadowLight+0x114 before object-list rendering. /*0x8138df*/
          v28 = (volatile LONG *)self->renderTarget_140; /*0x8138e5*/
          if ( v28 != v27 ) /*0x8138f0*/
          {
            if ( v28 ) /*0x8138f4*/
            {
              if ( !InterlockedDecrement(v28 + 1) ) /*0x8138fa*/
                (**(void (__thiscall ***)(void *, int))v28)((void *)v28, 1); /*0x813910*/
            }
            self->renderTarget_140 = (void *)v27; /*0x813914*/
            if ( v27 ) /*0x81391a*/
              InterlockedIncrement(v27 + 1); /*0x813920*/
          }
          RenderShadowCategoryObjectListOffscreen((NiNode *)self, (int ***)self->currentShadowLight_144);// Render the current ShadowSceneLight's engine-owned +0xE8 category/object list through the offscreen culling/accumulator helper. /*0x81392f*/
        }
      }
      else if ( self->alternateSceneRoot_148 ) /*0x8136df*/
      {
        inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x8136ec*/
        v19 = inited; /*0x8136f1*/
        LODWORD(v36[4]) = inited; /*0x8136f5*/
        if ( inited ) /*0x8136f9*/
          v15((volatile LONG *)inited + 1); /*0x8136ff*/
        v20 = *((_DWORD *)v19 + 1) == 1; /*0x813701*/
        *(_DWORD *)&cullingProcess[0x98] = 0; /*0x813708*/
        if ( v20 ) /*0x813713*/
          v15((volatile LONG *)v19 + 1); /*0x813716*/
        accumulator = renderer->member.super.accumulator; /*0x813723*/
        v21 = (volatile LONG *)accumulator; /*0x81371e*/
        if ( accumulator ) /*0x813727*/
          InterlockedIncrement((volatile LONG *)accumulator + 1); /*0x81372d*/
        v22 = renderer->member.super.accumulator; /*0x813738*/
        p_accumulator = &renderer->member.super.accumulator; /*0x81373b*/
        cullingProcess[0x98] = 1; /*0x813740*/
        v30 = p_accumulator; /*0x813748*/
        if ( v22 != v19 ) /*0x81374c*/
        {
          if ( v22 ) /*0x813750*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v22 + 1) ) /*0x813756*/
              (**(void (__thiscall ***)(NiAccumulator *, int))v22)(v22, 1); /*0x81376c*/
          }
          *v30 = v19; /*0x813776*/
          InterlockedIncrement((volatile LONG *)v19 + 1); /*0x813778*/
        }
        (*(void (__thiscall **)(BSShaderAccumulator *, BSCubeMapCamera_ShadowLayout *))(*(_DWORD *)v19 + 0x4C))( /*0x813786*/
          v19,
          self);
        *((_BYTE *)v19 + 0x21E0) = 1; /*0x81378e*/
        NiCullingProcess_NiCullingProcess((NiCullingProcess *)cullingProcess, 0); /*0x813795*/
        cullingProcess[0x98] = 2; /*0x8137a5*/
        *(_DWORD *)&cullingProcess[0xC] = self; /*0x8137ad*/
        NiCullingProcess::SetFrustum((NiCullingProcess *)cullingProcess, (NiFrustum *)&self->base_000[0xEC]); /*0x8137b1*/
        NiRenderer_CullAndRenderScene( /*0x8137c5*/
          (NiCamera *)self,
          (NiAVObject *)self->alternateSceneRoot_148,
          (NiCullingProcess *)cullingProcess,
          0);
        *((_BYTE *)v19 + 0x21E1) = 1; /*0x8137ca*/
        (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v19 + 0x50))(v19); /*0x8137db*/
        v24 = renderer->member.super.accumulator; /*0x8137e2*/
        v31 = &renderer->member.super.accumulator; /*0x8137ea*/
        if ( v24 != (NiAccumulator *)v21 ) /*0x8137ee*/
        {
          if ( v24 ) /*0x8137f2*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v24 + 1) ) /*0x8137f8*/
              (**(void (__thiscall ***)(NiAccumulator *, int))v24)(v24, 1); /*0x81380e*/
          }
          *v31 = (NiAccumulator *)v21; /*0x813816*/
          if ( v21 ) /*0x813818*/
            InterlockedIncrement(v21 + 1); /*0x81381e*/
        }
        cullingProcess[0x98] = 1; /*0x813828*/
        BSCullingProcess::~BSCullingProcess((BSCullingProcess *)cullingProcess); /*0x813830*/
        cullingProcess[0x98] = 0; /*0x813837*/
        if ( v21 ) /*0x81383f*/
        {
          if ( !InterlockedDecrement(v21 + 1) ) /*0x813845*/
            (**(void (__thiscall ***)(volatile LONG *, int))v21)(v21, 1); /*0x813857*/
        }
        *(_DWORD *)&cullingProcess[0x98] = 0xFFFFFFFF; /*0x81385d*/
        if ( !InterlockedDecrement((volatile LONG *)v19 + 1) ) /*0x813868*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v19)(v19, 1); /*0x81387a*/
        v6 = v32; /*0x81387c*/
      }
    }
    NiRenderer_EndScene();                      // End the current cube-face render scene. /*0x813880*/
    v32 = ++v6; /*0x81388b*/
  }
  while ( v6 < 6 );                             // Loop until all six cube faces have been processed, then restore the saved clear color. /*0x81388f*/
  return ((int (__thiscall *)(NiDX9Renderer *, _DWORD *))unk_B43104->__vftable->super.SetClearColor4)(unk_B43104, v35); /*0x8138a7*/
}
