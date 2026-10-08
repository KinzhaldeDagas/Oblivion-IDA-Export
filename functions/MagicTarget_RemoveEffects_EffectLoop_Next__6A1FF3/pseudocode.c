// positive sp value has been detected, the output may be wrong!
_DWORD *__userpurge MagicTarget_RemoveEffects_::EffectLoop_Next@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _DWORD *result; // eax

  result = a1; /*0x6a1ff5*/
  if ( a1 ) /*0x6a1ff7*/
    return (_DWORD *)MagicTarget_RemoveEffects_::EffectLoop_Check(a1, a2, a3, a4, a5, a6); /*0x6a1ff7*/
  return result; /*0x6a1ffd*/
}
