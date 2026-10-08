bool __thiscall sub_4EDBE0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  CHAR *v6; // eax
  CHAR *vtbl; // ecx
  unsigned int v8; // eax
  TESForm::ModReferenceList *p_modlist; // ecx
  _DWORD *v10; // edx
  int v11; // esi
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned int v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4edbf7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWaterForm `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4edbfc*/
  if ( !v3 /*0x4edc26*/
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((_BYTE *)this + 0x2D) != BYTE1(v4[1].member.modlist.next)
    || *((_BYTE *)this + 0x2C) != LOBYTE(v4[1].member.modlist.next) )
  {
    return 1; /*0x4edc09*/
  }
  if ( memcmp((char *)this + 0x3C, &v4[2].member.refID, 0x64u) ) /*0x4edc39*/
    return 1; /*0x4edc39*/
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 8) + 0xC))( /*0x4edcbd*/
         (char *)this + 0x20,
         &v4[1].member.flags) )
  {
    return 1; /*0x4edcbd*/
  }
  if ( *((_DWORD *)this + 0xE) != v4[2].member.flags ) /*0x4edcc9*/
    return 1; /*0x4edcc9*/
  v6 = *((CHAR **)this + 0xC); /*0x4edccb*/
  if ( !v6 ) /*0x4edcd0*/
    v6 = EmptyString; /*0x4edcd2*/
  vtbl = (CHAR *)v4[2].vtbl; /*0x4edcd7*/
  if ( !vtbl ) /*0x4edcdc*/
    vtbl = EmptyString; /*0x4edcde*/
  if ( v6 != vtbl ) /*0x4edce5*/
    return 1; /*0x4edced*/
  v8 = 0xC; /*0x4edcf0*/
  p_modlist = &v4[6].member.modlist; /*0x4edcf5*/
  v10 = (_DWORD *)((char *)this + 0xA0); /*0x4edcfb*/
  do /*0x4edd13*/
  {
    if ( (Data *)*v10 != p_modlist->data ) /*0x4edd05*/
      goto LABEL_19; /*0x4edd05*/
    v8 -= 4; /*0x4edd07*/
    p_modlist = (TESForm::ModReferenceList *)((char *)p_modlist + 4); /*0x4edd0a*/
    ++v10; /*0x4edd0d*/
  }
  while ( v8 >= 4 ); /*0x4edd13*/
  if ( !v8 ) /*0x4edd17*/
  {
LABEL_28:
    v20 = 0; /*0x4edd80*/
    return v20 != 0; /*0x4edd80*/
  }
LABEL_19:
  v11 = *(unsigned __int8 *)v10 - LOBYTE(p_modlist->data); /*0x4edd19*/
  if ( !v11 ) /*0x4edd21*/
  {
    v12 = v8 - 1; /*0x4edd23*/
    v13 = (unsigned __int8 *)&p_modlist->data + 1; /*0x4edd26*/
    v14 = (unsigned __int8 *)v10 + 1; /*0x4edd29*/
    if ( !v12 ) /*0x4edd2e*/
      goto LABEL_28; /*0x4edd2e*/
    v11 = *v14 - *v13; /*0x4edd36*/
    if ( !v11 ) /*0x4edd38*/
    {
      v15 = v12 - 1; /*0x4edd3a*/
      v16 = v13 + 1; /*0x4edd3d*/
      v17 = v14 + 1; /*0x4edd40*/
      if ( !v15 ) /*0x4edd45*/
        goto LABEL_28; /*0x4edd45*/
      v11 = *v17 - *v16; /*0x4edd4d*/
      if ( !v11 ) /*0x4edd4f*/
      {
        v18 = v16 + 1; /*0x4edd54*/
        v19 = v17 + 1; /*0x4edd57*/
        if ( v15 == 1 ) /*0x4edd5c*/
          goto LABEL_28; /*0x4edd5c*/
        v11 = *v19 - *v18; /*0x4edd64*/
        if ( !v11 ) /*0x4edd66*/
          goto LABEL_28; /*0x4edd66*/
      }
    }
  }
  v20 = 1; /*0x4edd6a*/
  if ( v11 <= 0 ) /*0x4edd6f*/
    return 1; /*0x4edd7d*/
  return v20 != 0; /*0x4edc05*/
}
