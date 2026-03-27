TESGlobal *__thiscall TESGlobal::`scalar deleting destructor'(TESGlobal *this, char a2)
{
  TESGlobal::~TESGlobal(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
