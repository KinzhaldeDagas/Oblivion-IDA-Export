// Verified shared LAND/PathGrid serialized-group matcher. For group labels matching the parent CELL FormID24, it accepts temporary child group type 9, rejects persistent group type 8 and distant group type 10, and accepts ancestor CELL children group type 6 only when includeParent is set; other ancestor groups delegate to the owning CELL matcher.
char __thiscall sub_4E4D00(_DWORD **this, _DWORD *a2)
{
  TESForm *v3; // eax
  _DWORD *v4; // eax

  if ( a2 && *a2 == dword_B05E20 ) /*0x4e4d16*/
  {
    if ( (unsigned int)(a2[3] - 8) > 2 ) /*0x4e4d21*/
      return (*(char (__thiscall **)(_DWORD, _DWORD *))(**(this + 8) + 0x30))(*(this + 8), a2); /*0x4e4d64*/
    v3 = TESForm_LookupByFormID(a2[2]); /*0x4e4d35*/
    v4 = OblivionDynamicCast( /*0x4e4d3e*/
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESObjectCELL `RTTI Type Descriptor',
           0);
    if ( v4 && *(this + 8) == v4 ) /*0x4e4d4d*/
      return 0; /*0x4e4d53*/
  }
  return 0; /*0x4e4d4f*/
}
