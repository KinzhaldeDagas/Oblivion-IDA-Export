//
// [2026-10-06 directional distant pass] Restores world bound from local bound+C4, reads instanceCount+C0, and forwards to717690 only when count is nonzero. Used by native distant tree instancing as well as grass; class name alone must not select a tree adapter.
// [v142 runtime corroboration 2026-10-07] Directional companion Render returned32 logged times with nonzero instance counts36..228 (logging cap32). User reports views changing during orbit; same source batch selects all8 views. Do not interpret 2745 sampled OnVisible submissions as a total GPU draw count. No destruction callback is logged in this session; unload/reload lifetime coverage is UNVERIFIED.
// [v142 visual acceptance update 2026-10-07] Supersedes only the earlier pending visual acceptance statements: the human tester now confirms overhead canopy appearance, near/far transitions with fading, and smooth blending between adjacent directional views during a slow orbit. Combined with archived v142 runtime evidence, the required directional plus horizontal billboard goal is accepted. This is human visual evidence, not an automated pixel test. New adapter scene unload/reload and queued-face destruction remain UNVERIFIED; no new runtime session or destruction coverage is claimed. Audit: SpeedTreeOBSE/out/billboard360_distant_v142/runtime_rotation_analysis.json.
int __thiscall OB_TallGrassTriShape_Render_010201A0(NiGeometry *this, NiDX9Renderer *a2)
{
  bool v2; // zf
  float v3; // edx
  int result; // eax
  float v5; // edx

  v2 = *((_WORD *)this + 0x60) == 0; /*0x864630*/
  v3 = *((float *)this + 0x32); /*0x86463e*/
  this->member.super.m_kWorldBound.Center.x = *((float *)this + 0x31); /*0x864644*/
  result = *((_DWORD *)this + 0x33); /*0x864647*/
  this->member.super.m_kWorldBound.Center.y = v3; /*0x86464d*/
  v5 = *((float *)this + 0x34); /*0x864650*/
  LODWORD(this->member.super.m_kWorldBound.Center.z) = result; /*0x864656*/
  this->member.super.m_kWorldBound.Radius = v5; /*0x864659*/
  if ( !v2 ) /*0x86465c*/
    return sub_717690(this, a2); /*0x86465e*/
  return result; /*0x864663*/
}
