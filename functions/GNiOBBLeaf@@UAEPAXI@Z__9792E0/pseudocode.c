NiOBBLeaf *__thiscall NiOBBLeaf::`scalar deleting destructor'(NiOBBLeaf *this, char a2)
{
  NiOBBLeaf::~NiOBBLeaf(this); /*0x9792e3*/
  if ( (a2 & 1) != 0 ) /*0x9792ed*/
    FormHeapFree((unsigned int)this); /*0x9792f0*/
  return this; /*0x9792fa*/
}
