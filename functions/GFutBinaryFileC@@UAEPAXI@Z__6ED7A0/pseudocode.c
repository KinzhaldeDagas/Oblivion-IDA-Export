FutBinaryFileC *__userpurge FutBinaryFileC::`scalar deleting destructor'@<eax>(
        FutBinaryFileC *this@<ecx>,
        int a2@<edi>,
        char a3)
{
  FutBinaryFileC::~FutBinaryFileC(this, a2); /*0x6ed7a3*/
  if ( (a3 & 1) != 0 ) /*0x6ed7ad*/
    FormHeapFree((unsigned int)this); /*0x6ed7b0*/
  return this; /*0x6ed7ba*/
}
