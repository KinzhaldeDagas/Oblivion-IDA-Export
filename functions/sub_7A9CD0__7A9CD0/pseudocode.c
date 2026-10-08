// Resolve shader definition 9 and bind the supplied NiRenderedTexture through its image-space shader.
int __cdecl ShaderDefinition9_BindRenderedTexture(void *renderedTexture)
{
  ShaderDefinition *ShaderDefinition; // eax

  ShaderDefinition = GetShaderDefinition(9u); /*0x7a9cd2*/
  return BSImageSpaceShader_BindFirstFreeRenderedTexture(ShaderDefinition->shader, renderedTexture); /*0x7a9ce9*/
}
