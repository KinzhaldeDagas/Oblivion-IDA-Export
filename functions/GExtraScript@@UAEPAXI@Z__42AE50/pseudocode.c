ExtraScript *__thiscall ExtraScript::`scalar deleting destructor'(ExtraScript *this, char a2)
{
  ExtraScript::~ExtraScript(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
