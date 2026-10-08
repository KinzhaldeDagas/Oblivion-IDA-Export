void __thiscall sub_478300(NiNode *this, NiTimeController *a2)
{
  NiTimeController *m_controller; // esi

  m_controller = (NiTimeController *)this->members.super.super.m_controller; /*0x478304*/
  if ( m_controller != a2 ) /*0x47830e*/
  {
    if ( m_controller ) /*0x478312*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_controller->members) ) /*0x478318*/
        m_controller->vtbl->super.super.Destructor((NiRefObject *)m_controller, 1); /*0x47832e*/
    }
    this->members.super.super.m_controller = (NiInterpController *)a2; /*0x478332*/
    if ( a2 ) /*0x478335*/
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x47833b*/
  }
}
