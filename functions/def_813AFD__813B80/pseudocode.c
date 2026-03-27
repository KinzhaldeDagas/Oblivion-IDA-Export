// positive sp value has been detected, the output may be wrong!
LONG __userpurge def_813AFD@<eax>(
        unsigned __int16 a1@<ax>,
        int a2@<ebx>,
        void (__stdcall *a3)(volatile LONG *lpAddend)@<ebp>,
        int a4@<edi>,
        int a5)
{
  BSShaderAccumulator *inited; // esi
  BSShaderAccumulator *v6; // ebp
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // eax
  int v9; // eax
  LONG result; // eax
  int (__cdecl ***v11)(int); // esi
  int v12; // [esp-130h] [ebp-138h]
  float v13; // [esp-130h] [ebp-138h]
  int v14; // [esp-130h] [ebp-138h]
  int v15; // [esp-130h] [ebp-138h]
  int v16; // [esp-130h] [ebp-138h]
  int v17; // [esp-130h] [ebp-138h]
  int v18; // [esp-12Ch] [ebp-134h]
  float v19; // [esp-12Ch] [ebp-134h]
  int v20; // [esp-12Ch] [ebp-134h]
  float v21; // [esp-12Ch] [ebp-134h]
  int v22; // [esp-12Ch] [ebp-134h]
  int v23; // [esp-12Ch] [ebp-134h]
  int v24; // [esp-124h] [ebp-12Ch]
  int v25; // [esp-10Ch] [ebp-114h]
  int v26; // [esp-FCh] [ebp-104h]
  unsigned __int16 v27; // [esp-F8h] [ebp-100h]
  int v28; // [esp-CCh] [ebp-D4h]
  int v29; // [esp-9Ch] [ebp-A4h] BYREF
  int v30; // [esp-78h] [ebp-80h] BYREF
  NiAccumulator *accumulator; // [esp-74h] [ebp-7Ch]
  int v32; // [esp-6Ch] [ebp-74h]

  if ( (v27 & a1) == 0 )
  {
    NiAVObject_UpdateNiAVObject((NiAVObject *)a4, 0.0, 1);
    if ( LOWORD(dword_B42EAC) == 5 )
    {
      v9 = *(_DWORD *)(a4 + 0x144);
      if ( v9 )
      {
        sub_7EE390(0, v9, 1.0);
        NiSmartPointer_Set__((Ni2DBuffer **)(a4 + 0x140), *(Ni2DBuffer **)(*(_DWORD *)(a4 + 0x144) + 0x114));
        sub_813300((NiNode *)a4, *(int ****)(a4 + 0x144));
      }
    }
    else if ( *(_DWORD *)(a4 + 0x148) )
    {
      inited = InitBSShaderAccumulator();
      if ( inited )
        a3((volatile LONG *)inited + 1);
      if ( *((_DWORD *)inited + 1) == 1 )
        a3((volatile LONG *)inited + 1);
      accumulator = g_Renderer->member.super.accumulator;
      v6 = accumulator;
      if ( accumulator )
      {
        v12 = (int)accumulator + 4;
        ((void (*)(void))InterlockedIncrement)();
      }
      NiDX9Renderer::SetShaderAccumulator(g_Renderer, inited);
      (*(void (__thiscall **)(BSShaderAccumulator *, int))(*(_DWORD *)inited + 0x4C))(inited, a4);
      *((_BYTE *)inited + 0x21E0) = 1;
      NiCullingProcess_NiCullingProcess((NiCullingProcess *)&v30, 0);
      v32 = a4;
      NiCullingProcess::SetFrustum((NiCullingProcess *)&v30, (NiFrustum *)(a4 + 0xEC));
      sub_70C0B0((NiCamera *)a4, *(SceneGraph **)(a4 + 0x148), (NiCullingProcess *)&v30, 0);
      *((_BYTE *)inited + 0x21E1) = 1;
      (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)inited + 0x50))(inited);
      NiDX9Renderer::SetShaderAccumulator(g_Renderer, v6);
      BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v30);
      if ( v6 )
      {
        if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v6 + 4) )
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v6)(v6, 1);
      }
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)inited + 4) )
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))inited)(inited, 1);
      a2 = v12;
    }
  }
  j_NiTPointerList::FreeAllNodes(*(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C));
  ShaderDefinition = GetShaderDefinition(0xCu);
  if ( ShaderDefinition )
  {
    shader = ShaderDefinition->shader;
    if ( shader )
      AddImageSpaceShader(*(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C), shader);
  }
  switch ( a2 )
  {
    case 0:
      v13 = flt_B3F9A4 * dbl_A65A18 / dbl_A3F418;
      *(float *)&v18 = cos(v13);
      *(float *)&v14 = sin(v13);
      dword_B474CC = v18;
      dword_B474D0 = v14;
      *(float *)&dword_B474D4 = 0.0;
      *(float *)&v25 = -*(float *)&v14;
      *(float *)&dword_B474D8 = 0.0;
      dword_B474DC = v25;
      dword_B474E0 = v18;
      *(float *)&dword_B474E4 = 0.0;
      *(float *)&dword_B474E8 = 0.0;
      ImageShaderList::ProcessImageSpaceShader(
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        dword_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break;
    case 1:
      v19 = flt_B3F9A4 * dbl_A948E0 / dbl_A3F418;
      *(float *)&v15 = cos(v19);
      *(float *)&v20 = sin(v19);
      dword_B474CC = v15;
      dword_B474D0 = v20;
      *(float *)&dword_B474D4 = 0.0;
      *(float *)&v28 = -*(float *)&v20;
      *(float *)&dword_B474D8 = 0.0;
      dword_B474DC = v28;
      dword_B474E0 = v15;
      *(float *)&dword_B474E4 = 0.0;
      *(float *)&dword_B474E8 = 0.0;
      ImageShaderList::ProcessImageSpaceShader(
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        dword_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break;
    case 2:
      v21 = flt_B3F9A4 * dbl_A3F418 / dbl_A3F418;
      *(float *)&v16 = cos(v21);
      *(float *)&v22 = sin(v21);
      dword_B474CC = v16;
      dword_B474D0 = v22;
      *(float *)&dword_B474D4 = 0.0;
      *(float *)&v26 = -*(float *)&v22;
      *(float *)&dword_B474D8 = 0.0;
      dword_B474DC = v26;
      dword_B474E0 = v16;
      *(float *)&dword_B474E4 = 0.0;
      *(float *)&dword_B474E8 = 0.0;
      ImageShaderList::ProcessImageSpaceShader(
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        dword_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break;
    case 3:
      *(float *)&v23 = cos(0.0);
      *(float *)&v17 = sin(0.0);
      dword_B474CC = v23;
      dword_B474D0 = v17;
      *(float *)&dword_B474D4 = 0.0;
      *(float *)&v24 = -*(float *)&v17;
      *(float *)&dword_B474D8 = 0.0;
      dword_B474DC = v24;
      dword_B474E0 = v23;
      *(float *)&dword_B474E4 = 0.0;
      *(float *)&dword_B474E8 = 0.0;
      ImageShaderList::ProcessImageSpaceShader(
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        dword_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break;
    case 5:
      ImageShaderList::ProcessImageSpaceShader(
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        dword_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break;
    default:
      break;
  }
  NiRenderer_EndScene();
  if ( a2 + 1 < 6 )
    JUMPOUT(0x813A29);
  result = ((int (__thiscall *)(NiDX9Renderer *, int *))dword_B43104->__vftable->super.SetClearColor4)(
             dword_B43104,
             &v29);
  v11 = (int (__cdecl ***)(int))dword_B474EC;
  if ( dword_B474EC )
  {
    result = ((int (__cdecl *)(_DWORD))InterlockedDecrement)(v11 + 1);
    if ( !result )
    {
      if ( v11 )
        result = (**v11)(1);
    }
    dword_B474EC = 0;
  }
  return result;
}
