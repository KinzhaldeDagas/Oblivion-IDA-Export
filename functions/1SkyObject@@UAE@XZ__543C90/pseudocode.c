void __thiscall SkyObject::~SkyObject(SkyObject *this)
{
  NiNode *rootNode; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiNode *v4; // edi

  this->vtbl = (SkyObjectVtbl *)&SkyObject::`vftable';
  rootNode = this->members.rootNode;
  v3 = InterlockedDecrement;
  if ( rootNode )
  {
    if ( !v3((volatile LONG *)&rootNode->members) )
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1);
    this->members.rootNode = 0;
  }
  v4 = this->members.rootNode;
  if ( v4 )
  {
    if ( !v3((volatile LONG *)&v4->members) )
      v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
  }
}
