bool __thiscall TESObjectWEAP_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  unsigned int v6; // eax
  TESForm *v7; // ecx
  TESForm *v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectWEAP `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = 0x10;
  v7 = v4 + 6;
  v8 = this + 6;
  do
  {
    if ( v8->vtbl != v7->vtbl )
      goto LABEL_8;
    v6 -= 4;
    v7 = (TESForm *)((char *)v7 + 4);
    v8 = (TESForm *)((char *)v8 + 4);
  }
  while ( v6 >= 4 );
  if ( !v6 )
  {
LABEL_17:
    v18 = 0;
    return v18 != 0;
  }
LABEL_8:
  v9 = LOBYTE(v8->vtbl) - LOBYTE(v7->vtbl);
  if ( !v9 )
  {
    v10 = v6 - 1;
    v11 = (unsigned __int8 *)&v7->vtbl + 1;
    v12 = (unsigned __int8 *)&v8->vtbl + 1;
    if ( !v10 )
      goto LABEL_17;
    v9 = *v12 - *v11;
    if ( !v9 )
    {
      v13 = v10 - 1;
      v14 = v11 + 1;
      v15 = v12 + 1;
      if ( !v13 )
        goto LABEL_17;
      v9 = *v15 - *v14;
      if ( !v9 )
      {
        v16 = v14 + 1;
        v17 = v15 + 1;
        if ( v13 == 1 )
          goto LABEL_17;
        v9 = *v17 - *v16;
        if ( !v9 )
          goto LABEL_17;
      }
    }
  }
  v18 = 1;
  if ( v9 <= 0 )
    return 1;
  return v18 != 0;
}
