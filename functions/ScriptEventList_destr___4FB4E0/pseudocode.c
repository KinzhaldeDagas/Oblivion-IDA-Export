void __thiscall ScriptEventList_destr__(ScriptEventList *this)
{
  ScriptEffectInfo *m_scriptEffectInfo; // esi

  sub_4FA020(this);
  sub_4FA080(this);
  m_scriptEffectInfo = this->m_scriptEffectInfo;
  if ( m_scriptEffectInfo )
    FormHeapFree((unsigned int)m_scriptEffectInfo);
}
