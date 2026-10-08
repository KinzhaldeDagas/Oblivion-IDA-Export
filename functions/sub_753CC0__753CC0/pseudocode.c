void __thiscall sub_753CC0(NiTimeController *this, NiObjectNET *a2)
{
  NiNode *m_pTarget; // eax
  NiTimeController *m_controller; // ecx
  NiTimeController *i; // eax
  NiObject *next; // edi

  NiTimeController::SetTarget(this, a2); /*0x753cc8*/
  m_pTarget = this->members.m_pTarget; /*0x753ccd*/
  if ( m_pTarget ) /*0x753cd2*/
  {
    m_controller = (NiTimeController *)m_pTarget->members.super.super.m_controller; /*0x753cd4*/
    for ( i = (NiTimeController *)m_controller->members.next; i; i = (NiTimeController *)i->members.next ) /*0x753cdc*/
      m_controller = i; /*0x753ce0*/
    if ( m_controller != this ) /*0x753ceb*/
    {
      sub_6C61E0(m_controller, (int)this); /*0x753cef*/
      sub_478300(this->members.m_pTarget, (NiTimeController *)this->members.next); /*0x753cfb*/
      next = this->members.next; /*0x753d00*/
      if ( next ) /*0x753d05*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&next->members) ) /*0x753d0b*/
          next->__vftable->super.Destructor((NiRefObject *)next, 1); /*0x753d21*/
        this->members.next = 0; /*0x753d23*/
      }
    }
  }
}
