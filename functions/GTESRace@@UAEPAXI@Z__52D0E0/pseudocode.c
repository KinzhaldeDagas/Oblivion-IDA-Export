TESRace *__thiscall TESRace::`scalar deleting destructor'(TESRace *this, char a2)
{
  TESRace::~TESRace(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
