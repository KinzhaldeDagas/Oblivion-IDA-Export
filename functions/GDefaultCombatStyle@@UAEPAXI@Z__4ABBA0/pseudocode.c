TESForm *__thiscall DefaultCombatStyle::`scalar deleting destructor'(TESForm *this, char a2)
{
  DefaultCombatStyle::~DefaultCombatStyle(this); /*0x4abba3*/
  if ( (a2 & 1) != 0 ) /*0x4abbad*/
    FormHeapFree((unsigned int)this); /*0x4abbb0*/
  return this; /*0x4abbba*/
}
