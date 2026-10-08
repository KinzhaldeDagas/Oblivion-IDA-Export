int ***__userpurge RepairMenu::`scalar deleting destructor'@<eax>(
        int ***this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  RepairMenu::~RepairMenu(this, a2, a3, a4); /*0x5d1063*/
  if ( (a5 & 1) != 0 ) /*0x5d106d*/
    FormHeapFree((unsigned int)this); /*0x5d1070*/
  return this; /*0x5d107a*/
}
