LONG __cdecl sub_7A9CD0(NiRenderedTexture *a2)
{
  ShaderDefinition *ShaderDefinition; // eax

  ShaderDefinition = GetShaderDefinition(9u);
  return sub_7FA470((BSImageSpaceShader *)ShaderDefinition->shader, a2);
}
