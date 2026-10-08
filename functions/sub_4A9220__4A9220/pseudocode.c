bool __thiscall sub_4A9220(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  unsigned int v6; // eax
  TESFormMembr *p_member; // ecx
  _DWORD *v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *pad; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4a9237*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESAmmo `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4a923c*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x4a924f*/
    return 1; /*0x4a9249*/
  v6 = 8; /*0x4a9258*/
  p_member = &v4[5].member; /*0x4a925d*/
  v8 = (_DWORD *)((char *)this + 0x7C); /*0x4a9260*/
  do /*0x4a9275*/
  {
    if ( *v8 != *(_DWORD *)&p_member->type ) /*0x4a9267*/
      goto LABEL_8; /*0x4a9267*/
    v6 -= 4; /*0x4a9269*/
    p_member = (TESFormMembr *)((char *)p_member + 4); /*0x4a926c*/
    ++v8; /*0x4a926f*/
  }
  while ( v6 >= 4 ); /*0x4a9275*/
  if ( !v6 ) /*0x4a9279*/
  {
LABEL_17:
    v18 = 0; /*0x4a92e0*/
    return v18 != 0; /*0x4a92e0*/
  }
LABEL_8:
  v9 = *(unsigned __int8 *)v8 - (unsigned __int8)p_member->type; /*0x4a927b*/
  if ( !v9 ) /*0x4a9283*/
  {
    v10 = v6 - 1; /*0x4a9285*/
    pad = p_member->pad; /*0x4a9288*/
    v12 = (unsigned __int8 *)v8 + 1; /*0x4a928b*/
    if ( !v10 ) /*0x4a9290*/
      goto LABEL_17; /*0x4a9290*/
    v9 = *v12 - *pad; /*0x4a9298*/
    if ( !v9 ) /*0x4a929a*/
    {
      v13 = v10 - 1; /*0x4a929c*/
      v14 = pad + 1; /*0x4a929f*/
      v15 = v12 + 1; /*0x4a92a2*/
      if ( !v13 ) /*0x4a92a7*/
        goto LABEL_17; /*0x4a92a7*/
      v9 = *v15 - *v14; /*0x4a92af*/
      if ( !v9 ) /*0x4a92b1*/
      {
        v16 = v14 + 1; /*0x4a92b6*/
        v17 = v15 + 1; /*0x4a92b9*/
        if ( v13 == 1 ) /*0x4a92be*/
          goto LABEL_17; /*0x4a92be*/
        v9 = *v17 - *v16; /*0x4a92c6*/
        if ( !v9 ) /*0x4a92c8*/
          goto LABEL_17; /*0x4a92c8*/
      }
    }
  }
  v18 = 1; /*0x4a92cc*/
  if ( v9 <= 0 ) /*0x4a92d1*/
    return 1; /*0x4a92dd*/
  return v18 != 0; /*0x4a9245*/
}
