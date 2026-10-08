// Verified MobileObject node setter: invokes the reference's pre-node-update virtual, releases any old NiNode reference, stores the new node in TESObjectREFR+0x40, and AddRefs it. Used by both normal Set3D and the queued distant-tree attach path.
void __thiscall MobileObject_SetNiNode(MobileObject *this, NiAVObject *node)
{
  NiAVObject *niNode; // esi

  this->vtbl->super.Unk_51((TESObjectREFR *)this); /*0x4d7d1d*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4d7d21*/
  niNode = (NiAVObject *)this->super.niNode; /*0x4d7d26*/
  if ( niNode != node ) /*0x4d7d32*/
  {
    if ( niNode ) /*0x4d7d36*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&niNode->members) ) /*0x4d7d3c*/
        niNode->vtbl->super.super.Destructor((NiRefObject *)niNode, 1); /*0x4d7d52*/
    }
    this->super.niNode = node; /*0x4d7d56*/
    if ( node ) /*0x4d7d59*/
      InterlockedIncrement((volatile LONG *)&node->members); /*0x4d7d5f*/
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4d7d67*/
}
