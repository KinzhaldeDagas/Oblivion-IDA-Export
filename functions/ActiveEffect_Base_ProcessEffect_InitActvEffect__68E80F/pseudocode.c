// Verified first-application completion: sets ActiveEffect.bApplied=1 and resets timeElapsed to 0 before update processing.
int __usercall ActiveEffect_Base_ProcessEffect_::InitActvEffect@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        float a6)
{
  *(_BYTE *)(a1 + 0x10) = 1;                    // Verified: after first Apply processing and HUD/effect-setting checks, sets bApplied=true and resets timeElapsed to 0. /*0x68e811*/
  *(float *)(a1 + 4) = 0.0; /*0x68e815*/
  return ActiveEffect_Base_ProcessEffect_::TestUpdate_(a2, a1, a3, a4, a5, a6);
}
