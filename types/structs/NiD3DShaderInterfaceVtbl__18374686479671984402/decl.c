struct NiD3DShaderInterfaceVtbl
{
NiShaderVtbl super;
UInt8 (__thiscall *IsRenderSet)(NiD3DShaderInterface *this);
UInt8 (__thiscall *SetRenderer)(NiD3DShaderInterface *this, NiDX9Renderer renderer);
UInt32 (__thiscall *Unk28)(NiD3DShaderInterface *this, int a2, int a3, int a4, int a5, unsigned int a6, int a7, int a8);
UInt32 (__thiscall *Unk2C)(NiD3DShaderInterface *this, UInt32 u1, UInt32 u2, UInt32 u3, UInt32 u4, UInt32 u5, UInt32 u6, UInt32 u7);
UInt32 (__thiscall *Unk30)(NiD3DShaderInterface *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
UInt32 (__thiscall *Unk34)(NiD3DShaderInterface *this, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, float *a8, int a9);
UInt32 (__thiscall *SetupShaderPrograms)(NiD3DShaderInterface *this, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, float *a8, int a9);
UInt32 (__thiscall *Unk3C)(NiD3DShaderInterface *this, UInt32 u1, UInt32 u2, UInt32 u3, UInt32 u4);
UInt32 (__thiscall *Unk40)(NiD3DShaderInterface *this, UInt32 u1, UInt32 u2, UInt32 u3, UInt32 u4, UInt32 u5, UInt32 u6, UInt32 u7, UInt32 u8);
UInt32 (__thiscall *Unk44)(NiD3DShaderInterface *this, UInt32 u1, UInt32 u2, UInt32 u3, UInt32 u4, UInt32 u5, UInt32 u6, UInt32 u7);
UInt32 (__thiscall *Unk48)(NiD3DShaderInterface *this);
UInt32 (__thiscall *Unk4C)(NiD3DShaderInterface *this);
UInt32 (__thiscall *Unk50)(NiD3DShaderInterface *this);
void (__thiscall *Unk54)(NiD3DShaderInterface *this, UInt32 u1);
void (__thiscall *Unk58)(NiD3DShaderInterface *this);
void (__thiscall *Unk5C)(NiD3DShaderInterface *this);
void (__thiscall *Unk60)(NiD3DShaderInterface *this);
void (__thiscall *Unk64)(NiD3DShaderInterface *this);
UInt8 (__thiscall *Unk68)(NiD3DShaderInterface *this);
UInt8 (__thiscall *Unk6C)(NiD3DShaderInterface *this);
UInt8 (__thiscall *Unk70)(NiD3DShaderInterface *this);
UInt8 (__thiscall *Unk74)(NiD3DShaderInterface *this);
UInt8 (__thiscall *GetUnk01D)(NiD3DShaderInterface *this);
UInt8 (__thiscall *SetUnk01D)(NiD3DShaderInterface *this, UInt8 arg);
};
