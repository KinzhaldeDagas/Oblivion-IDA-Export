// Processes playable queued-IDLE state. If +0xD0 exists it must be phase 1, then cleanup/promotion moves it to current +0xCC. Requires current phase 1, installs its KFModel, resolves the parsed encoded group, plays through ActorAnimData_PlayEncodedGroup using stored slot/type +0x0C, and attaches the returned sequence; failures mark phase 3.
char __thiscall ActorAnimData_ProcessQueuedIdleKF(ActorAnimData *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  _DWORD *AnimationGroup; // eax
  Ni2DBuffer *v6; // eax
  Ni2DBuffer **v7; // ecx
  int v9; // [esp-8h] [ebp-Ch]

  v2 = (_DWORD *)this->unkC8[2]; /*0x476383*/
  if ( v2 ) /*0x47638b*/
  {
    if ( *v2 != 1 ) /*0x476390*/
      return 0; /*0x4763ee*/
    ActorAnimData_CleanupOrPromoteQueuedIdles(this, 0, 0); /*0x476396*/
  }
  v3 = (_DWORD *)this->unkC8[1]; /*0x47639b*/
  if ( !v3 || *v3 != 1 ) /*0x4763a9*/
    return 0; /*0x4763a9*/
  v4 = v3[2]; /*0x4763ab*/
  if ( !ActorAnimData_InstallKFModel((AnimSequenceSingle *)this, v4, 0) ) /*0x4763ba*/
  {
    *(_DWORD *)this->unkC8[1] = 3; /*0x476400*/
    return 0; /*0x476407*/
  }
  v9 = *(_DWORD *)(this->unkC8[1] + 0xC); /*0x4763c8*/
  AnimationGroup = (_DWORD *)TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v4 + 8)); /*0x4763c9*/
  v6 = (Ni2DBuffer *)ActorAnimData_PlayEncodedGroup(this, AnimationGroup, v9); /*0x4763d1*/
  v7 = (Ni2DBuffer **)this->unkC8[1]; /*0x4763d8*/
  if ( v6 ) /*0x4763de*/
  {
    AnimIdle_AttachLoadedSequence(v7, v6); /*0x4763e1*/
    return 1; /*0x4763e7*/
  }
  else
  {
    *v7 = (Ni2DBuffer *)3; /*0x4763f0*/
    return 0; /*0x4763f6*/
  }
}
