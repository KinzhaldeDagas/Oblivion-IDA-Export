struct NiDX9RenderStateMembr
{
NiRefObjectMembr super;
UInt32 Flags;
UInt32 unk000C[26];
void *DisabledAlphaProperty;
float CameraNear;
float CameraFar;
float CameraDepthRange;
float MaxFogFactor;
float MaxFogValue;
NiColor CurrentFogColor;
UInt32 unk098[23];
UInt32 LeftHanded;
UInt32 unk0F8[10];
NiRenderStateSetting RenderStateSettings[256];
NiRenderStateSetting TextureStageStateSettings[128];
NiRenderStateSetting SamplerStateSettings[80];
IDirect3DBaseTexture9 *TextureCache[16];
IDirect3DVertexShader9 *CurrentVertexShader;
IDirect3DVertexShader9 *SavedVertexShader;
IDirect3DPixelShader9 *CurrentPixelShader;
IDirect3DPixelShader9 *SavedPixelShader;
NiDX9ShaderConstantManager *ShaderConstantManager;
UInt8 ForceNormalizeNormals;
UInt8 InternalNormalizeNormals;
UInt8 UsingSoftwareVP;
UInt8 Declaration;
IDirect3DDevice9 *Device;
NiDX9Renderer *Renderer;
unsigned __int8 UsingVertexDeclaration;
unsigned __int8 Reserved1001[3];
unsigned int CurrentFVF;
unsigned int SavedFVF;
IDirect3DVertexDeclaration9 *CurrentVertexDeclaration;
IDirect3DVertexDeclaration9 *SavedVertexDeclaration;
unsigned int CachedSoftwareVertexProcessing; ///< Verified Oblivion-side: object+0x1014 (member substructure starts at object+4). Low byte compared/written by0x77B750 and returned by0x77B7A0. It is the requested cached software-VP value, not a fresh device getter. Original DWORD storage retained; upper3 bytes not characterized. Distinct from object+0xFF6 currently named UsingSoftwareVP.
D3DCAPS9 Caps;
};
