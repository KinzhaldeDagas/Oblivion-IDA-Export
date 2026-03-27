TESSound *__thiscall TESSound::`scalar deleting destructor'(TESSound *this, char a2)
{
  TESSound::~TESSound(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
