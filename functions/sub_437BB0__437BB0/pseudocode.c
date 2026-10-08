// Verified AttachDistant3DTask worker-to-main-thread commit. If task state is not canceled, the reference exists, and it has no NiNode, transfers the stored distant3DNode to the reference, runs the cell/reference 3D attachment path, and sets the distant-3D state bit. Otherwise releases the pending node.
void __thiscall AttachDistant3DTask_Run(AttachDistant3DTask_OblivionLayout *this)
{
  MobileObject *reference; // ecx
  _DWORD *DwordAtOffset40; // eax
  NiAVObject *distant3DNode; // edi

  if ( *(_DWORD *)&this->taskBase_000_017[0xC] == 6 /*0x437bc0*/
    || (reference = (MobileObject *)this->reference) == 0
    || reference->super.niNode )
  {
    distant3DNode = this->distant3DNode; /*0x437bf8*/
    if ( distant3DNode ) /*0x437bfd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&distant3DNode->members) ) /*0x437c03*/
        distant3DNode->vtbl->super.super.Destructor((NiRefObject *)distant3DNode, 1); /*0x437c19*/
      this->distant3DNode = 0; /*0x437c1b*/
    }
  }
  else
  {
    MobileObject_SetNiNode(reference, this->distant3DNode); /*0x437bca*/
    DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(this->reference); /*0x437bd6*/
    sub_441EF0((int)MEMORY[0xB333A0], this->reference, DwordAtOffset40, 0, 0); /*0x437be6*/
    TESObjectREFR_SetTemp3DFlag(this->reference, 1);// Verified: AttachDistant3DTask_Run sets bit 0x80000 only after transferring the queued NiNode to the reference and refreshing cell attachment. Probable role is HasTemp3D, matching Fallout's named setter. /*0x437bf0*/
  }
}
