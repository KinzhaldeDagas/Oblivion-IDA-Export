void __thiscall ScriptEventList_Preload_(ScriptEventList *this)
{
  EventEntry *i; // eax
  Event *event; // ecx

  sub_4FA080(this); /*0x4fba54*/
  for ( i = this->m_eventList; i; event->eventMask = 0 ) /*0x4fba60*/
  {
    event = i->event; /*0x4fba62*/
    if ( !i->event ) /*0x4fba62*/
      break; /*0x4fba66*/
    i = i->next; /*0x4fba68*/
  }
  if ( this->m_script ) /*0x4fba72*/
    this->m_vars = (VarEntry *)sub_4FA910((char *)this->m_script); /*0x4fba7d*/
  if ( this->m_scriptEffectInfo ) /*0x4fba80*/
    FormHeapFree((unsigned int)this->m_scriptEffectInfo); /*0x4fba88*/
  this->m_scriptEffectInfo = 0; /*0x4fba90*/
}
