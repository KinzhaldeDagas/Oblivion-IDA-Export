GridCellArray *__thiscall GridCellArray::`scalar deleting destructor'(GridCellArray *this, char a2)
{
  GridCellArray::~GridCellArray(this); /*0x483573*/
  if ( (a2 & 1) != 0 ) /*0x48357d*/
    FormHeapFree((unsigned int)this); /*0x483580*/
  return this; /*0x48358a*/
}
