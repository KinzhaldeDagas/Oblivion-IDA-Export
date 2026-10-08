// DX10 bridge note: Oblivion render-state cache only calls IDirect3DDevice9::SetRenderState through vtable +0xE4 when a cached value changes. The DX10 device vtable hook captures runtime render-state shader variants here; generated fallback pixel shaders use captured alpha-test and fog render states for D3D10 shader-side discard/fog because D3D10 has no fixed-function alpha-test/fog stage.
// Authoritative render-state cache semantics for GPU batching: current DWORD at this+120+state*8; previous DWORD at this+124+state*8. Compare current before issuing device SetRenderState(+E4 via device at this+FF8). If savePrevious is nonzero, copy current to previous even when no device call was necessary; then store requested current. Do not coalesce repeated saved writes or infer these effects solely from intercepted device calls.
// DX11 inherited-state audit 2026-09-30: cache and logical device state are distinct. An equal cached render request suppresses the device call even if the actual device state differs. SavePrevious copies the native current register, not a device query. Manager cache capture preserves current/saved pairs at120+8*state; evaluation must retain this suppression and single-register restoration.
// DX11 state-handoff audit 2026-10-01: receiver is a render-state manager, not NiDX9Renderer. Shared entries appear in NiDX9RenderState vtable A8A9F4 and NiD3DRenderState vtable A8B2AC. State/value arguments are DWORDs, not pointers. Return register is not a uniform HRESULT (equal cached paths can omit the device call); do not infer backend success from it. Preserve physical current/saved cache words separately from actual logical device state and guard runtime enum-map values before native commit.
unsigned int __thiscall NiDX9RenderState_SetRenderState(
        NiDX9RenderState *self,
        unsigned int state,
        unsigned int value,
        unsigned __int8 savePrevious)
{
  unsigned int result; // eax

  if ( self->member.RenderStateSettings[state].CurrentValue != value ) /*0x77b014*/
    result = (unsigned int)self->member.Device->lpVtbl->SetRenderState(self->member.Device, state, value); /*0x77b027*/
  if ( savePrevious ) /*0x77b02e*/
  {
    result = self->member.RenderStateSettings[state].CurrentValue; /*0x77b030*/
    self->member.RenderStateSettings[state].PreviousValue = result; /*0x77b037*/
  }
  self->member.RenderStateSettings[state].CurrentValue = value; /*0x77b03e*/
  return result; /*0x77b045*/
}
