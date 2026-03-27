std::locale::_Locimp *__userpurge std::locale::_Locimp::`scalar deleting destructor'@<eax>(
        std::locale::_Locimp *this@<ecx>,
        int a2@<ebx>,
        char a3)
{
  std::locale::_Locimp::~_Locimp(this, a2);
  if ( (a3 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
