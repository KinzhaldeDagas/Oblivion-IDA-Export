struct NiD3DShaderConstantMap
{
NiD3DSCM_Pixel *_vtbl;
UInt32 Unk04;
UInt32 Unk08;
NiTArray_NiD3DShaderConstantMapEntry Entries;
UInt8 Modified;
UInt8 pad1C[3];
NiD3DShaderProgram *LastShaderProgram;
UInt32 Unk24;
IDirect3DDevice9 *Device;
NiDX9Renderer *Renderer;
NiDX9RenderState *RenderState;
};
