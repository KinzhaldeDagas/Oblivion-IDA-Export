// ActorAnimData apply/setup path. Binds animation data to actor/node state and installs the initial model/sequence mapping used by runtime playback.
void __thiscall ActorAnimData::ApplyActorAnimData(ActorAnimData *this)
{
  NiNode *RootNode; // eax
  NiTimeController *m_controller; // ebp
  LONG (__stdcall *v4)(volatile LONG *); // ebx
  NiTimeController *v5; // edi
  LONG (__stdcall *v6)(volatile LONG *); // esi

  RootNode = this->RootNode; /*0x471f49*/
  if ( RootNode ) /*0x471f4e*/
  {
    if ( this->AccumNode ) /*0x471f54*/
    {
      m_controller = (NiTimeController *)RootNode->members.super.super.m_controller; /*0x471f5e*/
      v4 = InterlockedIncrement; /*0x471f63*/
      if ( m_controller ) /*0x471f6d*/
        v4((volatile LONG *)&m_controller->members); /*0x471f73*/
      v5 = (NiTimeController *)this->AccumNode->members.super.super.m_controller; /*0x471f78*/
      if ( v5 ) /*0x471f89*/
        v4((volatile LONG *)&v5->members); /*0x471f8f*/
      sub_478300(this->RootNode, 0); /*0x471f9b*/
      sub_478300(this->AccumNode, 0); /*0x471fa5*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)this->RootNode, this->unk94, 1); /*0x471fb9*/
      sub_478300(this->RootNode, m_controller); /*0x471fc2*/
      sub_478300(this->AccumNode, v5); /*0x471fcb*/
      v6 = InterlockedDecrement; /*0x471fd2*/
      if ( v5 ) /*0x471fdd*/
      {
        if ( !v6((volatile LONG *)&v5->members) ) /*0x471fe3*/
          v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x471ff1*/
      }
      if ( m_controller ) /*0x471ffd*/
      {
        if ( !v6((volatile LONG *)&m_controller->members) ) /*0x472003*/
          m_controller->vtbl->super.super.Destructor((NiRefObject *)m_controller, 1); /*0x472012*/
      }
    }
  }
}
