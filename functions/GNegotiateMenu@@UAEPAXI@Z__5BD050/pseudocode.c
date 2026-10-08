Menu *__userpurge NegotiateMenu::`scalar deleting destructor'@<eax>(
        Menu *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  this->__vftable = (MenuVtbl *)&NegotiateMenu::`vftable'; /*0x5bd053*/
  Menu::~Menu(this, a2, a3, a4); /*0x5bd059*/
  if ( (a5 & 1) != 0 ) /*0x5bd063*/
    FormHeapFree((unsigned int)this); /*0x5bd066*/
  return this; /*0x5bd070*/
}
