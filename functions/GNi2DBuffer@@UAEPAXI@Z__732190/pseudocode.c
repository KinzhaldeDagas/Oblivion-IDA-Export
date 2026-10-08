Ni2DBuffer *__thiscall Ni2DBuffer::`scalar deleting destructor'(Ni2DBuffer *this, char a2)
{
  Ni2DBuffer::~Ni2DBuffer(this); /*0x732193*/
  if ( (a2 & 1) != 0 ) /*0x73219d*/
    FormHeapFree((unsigned int)this); /*0x7321a0*/
  return this; /*0x7321aa*/
}
