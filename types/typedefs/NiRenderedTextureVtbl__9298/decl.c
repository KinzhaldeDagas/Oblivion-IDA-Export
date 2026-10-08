struct NiRenderedTextureVtbl
{
NiTextureVtbl super;
Ni2DBuffer *(__thiscall *GetBuffer)(NiRenderedTexture *this);
};
