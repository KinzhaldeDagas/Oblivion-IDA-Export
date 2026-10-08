struct __declspec(align(4)) BSImageSpaceShaderVtbl
{
BSShaderVtbl super;
UInt32 (__thiscall *RenderShader)(BSImageSpaceShader *this, NiScreenElements *ScreenElements, BSRenderedTexture *RenderedTexture, BSRenderedTexture *AltRenderTarget, UInt8 u4);
UInt32 (__thiscall *IsShaderActive)(BSImageSpaceShader *this);
};
