struct __declspec(align(4)) NiRenderTargetGroupVtbl
{
_BYTE gap0[76];
UInt32 (__thiscall *GetWidth)(NiRenderTargetGroup *this, UInt32 Index);
UInt32 (__thiscall *GetHeight)(NiRenderTargetGroup *this, UInt32 Index);
UInt32 (__thiscall *GetDepthStencilWidth)(NiRenderTargetGroup *this);
UInt32 (__thiscall *GetDepthStencilHeight)(NiRenderTargetGroup *this);
const void *(__thiscall *GetPixelFormat)(NiRenderTargetGroup *this, UInt32 Index);
const void *(__thiscall *GetDepthStencilPixelFormat)(NiRenderTargetGroup *this);
UInt32 (__thiscall *GetBufferCount)(NiRenderTargetGroup *this);
bool (__thiscall *AttachBuffer)(NiRenderTargetGroup *this, Ni2DBuffer *Buffer, UInt32 Index);
bool (__thiscall *AttachDepthStencilBuffer)(NiRenderTargetGroup *this, NiDepthStencilBuffer *DepthBuffer);
Ni2DBuffer *(__thiscall *GetBuffer)(NiRenderTargetGroup *this, UInt32 Index);
NiDepthStencilBuffer *(__thiscall *GetDepthStencilBuffer)(NiRenderTargetGroup *this);
void *(__thiscall *GetRendererData)(NiRenderTargetGroup *this);
void (__thiscall *SetRendererData)(NiRenderTargetGroup *this, void *RendererData);
void *(__thiscall *GetRenderTargetData)(NiRenderTargetGroup *this, UInt32 RenderTargetIndex);
void *(__thiscall *GetDepthStencilBufferRendererData)(NiRenderTargetGroup *this);
};
