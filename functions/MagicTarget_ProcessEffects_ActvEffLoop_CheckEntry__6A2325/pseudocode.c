int __usercall MagicTarget_ProcessEffects_::ActvEffLoop_CheckEntry@<eax>(
        _DWORD *a1@<ebp>,
        int a2,
        int a3,
        int a4,
        __int16 a5)
{
  if ( !a1[1] && !*a1 )
    JUMPOUT(0x6A23A2);
  return MagicTarget_ProcessEffects_::ActvEffLoop_CheckEffect(a2, a3, a4, a5);
}
