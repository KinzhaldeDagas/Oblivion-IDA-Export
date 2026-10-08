// Creates a one-color-target NiRenderTargetGroup, attaches the supplied Ni2DBuffer at slot 0, and optionally attaches a NiDepthStencilBuffer.
NiRenderTargetGroup *__cdecl NiRenderTargetGroup::CreateWithBuffers(
        Ni2DBuffer *colorBuffer,
        NiRenderer *renderer,
        NiDepthStencilBuffer *depthBuffer)
{
  NiRenderTargetGroup *v4; // eax
  NiRenderTargetGroup *v5; // esi
  bool (__thiscall *AttachBuffer)(NiRenderTargetGroup *, Ni2DBuffer *, UInt32); // edx

  if ( !renderer || !colorBuffer || !((int (*)(void))renderer->__vftable->Unk_27)() ) /*0x9a221e*/
    return 0; /*0x9a21fa*/
  v4 = (NiRenderTargetGroup *)FormHeapAlloc(0x24u); /*0x9a2227*/
  if ( v4 ) /*0x9a223d*/
    v5 = NiRenderTargetGroup::NiRenderTargetGroup(v4); /*0x9a2246*/
  else
    v5 = 0; /*0x9a224a*/
  AttachBuffer = v5->vtbl->AttachBuffer; /*0x9a224e*/
  v5->members.numRenderTargets = 1; /*0x9a225e*/
  AttachBuffer(v5, colorBuffer, 0); /*0x9a2265*/
  if ( depthBuffer ) /*0x9a226d*/
    v5->vtbl->AttachDepthStencilBuffer(v5, depthBuffer); /*0x9a2277*/
  return v5; /*0x9a21fc*/
}
