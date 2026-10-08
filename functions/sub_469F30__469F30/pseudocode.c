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

  v3 = (char *)OblivionDynamicCast( /*0x469f4c*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESContainer `RTTI Type Descriptor',
                 0);
  if ( !v3 ) /*0x469f53*/
    return 1; /*0x469f59*/
  v5 = this + 8; /*0x469f5e*/
  v6 = 0; /*0x469f61*/
  if ( this != (char *)0xFFFFFFF8 ) /*0x469f65*/
  {
    do /*0x469f67*/
    {
      v7 = *(_DWORD **)v5; /*0x469f67*/
      if ( *(_DWORD *)v5 ) /*0x469f67*/
      {
        if ( (v3[4] & 1) == 0 ) /*0x469f71*/
          return 1; /*0x469f71*/
        v8 = v3 + 8; /*0x469f77*/
        if ( !*((_DWORD *)v3 + 2) ) /*0x469f73*/
          return 1; /*0x469f73*/
        v9 = v7[1]; /*0x469f7c*/
        while ( 1 ) /*0x469f80*/
        {
          v10 = (_DWORD *)*v8; /*0x469f80*/
          if ( *(_DWORD *)(*v8 + 4) == v9 ) /*0x469f85*/
            break; /*0x469f85*/
          v8 = (_DWORD *)v8[1]; /*0x469f87*/
          if ( !v8 ) /*0x469f8c*/
            return 1; /*0x469f8c*/
        }
        if ( *v7 != *v10 || v9 != v10[1] ) /*0x469fa0*/
          return 1; /*0x469f94*/
        ++v6; /*0x469fa2*/
      }
      v5 = *((char **)v5 + 1); /*0x469fa5*/
    }
    while ( v5 ); /*0x469f67*/
  }
  v11 = v3 + 8; /*0x469fac*/
  v12 = 0; /*0x469faf*/
  if ( v3 != (char *)0xFFFFFFF8 ) /*0x469fb3*/
  {
    do /*0x469fc2*/
    {
      if ( *v11 ) /*0x469fb5*/
        ++v12; /*0x469fba*/
      v11 = (_DWORD *)v11[1]; /*0x469fbd*/
    }
    while ( v11 ); /*0x469fc2*/
  }
  return v12 != v6; /*0x469f55*/
}
