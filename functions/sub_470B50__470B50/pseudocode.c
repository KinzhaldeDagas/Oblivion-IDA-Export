// BSAnimGroupSequence deactivation wrapper. Delegates to NiControllerSequence_Deactivate with the secondary stop flag forced to zero.
char __stdcall BSAnimGroupSequence_Deactivate(BSAnimGroupSequence *sequence, float easeOutTime)
{
  return NiControllerSequence_Deactivate((int)sequence, easeOutTime, 0); /*0x470b63*/
}
