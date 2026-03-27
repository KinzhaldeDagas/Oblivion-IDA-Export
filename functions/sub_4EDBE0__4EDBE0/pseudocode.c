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

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWaterForm `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((_BYTE *)this + 0x2D) != BYTE1(v4[1].member.modlist.next)
    || *((_BYTE *)this + 0x2C) != LOBYTE(v4[1].member.modlist.next) )
  {
    return 1;
  }
  if ( memcmp((char *)this + 0x3C, &v4[2].member.refID, 0x64u) )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 8) + 0xC))(
         (char *)this + 0x20,
         &v4[1].member.flags) )
  {
    return 1;
  }
  if ( *((_DWORD *)this + 0xE) != v4[2].member.flags )
    return 1;
  v6 = *((CHAR **)this + 0xC);
  if ( !v6 )
    v6 = EmptyString;
  vtbl = (CHAR *)v4[2].vtbl;
  if ( !vtbl )
    vtbl = EmptyString;
  if ( v6 != vtbl )
    return 1;
  v8 = 0xC;
  p_modlist = &v4[6].member.modlist;
  v10 = (_DWORD *)((char *)this + 0xA0);
  do
  {
    if ( (Data *)*v10 != p_modlist->data )
      goto LABEL_19;
    v8 -= 4;
    p_modlist = (TESForm::ModReferenceList *)((char *)p_modlist + 4);
    ++v10;
  }
  while ( v8 >= 4 );
  if ( !v8 )
  {
LABEL_28:
    v20 = 0;
    return v20 != 0;
  }
LABEL_19:
  v11 = *(unsigned __int8 *)v10 - LOBYTE(p_modlist->data);
  if ( !v11 )
  {
    v12 = v8 - 1;
    v13 = (unsigned __int8 *)&p_modlist->data + 1;
    v14 = (unsigned __int8 *)v10 + 1;
    if ( !v12 )
      goto LABEL_28;
    v11 = *v14 - *v13;
    if ( !v11 )
    {
      v15 = v12 - 1;
      v16 = v13 + 1;
      v17 = v14 + 1;
      if ( !v15 )
        goto LABEL_28;
      v11 = *v17 - *v16;
      if ( !v11 )
      {
        v18 = v16 + 1;
        v19 = v17 + 1;
        if ( v15 == 1 )
          goto LABEL_28;
        v11 = *v19 - *v18;
        if ( !v11 )
          goto LABEL_28;
      }
    }
  }
  v20 = 1;
  if ( v11 <= 0 )
    return 1;
  return v20 != 0;
}
