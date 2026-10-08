int __thiscall MiddleHighProc_LinkMagicData_(
        LowProcess *this,
        unsigned int changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  int v5; // ecx
  UInt32 v6; // eax
  TESForm *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax

  OblivionDynamicCast( /*0x6516e8*/
    owner,
    0,
    (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
    &Actor `RTTI Type Descriptor',
    0);
  LowProcess_InitLoadGame(this, changeMask, currentFlags, owner); /*0x6516ff*/
  v5 = *((_DWORD *)this + 0x30); /*0x651704*/
  if ( v5 ) /*0x65170c*/
  {
    if ( (changeMask & 0x80000) != 0 ) /*0x651714*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0xE8))(v5); /*0x65171e*/
  }
  v6 = *((_DWORD *)this + 0x4F); /*0x651720*/
  if ( v6 ) /*0x651728*/
  {
    v7 = TESForm_LookupByFormID(v6); /*0x651739*/
    *((_DWORD *)this + 0x4F) = OblivionDynamicCast( /*0x65174a*/
                                 v7,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
  }
  v8 = *((_DWORD *)this + 0x48); /*0x651750*/
  if ( v8 ) /*0x651758*/
  {
    v9 = TESForm_LookupByFormID(v8); /*0x651769*/
    *((_DWORD *)this + 0x48) = OblivionDynamicCast( /*0x65177a*/
                                 v9,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
  }
  return MiddleHighProc_LinkMagicData__::LinkActiveMagicItem((int)this, changeMask, currentFlags, (int)owner);
}
