Ni2DBuffer *__thiscall Ni2DBuffer::`scalar deleting destructor'(Ni2DBuffer *this, char a2)
{
  Ni2DBuffer::~Ni2DBuffer(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
