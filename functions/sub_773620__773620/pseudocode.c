NiD3DPass *__cdecl sub_773620(NiD3DPass *a2)
{
  NiD3DPass *result; // eax
  unsigned int *v2; // ecx

  result = a2; /*0x773620*/
  if ( LOBYTE(a2->__vftable) ) /*0x773626*/
  {
    *(_DWORD *)&a2->Name[8] = 0; /*0x77362e*/
    *(_DWORD *)&result->Name[0xC] = 0; /*0x773631*/
    result->CurrentStage = 0; /*0x773634*/
    result->StageCount = 0; /*0x773637*/
    result->TexturesPerPass = 0; /*0x77363a*/
    result->Stages._vtbl = 0; /*0x77363d*/
    result->Stages.data = 0; /*0x773640*/
    *(_DWORD *)&result->Stages.capacity = 0; /*0x773643*/
    *(_DWORD *)&result->Stages.numObjs = 0; /*0x773646*/
    result->RenderStateGroup = 0; /*0x773649*/
    result->PixelShaderEntryPoint = 0; /*0x77364c*/
    result->PixelShaderTarget = 0; /*0x77364f*/
    result->PixelShader = 0; /*0x773652*/
    result->VertexConstantMap = 0; /*0x773655*/
    result->VertexShaderProgramFile = 0; /*0x773658*/
    result->VertexShaderEntryPoint = 0; /*0x77365b*/
    result->VertexShaderTarget = 0; /*0x77365e*/
    result->VertexShader = 0; /*0x773661*/
    *(_DWORD *)&result->SoftwareVP = 0; /*0x773664*/
    result->RefCount = 0; /*0x773667*/
    *(_DWORD *)&result[1].Name[4] = 0; /*0x77366a*/
    *(_DWORD *)&result[1].Name[8] = 0; /*0x77366d*/
    *(_DWORD *)&result[1].Name[0xC] = 0; /*0x773670*/
    result[1].CurrentStage = 0; /*0x773673*/
    result[1].StageCount = 0; /*0x773676*/
    result[1].TexturesPerPass = 0; /*0x773679*/
    LOBYTE(result[1].Stages._vtbl) = 0; /*0x77367f*/
    *(_DWORD *)&result[1].Stages.numObjs = 0; /*0x773685*/
    result[1].RenderStateGroup = 0; /*0x77368b*/
    result[1].PixelConstantMap = 0; /*0x773691*/
    result[1].PixelShaderProgramFile = 0; /*0x773697*/
    result[1].PixelShaderEntryPoint = 0; /*0x77369d*/
    result[1].PixelShaderTarget = 0; /*0x7736a3*/
    LOBYTE(result[1].PixelShader) = 0; /*0x7736a9*/
    result[1].VertexShaderProgramFile = 0; /*0x7736af*/
    LOBYTE(result[1].VertexShaderEntryPoint) = 0; /*0x7736b5*/
    result->PixelConstantMap = 0; /*0x7736bb*/
    *(_DWORD *)result->Name = 0; /*0x7736be*/
    result[1].Stages.data = 0; /*0x7736c1*/
    result[1].__vftable = 0; /*0x7736c7*/
    result[1].VertexConstantMap = 0; /*0x7736ca*/
    v2 = (unsigned int *)unk_B42838; /*0x7736d0*/
    a2 = result; /*0x7736d6*/
    return (NiD3DPass *)sub_73A5E0(v2, &a2); /*0x7736df*/
  }
  return result; /*0x7736e4*/
}
