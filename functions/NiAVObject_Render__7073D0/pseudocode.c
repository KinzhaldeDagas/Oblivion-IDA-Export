// CULLING audit 2026-09-27 (observed Oblivion behavior): Checks AppCulled bit 0 at NiAVObject+0x18 before virtual process ProcessCull(+4). CULLING does not clear this bit and cannot observe descendants pruned before its geometry guard. Render-only culling should not set persistent object flags.
// GPU world census audit 2026-09-27: AppCulled is tested on every visited NiAVObject before ProcessCull. GPU candidates must retain inherited node/ancestor conditions, not only the leaf flag.
int __thiscall NiAVObject_Render(NiAVObject *this, NiCullingProcess *a2)
{
  int result; // eax

  if ( (this->members.m_flags & 1) == 0 ) /*0x7073d4*/
    return a2->vtbl->ProcessCull(a2, this); /*0x7073e5*/
  return result; /*0x7073e7*/
}
