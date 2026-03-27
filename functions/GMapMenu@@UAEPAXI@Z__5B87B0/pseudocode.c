MapMenu *__userpurge MapMenu::`scalar deleting destructor'@<eax>(
        MapMenu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  MapMenu::~MapMenu(this, a2, a3, a4);
  if ( (a5 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
