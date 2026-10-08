// Cross-fades from an active source sequence to an inactive destination: deactivates the source with the requested ease time, then activates the destination with the same transition time and caller-supplied priority/start/weight/time-sync values. Returns false unless source is active and destination inactive.
char __stdcall NiControllerSequence_CrossFade(
        NiControllerSequence *a1,
        NiControllerSequence *a2,
        float easeOutTime,
        char priority,
        char startOver,
        float weight,
        NiControllerSequence *timeSyncSequence)
{
  if ( !*((_DWORD *)a1 + 0x11) || *((_DWORD *)a2 + 0x11) ) /*0x6c400f*/
    return 0; /*0x6c4052*/
  NiControllerSequence_Deactivate(a1, easeOutTime, 0); /*0x6c401f*/
  return NiControllerSequence_Activate(a2, priority, startOver, weight, easeOutTime, timeSyncSequence, 0); /*0x6c404e*/
}
