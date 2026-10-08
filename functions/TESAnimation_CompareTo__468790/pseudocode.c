// TESAnimation compare: dynamic-casts rhs, then exact strcmp list compare in stored order; returns difference flag.
bool __thiscall TESAnimation_CompareTo(char *this, void *a2)
{
  char *v3; // eax
  char *v5; // esi
  char *v6; // edi
  const char *v7; // ecx
  bool v8; // zf
  bool v9; // zf

  v3 = (char *)OblivionDynamicCast( /*0x4687a6*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESAnimation `RTTI Type Descriptor',
                 0);
  if ( !v3 ) /*0x4687b0*/
    return 1; /*0x4687b2*/
  v8 = this + 4 == 0; /*0x4687b8*/
  v5 = this + 4; /*0x4687b8*/
  v6 = v3 + 4; /*0x4687bc*/
  if ( v8 ) /*0x4687bf*/
  {
LABEL_11:
    v9 = v6 == 0; /*0x4687ed*/
  }
  else
  {
    while ( v6 ) /*0x4687c3*/
    {
      v7 = *(const char **)v6; /*0x4687c9*/
      if ( *(_DWORD *)v5 ) /*0x4687c5*/
      {
        if ( !v7 ) /*0x4687d3*/
          return 1; /*0x4687d3*/
        v8 = CRT_StricmpLocaleDispatch(*(const char **)v5, *(const char **)v6) == 0; /*0x4687df*/
      }
      else
      {
        v8 = v7 == 0; /*0x4687cd*/
      }
      if ( !v8 ) /*0x4687e1*/
        return 1; /*0x4687e1*/
      v5 = *((char **)v5 + 1); /*0x4687e3*/
      v6 = *((char **)v6 + 1); /*0x4687e8*/
      if ( !v5 ) /*0x4687eb*/
        goto LABEL_11; /*0x4687eb*/
    }
    v9 = v5 == 0; /*0x4687f8*/
  }
  return !v9; /*0x4687f2*/
}
