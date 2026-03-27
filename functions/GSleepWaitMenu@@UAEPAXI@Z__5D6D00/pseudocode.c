SleepWaitMenu *__userpurge SleepWaitMenu::`scalar deleting destructor'@<eax>(
        SleepWaitMenu *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  SleepWaitMenu::~SleepWaitMenu(this, a2, a3, a4, a5);
  if ( (a6 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
