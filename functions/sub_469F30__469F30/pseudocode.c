bool __thiscall sub_469F30(char *this, void *a2)
{
  char *v3; // ebp
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // ecx
  int v9; // esi
  _DWORD *v10; // edx
  _DWORD *v11; // ecx
  int v12; // edx

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESContainer `RTTI Type Descriptor',
                 0);
  if ( !v3 )
    return 1;
  v5 = this + 8;
  v6 = 0;
  if ( this != (char *)0xFFFFFFF8 )
  {
    do
    {
      v7 = *(_DWORD **)v5;
      if ( *(_DWORD *)v5 )
      {
        if ( (v3[4] & 1) == 0 )
          return 1;
        v8 = v3 + 8;
        if ( !*((_DWORD *)v3 + 2) )
          return 1;
        v9 = v7[1];
        while ( 1 )
        {
          v10 = (_DWORD *)*v8;
          if ( *(_DWORD *)(*v8 + 4) == v9 )
            break;
          v8 = (_DWORD *)v8[1];
          if ( !v8 )
            return 1;
        }
        if ( *v7 != *v10 || v9 != v10[1] )
          return 1;
        ++v6;
      }
      v5 = *((char **)v5 + 1);
    }
    while ( v5 );
  }
  v11 = v3 + 8;
  v12 = 0;
  if ( v3 != (char *)0xFFFFFFF8 )
  {
    do
    {
      if ( *v11 )
        ++v12;
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 );
  }
  return v12 != v6;
}
