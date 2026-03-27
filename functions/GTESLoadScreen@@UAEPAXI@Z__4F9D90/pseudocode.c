TESLoadScreen *__thiscall TESLoadScreen::`scalar deleting destructor'(TESLoadScreen *this, char a2)
{
  TESLoadScreen::~TESLoadScreen(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
