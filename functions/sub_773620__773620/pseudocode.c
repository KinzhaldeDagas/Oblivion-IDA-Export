NiD3DPass *__cdecl sub_773620(NiD3DPass *a2)
{
  NiD3DPass *result; // eax
  unsigned int *v2; // ecx

  result = a2;
  if ( LOBYTE(a2->__vftable) )
  {
    *(_DWORD *)&a2->Name[8] = 0;
    *(_DWORD *)&result->Name[0xC] = 0;
    result->CurrentStage = 0;
    result->StageCount = 0;
    result->TexturesPerPass = 0;
    result->Stages._vtbl = 0;
    result->Stages.data = 0;
    *(_DWORD *)&result->Stages.capacity = 0;
    *(_DWORD *)&result->Stages.numObjs = 0;
    result->RenderStateGroup = 0;
    result->PixelShaderEntryPoint = 0;
    result->PixelShaderTarget = 0;
    result->PixelShader = 0;
    result->VertexConstantMap = 0;
    result->VertexShaderProgramFile = 0;
    result->VertexShaderEntryPoint = 0;
    result->VertexShaderTarget = 0;
    result->VertexShader = 0;
    *(_DWORD *)&result->SoftwareVP = 0;
    result->RefCount = 0;
    *(_DWORD *)&result[1].Name[4] = 0;
    *(_DWORD *)&result[1].Name[8] = 0;
    *(_DWORD *)&result[1].Name[0xC] = 0;
    result[1].CurrentStage = 0;
    result[1].StageCount = 0;
    result[1].TexturesPerPass = 0;
    LOBYTE(result[1].Stages._vtbl) = 0;
    *(_DWORD *)&result[1].Stages.numObjs = 0;
    result[1].RenderStateGroup = 0;
    result[1].PixelConstantMap = 0;
    result[1].PixelShaderProgramFile = 0;
    result[1].PixelShaderEntryPoint = 0;
    result[1].PixelShaderTarget = 0;
    LOBYTE(result[1].PixelShader) = 0;
    result[1].VertexShaderProgramFile = 0;
    LOBYTE(result[1].VertexShaderEntryPoint) = 0;
    result->PixelConstantMap = 0;
    *(_DWORD *)result->Name = 0;
    result[1].Stages.data = 0;
    result[1].__vftable = 0;
    result[1].VertexConstantMap = 0;
    v2 = (unsigned int *)dword_B42838;
    a2 = result;
    return (NiD3DPass *)sub_73A5E0(v2, &a2);
  }
  return result;
}
