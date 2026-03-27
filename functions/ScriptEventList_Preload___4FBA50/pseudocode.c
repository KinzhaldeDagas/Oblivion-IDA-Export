void __thiscall ScriptEventList_Preload_(ScriptEventList *this)
{
  EventEntry *i; // eax
  Event *event; // ecx

  sub_4FA080(this);
  for ( i = this->m_eventList; i; event->eventMask = 0 )
  {
    event = i->event;
    if ( !i->event )
      break;
    i = i->next;
  }
  if ( this->m_script )
    this->m_vars = (VarEntry *)sub_4FA910((char *)this->m_script);
  if ( this->m_scriptEffectInfo )
    FormHeapFree((unsigned int)this->m_scriptEffectInfo);
  this->m_scriptEffectInfo = 0;
}
