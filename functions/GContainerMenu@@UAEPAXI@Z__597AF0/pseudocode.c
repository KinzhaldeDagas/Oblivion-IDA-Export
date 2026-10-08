Menu *__userpurge ContainerMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  ContainerMenu::~ContainerMenu(this, a2, a3, a4); /*0x597af3*/
  if ( (a5 & 1) != 0 ) /*0x597afd*/
    FormHeapFree((unsigned int)this); /*0x597b00*/
  return this; /*0x597b0a*/
}
