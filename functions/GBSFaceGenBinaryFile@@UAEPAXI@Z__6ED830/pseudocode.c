BSFaceGenBinaryFile *__userpurge BSFaceGenBinaryFile::`scalar deleting destructor'@<eax>(
        BSFaceGenBinaryFile *this@<ecx>,
        int a2@<edi>,
        char a3)
{
  BSFaceGenBinaryFile::~BSFaceGenBinaryFile(this, a2); /*0x6ed833*/
  if ( (a3 & 1) != 0 ) /*0x6ed83d*/
    FormHeapFree((unsigned int)this); /*0x6ed840*/
  return this; /*0x6ed84a*/
}
