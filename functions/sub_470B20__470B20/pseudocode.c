// BSAnimGroupSequence activation wrapper. Delegates to NiControllerSequence_Activate with the final transition flag forced to zero.
char __stdcall BSAnimGroupSequence_Activate(
        BSAnimGroupSequence *sequence,
        char priority,
        char startOver,
        float weight,
        float easeInTime,
        BSAnimGroupSequence *timeSyncSequence)
{
  return NiControllerSequence_Activate( /*0x470b4c*/
           (NiD3DPass *)sequence,
           priority,
           startOver,
           LODWORD(weight),
           (char *)LODWORD(easeInTime),
           (float **)timeSyncSequence,
           0);
}
