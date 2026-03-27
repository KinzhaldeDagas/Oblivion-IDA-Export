bool __thiscall sub_46E850(char *this, void *a2)
{
  char *v3; // eax
  char *v5; // ecx
  char *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  bool v9; // zf

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESReactionForm `RTTI Type Descriptor',
                 0);
  if ( !v3 )
    return 1;
  v5 = this + 4;
  v6 = v3 + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    while ( v6 )
    {
      v7 = *(_DWORD **)v5;
      v8 = *(_DWORD **)v6;
      if ( *(_DWORD *)v5 )
      {
        if ( !v8 || *v7 != *v8 )
          return 1;
        v9 = v7[1] == v8[1];
      }
      else
      {
        v9 = v8 == 0;
      }
      if ( !v9 )
        return 1;
      v5 = *((char **)v5 + 1);
      v6 = *((char **)v6 + 1);
      if ( !v5 )
        return v6 && (*((_DWORD *)v6 + 1) || *(_DWORD *)v6);
    }
    return 1;
  }
  return v6 && (*((_DWORD *)v6 + 1) || *(_DWORD *)v6);
}
