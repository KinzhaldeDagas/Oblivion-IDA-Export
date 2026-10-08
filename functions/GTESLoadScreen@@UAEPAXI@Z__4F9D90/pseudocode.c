TESLoadScreen *__thiscall TESLoadScreen::`scalar deleting destructor'(TESLoadScreen *this, char a2)
{
  TESLoadScreen::~TESLoadScreen(this); /*0x4f9d93*/
  if ( (a2 & 1) != 0 ) /*0x4f9d9d*/
    FormHeapFree((unsigned int)this); /*0x4f9da0*/
  return this; /*0x4f9daa*/
}
