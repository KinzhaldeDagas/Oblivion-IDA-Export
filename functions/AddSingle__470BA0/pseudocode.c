UInt32 __thiscall AddSingle(ActorAnimData *this, NiNode *a2)
{
  NiNode *RootNode; // esi
  UInt32 result; // eax

  RootNode = this->RootNode;
  if ( RootNode )
  {
    if ( !InterlockedDecrement((volatile LONG *)&RootNode->members) )
      RootNode->vtbl->super.super.super.Destructor((NiRefObject *)RootNode, 1);
  }
  result = (UInt32)a2;
  this->RootNode = a2;
  if ( a2 )
    return InterlockedIncrement((volatile LONG *)&a2->members);
  return result;
}
