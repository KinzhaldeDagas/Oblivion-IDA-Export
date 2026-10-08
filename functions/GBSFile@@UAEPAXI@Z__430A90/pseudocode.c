BSFile *__thiscall BSFile::`scalar deleting destructor'(BSFile *this, char a2)
{
  BSFile::~BSFile(this); /*0x430a93*/
  if ( (a2 & 1) != 0 ) /*0x430a9d*/
    FormHeapFree((unsigned int)this); /*0x430aa0*/
  return this; /*0x430aaa*/
}
