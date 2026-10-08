void __thiscall SkyObject::~SkyObject(SkyObject *this)
{
  NiNode *rootNode; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiNode *v4; // edi

  this->vtbl = (SkyObjectVtbl *)&SkyObject::`vftable'; /*0x543cba*/
  rootNode = this->members.rootNode; /*0x543cc0*/
  v3 = InterlockedDecrement; /*0x543cc5*/
  if ( rootNode ) /*0x543cd3*/
  {
    if ( !v3((volatile LONG *)&rootNode->members) ) /*0x543cd9*/
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1); /*0x543ceb*/
    this->members.rootNode = 0; /*0x543ced*/
  }
  v4 = this->members.rootNode; /*0x543cf4*/
  if ( v4 ) /*0x543d01*/
  {
    if ( !v3((volatile LONG *)&v4->members) ) /*0x543d07*/
      v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x543d19*/
  }
}
