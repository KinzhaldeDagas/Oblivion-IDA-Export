IconArray *__thiscall IconArray::`scalar deleting destructor'(IconArray *this, char a2)
{
  IconArray::~IconArray(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
