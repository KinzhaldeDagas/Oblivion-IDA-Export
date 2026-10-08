HRESULT __thiscall sub_4A1710(NiNode *this, NiCullingProcess *a2)
{
  NiDX9Renderer *v2; // esi

  v2 = renderer; /*0x4a1711*/
  renderer->member.device->lpVtbl->SetRenderState(renderer->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 1); /*0x4a1730*/
  v2->member.device->lpVtbl->SetScissorRect(v2->member.device, (const RECT *)(this + 1)); /*0x4a1748*/
  NiNode::OnVisible(this, a2); /*0x4a1751*/
  return v2->member.device->lpVtbl->SetRenderState(v2->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 0); /*0x4a176e*/
}
