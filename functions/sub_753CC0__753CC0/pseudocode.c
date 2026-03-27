void __thiscall sub_753CC0(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *m_pTarget; // eax
  NiTimeController *m_controller; // ecx
  NiObject *i; // eax
  NiObject *next; // edi

  NiTimeController::SetTarget(this, a2);
  m_pTarget = this->members.m_pTarget;
  if ( m_pTarget )
  {
    m_controller = (NiTimeController *)m_pTarget->members.super.super.m_controller;
    for ( i = m_controller->members.next; i; i = (NiObject *)i[6].members.m_uiRefCount )
      m_controller = (NiTimeController *)i;
    if ( m_controller != this )
    {
      sub_6C61E0(m_controller, (int)this);
      sub_478300(this->members.m_pTarget, (NiTimeController *)this->members.next);
      next = this->members.next;
      if ( next )
      {
        if ( !InterlockedDecrement((volatile LONG *)&next->members) )
          next->__vftable->super.Destructor((NiRefObject *)next, 1);
        this->members.next = 0;
      }
    }
  }
}
