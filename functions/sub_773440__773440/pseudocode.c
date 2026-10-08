// Apply one stage's tracked texture-stage states, then tracked sampler states.
// GPU-world qualification: stage state is applied only when stage index < DWORD B28CB0; sampler state application still occurs. Decoder retains this distinction rather than dropping the whole stage.
int __thiscall OB_NiD3DTextureStageStateGroup_ApplyAllStates_010201A0(void *this, unsigned int stage)
{
  int v2; // esi
  int result; // eax

  v2 = 0; /*0x773446*/
  if ( stage < dword_B28CB0 ) /*0x773451*/
    v2 = OB_NiD3DTextureStageStateGroup_ApplyStageStates_010201A0(this, stage); /*0x773459*/
  result = OB_NiD3DTextureStageStateGroup_ApplySamplerStates_010201A0(this, stage); /*0x77345e*/
  if ( v2 ) /*0x773465*/
    return v2; /*0x773467*/
  return result; /*0x773469*/
}
