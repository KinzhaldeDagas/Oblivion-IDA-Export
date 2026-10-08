int __userpurge MagicTarget_AddEffect_::GetPlayerTarget@<eax>(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5)
{
  if ( reference ) /*0x6a293d*/
    return MagicTarget_AddEffect_::CheckPlayerInvulnerable(a1, (int)&reference->super.super.magicTarget, a2, a3, a4, a5); /*0x6a294d*/
  else
    return MagicTarget_AddEffect_::CheckPlayerInvulnerable(a1, 0, a2, a3, a4, a5); /*0x6a2a39*/
}
