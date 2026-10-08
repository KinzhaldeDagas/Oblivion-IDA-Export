void __thiscall TESContainer_RemoveNthEntry(char *this, int a2)
{
  if ( this == (char *)0xFFFFFFF8 ) /*0x4696f7*/
    TESContainer_RemoveNthEntry_::Done(a2); /*0x4696f7*/
  else
    TESContainer_RemoveNthEntry_::ContentLookupLoop((unsigned int *)this + 2, a2, 0, a2); /*0x4696fe*/
}
