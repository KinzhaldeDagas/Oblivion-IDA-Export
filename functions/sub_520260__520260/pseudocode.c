void *__thiscall sub_520260(TESObjectREFR **this, UInt32 a2)
{
  TESObjectREFR *v2; // ecx
  void *result; // eax
  void *v4; // eax

  v2 = *(this + 0xF);
  result = 0;
  if ( v2 )
  {
    v4 = (void *)sub_494ED0(v2, a2);
    return OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESIdleForm `RTTI Type Descriptor',
             0);
  }
  return result;
}
