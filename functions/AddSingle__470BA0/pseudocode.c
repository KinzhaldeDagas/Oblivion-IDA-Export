// AnimSequenceSingle setter. Replaces the held BSAnimGroupSequence/NiNode pointer with refcount decrement/increment around the old and new sequence.
UInt32 __thiscall AddSingle(ActorAnimData *this, NiNode *a2)
{
  NiNode *RootNode; // esi
  UInt32 result; // eax

  RootNode = this->RootNode; /*0x470ba4*/
  if ( RootNode ) /*0x470ba9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&RootNode->members) ) /*0x470baf*/
      RootNode->vtbl->super.super.super.Destructor((NiRefObject *)RootNode, 1); /*0x470bc5*/
  }
  result = (UInt32)a2; /*0x470bc7*/
  this->RootNode = a2; /*0x470bcd*/
  if ( a2 ) /*0x470bd2*/
    return InterlockedIncrement((volatile LONG *)&a2->members); /*0x470bdb*/
  return result; /*0x470bd0*/
}
