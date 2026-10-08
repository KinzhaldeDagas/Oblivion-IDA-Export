NiAVObject *__thiscall NiAVObject::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  NiAVObject::~NiAVObject(this); /*0x708543*/
  if ( (a2 & 1) != 0 ) /*0x70854d*/
    FormHeapFree((unsigned int)this); /*0x708550*/
  return this; /*0x70855a*/
}
