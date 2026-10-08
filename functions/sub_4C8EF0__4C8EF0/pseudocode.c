bool __thiscall sub_4C8EF0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  unsigned __int8 *v4; // esi
  int v6; // eax
  int v7; // ecx
  TESForm *v8; // eax
  TESFormVtbl **v9; // ecx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4c8f07*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLandTexture `RTTI Type Descriptor',
                    0);
  v4 = (unsigned __int8 *)v3; /*0x4c8f0c*/
  if ( !v3 ) /*0x4c8f13*/
    return 1; /*0x4c8f13*/
  if ( TESForm_CompareAllComponentsTo(this, v3) ) /*0x4c8f1f*/
    return 1; /*0x4c8f1f*/
  v6 = *((unsigned __int8 *)this + 0x28) - v4[0x28]; /*0x4c8f36*/
  if ( v6 /*0x4c8f5b*/
    || (v6 = *((unsigned __int8 *)this + 0x29) - v4[0x29]) != 0
    || (v6 = *((unsigned __int8 *)this + 0x2A) - v4[0x2A]) != 0 )
  {
    v7 = 1; /*0x4c8f5f*/
    if ( v6 <= 0 ) /*0x4c8f64*/
      v7 = 0xFFFFFFFF; /*0x4c8f66*/
  }
  else
  {
    v7 = 0; /*0x4c8f6b*/
  }
  if ( v7 || *((_BYTE *)this + 0x2B) != v4[0x2B] ) /*0x4c8f78*/
    return 1; /*0x4c8f78*/
  v8 = (TESForm *)((char *)this + 0x2C); /*0x4c8f7a*/
  v9 = (TESFormVtbl **)(v4 + 0x2C); /*0x4c8f7f*/
  if ( this == (TESForm *)0xFFFFFFD4 ) /*0x4c8f82*/
  {
LABEL_16:
    if ( v9 ) /*0x4c8f9a*/
      return 1; /*0x4c8f19*/
  }
  else
  {
    while ( v9 ) /*0x4c8f86*/
    {
      if ( v8->vtbl != *v9 ) /*0x4c8f8c*/
        return 1; /*0x4c8f8c*/
      v8 = *(TESForm **)&v8->member.type; /*0x4c8f8e*/
      v9 = (TESFormVtbl **)v9[1]; /*0x4c8f93*/
      if ( !v8 ) /*0x4c8f96*/
        goto LABEL_16; /*0x4c8f96*/
    }
  }
  return v8 != 0; /*0x4c8f15*/
}
