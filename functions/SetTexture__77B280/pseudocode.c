// DX10OBSE verified decode: NiDX9RenderState::SetTexture caches per-stage IDirect3DBaseTexture9 pointer and calls IDirect3DDevice9::SetTexture only when changed. DX10 hook must sync from device before draw because redundant native calls are suppressed.
// DX11 inherited-state audit 2026-09-30: sixteen ordinary texture cache pointers atFA0+4*stage are separate from actual device binding identities. Equality suppresses SetTexture; cache changes precede the device call. A retained native cache pointer alone is not proof of the current logical device binding.
// DX11 state-handoff audit 2026-10-01: receiver is a render-state manager, not NiDX9Renderer. Shared entries appear in NiDX9RenderState vtable A8A9F4 and NiD3DRenderState vtable A8B2AC. State/value arguments are DWORDs, not pointers. Return register is not a uniform HRESULT (equal cached paths can omit the device call); do not infer backend success from it. Preserve physical current/saved cache words separately from actual logical device state and guard runtime enum-map values before native commit.
// Fallout Xenon comparison 2026-10-01: decoded ClearTexture at 827B6EF8 bulk-clears samplers 0..25 for any non-null argument and uses device offset A68. Verified PPC instructions differ from this Oblivion single-slot compare/store/call path and its device at FF8; no Xenon layout or 26-slot rule is promoted to Oblivion.
HRESULT __thiscall SetTexture(NiDX9RenderState *this, DWORD sampler, IDirect3DBaseTexture9 *a3)
{
  HRESULT result; // eax

  result = (HRESULT)sampler; /*0x77b280*/
  if ( (IDirect3DBaseTexture9 *)this->member.TextureCache[sampler] != a3 ) /*0x77b28f*/
  {
    this->member.TextureCache[sampler] = (UInt32)a3; /*0x77b292*/
    return this->member.Device->lpVtbl->SetTexture(this->member.Device, sampler, a3); /*0x77b2aa*/
  }
  return result; /*0x77b2ad*/
}
