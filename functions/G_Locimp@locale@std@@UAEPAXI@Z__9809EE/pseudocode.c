std::locale::_Locimp *__userpurge std::locale::_Locimp::`scalar deleting destructor'@<eax>(
        std::locale::_Locimp *this@<ecx>,
        int a2@<ebx>,
        char a3)
{
  std::locale::_Locimp::~_Locimp(this, a2); /*0x9809f1*/
  if ( (a3 & 1) != 0 ) /*0x9809fb*/
    FormHeapFree((unsigned int)this); /*0x9809fe*/
  return this; /*0x980a06*/
}
