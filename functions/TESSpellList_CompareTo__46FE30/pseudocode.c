bool __thiscall TESSpellList_CompareTo(char *this, void *a2)
{
  _DWORD *v3; // eax
  char *v5; // edx
  int v6; // edi
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // edx
  char *v10; // edx
  int v11; // edi
  _DWORD *v12; // ecx

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESSpellList `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 1;
  v5 = this + 4;
  v6 = 0;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      if ( *(_DWORD *)v5 )
      {
        v7 = v3 + 1;
        if ( v3 == (_DWORD *)0xFFFFFFFC )
          return 1;
        while ( *v7 != *(_DWORD *)v5 )
        {
          v7 = (_DWORD *)v7[1];
          if ( !v7 )
            return 1;
        }
        ++v6;
      }
      v5 = *((char **)v5 + 1);
    }
    while ( v5 );
  }
  v8 = v3 + 1;
  v9 = 0;
  if ( v3 != (_DWORD *)0xFFFFFFFC )
  {
    do
    {
      if ( *v8 )
        ++v9;
      v8 = (_DWORD *)v8[1];
    }
    while ( v8 );
  }
  if ( v9 != v6 )
    return 1;
  v10 = this + 0xC;
  v11 = 0;
  if ( this != (char *)0xFFFFFFF4 )
  {
    do
    {
      if ( *(_DWORD *)v10 )
      {
        v12 = v3 + 3;
        if ( v3 == (_DWORD *)0xFFFFFFF4 )
          return 1;
        while ( *v12 != *(_DWORD *)v10 )
        {
          v12 = (_DWORD *)v12[1];
          if ( !v12 )
            return 1;
        }
        ++v11;
      }
      v10 = *((char **)v10 + 1);
    }
    while ( v10 );
  }
  return BSSimpleList_Count(v3 + 3) != v11;
}
