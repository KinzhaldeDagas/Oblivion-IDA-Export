NiOBBRoot *__thiscall NiOBBRoot::`scalar deleting destructor'(NiOBBRoot *this, char a2)
{
  NiOBBRoot::~NiOBBRoot(this); /*0x976a33*/
  if ( (a2 & 1) != 0 ) /*0x976a3d*/
    FormHeapFree((unsigned int)this); /*0x976a40*/
  return this; /*0x976a4a*/
}
