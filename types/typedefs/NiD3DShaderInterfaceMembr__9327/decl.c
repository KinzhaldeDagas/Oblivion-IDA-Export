struct __declspec(align(4)) NiD3DShaderInterfaceMembr
{
NiShaderMembr super;
IDirect3DDevice9 *D3DDevice;
NiDX9Renderer *D3DRenderer;
NiDX9RenderState *D3DRenderState;
UInt8 IsRenderSet;
UInt8 Unk01D;
UInt8 pad[2];
};
