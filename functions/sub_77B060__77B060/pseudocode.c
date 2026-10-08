// DX11 restore semantics verified 2026-09-30: reads DWORD saved value at this+124+8*state, then calls virtual+64 SetRenderState(this,state,savedValue,0). Restoration uses the single saved register and does not pop a stack or request another save; repeated restore IDs read the same saved slot unless an intervening writer changes it.
// DX11 saved-state implementation 2026-09-30: full byte contracts for75F9E0,772720,77B060 now qualify a separate restore program. It retains forward saved-list IDs including duplicates and reads the single saved register during evaluation without resaving or popping it. Unknown saved words remain unknown. Frame preparation pairs restoration with its exact pass/manager; ordered scheduling and inherited manager/device state authority remain required before traversal omission.
// DX11 state-handoff audit 2026-10-01: receiver is a render-state manager, not NiDX9Renderer. Shared entries appear in NiDX9RenderState vtable A8A9F4 and NiD3DRenderState vtable A8B2AC. State/value arguments are DWORDs, not pointers. Return register is not a uniform HRESULT (equal cached paths can omit the device call); do not infer backend success from it. Preserve physical current/saved cache words separately from actual logical device state and guard runtime enum-map values before native commit.
unsigned int __thiscall NiDX9RenderState_RestoreSavedState(NiDX9RenderState *self, unsigned int state)
{
  return ((unsigned int (__thiscall *)(NiDX9RenderState *, unsigned int, UInt32, _DWORD))self->vtbl->SetRenderState)( /*0x77b077*/
           self,
           state,
           self->member.RenderStateSettings[state].PreviousValue,
           0);
}
