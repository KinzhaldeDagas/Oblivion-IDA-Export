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

  v3 = (TESForm *)OblivionDynamicCast( /*0x4bb3d7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectWEAP `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4bb3dc*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4bb3ef*/
    return 1; /*0x4bb3e9*/
  v6 = 0x10; /*0x4bb3f8*/
  v7 = v4 + 6; /*0x4bb3fd*/
  v8 = this + 6; /*0x4bb403*/
  do /*0x4bb422*/
  {
    if ( v8->vtbl != v7->vtbl ) /*0x4bb414*/
      goto LABEL_8; /*0x4bb414*/
    v6 -= 4; /*0x4bb416*/
    v7 = (TESForm *)((char *)v7 + 4); /*0x4bb419*/
    v8 = (TESForm *)((char *)v8 + 4); /*0x4bb41c*/
  }
  while ( v6 >= 4 ); /*0x4bb422*/
  if ( !v6 ) /*0x4bb426*/
  {
LABEL_17:
    v18 = 0; /*0x4bb48d*/
    return v18 != 0; /*0x4bb48d*/
  }
LABEL_8:
  v9 = LOBYTE(v8->vtbl) - LOBYTE(v7->vtbl); /*0x4bb428*/
  if ( !v9 ) /*0x4bb430*/
  {
    v10 = v6 - 1; /*0x4bb432*/
    v11 = (unsigned __int8 *)&v7->vtbl + 1; /*0x4bb435*/
    v12 = (unsigned __int8 *)&v8->vtbl + 1; /*0x4bb438*/
    if ( !v10 ) /*0x4bb43d*/
      goto LABEL_17; /*0x4bb43d*/
    v9 = *v12 - *v11; /*0x4bb445*/
    if ( !v9 ) /*0x4bb447*/
    {
      v13 = v10 - 1; /*0x4bb449*/
      v14 = v11 + 1; /*0x4bb44c*/
      v15 = v12 + 1; /*0x4bb44f*/
      if ( !v13 ) /*0x4bb454*/
        goto LABEL_17; /*0x4bb454*/
      v9 = *v15 - *v14; /*0x4bb45c*/
      if ( !v9 ) /*0x4bb45e*/
      {
        v16 = v14 + 1; /*0x4bb463*/
        v17 = v15 + 1; /*0x4bb466*/
        if ( v13 == 1 ) /*0x4bb46b*/
          goto LABEL_17; /*0x4bb46b*/
        v9 = *v17 - *v16; /*0x4bb473*/
        if ( !v9 ) /*0x4bb475*/
          goto LABEL_17; /*0x4bb475*/
      }
    }
  }
  v18 = 1; /*0x4bb479*/
  if ( v9 <= 0 ) /*0x4bb47e*/
    return 1; /*0x4bb48a*/
  return v18 != 0; /*0x4bb3e5*/
}
