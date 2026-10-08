TileMenu *__userpurge TileMenu::`scalar deleting destructor'@<eax>(
        TileMenu *this@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  TileMenu::~TileMenu(this, a2, a3, a4, a5); /*0x5900f3*/
  if ( (a6 & 1) != 0 ) /*0x5900fd*/
    FormHeapFree((unsigned int)this); /*0x590100*/
  return this; /*0x59010a*/
}
