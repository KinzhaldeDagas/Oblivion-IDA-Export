HRESULT __thiscall sub_4A1710(NiNode *this, NiCullingProcess *a2)
{
  NiDX9Renderer *v2; // esi

  v2 = g_Renderer;
  g_Renderer->member.device->lpVtbl->SetRenderState(g_Renderer->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 1);
  v2->member.device->lpVtbl->SetScissorRect(v2->member.device, (const RECT *)(this + 1));
  NiNode::OnVisible(this, a2);
  return v2->member.device->lpVtbl->SetRenderState(v2->member.device, D3DRENDERSTATE_MIPMAPLODBIAS|0x80, 0);
}
