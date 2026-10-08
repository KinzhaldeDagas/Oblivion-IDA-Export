Menu *__userpurge TextEditMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  TextEditMenu::~TextEditMenu(this, a2, a3, a4); /*0x587ac3*/
  if ( (a5 & 1) != 0 ) /*0x587acd*/
    FormHeapFree((unsigned int)this); /*0x587ad0*/
  return this; /*0x587ada*/
}
