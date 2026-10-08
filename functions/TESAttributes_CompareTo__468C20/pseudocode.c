char __thiscall TESAttributes_CompareTo(_BYTE *this, void *a2)
{
  _BYTE *v3; // edi
  int v5; // esi

  v3 = OblivionDynamicCast( /*0x468c3c*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x468c43*/
    return 1; /*0x468c46*/
  v5 = 0; /*0x468c4d*/
  while ( *(this + v5 + 4) == v3[ActorValue_GetGroupOffsetFromAV(0, v5) + 4] ) /*0x468c66*/
  {
    if ( ++v5 >= 8 ) /*0x468c6e*/
      return 0; /*0x468c75*/
  }
  return 1; /*0x468c45*/
}
