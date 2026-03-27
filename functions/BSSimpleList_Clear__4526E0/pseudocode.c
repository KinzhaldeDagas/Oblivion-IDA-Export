int __thiscall BSSimpleList_Clear(_DWORD *this)
{
  if ( *(this + 1) )
    return BSSimpleList_Clear_::DeleteNextNodeLoop((int)this);
  else
    return BSSimpleList_Clear_::ClearThisNodeData();
}
