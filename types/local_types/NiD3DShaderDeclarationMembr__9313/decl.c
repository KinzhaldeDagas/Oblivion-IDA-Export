struct NiD3DShaderDeclarationMembr
{
NiRefObjectMembr super;
NiDX9Renderer *Renderer;
NiDX9VertexBufferManager *BufferManager;
IDirect3DDevice9 *Device;
UInt32 DeclarationCapacity;
UInt32 DeclarationElementCount;
UInt32 MaxStreamEntryCount;
UInt32 StreamCount;
OblivionShaderDeclarationStream *StreamEntries;
UInt32 Unk028;
};
