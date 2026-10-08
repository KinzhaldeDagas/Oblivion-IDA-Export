char __userpurge NonActorMagicTarget_AttemptAddEffect@<al>(
        int *this@<ecx>,
        double a2@<st0>,
        int a3,
        float a4,
        int a5,
        int a6)
{
  char v7; // bl

  v7 = MagicTarget_AttemptAddEffect(this, a2, a3, a4, a5, a6); /*0x6a32ef*/
  if ( v7 ) /*0x6a32f3*/
    MagicTarget_ProcessEffects((MagicTarget *)this, 1.0); /*0x6a32fd*/
  return v7; /*0x6a3302*/
}
