TESForm *__thiscall sub_4FCA10(TESForm *this, char a2)
{
  Script_StaticDestructor(this); /*0x4fca13*/
  if ( (a2 & 1) != 0 ) /*0x4fca1d*/
    FormHeapFree((unsigned int)this); /*0x4fca20*/
  return this; /*0x4fca2a*/
}
