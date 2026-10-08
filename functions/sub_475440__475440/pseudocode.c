// Owns current/queued idle retirement and promotion across ActorAnimData +0xCC/+0xD0/+0xD4/+0xD8. Depending on caller flags, stops a still-active sequence, moves stale holders into the two cleanup slots, destroys them when no slot is available or forced, or promotes queued +0xD0 into current +0xCC.
void __thiscall ActorAnimData_CleanupOrPromoteQueuedIdles(ActorAnimData *this, char a2, char a3)
{
  UInt32 v4; // eax
  UInt32 *v5; // edi
  int v6; // ecx
  BSAnimGroupSequence *v7; // eax
  UInt32 v8; // edx
  UInt32 *v9; // ebp
  int v10; // eax
  BSAnimGroupSequence *v11; // edx

  v4 = this->unkC8[1]; /*0x475449*/
  v5 = &this->unkC8[1]; /*0x475452*/
  if ( v4 ) /*0x475458*/
  {
    v6 = *(_DWORD *)(v4 + 0xC); /*0x47545a*/
    if ( v6 == 5 ) /*0x475462*/
    {
      v6 = 0; /*0x475470*/
    }
    else if ( *(_DWORD *)(v4 + 0xC) == 6 ) /*0x475467*/
    {
      v6 = 3; /*0x475469*/
    }
    if ( !a3 ) /*0x475474*/
    {
      v7 = *(BSAnimGroupSequence **)(v4 + 0x10); /*0x475476*/
      if ( v7 ) /*0x47547b*/
      {
        if ( this->animSequences[v6] == v7 ) /*0x475484*/
          ActorAnimData_StopSlotWithBlendNote((int)this, v6); /*0x475489*/
      }
      if ( !this->unkD4 ) /*0x47548e*/
      {
        this->unkD4 = *v5; /*0x475499*/
        *v5 = 0; /*0x47549f*/
        goto LABEL_15; /*0x4754a5*/
      }
      if ( !this->unkD8 ) /*0x4754a7*/
      {
        this->unkD8 = (void *)*v5; /*0x4754b2*/
        *v5 = 0; /*0x4754b8*/
        goto LABEL_15; /*0x4754be*/
      }
    }
    AnimIdle_DestroyAndRelease(this, (char **)v5); /*0x4754c3*/
  }
LABEL_15:
  if ( a2 && (v8 = this->unkC8[2], v9 = &this->unkC8[2], v8) ) /*0x4754e1*/
  {
    v10 = *(_DWORD *)(v8 + 0xC); /*0x4754e7*/
    if ( v10 == 5 ) /*0x4754ef*/
    {
      v10 = 0; /*0x4754fd*/
    }
    else if ( *(_DWORD *)(v8 + 0xC) == 6 ) /*0x4754f4*/
    {
      v10 = 3; /*0x4754f6*/
    }
    if ( a3 ) /*0x475501*/
      goto LABEL_29; /*0x475501*/
    v11 = *(BSAnimGroupSequence **)(v8 + 0x10); /*0x475503*/
    if ( v11 ) /*0x475508*/
    {
      if ( this->animSequences[v10] == v11 ) /*0x475511*/
        ActorAnimData_StopSlotWithBlendNote((int)this, v10); /*0x475516*/
    }
    if ( !this->unkD4 ) /*0x47551b*/
    {
      this->unkD4 = *v9; /*0x475528*/
      *v9 = 0; /*0x47552f*/
      return; /*0x475538*/
    }
    if ( this->unkD8 ) /*0x47553b*/
    {
LABEL_29:
      AnimIdle_DestroyAndRelease(this, (char **)&this->unkC8[2]); /*0x47555e*/
    }
    else
    {
      this->unkD8 = (void *)*v9; /*0x475548*/
      *v9 = 0; /*0x47554f*/
    }
  }
  else
  {
    *v5 = this->unkC8[2]; /*0x475570*/
    this->unkC8[2] = 0; /*0x475573*/
  }
}
