struct NiD3DPass
{
NiD3DPassVtbl *__vftable;
char Name[16];
UInt32 CurrentStage;
UInt32 StageCount;
UInt32 TexturesPerPass;
NiTArray_NiD3DTextureStage Stages;
NiD3DRenderStateGroup *RenderStateGroup;
NiD3DShaderConstantMap *PixelConstantMap;
char *PixelShaderProgramFile;
char *PixelShaderEntryPoint;
char *PixelShaderTarget;
NiD3DPixelShader *PixelShader;
NiD3DShaderConstantMap *VertexConstantMap;
char *VertexShaderProgramFile;
char *VertexShaderEntryPoint;
char *VertexShaderTarget;
NiD3DVertexShader *VertexShader;
UInt8 SoftwareVP;
UInt8 RendererOwned;
UInt8 pad[2];
UInt32 RefCount; ///<
                 ///< Verified +60 pass ownership counter; native SetAt/reset/advance/pool acquire use plain ADD/DEC, unlike +4 NiRefObject Interlocked references. Do not use generic NiRef retain/release.
};
