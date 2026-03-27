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

  v4 = (SceneGraph *)a1[1];
  cullingProcess = v4->cullingProcess;
  v6 = g_Renderer;
  NiCullingProcess_NiCullingProcess(&v22.super, cullingProcess->VisibleGeo);
  v22.super.vtbl = (NiCullingProcessVtbl *)&BSCullingProcess::`vftable';
  v22.unk90 = 0;
  accumulator = v6->member.super.accumulator;
  v22.unk9C = 0;
  v19 = 0;
  v20 = accumulator;
  if ( accumulator )
    InterlockedIncrement((volatile LONG *)accumulator + 1);
  LOBYTE(v22.unk9C) = 1;
  InitBSShaderAccumulator();
  v8 = g_Renderer;
  byte_B42CE3 = 1;
  if ( v8->member.super.SceneState1 || v8->member.super.SceneState2 )
  {
    if ( (v6->member.super.SceneState1 == 1 || v6->member.super.SceneState2 == 1) && v6->member.super.IsReady == 1 )
      v6->__vftable->super.Clear((NiRenderer *)v6, 0, 6);
  }
  else
  {
    if ( a4 )
    {
      v9 = BSRenderedTexture::UseTextureToRender(a4);
      NiRenderer_BeginScene(kClear_ZBUFFER|kClear_STENCIL, v9);
    }
    else
    {
      NiRenderer_BeginScene1(kClear_ZBUFFER|kClear_STENCIL, 0);
    }
    v19 = 1;
  }
  if ( 0.0 == v4->super.super.m_kWorldBound.Radius )
  {
    v18 = 0;
  }
  else
  {
    v18 = 1;
    if ( dword_B3F940 )
    {
      if ( *(_BYTE *)(dword_B3F940 + 0x1B0) )
        sub_701AD0();
      sub_404D60(0xFFFFFFFF);
    }
    sub_70C0B0(v4->camera, v4, cullingProcess, 0);
    v10 = dword_B3F940;
    if ( dword_B3F940 )
    {
      v11 = v10 + 0x190;
      InterlockedIncrement((volatile LONG *)(v10 + 0x190));
      ReleaseSemaphore(*(HANDLE *)(v11 + 8), 1, 0);
    }
  }
  if ( a4 )
  {
    NiRenderer_EndScene();
    NiRenderer_BeginScene1(kClear_ALL, 0);
    ShaderDefinition = GetShaderDefinition(0xCu);
    sub_7B4900(ShaderDefinition->shader, v6, (char)a4, 0);
  }
  else if ( v18 )
  {
    if ( (v6->member.super.SceneState1 == 1 || v6->member.super.SceneState2 == 1) && v6->member.super.IsReady == 1 )
      v6->__vftable->super.Clear((NiRenderer *)v6, 0, 6);
  }
  if ( (unsigned __int16)word_B1397A > 6u && (v13 = *(_DWORD *)(dword_B13974 + 0x18)) != 0 )
    sub_58FBA0(v13, a2, st6_0, 0.0, 0);
  else
    sub_5903E0(a2, (char)v4, 0.0, st6_0);
  if ( *((_BYTE *)a1 + 0x7C) )
    NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0);
  *((_BYTE *)a1 + 0x7C) = 0;
  v14 = *a1;
  SetCameraViewProj(v6, *(NiCamera **)(*a1 + 0xDC));
  if ( ObjectPtr )
  {
    if ( *(_DWORD *)(ObjectPtr + 0x20) == 2 )
      sub_410810(0, 1);
  }
  if ( dword_B3F940 )
  {
    if ( *(_BYTE *)(dword_B3F940 + 0x1B0) )
      sub_701AD0();
    sub_404D60(3u);
  }
  NiCullingProcess::Process(&v22.super, *(NiCamera **)(v14 + 0xDC), (NiAVObject *)v14, 0);
  v15 = dword_B3F940;
  v16 = dword_B3F940 == 0;
  byte_B42CE3 = 0;
  if ( !v16 )
  {
    v17 = v15 + 0x190;
    InterlockedIncrement((volatile LONG *)(v15 + 0x190));
    ReleaseSemaphore(*(HANDLE *)(v17 + 8), 1, 0);
  }
  if ( v19 )
    sub_7D7210();
  LOBYTE(v22.unk9C) = 0;
  if ( v20 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
      (**(void (__thiscall ***)(NiAccumulator *, int))v20)(v20, 1);
  }
  v22.unk9C = 0xFFFFFFFF;
  BSCullingProcess::~BSCullingProcess(&v22);
}
