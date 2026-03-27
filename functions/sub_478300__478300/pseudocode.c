void __thiscall sub_478300(NiNode *this, NiTimeController *a2)
{
  NiTimeController *m_controller; // esi

  m_controller = (NiTimeController *)this->members.super.super.m_controller;
  if ( m_controller != a2 )
  {
    if ( m_controller )
    {
      if ( !InterlockedDecrement((volatile LONG *)&m_controller->members) )
        m_controller->vtbl->super.super.Destructor((NiRefObject *)m_controller, 1);
    }
    this->members.super.super.m_controller = (NiInterpController *)a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)&a2->members);
  }
}
