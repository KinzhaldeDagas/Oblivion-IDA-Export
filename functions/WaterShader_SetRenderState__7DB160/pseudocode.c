void __stdcall WaterShader::SetRenderState(WaterShader *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  ((void (__thiscall *)(NiDX9RenderState *, int, _DWORD, _DWORD))g_Renderer->member.renderState->vtbl->SetRenderState)(
    g_Renderer->member.renderState,
    0x34,
    0,
    0);
  nullsub_ret0_20((int)a1, a2, a3, a4, a5, a6, a7, a8);
}
