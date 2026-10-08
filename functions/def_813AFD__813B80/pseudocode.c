// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused alternate cubemap route: temporary base process constructed at 0x813C2F, camera/frustum installed, alternate root at camera+0x148 rendered through 0x70C0B0 at 0x813C68. It is not a main-world-process traversal; same geometry may legitimately contribute to a visible cubemap.
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
  void *v9; // eax
  LONG result; // eax
  float v11; // esi
  int v12; // [esp-130h] [ebp-138h]
  float v13; // [esp-130h] [ebp-138h]
  float v14; // [esp-130h] [ebp-138h]
  float v15; // [esp-130h] [ebp-138h]
  float v16; // [esp-130h] [ebp-138h]
  float v17; // [esp-130h] [ebp-138h]
  float v18; // [esp-12Ch] [ebp-134h]
  float v19; // [esp-12Ch] [ebp-134h]
  float v20; // [esp-12Ch] [ebp-134h]
  float v21; // [esp-12Ch] [ebp-134h]
  float v22; // [esp-12Ch] [ebp-134h]
  float v23; // [esp-12Ch] [ebp-134h]
  float v24; // [esp-124h] [ebp-12Ch]
  float v25; // [esp-10Ch] [ebp-114h]
  float v26; // [esp-FCh] [ebp-104h]
  unsigned __int16 v27; // [esp-F8h] [ebp-100h]
  float v28; // [esp-CCh] [ebp-D4h]
  int v29; // [esp-9Ch] [ebp-A4h] BYREF
  int v30; // [esp-78h] [ebp-80h] BYREF
  NiAccumulator *accumulator; // [esp-74h] [ebp-7Ch]
  int v32; // [esp-6Ch] [ebp-74h]

  if ( (v27 & a1) == 0 ) /*0x813b87*/
  {
    NiAVObject_UpdateNiAVObject((NiAVObject *)a4, 0.0, 1); /*0x813b97*/
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 5 ) /*0x813ba4*/
    {
      v9 = *(void **)(a4 + 0x144); /*0x813d25*/
      if ( v9 ) /*0x813d2d*/
      {
        OB_BSShader_DispatchLightConstantUpdate_010201A0(0, v9, 1.0); /*0x813d38*/
        NiSmartPointer_Set__((Ni2DBuffer **)(a4 + 0x140), *(Ni2DBuffer **)(*(_DWORD *)(a4 + 0x144) + 0x114)); /*0x813d53*/
        RenderShadowCategoryObjectListOffscreen((NiNode *)a4, *(int ****)(a4 + 0x144)); /*0x813d61*/
      }
    }
    else if ( *(_DWORD *)(a4 + 0x148) ) /*0x813baa*/
    {
      inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x813bbc*/
      if ( inited ) /*0x813bc4*/
        a3((volatile LONG *)inited + 1); /*0x813bca*/
      if ( *((_DWORD *)inited + 1) == 1 ) /*0x813bde*/
        a3((volatile LONG *)inited + 1); /*0x813be1*/
      accumulator = renderer->member.super.accumulator; /*0x813bee*/
      v6 = accumulator; /*0x813be9*/
      if ( accumulator ) /*0x813bf5*/
      {
        v12 = (int)accumulator + 4; /*0x813bfa*/
        ((void (*)(void))InterlockedIncrement)(); /*0x813bfb*/
      }
      NiDX9Renderer::SetShaderAccumulator(renderer, inited); /*0x813c10*/
      (*(void (__thiscall **)(BSShaderAccumulator *, int))(*(_DWORD *)inited + 0x4C))(inited, a4); /*0x813c1d*/
      *((_BYTE *)inited + 0x21E0) = 1; /*0x813c28*/
      NiCullingProcess_NiCullingProcess((NiCullingProcess *)&v30, 0); /*0x813c2f*/
      v32 = a4; /*0x813c4a*/
      NiCullingProcess::SetFrustum((NiCullingProcess *)&v30, (NiFrustum *)(a4 + 0xEC)); /*0x813c51*/
      NiRenderer_CullAndRenderScene((NiCamera *)a4, *(NiAVObject **)(a4 + 0x148), (NiCullingProcess *)&v30, 0); /*0x813c68*/
      *((_BYTE *)inited + 0x21E1) = 1; /*0x813c6d*/
      (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)inited + 0x50))(inited); /*0x813c7e*/
      NiDX9Renderer::SetShaderAccumulator(renderer, v6); /*0x813c87*/
      BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v30); /*0x813c9b*/
      if ( v6 ) /*0x813caa*/
      {
        if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)v6 + 4) ) /*0x813cb0*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v6)(v6, 1); /*0x813cc3*/
      }
      if ( !((int (__cdecl *)(char *))InterlockedDecrement)((char *)inited + 4) ) /*0x813cd1*/
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))inited)(inited, 1); /*0x813ce3*/
      a2 = v12; /*0x813ce5*/
    }
  }
  j_NiTPointerList::FreeAllNodes(*(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C)); /*0x813cef*/
  ShaderDefinition = GetShaderDefinition(0xCu); /*0x813cf6*/
  if ( ShaderDefinition ) /*0x813d00*/
  {
    shader = ShaderDefinition->shader; /*0x813d02*/
    if ( shader ) /*0x813d07*/
      AddImageSpaceShader(*(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C), shader); /*0x813d10*/
  }
  switch ( a2 ) /*0x813d1e*/
  {
    case 0: /*0x813d1e*/
      v13 = unk_B3F9A4 * dbl_A65A18 / dbl_A3F418; /*0x813d7a*/
      v18 = cos(v13); /*0x813d87*/
      v14 = sin(v13); /*0x813d9f*/
      flt_B474CC[0] = v18; /*0x813dbe*/
      flt_B474CC[1] = v14; /*0x813dcb*/
      flt_B474CC[2] = 0.0; /*0x813dea*/
      v25 = -v14; /*0x813def*/
      flt_B474CC[3] = 0.0; /*0x813df3*/
      flt_B474CC[4] = v25; /*0x813e05*/
      flt_B474CC[5] = v18; /*0x813e0f*/
      flt_B474CC[6] = 0.0; /*0x813e24*/
      flt_B474CC[7] = 0.0; /*0x813e2a*/
      ImageShaderList::ProcessImageSpaceShader( /*0x813e3e*/
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        unk_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break; /*0x813e3e*/
    case 1: /*0x813d1e*/
      v19 = unk_B3F9A4 * dbl_A948E0 / dbl_A3F418; /*0x813e55*/
      v15 = cos(v19); /*0x813e62*/
      v20 = sin(v19); /*0x813e77*/
      flt_B474CC[0] = v15; /*0x813e8d*/
      flt_B474CC[1] = v20; /*0x813e97*/
      flt_B474CC[2] = 0.0; /*0x813ead*/
      v28 = -v20; /*0x813eb2*/
      flt_B474CC[3] = 0.0; /*0x813eb6*/
      flt_B474CC[4] = v28; /*0x813ec8*/
      flt_B474CC[5] = v15; /*0x813ed2*/
      flt_B474CC[6] = 0.0; /*0x813ef3*/
      flt_B474CC[7] = 0.0; /*0x813ef9*/
      ImageShaderList::ProcessImageSpaceShader( /*0x813f0d*/
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        unk_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break; /*0x813f0d*/
    case 2: /*0x813d1e*/
      v21 = unk_B3F9A4 * dbl_A3F418 / dbl_A3F418; /*0x813f22*/
      v16 = cos(v21); /*0x813f2f*/
      v22 = sin(v21); /*0x813f44*/
      flt_B474CC[0] = v16; /*0x813f5a*/
      flt_B474CC[1] = v22; /*0x813f64*/
      flt_B474CC[2] = 0.0; /*0x813f7a*/
      v26 = -v22; /*0x813f7f*/
      flt_B474CC[3] = 0.0; /*0x813f83*/
      flt_B474CC[4] = v26; /*0x813f95*/
      flt_B474CC[5] = v16; /*0x813f9f*/
      flt_B474CC[6] = 0.0; /*0x813fb4*/
      flt_B474CC[7] = 0.0; /*0x813fba*/
      ImageShaderList::ProcessImageSpaceShader( /*0x813fce*/
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        unk_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break; /*0x813fce*/
    case 3: /*0x813d1e*/
      v23 = cos(0.0); /*0x813fda*/
      v17 = sin(0.0); /*0x813ff0*/
      flt_B474CC[0] = v23; /*0x81400f*/
      flt_B474CC[1] = v17; /*0x81401c*/
      flt_B474CC[2] = 0.0; /*0x81403b*/
      v24 = -v17; /*0x814040*/
      flt_B474CC[3] = 0.0; /*0x814044*/
      flt_B474CC[4] = v24; /*0x814056*/
      flt_B474CC[5] = v23; /*0x814060*/
      flt_B474CC[6] = 0.0; /*0x814075*/
      flt_B474CC[7] = 0.0; /*0x81407b*/
      ImageShaderList::ProcessImageSpaceShader( /*0x81408f*/
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        unk_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break; /*0x81408f*/
    case 5: /*0x813d1e*/
      ImageShaderList::ProcessImageSpaceShader( /*0x8140a6*/
        *(NiTPointerList__BSImageSpaceShader **)(a4 + 0x14C),
        unk_B43104,
        *(BSRenderedTexture **)(a4 + 0x140),
        *(BSRenderedTexture **)(a4 + 0x140));
      break; /*0x8140a6*/
    default:
      break;
  }
  NiRenderer_EndScene(); /*0x8140ab*/
  if ( a2 + 1 < 6 ) /*0x8140ba*/
    JUMPOUT(0x813A29); /*0x813a29*/
  result = ((int (__thiscall *)(NiDX9Renderer *, int *))unk_B43104->__vftable->super.SetClearColor4)(unk_B43104, &v29); /*0x8140d3*/
  v11 = flt_B474CC[8]; /*0x8140d5*/
  if ( LODWORD(flt_B474CC[8]) ) /*0x8140d5*/
  {
    result = ((int (__cdecl *)(int))InterlockedDecrement)(LODWORD(v11) + 4); /*0x8140e3*/
    if ( !result && v11 != 0.0 ) /*0x8140ef*/
      result = (**(int (__cdecl ***)(int))LODWORD(v11))(1); /*0x8140f9*/
    flt_B474CC[8] = 0.0; /*0x8140fb*/
  }
  return result; /*0x81411e*/
}
