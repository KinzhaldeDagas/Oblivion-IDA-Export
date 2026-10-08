bool __thiscall TESModelList_DiffersFromComponent(char *this, void *a2)
{
  char *v3; // eax
  char *v5; // esi
  char *v6; // edi
  const char *v7; // ecx
  bool v8; // zf
  bool v9; // zf

  v3 = (char *)OblivionDynamicCast( /*0x46dcb6*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESModelList `RTTI Type Descriptor',
                 0);
  if ( !v3 ) /*0x46dcc0*/
    return 1; /*0x46dcc2*/
  v8 = this + 4 == 0; /*0x46dcc8*/
  v5 = this + 4; /*0x46dcc8*/
  v6 = v3 + 4; /*0x46dccc*/
  if ( v8 ) /*0x46dccf*/
  {
LABEL_11:
    v9 = v6 == 0; /*0x46dcfd*/
  }
  else
  {
    while ( v6 ) /*0x46dcd3*/
    {
      v7 = *(const char **)v6; /*0x46dcd9*/
      if ( *(_DWORD *)v5 ) /*0x46dcd5*/
      {
        if ( !v7 ) /*0x46dce3*/
          return 1; /*0x46dce3*/
        v8 = CRT_StricmpLocaleDispatch(*(const char **)v5, *(const char **)v6) == 0; /*0x46dcef*/
      }
      else
      {
        v8 = v7 == 0; /*0x46dcdd*/
      }
      if ( !v8 ) /*0x46dcf1*/
        return 1; /*0x46dcf1*/
      v5 = *((char **)v5 + 1); /*0x46dcf3*/
      v6 = *((char **)v6 + 1); /*0x46dcf8*/
      if ( !v5 ) /*0x46dcfb*/
        goto LABEL_11; /*0x46dcfb*/
    }
    v9 = v5 == 0; /*0x46dd08*/
  }
  return !v9; /*0x46dd02*/
}
