int __thiscall MiddleHighProc_LinkMagicData_(UInt32 *this, int a2, int a3, void *a4)
{
  int v5; // ecx
  UInt32 v6; // eax
  TESForm *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax

  OblivionDynamicCast(
    a4,
    0,
    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
    &Actor `RTTI Type Descriptor',
    0);
  LowProcess_LinkMagicData_(this, a2, a3, (int)a4);
  v5 = *(this + 0x30);
  if ( v5 )
  {
    if ( (a2 & 0x80000) != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0xE8))(v5);
  }
  v6 = *(this + 0x4F);
  if ( v6 )
  {
    v7 = TESForm_LookupByFormID(v6);
    *(this + 0x4F) = (UInt32)OblivionDynamicCast(
                               v7,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &Actor `RTTI Type Descriptor',
                               0);
  }
  v8 = *(this + 0x48);
  if ( v8 )
  {
    v9 = TESForm_LookupByFormID(v8);
    *(this + 0x48) = (UInt32)OblivionDynamicCast(
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  return MiddleHighProc_LinkMagicData__::LinkActiveMagicItem((int)this, a2, a3, (int)a4);
}
