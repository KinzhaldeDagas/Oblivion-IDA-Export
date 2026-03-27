void __thiscall NiTimeController::SetTarget(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *m_pTarget; // ecx
  NiTimeController *m_controller; // eax

  if ( (NiObjectNET *)this->members.m_pTarget == a2 )
    return;
  InterlockedIncrement((volatile LONG *)&this->members);
  m_pTarget = this->members.m_pTarget;
  if ( m_pTarget )
  {
    if ( m_pTarget->members.super.super.m_controller )
      sub_6FFE90((Ni2DBuffer **)m_pTarget, (Ni2DBuffer *)this);
  }
  this->members.m_pTarget = (NiNode *)a2;
  if ( !a2 )
  {
LABEL_11:
    if ( !InterlockedDecrement((volatile LONG *)&this->members) )
      this->vtbl->super.super.Destructor((NiRefObject *)this, 1);
    return;
  }
  m_controller = (NiTimeController *)a2->members.m_controller;
  if ( !m_controller )
  {
LABEL_9:
    sub_6FFE60((Ni2DBuffer **)a2, (Ni2DBuffer *)this);
    if ( this->vtbl->Unk_18(this) )
      *(_WORD *)(*(_DWORD *)&this->members.m_pTarget->members.children.capacity + 0x2E) = *(_WORD *)(*(_DWORD *)&this->members.m_pTarget->members.children.capacity + 0x2E)
                                                                                        & 0xFFF
                                                                                        | 0x8000;
    goto LABEL_11;
  }
  while ( m_controller != this )
  {
    m_controller = (NiTimeController *)m_controller->members.next;
    if ( !m_controller )
      goto LABEL_9;
  }
}
