SkyObject *__thiscall SkyObject::SkyObject(SkyObject *this)
{
  NiNode *rootNode; // edi

  this->vtbl = (SkyObjectVtbl *)&SkyObject::`vftable'; /*0x543c39*/
  this->members.rootNode = 0; /*0x543c3f*/
  rootNode = this->members.rootNode; /*0x543c46*/
  if ( rootNode ) /*0x543c53*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&rootNode->members) ) /*0x543c59*/
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1); /*0x543c6f*/
    this->members.rootNode = 0; /*0x543c71*/
  }
  return this; /*0x543c7a*/
}
