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

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESProduceForm `RTTI Type Descriptor',
         0);
  if ( !v3 || *(this + 1) != v3[1] )
    return 1;
  v5 = 4;
  v6 = v3 + 2;
  v7 = this + 2;
  do
  {
    if ( *v7 != *v6 )
      goto LABEL_8;
    v5 -= 4;
    ++v6;
    ++v7;
  }
  while ( v5 >= 4 );
  if ( !v5 )
  {
LABEL_17:
    v17 = 0;
    return v17 != 0;
  }
LABEL_8:
  v8 = *(unsigned __int8 *)v7 - *(unsigned __int8 *)v6;
  if ( !v8 )
  {
    v9 = v5 - 1;
    v10 = (unsigned __int8 *)v6 + 1;
    v11 = (unsigned __int8 *)v7 + 1;
    if ( !v9 )
      goto LABEL_17;
    v8 = *v11 - *v10;
    if ( !v8 )
    {
      v12 = v9 - 1;
      v13 = v10 + 1;
      v14 = v11 + 1;
      if ( !v12 )
        goto LABEL_17;
      v8 = *v14 - *v13;
      if ( !v8 )
      {
        v15 = v13 + 1;
        v16 = v14 + 1;
        if ( v12 == 1 )
          goto LABEL_17;
        v8 = *v16 - *v15;
        if ( !v8 )
          goto LABEL_17;
      }
    }
  }
  v17 = 1;
  if ( v8 <= 0 )
    return 1;
  return v17 != 0;
}
