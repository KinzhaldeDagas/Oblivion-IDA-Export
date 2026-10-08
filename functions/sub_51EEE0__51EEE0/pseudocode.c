char __thiscall sub_51EEE0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi

  v3 = (TESForm *)OblivionDynamicCast( /*0x51eef7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEyes `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x51eefc*/
  if ( !v3 || TESForm_CompareAllComponentsTo(this, v3) ) /*0x51ef0f*/
    return 1; /*0x51ef06*/
  else
    return (*((_BYTE *)this + 0x30) ^ LOBYTE(v4[2].vtbl)) & 1; /*0x51ef1f*/
}
