// Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
void __thiscall BSSimpleList_Clear(_DWORD *this)
{
  if ( *(this + 1) ) /*0x4526e3*/
    BSSimpleList_Clear_::DeleteNextNodeLoop((int)this); /*0x4526eb*/
  else
    BSSimpleList_Clear_::ClearThisNodeData(this); /*0x4526e7*/
}
