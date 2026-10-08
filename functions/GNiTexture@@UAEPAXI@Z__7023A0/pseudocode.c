NiTexture *__thiscall NiTexture::`scalar deleting destructor'(NiTexture *this, char a2)
{
  NiTexture::~NiTexture(this); /*0x7023a3*/
  if ( (a2 & 1) != 0 ) /*0x7023ad*/
    FormHeapFree((unsigned int)this); /*0x7023b0*/
  return this; /*0x7023ba*/
}
