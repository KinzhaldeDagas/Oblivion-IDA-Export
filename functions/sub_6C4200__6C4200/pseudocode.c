// NiControllerManager active-list update. When manager flag bit 3 is set, calls NiControllerSequence_Update(currentTime, apply=1) for every pointer in +0x4C/+0x54. Sequences that finish in state 0 are removed by swapping in the last active-list element.
void __thiscall NiControllerManager_UpdateActiveSequences(int this, float a2)
{
  unsigned int i; // edi
  int v4; // ebx

  if ( (*(_BYTE *)(this + 8) & 8) != 0 ) /*0x6c420b*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 0x54); ++i ) /*0x6c4210*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)(this + 0x4C) + 4 * i); /*0x6c421d*/
      NiControllerSequence_Update(v4, i, a2, COERCE_FLOAT(1)); /*0x6c4228*/
      if ( !*(_DWORD *)(v4 + 0x44) ) /*0x6c422d*/
      {
        --*(_DWORD *)(this + 0x54); /*0x6c4233*/
        *(_DWORD *)(*(_DWORD *)(this + 0x4C) + 4 * i--) = *(_DWORD *)(*(_DWORD *)(this + 0x4C) /*0x6c4240*/
                                                                    + 4 * *(_DWORD *)(this + 0x54));
      }
    }
  }
}
