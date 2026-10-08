// DX10OBSE verified decode: NiDX9RenderState texture-stage setter remaps D3DTSS enum to cached slot, compares value, calls IDirect3DDevice9::SetTextureStageState only on change, then updates cache/previous value.
// DX11 inherited-state audit 2026-09-30: physical texture-stage cache pair at920+8*(8*stage+WORD[B427E0+2*state]); unmapped slot>=8 is ignored. Runtime map aliases share one physical current register and can suppress a later device write under another enum. Capture/evaluation now retain physical slots rather than inventing independent logical cache entries.
// DX11 state-handoff audit 2026-10-01: receiver is a render-state manager, not NiDX9Renderer. Shared entries appear in NiDX9RenderState vtable A8A9F4 and NiD3DRenderState vtable A8B2AC. State/value arguments are DWORDs, not pointers. Return register is not a uniform HRESULT (equal cached paths can omit the device call); do not infer backend success from it. Preserve physical current/saved cache words separately from actual logical device state and guard runtime enum-map values before native commit.
unsigned int __thiscall NiDX9RenderState_SetTextureStageState(
        NiDX9RenderState *self,
        unsigned int stage,
        unsigned int state,
        unsigned int value,
        unsigned __int8 savePrevious)
{
  unsigned int result; // eax
  NiRenderStateSetting *v6; // esi

  result = *(unsigned __int16 *)(2 * state + 0xB427E0); /*0x77b145*/
  if ( (unsigned __int16)result < 8u ) /*0x77b151*/
  {
    result = (unsigned __int16)result + 8 * stage; /*0x77b15b*/
    v6 = &self->member.TextureStageStateSettings[result]; /*0x77b16a*/
    if ( v6->CurrentValue != value ) /*0x77b171*/
      result = (unsigned int)self->member.Device->lpVtbl->SetTextureStageState(self->member.Device, stage, state, value); /*0x77b185*/
    if ( savePrevious ) /*0x77b18c*/
    {
      result = v6->CurrentValue; /*0x77b18e*/
      v6->PreviousValue = v6->CurrentValue; /*0x77b190*/
    }
    v6->CurrentValue = value; /*0x77b193*/
  }
  return result; /*0x77b197*/
}
