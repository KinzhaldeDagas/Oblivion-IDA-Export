ExtraScript *__thiscall ExtraScript::`scalar deleting destructor'(ExtraScript *this, char a2)
{
  ExtraScript::~ExtraScript(this); /*0x42ae53*/
  if ( (a2 & 1) != 0 ) /*0x42ae5d*/
    FormHeapFree((unsigned int)this); /*0x42ae60*/
  return this; /*0x42ae6a*/
}
