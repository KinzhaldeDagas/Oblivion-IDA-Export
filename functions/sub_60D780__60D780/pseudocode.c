int __thiscall sub_60D780(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  TESForm *v6; // eax

  result = *(this + 2);
  if ( result )
  {
    if ( (a2 & 0x20000) != 0 )
    {
      if ( (a2 & 0x10000) != 0 )
      {
        v6 = TESForm_LookupByFormID(result);
        *(this + 2) = OblivionDynamicCast(
                        v6,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESPackage `RTTI Type Descriptor',
                        0);
      }
      else if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(result + 0xC)) )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE8))(*(this + 2));
      }
    }
    result = *(this + 2);
    if ( result )
    {
      result = sub_673980(*(_DWORD *)(result + 0x18));
      if ( *(this + 1) >= result )
        *(this + 1) = --result;
    }
  }
  return result;
}
