bool __thiscall sub_46E850(char *this, void *a2)
{
  char *v3; // eax
  char *v5; // ecx
  char *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  bool v9; // zf

  v3 = (char *)OblivionDynamicCast( /*0x46e866*/
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESReactionForm `RTTI Type Descriptor',
                 0);
  if ( !v3 ) /*0x46e870*/
    return 1; /*0x46e875*/
  v5 = this + 4; /*0x46e878*/
  v6 = v3 + 4; /*0x46e87b*/
  if ( this != (char *)0xFFFFFFFC ) /*0x46e881*/
  {
    while ( v6 ) /*0x46e885*/
    {
      v7 = *(_DWORD **)v5; /*0x46e887*/
      v8 = *(_DWORD **)v6; /*0x46e88b*/
      if ( *(_DWORD *)v5 ) /*0x46e887*/
      {
        if ( !v8 || *v7 != *v8 ) /*0x46e897*/
          return 1; /*0x46e897*/
        v9 = v7[1] == v8[1]; /*0x46e89c*/
      }
      else
      {
        v9 = v8 == 0; /*0x46e8a1*/
      }
      if ( !v9 ) /*0x46e8a3*/
        return 1; /*0x46e8a3*/
      v5 = *((char **)v5 + 1); /*0x46e8a5*/
      v6 = *((char **)v6 + 1); /*0x46e8aa*/
      if ( !v5 ) /*0x46e8ad*/
        return v6 && (*((_DWORD *)v6 + 1) || *(_DWORD *)v6); /*0x46e8ad*/
    }
    return 1; /*0x46e885*/
  }
  return v6 && (*((_DWORD *)v6 + 1) || *(_DWORD *)v6); /*0x46e874*/
}
