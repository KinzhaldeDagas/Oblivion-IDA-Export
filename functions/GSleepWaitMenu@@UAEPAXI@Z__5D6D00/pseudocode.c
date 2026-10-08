SleepWaitMenu *__userpurge SleepWaitMenu::`scalar deleting destructor'@<eax>(
        SleepWaitMenu *this@<ecx>,
        TESObjectREFR *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6@<ebx>,
        MobileObject *a7@<edi>,
        char a8)
{
  SleepWaitMenu::~SleepWaitMenu(this, a2, a3, a4, a5, a6, a7); /*0x5d6d03*/
  if ( (a8 & 1) != 0 ) /*0x5d6d0d*/
    FormHeapFree((unsigned int)this); /*0x5d6d10*/
  return this; /*0x5d6d1a*/
}
