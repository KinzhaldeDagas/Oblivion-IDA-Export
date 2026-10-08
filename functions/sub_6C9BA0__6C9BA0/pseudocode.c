// Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
// local variable allocation has failed, the output may be wrong!
char __thiscall NiControllerSequence_Activate(
        NiControllerSequence *this,
        char priority,
        char startOver,
        float weight,
        float easeInTime,
        NiControllerSequence *timeSyncSequence,
        char transition)
{
  NiControllerSequence *v9; // eax
  bool v10; // zf
  unsigned int *v11; // ecx
  unsigned int *v12; // ecx

  if ( *((_DWORD *)this + 0x11) ) /*0x6c9ba3*/
    return 0; /*0x6c9bac*/
  *((_DWORD *)this + 0x16) = 0; /*0x6c9bb6*/
  if ( timeSyncSequence ) /*0x6c9bbd*/
  {
    v9 = *((NiControllerSequence **)timeSyncSequence + 0x16); /*0x6c9bbf*/
    if ( v9 && (v9 == this || !sub_6C6110(this, *((_DWORD *)timeSyncSequence + 0x16))) /*0x6c9bd7*/
      || !sub_6C6ED0(this, (int)timeSyncSequence, (int)timeSyncSequence) )
    {
      return 0; /*0x6c9c27*/
    }
    *((_DWORD *)this + 0x16) = timeSyncSequence; /*0x6c9be0*/
  }
  sub_6C6A50(this, priority); /*0x6c9bea*/
  *((float *)this + 7) = weight; /*0x6c9bf3*/
  if ( easeInTime <= 0.0 ) /*0x6c9c01*/
  {
    v10 = *((_DWORD *)this + 0x11) == 0; /*0x6c9c64*/
    *((_DWORD *)this + 0x11) = 1; /*0x6c9c68*/
    if ( v10 ) /*0x6c9c74*/
    {
      v12 = (unsigned int *)(*((_DWORD *)this + 0x10) + 0x4C); /*0x6c9c7e*/
      *(_DWORD *)&transition = this; /*0x6c9c81*/
      sub_73A5E0(v12, (NiD3DPass **)&transition); /*0x6c9c85*/
    }
    goto LABEL_19; /*0x6c9c85*/
  }
  if ( transition ) /*0x6c9c08*/
  {
    v10 = *((_DWORD *)this + 0x11) == 0; /*0x6c9c0a*/
    *((_DWORD *)this + 0x11) = 5; /*0x6c9c0e*/
    if ( v10 ) /*0x6c9c1a*/
      goto LABEL_15; /*0x6c9c1a*/
  }
  else
  {
    v10 = *((_DWORD *)this + 0x11) == 0; /*0x6c9c2a*/
    *((_DWORD *)this + 0x11) = 2; /*0x6c9c2e*/
    if ( v10 ) /*0x6c9c3a*/
    {
LABEL_15:
      v11 = (unsigned int *)(*((_DWORD *)this + 0x10) + 0x4C); /*0x6c9c41*/
      *(_DWORD *)&transition = this; /*0x6c9c47*/
      sub_73A5E0(v11, (NiD3DPass **)&transition); /*0x6c9c4b*/
    }
  }
  *((float *)this + 0x13) = -flt_A7DEB4; /*0x6c9c50*/
  *((float *)this + 0x14) = easeInTime; /*0x6c9c5f*/
LABEL_19:
  if ( startOver ) /*0x6c9c8f*/
    *((float *)this + 0x12) = -flt_A7DEB4; /*0x6c9c99*/
  return 1; /*0x6c9bab*/
}
