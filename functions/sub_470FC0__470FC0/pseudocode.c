// Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
int __thiscall ActorAnimData_ClearSlot(ActorAnimData *this, int slot, float easeOutTime)
{
  int v3; // edi
  BSAnimGroupSequence *v5; // eax
  BSAnimGroupSequence *v6; // eax

  v3 = slot; /*0x470fc6*/
  if ( slot == 5 ) /*0x470fcd*/
  {
    ActorAnimData_ClearSlot(this, 4, easeOutTime); /*0x470fe0*/
    ActorAnimData_ClearSlot(this, 0, easeOutTime); /*0x470ff1*/
    goto LABEL_5; /*0x470ff1*/
  }
  if ( slot == 6 ) /*0x470fd2*/
  {
LABEL_5:
    ActorAnimData_ClearSlot(this, 1, easeOutTime); /*0x470ff6*/
    ActorAnimData_ClearSlot(this, 2, easeOutTime); /*0x471013*/
    v3 = 3; /*0x471018*/
  }
  if ( this->manager ) /*0x47101d*/
  {
    if ( v3 < 5 ) /*0x47102a*/
    {
      v5 = this->animSequences[v3]; /*0x47102c*/
      if ( v5 ) /*0x471035*/
      {
        if ( *((_DWORD *)v5 + 0x11) ) /*0x471037*/
        {
          v6 = *((BSAnimGroupSequence **)v5 + 0x16); /*0x47103d*/
          if ( v6 ) /*0x471042*/
            BSAnimGroupSequence_Deactivate(v6, easeOutTime); /*0x47104d*/
          if ( *((_DWORD *)this->animSequences[v3] + 0x11) == 5 ) /*0x47105d*/
            NiControllerManager_DeactivateTransitionSources((_DWORD *)this->manager, easeOutTime); /*0x47106d*/
          NiControllerSequence_Deactivate(this->animSequences[v3], easeOutTime, 0); /*0x471083*/
        }
      }
    }
  }
  this->animSequences[v3] = 0; /*0x471088*/
  this->animsMapKey[v3] = 0xFF; /*0x471098*/
  *((_WORD *)&this->unk70 + v3) = 0xFF; /*0x47109d*/
  this->unk48State[v3] = 0xFFFFFFFF;            // ActorAnimData_ClearSlot sets the per-slot note/action state to -1, distinct from HighProcess.currentAction; clearing a sequence slot alone is not proof that process action 3 was cleared. /*0x4710a2*/
  return 0xFF; /*0x4710aa*/
}
