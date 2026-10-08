Atmosphere *__thiscall Atmosphere::`scalar deleting destructor'(Atmosphere *this, char a2)
{
  Atmosphere::~Atmosphere(this); /*0x53b3d3*/
  if ( (a2 & 1) != 0 ) /*0x53b3dd*/
    FormHeapFree((unsigned int)this); /*0x53b3e0*/
  return this; /*0x53b3ea*/
}
