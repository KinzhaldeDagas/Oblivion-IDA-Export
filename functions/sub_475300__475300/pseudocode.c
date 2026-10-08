// Replaces ActorAnimData current idle at +0xCC, not the queued +0xD0 slot. Stops its still-active normalized physical slot, retires the old AnimIdle into cleanup slots +0xD4/+0xD8 or destroys it, then allocates/initializes a new AnimIdle at +0xCC with completion mode 1 and no actor ref. Furniture/package callers later wait for ready phase and explicitly start it.
IOTask *__thiscall ActorAnimData_ReplaceCurrentIdleLoader(char **this, UInt32 a2, UInt32 a3)
{
  int v4; // eax
  char **v5; // edi
  int v6; // ecx
  int *v7; // eax
  IOTask *v8; // eax
  IOTask *result; // eax

  v4 = (int)*(this + 0x33); /*0x475325*/
  v5 = this + 0x33; /*0x47532d*/
  if ( v4 ) /*0x475333*/
  {
    v6 = *(_DWORD *)(v4 + 0xC); /*0x475335*/
    if ( v6 == 5 ) /*0x47533d*/
    {
      v6 = 0; /*0x47534b*/
    }
    else if ( *(_DWORD *)(v4 + 0xC) == 6 ) /*0x475342*/
    {
      v6 = 3; /*0x475344*/
    }
    v7 = *(int **)(v4 + 0x10); /*0x47534d*/
    if ( v7 ) /*0x475352*/
    {
      if ( *(this + v6 + 0x28) == (char *)v7 ) /*0x47535b*/
        ActorAnimData_StopSlotWithBlendNote((int)this, v6); /*0x475360*/
    }
    if ( *(this + 0x35) ) /*0x475365*/
    {
      if ( *(this + 0x36) ) /*0x47537e*/
      {
        AnimIdle_DestroyAndRelease(this, v5); /*0x47539a*/
      }
      else
      {
        *(this + 0x36) = *v5; /*0x475389*/
        *v5 = 0; /*0x47538f*/
      }
    }
    else
    {
      *(this + 0x35) = *v5; /*0x475370*/
      *v5 = 0; /*0x475376*/
    }
  }
  v8 = (IOTask *)FormHeapAlloc(0x2Cu); /*0x4753a1*/
  if ( v8 ) /*0x4753b7*/
    result = AnimIdle_InitAndLoadKF(v8, a2, a3, (BSTask *)1, 0, 0); /*0x4753cb*/
  else
    result = 0; /*0x4753d2*/
  *v5 = (char *)result; /*0x4753d4*/
  return result; /*0x4753d6*/
}
