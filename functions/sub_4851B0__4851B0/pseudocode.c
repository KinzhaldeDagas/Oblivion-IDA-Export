CHAR *__thiscall sub_4851B0(ExtraDataList ***this, TESObjectREFR *a2)
{
  ExtraDataList **v3; // eax
  ExtraDataList *v4; // esi
  TESForm *Owner; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _BYTE *v8; // eax
  int IsFemale; // eax
  CHAR *result; // eax

  v3 = *this; /*0x4851b3*/
  if ( *this && (v4 = *v3) != 0 && ExtraDataList_GetOwner(*v3) ) /*0x4851c3*/
    Owner = ExtraDataList_GetOwner(v4); /*0x4851d3*/
  else
    Owner = 0; /*0x4851d7*/
  v6 = OblivionDynamicCast( /*0x4851eb*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESBipedModelForm `RTTI Type Descriptor',
         0);
  v7 = v6; /*0x4851f5*/
  if ( !Owner /*0x48522b*/
    || !v6
    || (v8 = OblivionDynamicCast(
               Owner,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESNPC `RTTI Type Descriptor',
               0)) == 0
    || (IsFemale = TESActorBase_IsFemale(v8), (result = TESBipedModelForm_GetBipedIconPath(v7, IsFemale)) == 0)
    || !*result )
  {
    result = sub_4702D0(*(this + 2), a2); /*0x485239*/
  }
  if ( !result || !*result ) /*0x485248*/
    return 0; /*0x48524d*/
  return result; /*0x485243*/
}
