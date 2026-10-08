// TESAnimation copy: clears destination, then appends each source string through TESAnimation_AddAnimation, preserving order after dedupe.
void __thiscall TESAnimation_CopyFrom(char **this, void *a2)
{
  char *v3; // esi
  char *i; // esi

  v3 = (char *)OblivionDynamicCast( /*0x46896c*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESAnimation `RTTI Type Descriptor',
                 0);
  if ( v3 ) /*0x468973*/
  {
    (*((void (__thiscall **)(char **))*this + 1))(this); /*0x46897c*/
    for ( i = v3 + 4; i; i = *((char **)i + 1) ) /*0x468981*/
    {
      if ( *(_DWORD *)i ) /*0x468983*/
        TESAnimation_AddAnimation(this, *(char **)i); /*0x46898c*/
    }
  }
}
