void __thiscall ScriptEventList_destr__(ScriptEventList *this)
{
  ScriptEffectInfo *m_scriptEffectInfo; // esi

  sub_4FA020(this); /*0x4fb4e3*/
  sub_4FA080(this); /*0x4fb4ea*/
  m_scriptEffectInfo = this->m_scriptEffectInfo; /*0x4fb4ef*/
  if ( m_scriptEffectInfo ) /*0x4fb4f4*/
    FormHeapFree((unsigned int)m_scriptEffectInfo); /*0x4fb4f7*/
}
