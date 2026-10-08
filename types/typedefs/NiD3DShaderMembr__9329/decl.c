struct NiD3DShaderMembr
{
NiD3DShaderInterfaceMembr super;
UInt8 IsInitialized;
UInt8 Unk021;
UInt8 pad021[2];
NiD3DShaderDeclaration *ShaderDeclaration;
NiD3DRenderStateGroup *RenderStateGroup;
NiD3DShaderConstantMap *PixelConstantMap;
NiD3DShaderConstantMap *VertexConstantMap;
UInt32 CurrentPassIndex;
UInt32 PassCount;
NiD3DPass *CurrentPass;
NiTArray_NiD3DPass Passes;
UInt32 Unk050[8];
};
