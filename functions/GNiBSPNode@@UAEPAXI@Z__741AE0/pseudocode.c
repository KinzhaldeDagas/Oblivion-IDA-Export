//
//
// [2026-10-03 frond material partitions] Verified NiNode vtable 0xA7E38C slot0 uses this folded scalar deleting destructor despite existing NiBSP symbol name. ECX=this, DWORD flags on stack, forwards 0x70B810, optionally FormHeapFree bit0, returns this. Plugin group vtable copies COL+39 slots and overrides only deletion to retire all child metadata for group before forwarding once.
// [2026-10-03 frond group lifetime] Plugin private group destructor now clears group/root associations without erasing live child metadata. Native destructor may release children that remain alive through outside references. Private shape destructor719AD0 wrapper remains sole scene-metadata eraser; owner retirement clears model/RT borrows but retains draw snapshots.
NiBSPNode *__thiscall NiBSPNode::`scalar deleting destructor'(NiBSPNode *this, char a2)
{
  NiBSPNode::~NiBSPNode(this); /*0x741ae3*/
  if ( (a2 & 1) != 0 ) /*0x741aed*/
    FormHeapFree((unsigned int)this); /*0x741af0*/
  return this; /*0x741afa*/
}
