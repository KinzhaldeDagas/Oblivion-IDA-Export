int __thiscall sub_709EC0(NiNode *this)
{
  NiNode *m_parent; // esi
  int result; // eax

  m_parent = this->members.super.m_parent;
  result = ((int (*)(void))this->vtbl->super.UpdateWorldBound)();
  if ( m_parent )
    return ((int (__thiscall *)(NiNode *))m_parent->vtbl->Unk_25)(m_parent);
  return result;
}
