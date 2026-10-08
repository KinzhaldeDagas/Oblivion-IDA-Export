char __thiscall sub_51EE90(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // edi

  v3 = OblivionDynamicCast( /*0x51eea8*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESEyes `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x51eead*/
  if ( v3 ) /*0x51eeb4*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x51eeb9*/
    LOBYTE(v3) = 1; /*0x51eebe*/
    if ( (v4[0x30] & 1) != 0 ) /*0x51eec3*/
      *((_BYTE *)this + 0x30) |= 1u; /*0x51eec5*/
    else
      *((_BYTE *)this + 0x30) &= ~1u; /*0x51eece*/
  }
  return (char)v3; /*0x51eec8*/
}
