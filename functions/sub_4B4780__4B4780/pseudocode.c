bool __thiscall sub_4B4780(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  int v6; // eax
  int v7; // ecx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectAPPA `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = *((unsigned __int8 *)this + 0x78) - LOBYTE(v4[5].vtbl);
  if ( v6 )
  {
    v7 = 1;
    if ( v6 <= 0 )
      return 1;
  }
  else
  {
    v7 = 0;
  }
  return v7 != 0;
}
