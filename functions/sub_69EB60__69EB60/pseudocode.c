// Verified MagicModelHitEffect_Update calls base lifetime/target checks, uses bFinished to stop the SpecialIdle_HitEffect controller sequence, and returns false after the visual is done so ActorProcessManager_UpdateTempEffects can remove it.
bool __thiscall MagicModelHitEffect_Update(MagicHitEffect *this, float deltaSeconds)
{
  TESObjectREFR *targetReference; // ecx
  NiControllerManager *v4; // eax
  NiControllerSequence *SequenceByName; // eax

  targetReference = this->targetReference; /*0x69eb63*/
  if ( targetReference && targetReference->vtbl->GetNiNode(targetReference) && MagicHitEffect_Update(this, deltaSeconds) ) /*0x69eb8a*/
  {
    if ( *((_DWORD *)this + 0xC) ) /*0x69eb97*/
    {
      this->super.vtable[1].super.Unk_02((NiObject *)this); /*0x69eba4*/
      v4 = (NiControllerManager *)NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(*((_DWORD *)this + 0xC) + 0xC)); /*0x69ebb2*/
      if ( v4 ) /*0x69ebbc*/
      {
        SequenceByName = NiControllerManager_FindSequenceByName(v4, "SpecialIdle_HitEffect"); /*0x69ebc5*/
        if ( SequenceByName ) /*0x69ebce*/
        {
          if ( *((float *)SequenceByName + 0xC) < (double)*((float *)SequenceByName + 0xD) /*0x69ebdf*/
            && *((_DWORD *)SequenceByName + 0x11) )
          {
            if ( *((_DWORD *)SequenceByName + 9) != 2 && !this->bFinished ) /*0x69ebef*/
              return 1; /*0x69ebef*/
            this->bFinished = 1; /*0x69ebf9*/
            NiControllerSequence_Deactivate(SequenceByName, 0.0, 0); /*0x69ebfd*/
            this->super.durationSeconds = this->elapsedSeconds; /*0x69ec05*/
          }
        }
      }
    }
    if ( !this->bFinished || this->super.durationSeconds + dbl_A3D0C0 >= this->elapsedSeconds ) /*0x69ec21*/
      return 1; /*0x69ec26*/
  }
  return 0; /*0x69ec25*/
}
