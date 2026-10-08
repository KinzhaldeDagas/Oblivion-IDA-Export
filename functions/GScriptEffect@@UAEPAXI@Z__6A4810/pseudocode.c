ActiveEffect *__thiscall ScriptEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  ScriptEffect::~ScriptEffect(this); /*0x6a4813*/
  if ( (a2 & 1) != 0 ) /*0x6a481d*/
    FormHeapFree((unsigned int)this); /*0x6a4820*/
  return this; /*0x6a482a*/
}
