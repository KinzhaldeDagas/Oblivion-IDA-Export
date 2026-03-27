void *__thiscall LowProcess_LinkMagicData_(UInt32 *this, int a2, int a3, int a4)
{
  UInt32 v5; // eax
  TESForm *v6; // eax
  Actor *v7; // eax
  void *result; // eax
  TESForm *v9; // eax

  sub_60D780(this, a2, a3, a4);
  v5 = *(this + 0xB);
  if ( v5 )
  {
    v6 = TESForm_LookupByFormID(v5);
    v7 = (Actor *)OblivionDynamicCast(
                    v6,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    *(this + 0xB) = (UInt32)v7;
    if ( v7 )
      Actor::SetCompressedFlag(v7, 1);
  }
  result = (void *)*(this + 0xC);
  if ( result )
  {
    v9 = TESForm_LookupByFormID((UInt32)result);
    result = OblivionDynamicCast(
               v9,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *(this + 0xC) = (UInt32)result;
  }
  return result;
}
