void **__thiscall BSTreeModel::`scalar deleting destructor'(void **this, char a2)
{
  BSTreeModel_dtor(this); /*0x563963*/
  if ( (a2 & 1) != 0 ) /*0x56396d*/
    FormHeapFree((unsigned int)this); /*0x563970*/
  return this; /*0x56397a*/
}
