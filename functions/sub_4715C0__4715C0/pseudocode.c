// Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
char __thiscall NiControllerManager_DeactivateAllSequences(NiControllerManager *this, float easeOutTime)
{
  unsigned int i; // esi
  char result; // al

  for ( i = 0; i < *((_DWORD *)this + 0x15); ++i ) /*0x4715c6*/
    result = NiControllerSequence_Deactivate( /*0x4715e0*/
               *(NiControllerSequence **)(*((_DWORD *)this + 0x13) + 4 * i),
               easeOutTime,
               0);
  return result; /*0x4715ed*/
}
