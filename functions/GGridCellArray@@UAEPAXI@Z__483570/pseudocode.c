GridCellArray *__thiscall GridCellArray::`scalar deleting destructor'(GridCellArray *this, char a2)
{
  GridCellArray::~GridCellArray(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
