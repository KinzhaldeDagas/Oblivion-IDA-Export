int *__thiscall TESContainer_RemoveNthEntry(char *this, int a2)
{
  if ( this == (char *)0xFFFFFFF8 )
    return (int *)TESContainer_RemoveNthEntry_::Done(a2);
  else
    return (int *)TESContainer_RemoveNthEntry_::ContentLookupLoop(a2);
}
