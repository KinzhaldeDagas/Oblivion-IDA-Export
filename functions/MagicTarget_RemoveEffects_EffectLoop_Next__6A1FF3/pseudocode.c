// positive sp value has been detected, the output may be wrong!
int __userpurge MagicTarget_RemoveEffects_::EffectLoop_Next@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
    return MagicTarget_RemoveEffects_::EffectLoop_Check(a1, a2, a3, a4, a5, a6);
  return result;
}
