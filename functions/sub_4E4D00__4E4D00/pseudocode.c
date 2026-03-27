char __thiscall sub_4E4D00(_DWORD **this, _DWORD *a2)
{
  TESForm *v3; // eax
  _DWORD *v4; // eax

  if ( a2 && *a2 == dword_B05E20 )
  {
    if ( (unsigned int)(a2[3] - 8) > 2 )
      return (*(char (__thiscall **)(_DWORD, _DWORD *))(**(this + 8) + 0x30))(*(this + 8), a2);
    v3 = TESForm_LookupByFormID(a2[2]);
    v4 = OblivionDynamicCast(
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESObjectCELL `RTTI Type Descriptor',
           0);
    if ( v4 && *(this + 8) == v4 )
      return 0;
  }
  return 0;
}
