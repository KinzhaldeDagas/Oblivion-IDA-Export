// Sets NiAVObject parent at +0x1C. If already parented, first asks the old parent to remove this child, then installs the new parent. Used by NiNode child insertion/replacement.
void __thiscall NiAVObject_SetParentAndDetachFromOld(NiAVObject *this, NiNode *newParent)
{
  NiNode *m_parent; // ecx
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  m_parent = this->members.m_parent; /*0x7074b4*/
  if ( m_parent ) /*0x7074b9*/
  {
    m_parent->vtbl->RemoveObject(m_parent, (NiAVObject **)&v5, this); /*0x7074ca*/
    v4 = (void (__thiscall ***)(_DWORD, int))v5; /*0x7074cc*/
    if ( !v5 ) /*0x7074d2*/
    {
LABEL_6:
      this->members.m_parent = newParent; /*0x7074f0*/
      return; /*0x7074fa*/
    }
    if ( InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7074d8*/
    {
      this->members.m_parent = newParent; /*0x70750f*/
    }
    else
    {
      if ( v4 ) /*0x7074e4*/
      {
        (**v4)(v4, 1); /*0x7074ee*/
        goto LABEL_6; /*0x7074ee*/
      }
      this->members.m_parent = newParent; /*0x707502*/
    }
  }
  else
  {
    this->members.m_parent = newParent; /*0x70751b*/
  }
}
