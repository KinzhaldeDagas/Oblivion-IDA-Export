void __thiscall sub_4FA020(ScriptEventList *this)
{
  EventEntry *m_eventList; // eax
  unsigned int *v3; // eax
  unsigned int *v4; // ecx
  unsigned int v5; // edi

  m_eventList = this->m_eventList; /*0x4fa023*/
  if ( m_eventList ) /*0x4fa028*/
  {
    if ( m_eventList->event ) /*0x4fa02a*/
    {
      do /*0x4fa063*/
      {
        v3 = (unsigned int *)this->m_eventList; /*0x4fa030*/
        v4 = (unsigned int *)v3[1]; /*0x4fa033*/
        v5 = *v3; /*0x4fa038*/
        if ( v4 ) /*0x4fa03a*/
        {
          v3[1] = v4[1]; /*0x4fa03f*/
          *v3 = *v4; /*0x4fa045*/
          FormHeapFree((unsigned int)v4); /*0x4fa047*/
        }
        else
        {
          *v3 = 0; /*0x4fa051*/
        }
        FormHeapFree(v5); /*0x4fa058*/
      }
      while ( this->m_eventList->event ); /*0x4fa063*/
    }
    FormHeapFree((unsigned int)this->m_eventList); /*0x4fa06d*/
    this->m_eventList = 0; /*0x4fa075*/
  }
}
