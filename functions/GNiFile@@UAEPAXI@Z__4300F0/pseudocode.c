NiFile *__thiscall NiFile::`scalar deleting destructor'(NiFile *this, char a2)
{
  NiFile::~NiFile(this); /*0x4300f3*/
  if ( (a2 & 1) != 0 ) /*0x4300fd*/
    FormHeapFree((unsigned int)this); /*0x430100*/
  return this; /*0x43010a*/
}
