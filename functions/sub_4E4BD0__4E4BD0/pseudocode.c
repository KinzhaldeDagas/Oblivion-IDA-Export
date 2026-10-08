// Verified PathGrid SetDefault override: release and clear renderNode (+0x1C), clear parent/array pointers at +0x20/+0x24 and pointCount at +0x30, then reinitialize TESForm components. The graph maps remain constructor-owned.
void __thiscall TESPathGrid_SetDefault(TESPathGrid *this)
{
  NiNode *renderNode; // edi

  renderNode = this->renderNode; /*0x4e4bd5*/
  if ( renderNode ) /*0x4e4bdc*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&renderNode->members) ) /*0x4e4be2*/
      renderNode->vtbl->super.super.super.Destructor((NiRefObject *)renderNode, 1); /*0x4e4bf8*/
    this->renderNode = 0; /*0x4e4bfa*/
  }
  this->parentCell = 0; /*0x4e4bfe*/
  this->pointArray = 0; /*0x4e4c01*/
  this->pointCount = 0; /*0x4e4c04*/
  j_TESForm_InitializeComponents(&this->base); /*0x4e4c0c*/
}
