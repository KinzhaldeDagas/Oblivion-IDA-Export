Sun *__thiscall Sun::`scalar deleting destructor'(Sun *this, char a2)
{
  Sun::~Sun(this); /*0x546173*/
  if ( (a2 & 1) != 0 ) /*0x54617d*/
    FormHeapFree((unsigned int)this); /*0x546180*/
  return this; /*0x54618a*/
}
