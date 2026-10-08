// NiNode upward world-bound propagation (+0x94). Saves the parent, dispatches this node's virtual UpdateWorldBound, then repeats through the parent until the root is reached. NiAVObject_UpdateNiAVObject calls this after the downward pass when its target has a parent.
int __thiscall NiNode_UpdateParentWorldBounds(NiNode *this)
{
  NiNode *m_parent; // esi
  int result; // eax

  m_parent = this->members.super.m_parent; /*0x709ec6*/
  result = ((int (*)(void))this->vtbl->super.UpdateWorldBound)(); /*0x709ec9*/
  if ( m_parent ) /*0x709ecd*/
    return ((int (__thiscall *)(NiNode *))m_parent->vtbl->Unk_25)(m_parent); /*0x709eda*/
  return result; /*0x709edc*/
}
