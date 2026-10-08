// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused route decode: constructs stack BSCullingProcess at 0x57F1B8..0x57F1C7 using a1[1]->process.VisibleGeo, then disables its frustum byte. First call 0x57F2C3 uses a1[1] scene and that scene's own process. Second call 0x57F3F3 DIRECTLY calls base Process on temporary BSCullingProcess with *a1 scene/camera. CULLING Process-vtable scope and exact-world-owner tests do not authorize its second traversal. This is not evidence of a main-world rendering leak; preserve UI/other-view semantics.
void __userpurge MiscPass(int *a1@<ecx>, double a2@<st2>, double st6_0@<st1>, BSRenderedTexture *a4)
{
  SceneGraph *v4; // ebp
  NiCullingProcess *cullingProcess; // esi
  NiDX9Renderer *v6; // edi
  NiAccumulator *accumulator; // eax
  NiDX9Renderer *v8; // ecx
  NiRenderTargetGroup *v9; // eax
  int v10; // eax
  int v11; // esi
  ShaderDefinition *ShaderDefinition; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  bool v16; // zf
  int v17; // esi
  char v18; // [esp+2Eh] [ebp-AEh]
  char v19; // [esp+2Fh] [ebp-ADh]
  NiAccumulator *v20; // [esp+34h] [ebp-A8h]
  BSCullingProcess v22; // [esp+3Ch] [ebp-A0h] BYREF

  v4 = (SceneGraph *)a1[1]; /*0x57f1a1*/
  cullingProcess = v4->cullingProcess; /*0x57f1a4*/
  v6 = renderer; /*0x57f1ad*/
  NiCullingProcess_NiCullingProcess(&v22.super, cullingProcess->VisibleGeo); /*0x57f1b8*/
  v22.super.vtbl = (NiCullingProcessVtbl *)&BSCullingProcess::`vftable'; /*0x57f1bf*/
  v22.useFrustumCull = 0; /*0x57f1c7*/
  accumulator = v6->member.super.accumulator; /*0x57f1ce*/
  v22.unk9C = 0; /*0x57f1d3*/
  v19 = 0; /*0x57f1da*/
  v20 = accumulator; /*0x57f1de*/
  if ( accumulator ) /*0x57f1e2*/
    InterlockedIncrement((volatile LONG *)accumulator + 1); /*0x57f1e8*/
  LOBYTE(v22.unk9C) = 1; /*0x57f1ee*/
  BSShaderAccumulator_GetOrCreateGlobal(); /*0x57f1f6*/
  v8 = renderer; /*0x57f1fb*/
  unk_B42CE3 = 1; /*0x57f201*/
  if ( v8->member.super.SceneState1 || v8->member.super.SceneState2 ) /*0x57f212*/
  {
    if ( (v6->member.super.SceneState1 == 1 || v6->member.super.SceneState2 == 1) && v6->member.super.IsReady == 1 ) /*0x57f269*/
      v6->__vftable->super.Clear((NiRenderer *)v6, 0, 6); /*0x57f278*/
  }
  else
  {
    if ( a4 ) /*0x57f223*/
    {
      v9 = BSRenderedTexture::UseTextureToRender(a4); /*0x57f225*/
      NiRenderer_BeginScene(kClear_ZBUFFER|kClear_STENCIL, v9); /*0x57f22d*/
    }
    else
    {
      NiRenderer_BeginScene1(kClear_ZBUFFER|kClear_STENCIL, 0); /*0x57f23f*/
    }
    v19 = 1; /*0x57f235*/
  }
  if ( 0.0 == v4->super.super.m_kWorldBound.Radius ) /*0x57f28c*/
  {
    v18 = 0; /*0x57f320*/
  }
  else
  {
    v18 = 1; /*0x57f299*/
    if ( g_NiParallelUpdateTaskManager ) /*0x57f292*/
    {                                           // 3DTheft decode 2026-05-16: MiscPass services pending manager byte +0x1B0 via SubmitSignalTask before culling, then waits on the manager fence.
      if ( *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) ) /*0x57f2a0*/
        NiParallelUpdateTaskManager_SubmitSignalTask(); /*0x57f2aa*/
      NiParallelUpdateTaskManager_WaitForSignal(0xFFFFFFFF); /*0x57f2b1*/
    }
    NiRenderer_CullAndRenderScene(v4->camera, v4, cullingProcess, 0); /*0x57f2c3*/
    v10 = g_NiParallelUpdateTaskManager; /*0x57f2c8*/
    if ( g_NiParallelUpdateTaskManager ) /*0x57f2c8*/
    {
      v11 = v10 + 0x190;                        // 3DTheft decode 2026-05-16: after culling, increments manager +0x190 and releases semaphore at +0x198. /*0x57f2d4*/
      InterlockedIncrement((volatile LONG *)(v10 + 0x190)); /*0x57f2db*/
      ReleaseSemaphore(*(HANDLE *)(v11 + 8), 1, 0); /*0x57f2e8*/
    }
  }
  if ( a4 ) /*0x57f2f9*/
  {
    NiRenderer_EndScene(); /*0x57f2fb*/
    NiRenderer_BeginScene1(kClear_ALL, 0); /*0x57f303*/
    ShaderDefinition = GetShaderDefinition(0xCu); /*0x57f30a*/
    sub_7B4900(ShaderDefinition->shader, v6, (int)a4, 0); /*0x57f316*/
  }
  else if ( v18 ) /*0x57f32a*/
  {
    if ( (v6->member.super.SceneState1 == 1 || v6->member.super.SceneState2 == 1) && v6->member.super.IsReady == 1 ) /*0x57f347*/
      v6->__vftable->super.Clear((NiRenderer *)v6, 0, 6); /*0x57f356*/
  }
  if ( (unsigned __int16)word_B1397A > 6u && (v13 = *(_DWORD *)(dword_B13974 + 0x18)) != 0 ) /*0x57f36c*/
    sub_58FBA0(v13, a2, st6_0, 0.0, 0); /*0x57f36f*/
  else
    sub_5903E0(a2, 0.0, st6_0); /*0x57f376*/
  if ( *((_BYTE *)a1 + 0x7C) ) /*0x57f37f*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0); /*0x57f38d*/
  *((_BYTE *)a1 + 0x7C) = 0; /*0x57f392*/
  v14 = *a1; /*0x57f395*/
  SetCameraViewProj(v6, *(NiCamera **)(*a1 + 0xDC)); /*0x57f3a0*/
  if ( MEMORY[0xB33428] ) /*0x57f3a5*/
  {
    if ( *(_DWORD *)(MEMORY[0xB33428] + 0x20) == 2 ) /*0x57f3b7*/
      sub_410810(0, 1); /*0x57f3bc*/
  }
  if ( g_NiParallelUpdateTaskManager ) /*0x57f3c4*/
  {                                             // 3DTheft decode 2026-05-16: second MiscPass culling boundary repeats pending-signal service and short wait before NiCullingProcess::Process.
    if ( *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) ) /*0x57f3cd*/
      NiParallelUpdateTaskManager_SubmitSignalTask(); /*0x57f3d7*/
    NiParallelUpdateTaskManager_WaitForSignal(3u); /*0x57f3de*/
  }
  NiCullingProcess::Process(&v22.super, *(NiCamera **)(v14 + 0xDC), (NiAVObject *)v14, 0); /*0x57f3f3*/
  v15 = g_NiParallelUpdateTaskManager; /*0x57f3f8*/
  v16 = g_NiParallelUpdateTaskManager == 0; /*0x57f3fd*/
  unk_B42CE3 = 0; /*0x57f3ff*/
  if ( !v16 ) /*0x57f405*/
  {
    v17 = v15 + 0x190;                          // 3DTheft decode 2026-05-16: second MiscPass culling boundary releases manager semaphore by incrementing +0x190 and ReleaseSemaphore(+0x198). /*0x57f407*/
    InterlockedIncrement((volatile LONG *)(v15 + 0x190)); /*0x57f40e*/
    ReleaseSemaphore(*(HANDLE *)(v17 + 8), 1, 0); /*0x57f41b*/
  }
  if ( v19 ) /*0x57f427*/
    sub_7D7210(); /*0x57f429*/
  LOBYTE(v22.unk9C) = 0; /*0x57f434*/
  if ( v20 ) /*0x57f43b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v20 + 1) ) /*0x57f441*/
      (**(void (__thiscall ***)(NiAccumulator *, int))v20)(v20, 1); /*0x57f453*/
  }
  v22.unk9C = 0xFFFFFFFF; /*0x57f459*/
  BSCullingProcess::~BSCullingProcess(&v22); /*0x57f464*/
}
