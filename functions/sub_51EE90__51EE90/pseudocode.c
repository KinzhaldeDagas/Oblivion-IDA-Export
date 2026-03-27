char __thiscall sub_51EE90(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // edi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEyes `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    LOBYTE(v3) = 1;
    if ( (v4[0x30] & 1) != 0 )
      *((_BYTE *)this + 0x30) |= 1u;
    else
      *((_BYTE *)this + 0x30) &= ~1u;
  }
  return (char)v3;
}
