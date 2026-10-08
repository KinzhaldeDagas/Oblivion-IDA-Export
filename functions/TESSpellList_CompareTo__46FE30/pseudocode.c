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

  v3 = OblivionDynamicCast( /*0x46fe46*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESSpellList `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x46fe50*/
    return 1; /*0x46fe52*/
  v5 = this + 4; /*0x46fe5a*/
  v6 = 0; /*0x46fe5d*/
  if ( this != (char *)0xFFFFFFFC ) /*0x46fe61*/
  {
    do /*0x46fe8b*/
    {
      if ( *(_DWORD *)v5 ) /*0x46fe63*/
      {
        v7 = v3 + 1; /*0x46fe69*/
        if ( v3 == (_DWORD *)0xFFFFFFFC ) /*0x46fe6e*/
          return 1; /*0x46fe6e*/
        while ( *v7 != *(_DWORD *)v5 ) /*0x46fe72*/
        {
          v7 = (_DWORD *)v7[1]; /*0x46fe74*/
          if ( !v7 ) /*0x46fe79*/
            return 1; /*0x46fe79*/
        }
        ++v6; /*0x46fe83*/
      }
      v5 = *((char **)v5 + 1); /*0x46fe86*/
    }
    while ( v5 ); /*0x46fe8b*/
  }
  v8 = v3 + 1; /*0x46fe8d*/
  v9 = 0; /*0x46fe90*/
  if ( v3 != (_DWORD *)0xFFFFFFFC ) /*0x46fe94*/
  {
    do /*0x46fea3*/
    {
      if ( *v8 ) /*0x46fe96*/
        ++v9; /*0x46fe9b*/
      v8 = (_DWORD *)v8[1]; /*0x46fe9e*/
    }
    while ( v8 ); /*0x46fea3*/
  }
  if ( v9 != v6 ) /*0x46fea7*/
    return 1; /*0x46fe7b*/
  v10 = this + 0xC; /*0x46fea9*/
  v11 = 0; /*0x46feac*/
  if ( this != (char *)0xFFFFFFF4 ) /*0x46feb0*/
  {
    do /*0x46fedb*/
    {
      if ( *(_DWORD *)v10 ) /*0x46feb2*/
      {
        v12 = v3 + 3; /*0x46feb8*/
        if ( v3 == (_DWORD *)0xFFFFFFF4 ) /*0x46febd*/
          return 1; /*0x46febd*/
        while ( *v12 != *(_DWORD *)v10 ) /*0x46fec2*/
        {
          v12 = (_DWORD *)v12[1]; /*0x46fec4*/
          if ( !v12 ) /*0x46fec9*/
            return 1; /*0x46fed0*/
        }
        ++v11; /*0x46fed3*/
      }
      v10 = *((char **)v10 + 1); /*0x46fed6*/
    }
    while ( v10 ); /*0x46fedb*/
  }
  return BSSimpleList_Count(v3 + 3) != v11; /*0x46fe54*/
}
