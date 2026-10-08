// MoonSugarEffect build 56: plugin image-space profiles now share the MoonSugarDistortion pixel shader asset and select MoonSugar/HeadWound/Blind branches via plugin constants; native image-space hook behavior remains the decoded Oblivion RenderProcessImageSpaceShader path.
void __cdecl ProcessImageSpaceShader(NiDX9Renderer *a1, BSRenderedTexture *a2, BSRenderedTexture *a3)
{
  ImageShaderList::ProcessImageSpaceShader(MEMORY[0xB42D7C], a1, a2, a3); /*0x7b48f5*/
}
