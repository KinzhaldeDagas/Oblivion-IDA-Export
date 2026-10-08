// Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
char __thiscall NiControllerManager_DeactivateTransitionSources(_DWORD *this, float easeOutTime)
{
  unsigned int i; // esi
  NiControllerSequence *v4; // ecx

  for ( i = 0; i < *(this + 0x15); ++i ) /*0x6c4486*/
  {
    v4 = *(NiControllerSequence **)(*(this + 0x13) + 4 * i); /*0x6c4493*/
    if ( *((_DWORD *)v4 + 0x11) == 4 ) /*0x6c449a*/
      NiControllerSequence_Deactivate(v4, easeOutTime, 0); /*0x6c44a6*/
  }
  return 0; /*0x6c44b3*/
}
