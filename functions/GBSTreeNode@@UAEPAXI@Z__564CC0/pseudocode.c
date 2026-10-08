BSTreeNode *__thiscall BSTreeNode::`scalar deleting destructor'(BSTreeNode *this, char a2)
{
  BSTreeNode_dtor(this); /*0x564cc3*/
  if ( (a2 & 1) != 0 ) /*0x564ccd*/
    FormHeapFree((unsigned int)this); /*0x564cd0*/
  return this; /*0x564cda*/
}
