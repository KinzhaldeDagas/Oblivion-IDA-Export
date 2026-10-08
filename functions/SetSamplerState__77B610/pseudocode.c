// Tracked NiDX9 sampler setter accepts only D3DSAMP_ADDRESSU/V and MAG/MIN/MIPFILTER (states 1,2,5,6,7). State 8 MIPMAPLODBIAS is outside this cache, so a direct leaked bias is not self-healed by the leaf stage.
// DX11 inherited-state audit 2026-09-30: physical sampler pair atD20+40*sampler+8*WORD[B427B0+2*state]. Slot>=5 ignores the request; equal cached values suppress the device call. Ordinary profile captures16 sampler rows. Render/TSS save-on-equal differs from sampler save-only-on-change; current compiled sampler programs never request savePrevious.
// DX11 state-handoff audit 2026-10-01: receiver is a render-state manager, not NiDX9Renderer. Shared entries appear in NiDX9RenderState vtable A8A9F4 and NiD3DRenderState vtable A8B2AC. State/value arguments are DWORDs, not pointers. Return register is not a uniform HRESULT (equal cached paths can omit the device call); do not infer backend success from it. Preserve physical current/saved cache words separately from actual logical device state and guard runtime enum-map values before native commit.
int __thiscall OB_NiDX9RenderState_SetTrackedSamplerState_010201A0(
        void *this,
        unsigned int sampler,
        unsigned int state,
        unsigned int value,
        unsigned __int8 savePrevious)
{
  int result; // eax

  result = *(unsigned __int16 *)(2 * state + 0xB427B0);// Map the requested D3DSAMPLERSTATETYPE through the runtime enum-to-slot table at B427B0. /*0x77b615*/
  if ( (unsigned __int16)result < 5u )          // Only five tracked slots are accepted. Unmapped sampler enums are ignored before the D3D device call. /*0x77b621*/
  {
    result = (int)this + 0x28 * sampler + 8 * (unsigned __int16)result + 0xD20; /*0x77b634*/
    if ( *(_DWORD *)result != value ) /*0x77b63d*/
    {
      if ( savePrevious ) /*0x77b644*/
        *(_DWORD *)(result + 4) = *(_DWORD *)result; /*0x77b649*/
      *(_DWORD *)result = value; /*0x77b64e*/
      return (*(int (__stdcall **)(_DWORD, unsigned int, unsigned int, unsigned int))(**((_DWORD **)this + 0x3FE) + 0x114))( /*0x77b661*/
               *((_DWORD *)this + 0x3FE),
               sampler,
               state,
               value);                          // The sole device SetSamplerState call occurs only after a tracked state changes; leaf-path enums 8/9/10/11 cannot reach it.
    }
  }
  return result; /*0x77b664*/
}
