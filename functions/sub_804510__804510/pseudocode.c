// MoonSugarEffect decode: CopyShader D3D pass setup; configures a single texture stage and disables blend/z/write states similarly to other TES4 image-space passes.
char __thiscall sub_804510(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  NiD3DTextureStage *v12; // eax
  unsigned int *a3; // [esp+Ch] [ebp-14h] BYREF
  NiD3DPass *v15; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  v2 = NiD3DPassPool_Acquire(&v15); /*0x804544*/
  v3 = *(this + 0x1C); /*0x804546*/
  v4 = v3 == *v2; /*0x804549*/
  v16 = 0; /*0x80454b*/
  if ( !v4 ) /*0x804553*/
  {
    if ( v3 ) /*0x804557*/
    {
      v4 = v3->RefCount-- == 1; /*0x804559*/
      if ( v4 ) /*0x80455d*/
        NiD3DPass_ReleaseToPool(v3); /*0x80455f*/
    }
    v5 = *v2; /*0x804564*/
    v4 = *v2 == 0; /*0x804566*/
    *(this + 0x1C) = *v2; /*0x804568*/
    if ( !v4 ) /*0x80456b*/
      ++v5->RefCount; /*0x80456d*/
  }
  v6 = v15; /*0x804571*/
  v16 = 0xFFFFFFFF; /*0x804577*/
  if ( v15 ) /*0x80457f*/
  {
    --v15->RefCount; /*0x804581*/
    if ( !v6->RefCount ) /*0x80458a*/
      NiD3DPass_ReleaseToPool(v6); /*0x80458f*/
  }
  NiD3DTextureStagePool_Acquire(&a3); /*0x804599*/
  v16 = 1; /*0x8045a9*/
  BSShader_ConfigureTextureStageSampler(a3, 0, 3, 2); /*0x8045b1*/
  NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)a3, 0); /*0x8045bf*/
  NiD3DPass_SetTextureStage(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3); /*0x8045d0*/
  v7 = (int)*(this + 0x1C); /*0x8045d5*/
  if ( !*(_DWORD *)(v7 + 0x30) ) /*0x8045d8*/
    *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8045e3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v7 + 0x30), 7u, 0, 0); /*0x8045ef*/
  v8 = (int)*(this + 0x1C); /*0x8045f4*/
  if ( !*(_DWORD *)(v8 + 0x30) ) /*0x8045f7*/
    *(_DWORD *)(v8 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x804602*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v8 + 0x30), 0xEu, 0, 0); /*0x80460e*/
  v9 = (int)*(this + 0x1C); /*0x804613*/
  if ( !*(_DWORD *)(v9 + 0x30) ) /*0x804616*/
    *(_DWORD *)(v9 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x804621*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v9 + 0x30), 0x1Bu, 0, 0); /*0x80462d*/
  v10 = (int)*(this + 0x1C); /*0x804632*/
  if ( !*(_DWORD *)(v10 + 0x30) ) /*0x804635*/
    *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x804640*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v10 + 0x30), 0xFu, 0, 0); /*0x80464c*/
  v11 = (int)*(this + 0x1C); /*0x804651*/
  if ( !*(_DWORD *)(v11 + 0x30) ) /*0x804654*/
    *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x80465f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v11 + 0x30), 0xA8u, 0xFu, 0); /*0x80466e*/
  ((void (__thiscall *)(NiD3DPass **))(*this)[1].VertexShaderTarget)(this); /*0x80467d*/
  v12 = (NiD3DTextureStage *)a3; /*0x80467f*/
  v16 = 0xFFFFFFFF; /*0x804685*/
  if ( a3 ) /*0x80468d*/
  {
    --a3[0x17]; /*0x80468f*/
    if ( !v12[7].Unk08 ) /*0x804698*/
      sub_772560(v12); /*0x80469d*/
  }
  return 1; /*0x8046a4*/
}
