// MoonSugarEffect decode: shader system init prewarms shader definitions 1..27, then constructs imageSpaceShaderList if ImageSpaceEffectEnabled.
void __cdecl sub_7BA0F0()
{
  Ni2DBuffer **v0; // eax
  Ni2DBuffer **v1; // eax
  int *v2; // esi
  int v3; // eax
  int *v4; // eax
  unsigned int v5; // esi
  BSShaderAccumulator *Global; // eax
  BSShaderAccumulator *v7; // esi
  volatile LONG *v8; // edi
  bool v9; // zf
  int v10; // edx
  signed int i; // esi
  unsigned int v12; // esi
  NiTPointerList__BSImageSpaceShader *v13; // eax
  NiTPointerList__BSImageSpaceShader *v14; // eax

  if ( !OB_RendererGlobalState_010201A0[0x98] ) /*0x7ba115*/
  {
    v0 = (Ni2DBuffer **)FormHeapAlloc(0x48u); /*0x7ba124*/
    if ( v0 ) /*0x7ba13a*/
      v1 = BSTextureManager_Create(v0); /*0x7ba13e*/
    else
      v1 = 0; /*0x7ba145*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0xB7] = v1; /*0x7ba150*/
    v2 = (int *)FormHeapAlloc(0x1Cu); /*0x7ba15a*/
    if ( v2 ) /*0x7ba16d*/
    {
      GetShaderProgramPackageIndex();           // [Verified] Shader-system initialization calls GetShaderProgramPackageIndex and passes its EAX result to ShaderProgramPackageMap_Ctor, which formats shaderpackage%03i.sdp. The resulting map is loaded from Data\Shaders and used to resolve compiled shader-program records. /*0x7ba16f*/
      v4 = ShaderProgramPackageMap_Ctor(v2, v3); /*0x7ba177*/
    }
    else
    {
      v4 = 0; /*0x7ba17e*/
    }
    OB_ShaderProgramPackageRecordMap_010201A0 = (int)v4;// [Verified] Stores the initialized shader package record map returned by ShaderProgramPackageMap_Ctor; the following call loads the selected SDP file. If its data pointer is absent, the map is destroyed and the global is cleared. /*0x7ba180*/
    ShaderProgramPackageMap_LoadSdp((unsigned int *)v4, (const char *)*v4); /*0x7ba18e*/
    if ( !*(_DWORD *)(OB_ShaderProgramPackageRecordMap_010201A0 + 4) ) /*0x7ba199*/
    {
      v5 = OB_ShaderProgramPackageRecordMap_010201A0; /*0x7ba19f*/
      sub_7DB010((unsigned int *)OB_ShaderProgramPackageRecordMap_010201A0); /*0x7ba1a1*/
      FormHeapFree(v5); /*0x7ba1a7*/
      OB_ShaderProgramPackageRecordMap_010201A0 = 0; /*0x7ba1af*/
    }
    Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x7ba1b9*/
    v7 = unk_B430FC; /*0x7ba1be*/
    v8 = (volatile LONG *)Global; /*0x7ba1c4*/
    if ( unk_B430FC != Global ) /*0x7ba1c8*/
    {
      if ( v7 ) /*0x7ba1cc*/
      {
        if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7ba1d2*/
          (**(void (__thiscall ***)(BSShaderAccumulator *, int))v7)(v7, 1); /*0x7ba1e8*/
      }
      unk_B430FC = (BSShaderAccumulator *)v8; /*0x7ba1ec*/
      if ( v8 ) /*0x7ba1f2*/
        InterlockedIncrement(v8 + 1); /*0x7ba1f8*/
    }
    sub_7AB1D0(1); /*0x7ba200*/
    sub_7B8990(); /*0x7ba208*/
    v9 = unk_B43104 == 0; /*0x7ba213*/
    *(float *)&v10 = kHeadBodyNormalMatchRadius; /*0x7ba230*/
    flt_B4616C[0] = kHeadBodyNormalMatchRadius; /*0x7ba238*/
    flt_B4616C[1] = *(float *)&v10; /*0x7ba241*/
    flt_B4616C[2] = *(float *)&v10; /*0x7ba247*/
    flt_B4616C[3] = 1.0; /*0x7ba24d*/
    if ( !v9 ) /*0x7ba252*/
    {
      for ( i = 1; i < 0x1C; ++i ) /*0x7ba254*/
        GetShaderDefinition(i);                 // [Verified] Shader-system initialization preloads shader definitions 1 through 27 while the selected SDP record map is available, then destroys and frees that temporary map. Shader program creation later uses package records when present and has a separate cache/source compilation fallback. /*0x7ba261*/
      if ( OB_ShaderProgramPackageRecordMap_010201A0 ) /*0x7ba271*/
      {
        v12 = OB_ShaderProgramPackageRecordMap_010201A0; /*0x7ba27b*/
        sub_7DB010((unsigned int *)OB_ShaderProgramPackageRecordMap_010201A0); /*0x7ba27d*/
        FormHeapFree(v12); /*0x7ba283*/
        OB_ShaderProgramPackageRecordMap_010201A0 = 0; /*0x7ba28b*/
      }
      if ( unk_B43104 ) /*0x7ba295*/
      {
        if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x7ba29e*/
        {
          v13 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu); /*0x7ba2a9*/
          if ( v13 ) /*0x7ba2bf*/
            v14 = ImageSpaceshaderList::Create(v13); /*0x7ba2c3*/
          else
            v14 = 0; /*0x7ba2ca*/
          MEMORY[0xB42D7C] = v14; /*0x7ba2cc*/
        }
      }
    }
    OB_RendererGlobalState_010201A0[0x98] = 1; /*0x7ba2d1*/
  }
}
