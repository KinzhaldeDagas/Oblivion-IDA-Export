ActiveEffect *__thiscall ScriptEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  ScriptEffect::~ScriptEffect(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
