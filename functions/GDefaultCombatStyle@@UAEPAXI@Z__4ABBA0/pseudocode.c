TESForm *__thiscall DefaultCombatStyle::`scalar deleting destructor'(TESForm *this, char a2)
{
  DefaultCombatStyle::~DefaultCombatStyle(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
