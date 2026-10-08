// Controller-sequence reset/rebind phase. Clears active slots 4/0/1/2, deactivates the queued/current blend sequence, restores key/state sentinels, removes a controller object from the actor root, then rebinds or repairs every non-__TempBlendSequence__ manager sequence according to the flag. This is whole-object reset logic, not a per-key cleanup API.
void __thiscall ActorAnimData_ResetControllerSequences(ActorAnimData *this, char a2)
{
  unsigned int v3; // ebp
  BSAnimGroupSequence *v4; // eax
  BSAnimGroupSequence *v5; // eax
  NiControllerManager *manager; // ecx
  NiObject *v7; // eax
  Ni2DBuffer *v8; // edi
  NiControllerManager *v9; // eax
  int v10; // edi
  unsigned int *v11; // eax
  unsigned int *v12; // edi

  v3 = 0; /*0x473204*/
  if ( this->manager ) /*0x473206*/
  {
    ActorAnimData_ClearSlot(this, 4, 0.0); /*0x47321a*/
    ActorAnimData_ClearSlot(this, 0, 0.0); /*0x473228*/
    ActorAnimData_ClearSlot(this, 1, 0.0); /*0x473237*/
    ActorAnimData_ClearSlot(this, 2, 0.0); /*0x473246*/
    if ( this->manager ) /*0x47324b*/
    {
      v4 = this->animSequences[3]; /*0x473255*/
      if ( v4 ) /*0x47325d*/
      {
        if ( *((_DWORD *)v4 + 0x11) ) /*0x47325f*/
        {
          v5 = *((BSAnimGroupSequence **)v4 + 0x16); /*0x473264*/
          if ( v5 ) /*0x473269*/
            BSAnimGroupSequence_Deactivate(v5, 0.0); /*0x473272*/
          if ( *((_DWORD *)this->animSequences[3] + 0x11) == 5 ) /*0x473281*/
            NiControllerManager_DeactivateTransitionSources((_DWORD *)this->manager, 0.0); /*0x47328f*/
          NiControllerSequence_Deactivate(this->animSequences[3], 0.0, 0); /*0x4732a1*/
        }
      }
    }
    this->animSequences[3] = 0; /*0x4732a6*/
    this->animsMapKey[3] = 0xFF; /*0x4732b1*/
    HIWORD(this->unk74) = 0xFF; /*0x4732b5*/
    this->unk48State[3] = 0xFFFFFFFF; /*0x4732b9*/
    manager = this->manager; /*0x4732c0*/
    if ( *((_DWORD *)manager + 0x1F) ) /*0x4732c6*/
    {
      v7 = NiRTTI_Cast((BSStringT *)&stru_B3FCB8, *((NiObject **)manager + 0x1F)); /*0x4732d3*/
      if ( v7 ) /*0x4732dd*/
        sub_716690(v7); /*0x4732e1*/
    }
    v8 = (Ni2DBuffer *)sub_700010(&this->RootNode->vtbl, (int)&stru_B3CD7C); /*0x4732f4*/
    if ( v8 ) /*0x4732f8*/
    {
      NiControllerManager_DeactivateAllSequences(this->manager, 0.0); /*0x473306*/
      NiObjectNET_RemoveController((Ni2DBuffer **)this->RootNode, v8); /*0x47330f*/
    }
    v9 = this->manager; /*0x473314*/
    if ( *((_WORD *)v9 + 0x23) ) /*0x47331a*/
    {
      do /*0x47338a*/
      {
        v10 = *(_DWORD *)(*((_DWORD *)v9 + 0x10) + 4 * v3); /*0x473328*/
        if ( v10 ) /*0x47332d*/
        {
          if ( CRT_StricmpLocaleDispatch("__TempBlendSequence__", *(const char **)(v10 + 8)) ) /*0x473338*/
          {
            if ( a2 ) /*0x473346*/
            {
              sub_6C9590((_DWORD *)v10, v3, (Ni2DBuffer **)this->RootNode); /*0x47334e*/
            }
            else
            {
              v11 = (unsigned int *)NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x13E0], (NiObject *)v10); /*0x47335b*/
              v12 = v11; /*0x473360*/
              if ( v11 ) /*0x473367*/
              {
                sub_49F880(v11); /*0x47336b*/
                sub_49F860(v12, &this->RootNode->vtbl); /*0x473376*/
              }
            }
          }
        }
        v9 = this->manager; /*0x47337b*/
        ++v3; /*0x473385*/
      }
      while ( v3 < *((unsigned __int16 *)v9 + 0x23) ); /*0x47338a*/
    }
  }
}
