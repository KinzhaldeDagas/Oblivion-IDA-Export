// Retargets a controller while holding a temporary self-reference. Removes it from the previous NiObjectNET controller chain, assigns non-owning target +0x30, avoids duplicate insertion, then inserts into the new target's refcounted chain and propagates manager-controlled target state when applicable.
void __thiscall NiTimeController::SetTarget(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *m_pTarget; // ecx
  NiTimeController *m_controller; // eax

  if ( (NiObjectNET *)this->members.m_pTarget == a2 ) /*0x715ceb*/
    return; /*0x715ceb*/
  InterlockedIncrement((volatile LONG *)&this->members); /*0x715cf6*/
  m_pTarget = this->members.m_pTarget; /*0x715cfc*/
  if ( m_pTarget ) /*0x715d01*/
  {
    if ( m_pTarget->members.super.super.m_controller ) /*0x715d03*/
      NiObjectNET_RemoveController((Ni2DBuffer **)m_pTarget, (Ni2DBuffer *)this); /*0x715d0a*/
  }
  this->members.m_pTarget = (NiNode *)a2; /*0x715d11*/
  if ( !a2 ) /*0x715d14*/
  {
LABEL_11:
    if ( !InterlockedDecrement((volatile LONG *)&this->members) ) /*0x715d5c*/
      this->vtbl->super.super.Destructor((NiRefObject *)this, 1); /*0x715d6e*/
    return; /*0x715d6e*/
  }
  m_controller = (NiTimeController *)a2->members.m_controller; /*0x715d16*/
  if ( !m_controller ) /*0x715d1b*/
  {
LABEL_9:
    NiObjectNET_AddController((Ni2DBuffer **)a2, (Ni2DBuffer *)this); /*0x715d2b*/
    if ( this->vtbl->Unk_18(this) ) /*0x715d3a*/
      *(_WORD *)(*(_DWORD *)&this->members.m_pTarget->members.children.capacity + 0x2E) = *(_WORD *)(*(_DWORD *)&this->members.m_pTarget->members.children.capacity + 0x2E) /*0x715d57*/
                                                                                        & 0xFFF
                                                                                        | 0x8000;
    goto LABEL_11; /*0x715d57*/
  }
  while ( m_controller != this ) /*0x715d22*/
  {
    m_controller = (NiTimeController *)m_controller->members.next; /*0x715d24*/
    if ( !m_controller ) /*0x715d29*/
      goto LABEL_9; /*0x715d29*/
  }
}
