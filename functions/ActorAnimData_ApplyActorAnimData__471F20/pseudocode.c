void __thiscall ActorAnimData::ApplyActorAnimData(ActorAnimData *this)
{
  NiNode *RootNode; // eax
  NiTimeController *m_controller; // ebp
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  NiTimeController *v5; // edi
  LONG (__stdcall *v6)(volatile LONG *); // esi

  RootNode = this->RootNode;
  if ( RootNode )
  {
    if ( this->AccumNode )
    {
      m_controller = (NiTimeController *)RootNode->members.super.super.m_controller;
      v4 = InterlockedIncrement;
      if ( m_controller )
        v4((volatile LONG *)&m_controller->members);
      v5 = (NiTimeController *)this->AccumNode->members.super.super.m_controller;
      if ( v5 )
        v4((volatile LONG *)&v5->members);
      sub_478300(this->RootNode, 0);
      sub_478300(this->AccumNode, 0);
      NiAVObject_UpdateNiAVObject((NiAVObject *)this->RootNode, this->unk94, 1);
      sub_478300(this->RootNode, m_controller);
      sub_478300(this->AccumNode, v5);
      v6 = InterlockedDecrement;
      if ( v5 )
      {
        if ( !v6((volatile LONG *)&v5->members) )
          v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1);
      }
      if ( m_controller )
      {
        if ( !v6((volatile LONG *)&m_controller->members) )
          m_controller->vtbl->super.super.Destructor((NiRefObject *)m_controller, 1);
      }
    }
  }
}
