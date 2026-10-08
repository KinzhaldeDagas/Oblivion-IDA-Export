struct __declspec(align(4)) NiTextureVtbl
{
NiObjectVtbl super;
UInt32 (__thiscall *GetWidth)(NiTexture *this);
UInt32 (__thiscall *GetHeight)(NiTexture *this);
};
