int **__thiscall GridDistantArray::`scalar deleting destructor'(int **this, char a2)
{
  GridDistantArray::~GridDistantArray(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
