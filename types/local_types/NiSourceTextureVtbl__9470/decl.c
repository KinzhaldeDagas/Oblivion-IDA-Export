struct NiSourceTextureVtbl
{
NiTextureVtbl super;
void (__thiscall *Unk15)(NiSourceTexture *this);
void (__thiscall *FreePixelData)(NiSourceTexture *this);
bool (__thiscall *Unk17)(NiSourceTexture *this);
};
