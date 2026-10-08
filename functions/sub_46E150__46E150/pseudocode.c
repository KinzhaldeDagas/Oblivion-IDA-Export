bool __thiscall sub_46E150(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // esi
  unsigned int v9; // ecx
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // edx
  unsigned int v12; // ecx
  unsigned __int8 *v13; // eax
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // edx
  int v17; // eax

  v3 = OblivionDynamicCast( /*0x46e166*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESProduceForm `RTTI Type Descriptor',
         0);
  if ( !v3 || *(this + 1) != v3[1] ) /*0x46e17e*/
    return 1; /*0x46e175*/
  v5 = 4; /*0x46e180*/
  v6 = v3 + 2; /*0x46e185*/
  v7 = this + 2; /*0x46e188*/
  do /*0x46e1a2*/
  {
    if ( *v7 != *v6 ) /*0x46e194*/
      goto LABEL_8; /*0x46e194*/
    v5 -= 4; /*0x46e196*/
    ++v6; /*0x46e199*/
    ++v7; /*0x46e19c*/
  }
  while ( v5 >= 4 ); /*0x46e1a2*/
  if ( !v5 ) /*0x46e1a6*/
  {
LABEL_17:
    v17 = 0; /*0x46e20d*/
    return v17 != 0; /*0x46e20d*/
  }
LABEL_8:
  v8 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6; /*0x46e1a8*/
  if ( !v8 ) /*0x46e1b0*/
  {
    v9 = v5 - 1; /*0x46e1b2*/
    v10 = (unsigned __int8 *)v6 + 1; /*0x46e1b5*/
    v11 = (unsigned __int8 *)v7 + 1; /*0x46e1b8*/
    if ( !v9 ) /*0x46e1bd*/
      goto LABEL_17; /*0x46e1bd*/
    v8 = *v11 - *v10; /*0x46e1c5*/
    if ( !v8 ) /*0x46e1c7*/
    {
      v12 = v9 - 1; /*0x46e1c9*/
      v13 = v10 + 1; /*0x46e1cc*/
      v14 = v11 + 1; /*0x46e1cf*/
      if ( !v12 ) /*0x46e1d4*/
        goto LABEL_17; /*0x46e1d4*/
      v8 = *v14 - *v13; /*0x46e1dc*/
      if ( !v8 ) /*0x46e1de*/
      {
        v15 = v13 + 1; /*0x46e1e3*/
        v16 = v14 + 1; /*0x46e1e6*/
        if ( v12 == 1 ) /*0x46e1eb*/
          goto LABEL_17; /*0x46e1eb*/
        v8 = *v16 - *v15; /*0x46e1f3*/
        if ( !v8 ) /*0x46e1f5*/
          goto LABEL_17; /*0x46e1f5*/
      }
    }
  }
  v17 = 1; /*0x46e1f9*/
  if ( v8 <= 0 ) /*0x46e1fe*/
    return 1; /*0x46e20a*/
  return v17 != 0; /*0x46e174*/
}
