struct NiRenderTargetGroupMembr
{
NiRefObjectMembr super;
Ni2DBuffer *RenderTargets[4];
UInt32 numRenderTargets;
NiDepthStencilBuffer *DepthStencilBuffer;
void *RenderData;
};
