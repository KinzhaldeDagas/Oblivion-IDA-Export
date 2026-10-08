BSSearchPath *__thiscall BSSearchPath::`scalar deleting destructor'(BSSearchPath *this, char a2)
{
  BSSearchPath::~BSSearchPath(this); /*0x430dc3*/
  if ( (a2 & 1) != 0 ) /*0x430dcd*/
    FormHeapFree((unsigned int)this); /*0x430dd0*/
  return this; /*0x430dda*/
}
