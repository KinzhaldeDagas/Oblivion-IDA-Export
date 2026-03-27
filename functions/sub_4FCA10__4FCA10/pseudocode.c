TESForm *__thiscall sub_4FCA10(TESForm *this, char a2)
{
  Script_StaticDestructor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
