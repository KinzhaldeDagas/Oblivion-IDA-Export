void __thiscall sub_4CE320(TESObjectCELL *this)
{
  NiNode *niNode; // esi
  NiNode *m_parent; // ecx
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  void (__thiscall ***v5)(_DWORD, int); // ebp
  NiNode *v6; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  niNode = this->members.niNode;
  this->members.cellProcessLevel = 1;
  if ( niNode )
  {
    m_parent = niNode->members.super.m_parent;
    v4 = InterlockedDecrement;
    if ( m_parent )
    {
      m_parent->vtbl->RemoveObject(m_parent, (NiAVObject **)&v7, (NiAVObject *)niNode);
      if ( v7 )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v7;
        if ( !v4((volatile LONG *)(v7 + 4)) )
          (**v5)(v5, 1);
      }
    }
    sub_477EF0(&niNode->members.children);
    v6 = this->members.niNode;
    if ( v6 )
    {
      if ( !v4((volatile LONG *)&v6->members) )
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1);
      this->members.niNode = 0;
    }
    sub_4240C0(&this->members.extraData, 0);
  }
  this->members.cellProcessLevel = 0;
}
