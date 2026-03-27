bool __thiscall TESAnimation_CompareTo(char *this, void *a2)
{
  char *v3; // eax
  char *v5; // esi
  char *v6; // edi
  char *v7; // ecx
  bool v8; // zf
  bool v9; // zf

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESAnimation `RTTI Type Descriptor',
                 0);
  if ( !v3 )
    return 1;
  v8 = this + 4 == 0;
  v5 = this + 4;
  v6 = v3 + 4;
  if ( v8 )
  {
LABEL_11:
    v9 = v6 == 0;
  }
  else
  {
    while ( v6 )
    {
      v7 = *(char **)v6;
      if ( *(_DWORD *)v5 )
      {
        if ( !v7 )
          return 1;
        v8 = _strcmp(*(char **)v5, *(char **)v6) == 0;
      }
      else
      {
        v8 = v7 == 0;
      }
      if ( !v8 )
        return 1;
      v5 = *((char **)v5 + 1);
      v6 = *((char **)v6 + 1);
      if ( !v5 )
        goto LABEL_11;
    }
    v9 = v5 == 0;
  }
  return !v9;
}
