// DX10OBSE runtime log pass 2026-05-24: InternalNormalizeNormals byte setter is hot and often writes the existing value. Plugin now suppresses same-value DX10 uploads/log spam while preserving observed Oblivion behavior and frame-summary call counts.
// DX11 finish integration audit 2026-10-01: native body stores the raw argument byte at manager+FF5 and returns it; no device call. Rigid renderer tail invokes it with0 after shader finish. The DX11 plugin owns a10-byte entry hook that additionally updates canonical tracked private state; verification must attest the exact owned jump and retain the original return-tail check. An equal-value native clear still has this plugin tracking event; model it independently of sparse byte differences.
UInt8 __thiscall sub_77B330(NiDX9RenderState *this, UInt8 a2)
{
  this->member.InternalNormalizeNormals = a2; /*0x77b334*/
  return a2; /*0x77b33a*/
}
