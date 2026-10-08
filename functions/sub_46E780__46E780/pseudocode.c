char *__thiscall sub_46E780(unsigned int **this, void *a2)
{
  char *result; // eax
  char *v4; // edi
  bool v5; // zf
  char *v6; // edi
  unsigned int *v7; // ebp
  _DWORD *v8; // esi
  _DWORD *v9; // edi
  unsigned int *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  char *v13; // [esp+Ch] [ebp+4h]

  result = (char *)OblivionDynamicCast( /*0x46e797*/
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                     &TESReactionForm `RTTI Type Descriptor',
                     0);
  v4 = result; /*0x46e79c*/
  if ( result ) /*0x46e7a3*/
  {
    result = (char *)sub_46E600(this); /*0x46e7ac*/
    v5 = v4 + 4 == 0; /*0x46e7b1*/
    v6 = v4 + 4; /*0x46e7b1*/
    v7 = (unsigned int *)(this + 1); /*0x46e7b4*/
    v13 = v6; /*0x46e7b7*/
    if ( !v5 ) /*0x46e7bb*/
    {
      while ( 1 ) /*0x46e7c8*/
      {
        v8 = *(_DWORD **)v6; /*0x46e7c8*/
        if ( !*(_DWORD *)v6 ) /*0x46e7c8*/
          break; /*0x46e7c8*/
        v9 = (_DWORD *)FormHeapAlloc(8u); /*0x46e7d7*/
        *v9 = *v8; /*0x46e7d9*/
        v9[1] = v8[1]; /*0x46e7e4*/
        v10 = v7; /*0x46e7ea*/
        if ( v7[1] ) /*0x46e7e7*/
        {
          v11 = (int)(v7 + 1); /*0x46e7ee*/
          do /*0x46e7f9*/
          {
            v10 = *(unsigned int **)v11; /*0x46e7f0*/
            v5 = *(_DWORD *)(*(_DWORD *)v11 + 4) == 0; /*0x46e7f2*/
            v11 = *(_DWORD *)v11 + 4; /*0x46e7f6*/
          }
          while ( !v5 ); /*0x46e7f9*/
        }
        if ( *v10 ) /*0x46e7fb*/
        {
          v12 = (_DWORD *)FormHeapAlloc(8u); /*0x46e802*/
          if ( v12 ) /*0x46e80c*/
          {
            *v12 = v9; /*0x46e80e*/
            v12[1] = 0; /*0x46e810*/
            v10[1] = (unsigned int)v12; /*0x46e817*/
          }
          else
          {
            v10[1] = 0; /*0x46e81e*/
          }
        }
        else
        {
          *v10 = (unsigned int)v9; /*0x46e823*/
        }
        if ( v7[1] ) /*0x46e825*/
          v7 = (unsigned int *)v7[1]; /*0x46e82b*/
        v13 = *((char **)v13 + 1); /*0x46e836*/
        result = v13; /*0x46e831*/
        if ( !v13 ) /*0x46e83a*/
          break; /*0x46e83a*/
        v6 = v13; /*0x46e7c4*/
      }
    }
  }
  return result; /*0x46e83e*/
}
