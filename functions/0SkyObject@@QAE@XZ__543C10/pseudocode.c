SkyObject *__thiscall SkyObject::SkyObject(SkyObject *this)
{
  NiNode *rootNode; // edi

  this->vtbl = (SkyObjectVtbl *)&SkyObject::`vftable';
  this->members.rootNode = 0;
  rootNode = this->members.rootNode;
  if ( rootNode )
  {
    if ( !InterlockedDecrement((volatile LONG *)&rootNode->members) )
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1);
    this->members.rootNode = 0;
  }
  return this;
}
