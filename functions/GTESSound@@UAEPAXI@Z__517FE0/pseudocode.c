TESSound *__thiscall TESSound::`scalar deleting destructor'(TESSound *this, char a2)
{
  TESSound::~TESSound(this); /*0x517fe3*/
  if ( (a2 & 1) != 0 ) /*0x517fed*/
    FormHeapFree((unsigned int)this); /*0x517ff0*/
  return this; /*0x517ffa*/
}
