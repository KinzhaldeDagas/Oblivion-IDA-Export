void *__thiscall sub_520260(TESObjectREFR **this, UInt32 a2)
{
  TESObjectREFR *v2; // ecx
  void *result; // eax
  void *v4; // eax

  v2 = *(this + 0xF); /*0x520260*/
  result = 0; /*0x520263*/
  if ( v2 ) /*0x520267*/
  {
    v4 = (void *)sub_494ED0(v2, a2); /*0x52027a*/
    return OblivionDynamicCast( /*0x520280*/
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESIdleForm `RTTI Type Descriptor',
             0);
  }
  return result; /*0x520288*/
}
