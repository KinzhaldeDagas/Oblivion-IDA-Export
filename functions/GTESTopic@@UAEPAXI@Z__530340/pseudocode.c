TESTopic *__thiscall TESTopic::`scalar deleting destructor'(TESTopic *this, char a2)
{
  TESTopic::~TESTopic(this); /*0x530343*/
  if ( (a2 & 1) != 0 ) /*0x53034d*/
    FormHeapFree((unsigned int)this); /*0x530350*/
  return this; /*0x53035a*/
}
